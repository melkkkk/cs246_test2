import <iostream>;

using namespace std;

int main(int argc, char *argv []){
    cout << "Hello world!" << endl;

    // for testing mode
    bool testing = false;

    // parsing through command line arguments
    for (int i = 1; i < argc; ++i){
        string command(argv[i]);
        // cout << command << endl;
        if (command == "-deck1"){
            ++i;
            // create deck for p1 from argv[i] file
        } else if (command == "-deck2") {
            ++i;
            // create deck for p2 argv[i] file
        } else if (command == "-init") {
            ++i;
            // read in commands from argv[i] file
        } else if (command == "-testing") {
            testing = true;
        } else if (command == "-graphics") {
            // activate graphics idk
        } else {
            cout << "'" << command << "' is an invalid command" << endl;
        }
    }
}