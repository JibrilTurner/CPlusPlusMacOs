#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib> 
#include <ctime>
using namespace std;

struct parentQuestion {
    std::vector<std::string> question;
    std::vector<int> questionId; // no need for std here
    std::vector<std::string> answer;
    std::vector<std::string> wrongAnswer1;
    std::vector<std::string> wrongAnswer2;
    std::vector<std::string> wrongAnswer3;
};

void removeQuestion(parentQuestion& childQuestion, int questionIndex, int questionId) {
    if (questionIndex >= 0 && questionIndex < childQuestion.question.size()) { // check if the index is valid
        childQuestion.question.erase(childQuestion.question.begin() + questionIndex); 
        childQuestion.questionId.erase(childQuestion.questionId.begin() + questionIndex);
        childQuestion.answer.erase(childQuestion.answer.begin() + questionIndex);
        childQuestion.wrongAnswer1.erase(childQuestion.wrongAnswer1.begin() + questionIndex);
        childQuestion.wrongAnswer2.erase(childQuestion.wrongAnswer2.begin() + questionIndex);
        childQuestion.wrongAnswer3.erase(childQuestion.wrongAnswer3.begin() + questionIndex);
    }
}

void insertQuestion(parentQuestion& childQuestion, std::string question, int questionId, std::string answer, std::string wrongAnswer1, std::string wrongAnswer2, std::string wrongAnswer3) {
    childQuestion.question.push_back(question);
    childQuestion.questionId.push_back(questionId);
    childQuestion.answer.push_back(answer);
    childQuestion.wrongAnswer1.push_back(wrongAnswer1);
    childQuestion.wrongAnswer2.push_back(wrongAnswer2);
    childQuestion.wrongAnswer3.push_back(wrongAnswer3);
}

void writeQuestionToFile(const std::vector<parentQuestion>& questions, const std::string& filename) {
    std::ofstream outputFile(filename);
    if (!outputFile) {
        std::cout << "Error opening file " << filename << std::endl;
        return;
    }

    for (int i = 0; i < questions.size(); i++) {
        const parentQuestion& question = questions[i];
        for (int j = 0; j < question.question.size(); j++) {
            outputFile << "Question: " << question.question[j] << std::endl;
            outputFile << "QuestionID: " << question.questionId[j] << std::endl;
            outputFile << "Answer: " << question.answer[j] << std::endl;
            outputFile << "Wrong Answer 1: " << question.wrongAnswer1[j] << std::endl;
            outputFile << "Wrong Answer 2: " << question.wrongAnswer2[j] << std::endl;
            outputFile << "Wrong Answer 3: " << question.wrongAnswer3[j] << std::endl;
            outputFile << std::endl;
        }
    }
    outputFile.close();
    std::cout << "Question data written to " << filename << std::endl;
}

int questionId() {
    static int id = 0;  // static variable to retain its value between function calls
    return ++id;  // increment the ID by one and return it
}

void quizUser(const parentQuestion& questionSet) {
    int score = 0;  // Variable to keep track of the score

    // Iterate over each question in the question set
    for (int i = 0; i < questionSet.question.size(); i++) {
        // Display the question
        std::cout << "Question: " << questionSet.question[i] << std::endl;

        // Display the answer choices
        std::cout << "Options:" << std::endl;
        std::cout << "1. " << questionSet.wrongAnswer1[i] << std::endl;
        std::cout << "2. " << questionSet.wrongAnswer2[i] << std::endl;
        std::cout << "3. " << questionSet.wrongAnswer3[i] << std::endl;
        std::cout << "4. " << questionSet.answer[i] << std::endl;

        // Prompt the user for their answer
        int userAnswer;
        std::cout << "Enter your answer (1-4): ";
        std::cin >> userAnswer;

        // Check if the user's answer is correct
        if (userAnswer == 4) {
            std::cout << "Correct!" << std::endl;
            score += 1;  // Increment the score by 1 for a correct answer
        } else {
            std::cout << "Incorrect. The correct answer is: " << questionSet.answer[i] << std::endl;
        }

        std::cout << std::endl;
    }

    // Calculate the score percentage
    int totalQuestions = questionSet.question.size();
    int scorePercentage = (score * 100) / totalQuestions;

    std::cout << scorePercentage << "% of questions answered correctly" << std::endl;

}

int main() {
    std::vector<parentQuestion> childQuestion;
    parentQuestion anatomy;

    // Insert questions into the question set
    insertQuestion(anatomy, "Give a Desription kidneys.", questionId(),  
    "Bean Shaped, Symetrical Orgran located Above All Other Urinary Orgrains",
    "Long Tube that runns from the Ureter to the Bladder, medial",
    "A chewing muscle dorsal to the masseater located on the side of the skull", 
    "The most prominent muscle on the lateral surface of the face, large and rounded. The primary chewing muscle. Extends from the zygomatic bone to the lateral surface of the mandible.");

    insertQuestion(anatomy, "Give a Description of the Renal Artery and Renal Vein?", questionId(),
     "Main Artery and Vein thats inbetween both kidenys the kidney)",
     "a Tube that connects the bladder to the genitals for the removeal of urine from the body",
     "the organ that collects urine excreted by the kidneys before disposal b urination. A hollow muscular, and elastic organ.", 
     "pull the sternohyoid muscles to the side and you will see a tube with circular rings.");

    insertQuestion(anatomy, "Give a description of the urethra", questionId(), 
    "a tube that connects the urinary bladder to the genitals for the removal of urine from the body. In males travels from urinary bladder through penis",
    "tubes that propel urine from the kidneys to the urinary bladder", 
    "Two bands of muscle tissue that run along the mid-ventral line in a posterior",
    "he most prominent muscle on the lateral surface of the face, large and rounded. The primary chewing muscle. Extends from the zygomatic bone to the lateral surface of the mandible.");

    insertQuestion(anatomy, "Give a description of the bladder?", questionId(),
     "the organ the ureter connects to, As well as looking flabby and deflated   ", 
     "bean-shaped organs essential to the urinary system. They serve the body as a natur filter of the blood",
     "a tube that connects the urinary bladder to the genitals for the removal of urine from the body.",
     "The male gonads, symetical and a round and are found far down on the animals body");

     insertQuestion(anatomy, "Give a description of the urethra?", questionId(),
     "the tube that connects the bladder to the genitals for removal of urine    ", 
     "tubes that propel urine from the kidneys to the urinary bladder",
     "pull the sternohyoid muscles to the side and you will see a tube with circular rings.",
     "The male gonads, symetical and a round and are found far down on the animals body");

     insertQuestion(anatomy, "Give a description of the testes?", questionId(),
     "The are a symetical organ located below the penis ", 
     "a cord like structure formed in males, this tube runs to each testicle", 
     "a tube that is used for sexual reporoduction and waste disposol", 
     "a walnut sized gland located bwteen the bladder and the penis. "); 

    insertQuestion(anatomy, "Give a description of the spermatic cord", questionId(),
     "a cord like structure formed in males, this tube runs to each testicle", 
     "a tube that connects the urinary bladder to the genitals for the removal of urine from the body.",
     "tubes that propel urine from the kidneys to the urinary bladder", 
     "The male gonads, symetical and a round and are found far down on the animals body");
     
    insertQuestion(anatomy, "describe the location of the prostate gland ", questionId(),
     "a walnut sized gland located bwteen the bladder and the penis.", 
     "The male gonads, symetical and a round and are found far down on the animals body",
     "the organ that collects urine excreted by the kidneys before disposal b urination. A hollow muscular, and elastic organ.", 
     "he most prominent muscle on the lateral surface of the face, large and rounded. The primary chewing muscle. Extends from the zygomatic bone to the lateral surface of the mandible.");
    // Add more questions...
    childQuestion.push_back(anatomy);

    removeQuestion(anatomy,1,questionId());

    writeQuestionToFile(childQuestion, "question.txt");

    // Quiz the user on the question set
    quizUser(anatomy);

    return 0;
}