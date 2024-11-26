#include <iostream>
#include "ufo_functions.hpp"

int main() {


}


std::string codeword = "codecademy";
std::string answer = "__________";

int misses = 0;

while (answer != codeword && misses < 7) {
    // code for each turn will go here

    misses++;
}


if (answer == codeword) {
    std::cout << "Hooray! You saved the person and earned a medal of honor!\n";
} else {
    std::cout << "Oh no! The UFO just flew away with another person!\n";
}


void end_game(std::string answer, std::string codeword);


void end_game(std::string answer, std::string codeword) {
    if (answer == codeword) {
        std::cout << "Hooray! You saved the person and earned a medal of honor!\n";
    } else {
        std::cout << "Oh no! The UFO just flew away with another person!\n";
    }
}

end_game(answer, codeword);


while (answer != codeword && misses < 7) {
    display_misses(misses);
    // code for each turn will go here

    misses++;
}

std::vector<char> incorrect;
bool guess = false;


std::cout << "\nIncorrect Guesses:\n";

for (int i = 0; i < incorrect.size(); i++) {
    std::cout << incorrect[i] << ' ';
}


std::cout << "\nCodeword:\n";

for (int i = 0; i < answer.length(); i++) {
    std::cout << answer[i] << ' ';
}

void display_status(std::vector<char> incorrect, std::string answer);



void display_status(std::vector<char> incorrect, std::string answer) {
    std::cout << "\nIncorrect Guesses:\n";
    for (int i = 0; i < incorrect.size(); i++) {
        std::cout << incorrect[i] << ' ';
    }
    std::cout << "\nCodeword:\n";
    for (int i = 0; i < answer.length(); i++) {
        std::cout << answer[i] << ' ';
    }
}


display_status(incorrect, answer);


char letter;


std::cout << "\n\nPlease enter your guess: ";
std::cin >> letter;


for (int i = 0; i < codeword.length(); i++) {
    // Check if the guessed letter matches the current character in codeword
}


for (int i = 0; i < codeword.length(); i++) {
    if (letter == codeword[i]) {
        answer[i] = letter;
        guess = true;
    }
}


if (guess) {
    std::cout << "\nCorrect! You're closer to cracking the codeword.\n";
} else {
    std::cout << "\nIncorrect! The tractor beam pulls the person in further.\n";
    incorrect.push_back(letter);
}


if (guess) {
    std::cout << "\nCorrect! You're closer to cracking the codeword.\n";
} else {
    std::cout << "\nIncorrect! The tractor beam pulls the person in further.\n";
    incorrect.push_back(letter);
    misses++;
}

guess = false;

