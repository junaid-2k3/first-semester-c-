#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// **Base Class for Questions (Abstraction)**
class Question {
protected:
    std::string _questionText;
    std::string _correctAnswer;

public:
    Question(const std::string& text, const std::string& answer)
        : _questionText(text), _correctAnswer(answer) {}

    virtual void display() = 0; // Pure Virtual Function (Abstract Class)
    virtual bool checkAnswer(const std::string& userAnswer) {
        return _correctAnswer == userAnswer;
    }

    // Added virtual destructor to ensure proper cleanup of derived classes
    virtual ~Question() {}

    // Added public getter for _correctAnswer to maintain encapsulation
    std::string getCorrectAnswer() const {
        return _correctAnswer;
    }
};

// **Derived Class for Multiple Choice Questions (Inheritance & Polymorphism)**
class MultipleChoiceQuestion : public Question {
private:
    std::vector<std::string> _options;

public:
    MultipleChoiceQuestion(const std::string& text, const std::string& answer, const std::vector<std::string>& options)
        : Question(text, answer), _options(options) {}

    void display() override { // Polymorphism (Function Overriding)
        std::cout << _questionText << std::endl;
        for (size_t i = 0; i < _options.size(); ++i) {
            std::cout << (i + 1) << ". " << _options[i] << std::endl;
        }
    }
};

// **Derived Class for True/False Questions (Inheritance & Polymorphism)**
class TrueFalseQuestion : public Question {
public:
    TrueFalseQuestion(const std::string& text, const std::string& answer)
        : Question(text, answer) {}

    void display() override { // Polymorphism (Function Overriding)
        std::cout << _questionText << " (True/False)" << std::endl;
    }

    bool checkAnswer(const std::string& userAnswer) override { // Polymorphism (Function Overriding)
        // Normalize answer for comparison
        std::string normalizedUserAnswer = (userAnswer[0] == 't' || userAnswer[0] == 'T')? "True" : "False";
        return Question::checkAnswer(normalizedUserAnswer);
    }
};

// **Quiz Class Utilizing Composition**
class Quiz {
private:
    std::vector<Question*> _questions; // Composition: Quiz manages a collection of Questions
    std::string _quizName;

public:
    Quiz(const std::string& name) : _quizName(name) {}

    void addQuestion(Question* question) { _questions.push_back(question); }

    void conductQuiz() {
        int score = 0;
        for (const auto& question : _questions) {
            question->display();
            std::string userAnswer;
            std::cout << "Your Answer: ";
            std::cin.ignore(); // Ignore newline left in input buffer
            std::getline(std::cin, userAnswer);
            if (question->checkAnswer(userAnswer)) {
                std::cout << "Correct!" << std::endl;
                score++;
            } else {
                std::cout << "Incorrect. Correct answer was: " << question->getCorrectAnswer() << std::endl;
            }
        }
        std::cout << "Quiz: " << _quizName << " - Your Final Score: " << score << "/" << _questions.size() << std::endl;
    }

    // Added destructor to ensure proper cleanup of questions
    ~Quiz() {
        for (auto& question : _questions) {
            delete question;
        }
        _questions.clear(); // Clear the vector after deletion
    }
};

int main() {
    // **Creating Questions**
    MultipleChoiceQuestion* mcq = new MultipleChoiceQuestion("What is OOP?", "Object-Oriented Programming",
                                                             {"Structured Programming", "Object-Oriented Programming", "Functional Programming"});
    TrueFalseQuestion* tfq = new TrueFalseQuestion("Is C++ an OOP language?", "True");

    // **Creating a Quiz and Adding Questions**
    Quiz myQuiz("OOP Fundamentals");
    myQuiz.addQuestion(mcq);
    myQuiz.addQuestion(tfq);

    // **Conducting the Quiz**
    std::cout << "Welcome to the " << myQuiz._quizName << std::endl;
    myQuiz.conductQuiz();

    return 0;
}