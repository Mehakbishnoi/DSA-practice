#include <iostream>
#include <queue>
using namespace std;

/*
 Problem: Interleaving the two halves of a queue
 Input: Queue of even number of elements entered by user
 Output: Queue where first half and second half are interleaved
 Example: Input: 2 4 3 1 -> Output: 2 3 4 1
 Approach:
 1. Read the queue elements from user
 2. Extract the first half into a temporary queue
 3. Interleave elements from first half and remaining queue
 4. Print the final interleaved queue
 Time Complexity: O(n)
 Space Complexity: O(n/2) for temporary queue
*/

int main() {
    queue<int> q;
    int n, x;

    cout << "Enter the number of elements (even number): ";
    cin >> n;

    if(n % 2 != 0) {
        cout << "Queue must have even number of elements.\n";
        return 0;
    }

    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> x;
        q.push(x);
    }

    queue<int> firstHalf;

    // Step 1: Push first half elements to temporary queue
    for(int i = 0; i < n/2; i++){
        firstHalf.push(q.front());
        q.pop();
    }

    // Step 2: Interleave first half and remaining queue
    while(!firstHalf.empty()){
        q.push(firstHalf.front()); // push element from first half
        firstHalf.pop();

        q.push(q.front()); // push element from second half
        q.pop();
    }

    // Step 3: Print interleaved queue
    cout << "Interleaved Queue: ";
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}
