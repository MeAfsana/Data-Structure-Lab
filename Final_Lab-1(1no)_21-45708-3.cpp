#include <iostream>
#include <queue>
using namespace std;


void display_queue(queue<int> q);

int main() {


  queue<int> numbers;


  numbers.push(1);
  numbers.push(3);
  numbers.push(10);
  numbers.push(20);
  numbers.push(30);

  cout << "Original Queue: ";
  display_queue(numbers);


  numbers.pop();

  cout << "Final Queue: ";
  display_queue(numbers);

  return 0;
}

void display_queue(queue<int> q) {
  while(!q.empty()) {
    cout << q.front() << ", ";
    q.pop();
  }

  cout << endl;
}
