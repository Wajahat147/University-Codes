pip install flask openpyxl

from flask import Flask, request, render_template
from openpyxl import load_workbook

app = Flask(__name__)

@app.route('/', methods=['GET', 'POST'])
def index():
    if request.method == 'POST':
        # Retrieve form data
        item_name = request.form['itemName']
        item_id = request.form['itemID']
        quantity = request.form['quantity']
        price = request.form['price']
        supplier_name = request.form['supplierName']
        date = request.form['date']

        # Open Excel file and append data
        workbook = load_workbook('inventory.xlsx')
        sheet = workbook.active
        sheet.append([item_name, item_id, quantity, price, supplier_name, date])
        workbook.save('inventory.xlsx')

        return "Data saved to Excel!"

    return render_template('form.html')  # This renders your HTML file

if __name__ == '__main__':
    app.run(debug=True)
