#include <iostream>
#include <fstream>
#include <map>
#include <string>

using namespace std;

void generateDictionary(const string& filename, map<string, string>& dictionary) {
    ofstream file(filename);

    if (!file.is_open()) {
        cout << "Unable to create the dictionary file." << endl;
        return;
    }

    for (const auto& entry : dictionary) {
        file << entry.first << " : " << entry.second << endl;
    }

    file.close();
}

void addWordToDictionary(map<string, string>& dictionary) {
    string word, meaning;

    cout << "Enter a word: ";
    cin >> word;

    cout << "Enter its meaning: ";
    cin.ignore();
    getline(cin, meaning);

    dictionary[word] = meaning;
}

void searchWordInDictionary(const map<string, string>& dictionary) {
    string word;

    cout << "Enter a word to search for: ";
    cin >> word;

    auto it = dictionary.find(word);

    if (it != dictionary.end()) {
        cout << "Meaning: " << it->second << endl;
    } else {
        cout << "Word not found in the dictionary." << endl;
    }
}

void removeWordFromDictionary(map<string, string>& dictionary) {
    string word;

    cout << "Enter a word to remove: ";
    cin >> word;

    auto it = dictionary.find(word);

    if (it != dictionary.end()) {
        dictionary.erase(it);
        cout << "Word removed from the dictionary." << endl;
    } else {
        cout << "Word not found in the dictionary." << endl;
    }
}

int main() {
    map<string, string> dictionary;
    string filename = "dictionary.txt";

    // Load existing dictionary from file if it exists
    ifstream file(filename);
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            size_t pos = line.find(" : ");
            if (pos != string::npos) {
                string word = line.substr(0, pos);
                string meaning = line.substr(pos + 3);
                dictionary[word] = meaning;
            }
        }
        file.close();
    }

    while (true) {
        cout << "Dictionary Menu:\n";
        cout << "1. Add Word\n";
        cout << "2. Search Word\n";
        cout << "3. Remove Word\n";
        cout << "4. Generate Dictionary File\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                addWordToDictionary(dictionary);
                break;
            case 2:
                searchWordInDictionary(dictionary);
                break;
            case 3:
                removeWordFromDictionary(dictionary);
                break;
            case 4:
                generateDictionary(filename, dictionary);
                cout << "Dictionary file generated successfully." << endl;
                break;
            case 5:
                return 0;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    }

    return 0;
}
