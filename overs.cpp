#include <iostream>
using namespace std;
int main() {
    const int overs = 2;
    const int balls_per_over = 6;
    double cricket_score[balls_per_over][overs];
    cout << "Enter scores for each ball (6 balls per over, 2 overs):" << endl;
for (int j = 0; j < overs; j++) {
        cout << "Enter scores for Over " << j + 1 << ":" << endl;
        for (int i = 0; i < balls_per_over; i++) {
            cout << "Ball " << i + 1 << ": ";
            cin >> cricket_score[i][j];
        }
    }
double total_runs_over1 = 0.0, total_runs_over2 = 0.0, overall_total_runs = 0.0;
 for (int i = 0; i < balls_per_over; i++) {
        total_runs_over1 += cricket_score[i][0]; 
        total_runs_over2 += cricket_score[i][1]; 
    }
        overall_total_runs = total_runs_over1 + total_runs_over2;
    double run_rate = overall_total_runs / overs;
	cout << "\nTotal Runs in Over 1: " << total_runs_over1 << endl;
    cout << "Total Runs in Over 2: " << total_runs_over2 << endl;
    cout << "Overall Total Runs Scored: " << overall_total_runs << endl;
    cout << "Run Rate: " << run_rate << " runs per over" << endl;
double target_score;
    cout << "\nEnter the target score to win the match: ";
    cin >> target_score;
    
    if (overall_total_runs >= target_score) {
        cout << "You have already won the match!" << endl;
    } else {
        double runs_required = target_score - overall_total_runs;
        cout << "Runs Required to Win the Match: " << runs_required << endl;
    }

    return 0;
}





    
