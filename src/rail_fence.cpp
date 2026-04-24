#include <cctype>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool is_valid_message(const string &text) {
    for (char c : text) {
        if (!isalpha(static_cast<unsigned char>(c)) && c != ' ') {
            return false;
        }
    }
    return true;
}

string rail_fence_encrypt(const string &plaintext, int rails) {
    if (rails <= 1 || plaintext.empty()) return plaintext;

    vector<string> fence(rails, "");
    int rail = 0;
    int direction = 1;

    for (char c : plaintext) {
        // Q6: Keep spaces as normal characters in the zigzag pattern
        fence[rail] += c;
        rail += direction;
        if (rail == rails - 1 || rail == 0) direction = -direction;
    }

    string ciphertext;
    for (const string &row : fence) ciphertext += row;
    return ciphertext;
}

string rail_fence_decrypt(const string &ciphertext, int rails) {
    // Q5: Implement Rail Fence decryption
    if (rails <= 1 || ciphertext.empty()) return ciphertext;

    int len = ciphertext.length();
    vector<int> rail_lengths(rails, 0);
    int rail = 0;
    int direction = 1;

    // Calculate the length of each rail
    for (int i = 0; i < len; i++) {
        rail_lengths[rail]++;
        rail += direction;
        if (rail == rails - 1 || rail == 0) direction = -direction;
    }

    // Split ciphertext into rails
    vector<string> fence(rails);
    int pos = 0;
    for (int i = 0; i < rails; i++) {
        fence[i] = ciphertext.substr(pos, rail_lengths[i]);
        pos += rail_lengths[i];
    }

    // Reconstruct plaintext following zigzag pattern
    string plaintext;
    vector<int> indices(rails, 0);
    rail = 0;
    direction = 1;

    for (int i = 0; i < len; i++) {
        plaintext += fence[rail][indices[rail]++];
        rail += direction;
        if (rail == rails - 1 || rail == 0) direction = -direction;
    }

    return plaintext;
}

string read_message_from_file(const string &path) {
    ifstream fin(path);
    string line;
    getline(fin, line);
    return line;
}

int main() {
    cout << "=== Rail Fence Cipher Demo ===\n";
    cout << "1. Encrypt\n2. Decrypt\n3. Read from file and encrypt\nChoose: ";

    int choice;
    cin >> choice;
    cin.ignore();

    string message;
    int rails;

    if (choice == 3) {
        // Q8: Read message from file
        message = read_message_from_file("data/input.txt");
        cout << "Message from file: " << message << "\n";
    } else {
        cout << "Enter message: ";
        getline(cin, message);
    }

    cout << "Enter rails: ";
    cin >> rails;
    // Q4: Try changing rails to 4 and observe the different ciphertext

    // Q7: Validate input - only allow letters and spaces
    if (!is_valid_message(message)) {
        cout << "Invalid input. Only letters and spaces are allowed.\n";
        return 0;
    }

    if (choice == 1 || choice == 3) {
        cout << "Ciphertext: " << rail_fence_encrypt(message, rails) << "\n";
    } else if (choice == 2) {
        cout << "Plaintext: " << rail_fence_decrypt(message, rails) << "\n";
    } else {
        cout << "Invalid choice.\n";
    }

    return 0;
}
