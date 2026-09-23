// #include "Baseball Game.cpp"
// #include "To Lower Case.cpp"
// #include "Jewels and Stones.cpp"
// #include "Unique Morse Code Words.cpp"
// #include "Flipping an Image.cpp"
// #include "Find First Palindromic String in the Array.cpp"
// #include "Maximum Number of Words Found in Sentences.cpp"
// #include "Check Balanced String.cpp"
// #include "Sum of Variable Length Subarrays.cpp"
// #include "Transform Array by Parity.cpp"
// #include "Elevator Requests I.cpp"
// #include "Find the Degree of Each Vertex.cpp"
// #include "Weighted Word Mapping.cpp"
// #include "Mirror Distance of an Integer.cpp"
// #include "N-Repeated Element in Size 2N Array.cpp"
// #include "Minimum Moves to Equal Array Elements III.cpp"
// #include "Number of Good Pairs.cpp"
// #include "How Many Numbers Are Smaller Than the Current Number.cpp"
// #include "Sort Array by Increasing Frequency.cpp"
// #include "Sort the People.cpp"
// #include "Decode the Message.cpp"
// #include "N-ary Tree Postorder Traversal.cpp"
// #include "Reverse Linked List.cpp"
// #include "Linked List Cycle.cpp"
// #include "Valid Anagram.cpp"
// #include "Contains Duplicate.cpp"
// #include "Implement Queue using Stacks.cpp"
// #include "Palindrome Linked List.cpp"
// #include "Same Tree.cpp"
// #include "Symmetric Tree.cpp"
// #include "Missing Number.cpp"
// #include "Happy Number.cpp"
// #include "Plus One.cpp"
// #include "Transpose Matrix.cpp"
// #include "Min Stack.cpp"
// #include "Remove Linked List Elements.cpp"
// #include "Find the K-th Character in String Game I.cpp"
// #include "Remove Nodes From Linked List.cpp"
// #include "Number of Laser Beams in a Bank.cpp"
// #include "Find the Winner of the Circular Game.cpp"
// #include "Intersection of Two Arrays.cpp"
#include "Majority Element.cpp"

int main() {

    // test();

    string sequence = "aaabaaaabaaabaaaabaaaabaaaabaaaaba";
    // aaaba aaaba aaba aaaba aaaba aaaba aaaba
    // aaaba aaab aaaba aaaba aaaba aaaba aaaba
    string word = "aaaba";

    // std::regex pattern("(aaaba)");
    // std::smatch match;

    // auto begin = sregex_iterator(sequence.begin(), sequence.end(), pattern);
    // auto end = sregex_iterator();

    // auto count = distance(begin, end);

    // PRINT(count)

    // if (regex_search(sequence, match, pattern)) {
    //     PRINT(match.size())
    // }

    int right = word.size();
    int prevRight = word.size();
    int result = 0;
    for (int i = 0; i < sequence.size(); i++) {
        // PRINT(i)
        // PRINT(prevRight)
        if (sequence.substr(i, right) == word) {
            PRINT(sequence.substr(i, right))
            PRINT(i)
            PRINT(i + right - 1)
            i = i + right - 1;
            prevRight = i;
            result++;
            
        }
        if (i - prevRight < 1) {
            // PRINT(i - prevRight)
            // result = 0;
        }
    }
    PRINT(sequence[27])
    PRINT(sequence[28])
    PRINT(sequence[29])
    PRINT(sequence[30])
    PRINT(sequence[31])
    PRINT(sequence[32])
    PRINT(sequence[33])
    PRINT(result)

    return 0;
}