#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void fifo(vector<int> requests, int head){
    
    int time = 0;
    int newHead = head;
    
    cout << head << " -> ";

    for (int i = 0; i < requests.size() - 1; i++){

        cout << requests[i] << " -> ";
        time += abs(newHead - requests[i]);
        newHead = requests[i];
    }

    cout << requests.back() << endl;
    time += abs(newHead - requests.back());
    cout << "Seek Time: " << time << endl;
}

void cscan(vector<int> requests, int head){
    
}

int main(){

    int n, head;
    vector<int> requests;

    cout << "Number of requests: ";
    cin >> n;

    cout << "Requests: ";

    for (int i = 0; i < n; i++){

        int temp;
        cin >> temp;
        requests.push_back(temp);
    }

    cout << "Head Location: ";
    cin >> head;
    fifo(requests, head);
    return 0;
}

