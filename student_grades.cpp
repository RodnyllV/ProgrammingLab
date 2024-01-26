#include <iostream>
using namespace std;

int calculateAverage(int nums[]){
  int average = 0;
  int arraySize = sizeof(nums) / sizeof(int);

  for (int i = 0; i < arraySize; i++){
    average += nums[i];
  }

  return average / arraySize;
}

int main(){
  int exam1Scores[3] = {0, 0, 0};
  int exam2Scores[3] = {0, 0, 0};

  for (int i = 0; i < 3; i++){
    string studentName;

    cout << "Enter student name: "; cin >> studentName;

    for (int ii = 0; ii < 2; ii++){
      int score;
      cout << "Enter score for exam " << ii + 1 << ": "; cin >> score;

      if (ii == 0){
        exam1Scores[i] = score;
      } else {
        exam2Scores[i] = score;
      }
    }

    float averageScores = (exam1Scores[i] + exam2Scores[i]) / 2;
    cout << "The average for " << studentName << " is " << averageScores << endl;
  }

  int exam1ScoreAverage, exam2ScoreAverage;
  exam1ScoreAverage = calculateAverage(exam1Scores);
  exam2ScoreAverage = calculateAverage(exam2Scores);

  cout << "The average for exam 1 is " << exam1ScoreAverage << endl;
  cout << "The average for exam 2 is " << exam2ScoreAverage << endl;

  return 0;
}
