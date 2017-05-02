#include "exercise10.h"
#include "Queue.h"

using namespace std;

int main() {
    Queue qInt = Queue();
    cout << "Initial queue: " << qInt << endl;
    cout << "Queue size: " << qInt.size() << endl;
    for (int i = 1; i < 5; i++) {
        qInt.add(i);
        cout << "Added " << i << endl;
        cout << "Current queue: " << qInt << endl;
        cout << "Queue size: " << qInt.size() << endl;
    }
    cout << "---" << endl;
    while (true) {
        try {
            cout << "Removed " << qInt.remove() << endl;
            cout << "Current queue: " << qInt << endl;
            cout << "Queue size: " << qInt.size() << endl;
        } catch (EmptyQueueException eqe) {
            cout << eqe.getMsg() << endl;
            break;
        }
    }
    cout << "---" <<endl;
    
    return 0;
}
