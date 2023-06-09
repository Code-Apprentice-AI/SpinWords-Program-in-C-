// Include the input/output stream library
#include <iostream>
// Include the string stream library
#include <sstream>

// Includes the standard namespace
using namespace std;

string SpinWords(const string& sentence)
{	// Create a string stream to read the input sentence
	istringstream iss(sentence);
	// Create a string stream to build the spun sentence
	ostringstream oss;
	// Declare a variable to store each word
	string word;
	// Loop through each word in the sentence
	while (iss >> word)
	{	
		// Check if the word has a length of 5 or more
		if (word.length() > 5)
		{
			// Reverse the word
			reverse(word.begin(), word.end());
			// Remove the trailing space
		}
		// Append the word to the spun sentence
		oss << word << " ";
	}
	// Convert the spun sentence string stream to a string
	string SpinSentence = oss.str();
	// Remove trailing space
	if (!SpinSentence.empty())
	{
        //This line of code removes the last character from the string spunSentence. In this case, it is used to remove the trailing space at the end of the spun sentence before returning it.
		SpinSentence.pop_back();
	}
	// Return the spun sentence
	return SpinSentence;
}

int main()
{
	// Define the input sentence
	string sentence = "Programming requires a great deal of resilience and constant practice";
	// Call the spinWords function to spin the words in the sentence
	string SpinSentence = SpinWords(sentence);
	// Print the spun sentence
	cout << SpinSentence << endl;

	// Exit the program
	return 0;
}
