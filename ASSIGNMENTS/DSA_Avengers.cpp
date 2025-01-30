//DSA_Avengers


// Given two arrays of integers, find which elements in the second array are missing from the first array.

// Example


// The  array is the orginal list. The numbers missing are .

// Notes

// If a number occurs multiple times in the lists, you must ensure that the frequency of that number in both lists is the same. If that is not the case, then it is also a missing number.
// Return the missing numbers sorted ascending.
// Only include a missing number once, even if it is missing multiple times.
// The difference between the maximum and minimum numbers in the original list is less than or equal to .
// Function Description

// Complete the missingNumbers function in the editor below. It should return a sorted array of missing numbers.

// missingNumbers has the following parameter(s):

// int arr[n]: the array with missing numbers
// int brr[m]: the original array of numbers
// Returns

// int[]: an array of integers
// Input Format

// There will be four lines of input:

//  - the size of the first list, 
// The next line contains  space-separated integers 
//  - the size of the second list, 
// The next line contains  space-separated integers 

// Constraints

// Sample Input

// 10
// 203 204 205 206 207 208 203 204 205 206
// 13
// 203 204 204 205 206 207 205 208 203 206 205 206 204
// Sample Output

// 204 205 206
// Explanation

//  is present in both arrays. Its frequency in  is , while its frequency in  is . Similarly,  and  occur twice in , but three times in . The rest of the numbers have the same frequencies in both lists.

// Contest ends in 23 minutes
// Submissions: 100
// Max Score: 5
// Rate This Challenge:

    
// More
 
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'missingNumbers' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY arr
 *  2. INTEGER_ARRAY brr
 */

vector<int> missingNumbers(vector<int> arr, vector<int> brr) {
    // Sort both arrays
    std::sort(arr.begin(), arr.end());
    std::sort(brr.begin(), brr.end());

    std::vector<int> missing;
    int i = 0, j = 0;

    // Traverse both sorted arrays
    while (j < brr.size()) {
        if (i < arr.size() && arr[i] == brr[j]) {
            i++;
        } else {
            // If arr[i] != brr[j]-> it means brr[j] is missing in arr
            if (missing.empty() || missing.back() != brr[j]) {
                missing.push_back(brr[j]); 
            }
        }
        j++; 
    }
    return missing;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    string m_temp;
    getline(cin, m_temp);

    int m = stoi(ltrim(rtrim(m_temp)));

    string brr_temp_temp;
    getline(cin, brr_temp_temp);

    vector<string> brr_temp = split(rtrim(brr_temp_temp));

    vector<int> brr(m);

    for (int i = 0; i < m; i++) {
        int brr_item = stoi(brr_temp[i]);

        brr[i] = brr_item;
    }

    vector<int> result = missingNumbers(arr, brr);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << " ";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}


// You’re given the pointer to the head nodes of two linked lists. Compare the data in the nodes of the linked lists to check if they are equal. If all data attributes are equal and the lists are the same length, return . Otherwise, return .

// Example



// The two lists have equal data attributes for the first  nodes.  is longer, though, so the lists are not equal. Return .

// Function Description

// Complete the compare_lists function in the editor below.

// compare_lists has the following parameters:

// SinglyLinkedListNode llist1: a reference to the head of a list
// SinglyLinkedListNode llist2: a reference to the head of a list
// Returns

// int: return 1 if the lists are equal, or 0 otherwise
// Input Format

// The first line contains an integer , the number of test cases.

// Each of the test cases has the following format:
// The first line contains an integer , the number of nodes in the first linked list.
// Each of the next  lines contains an integer, each a value for a data attribute.
// The next line contains an integer , the number of nodes in the second linked list.
// Each of the next  lines contains an integer, each a value for a data attribute.

// Constraints

// Output Format

// Compare the two linked lists and return 1 if the lists are equal. Otherwise, return 0. Do NOT print anything to stdout/console.

// The output is handled by the code in the editor and it is as follows:

// For each test case, in a new line, print  if the two lists are equal, else print .

// Sample Input

// 2
// 2
// 1
// 2
// 1
// 1
// 2
// 1
// 2
// 2
// 1
// 2
// Sample Output

// 0
// 1
// Explanation

// There are  test cases, each with a pair of linked lists.

// In the first case, linked lists are: 1 -> 2 -> NULL and 1 -> NULL

// In the second case, linked lists are: 1 -> 2 -> NULL and 1 -> 2 -> NULL

// Contest ends in 21 minutes
// Submissions: 121
// Max Score: 5
// Rate This Challenge:

    
// More

#include <bits/stdc++.h>

using namespace std;

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedListNode *tail;

        SinglyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }

        void insert_node(int node_data) {
            SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);

            if (!this->head) {
                this->head = node;
            } else {
                this->tail->next = node;
            }

            this->tail = node;
        }
};

void print_singly_linked_list(SinglyLinkedListNode* node, string sep, ofstream& fout) {
    while (node) {
        fout << node->data;

        node = node->next;

        if (node) {
            fout << sep;
        }
    }
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;

        free(temp);
    }
}

// Complete the compare_lists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    while (head1 != nullptr && head2 != nullptr) {
        //Not Equal Condition
            if (head1->data != head2->data) {
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        //Equal condition
        return head1 == nullptr && head2 == nullptr;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int tests;
    cin >> tests;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int tests_itr = 0; tests_itr < tests; tests_itr++) {
        SinglyLinkedList* llist1 = new SinglyLinkedList();

        int llist1_count;
        cin >> llist1_count;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        for (int i = 0; i < llist1_count; i++) {
            int llist1_item;
            cin >> llist1_item;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            llist1->insert_node(llist1_item);
        }
      
      	SinglyLinkedList* llist2 = new SinglyLinkedList();

        int llist2_count;
        cin >> llist2_count;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        for (int i = 0; i < llist2_count; i++) {
            int llist2_item;
            cin >> llist2_item;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            llist2->insert_node(llist2_item);
        }

        bool result = compare_lists(llist1->head, llist2->head);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}


// Delete the node at a given position in a linked list and return a reference to the head node. The head is at position 0. The list may be empty after you delete the node. In that case, return a null value.

// Example
// After removing the node at position , .

// Function Description

// Complete the deleteNode function in the editor below.

// deleteNode has the following parameters:
// - SinglyLinkedListNode pointer llist: a reference to the head node in the list
// - int position: the position of the node to remove

// Returns
// - SinglyLinkedListNode pointer: a reference to the head of the modified list

// Input Format

// The first line of input contains an integer , the number of elements in the linked list.
// Each of the next  lines contains an integer, the node data values in order.
// The last line contains an integer, , the position of the node to delete.

// Constraints

// , where  is the  element of the linked list.
// Sample Input

// 8
// 20
// 6
// 2
// 19
// 7
// 4
// 15
// 9
// 3
// Sample Output

// 20 6 2 7 4 15 9
// Explanation

// The original list is . After deleting the node at position , the list is .

// Contest ends in 19 minutes
// Submissions: 187
// Max Score: 5
// Rate This Challenge:

    
// More


#include <bits/stdc++.h>

using namespace std;

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedListNode *tail;

        SinglyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }

        void insert_node(int node_data) {
            SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);

            if (!this->head) {
                this->head = node;
            } else {
                this->tail->next = node;
            }

            this->tail = node;
        }
};

void print_singly_linked_list(SinglyLinkedListNode* node, string sep, ofstream& fout) {
    while (node) {
        fout << node->data;

        node = node->next;

        if (node) {
            fout << sep;
        }
    }
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;

        free(temp);
    }
}

/*
 * Complete the 'deleteNode' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER position
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    // If the list is empty
    if (llist == nullptr) {
        return nullptr;
    }
    //If the head needs to be removed
    if (position == 0) {
        SinglyLinkedListNode* newHead = llist->next; 
        delete llist; 
        return newHead; 
    }
    //node to be deleted
    SinglyLinkedListNode* current = llist;
    for (int i = 0; current != nullptr && i < position - 1; i++) {
        current = current->next; 
    }
    //position is out of bounds
    if (current == nullptr || current->next == nullptr) 
    {
        return llist; 
        
    }
    // Node to be deleted
    SinglyLinkedListNode* nodeToDelete = current->next;
    current->next = nodeToDelete->next; 
    delete nodeToDelete; 

    return llist;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    SinglyLinkedList* llist = new SinglyLinkedList();

    int llist_count;
    cin >> llist_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 0; i < llist_count; i++) {
        int llist_item;
        cin >> llist_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        llist->insert_node(llist_item);
    }

    int position;
    cin >> position;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    SinglyLinkedListNode* llist1 = deleteNode(llist->head, position);

    print_singly_linked_list(llist1, " ", fout);
    fout << "\n";

    free_singly_linked_list(llist1);

    fout.close();

    return 0;
}
