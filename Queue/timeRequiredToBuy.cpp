#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int timeRequiredToBuy(vector<int>& tickets, int k) {
    queue<int> q;
    int time = 0;

    for(int i = 0; i < tickets.size(); i++) {
        q.push(i);
    }

    while(tickets[k]) {
        tickets[q.front()]--;

        if(tickets[q.front()]) {
            q.push(q.front());
        }

        q.pop();
        time++;
    }

    return time;
}

int main() {
    vector<int> tickets = {2, 3, 2, 1, 4}; // Example input
    int k = 2; // Example index
    cout << "Time required: " << timeRequiredToBuy(tickets, k) << endl;
    return 0;
}
