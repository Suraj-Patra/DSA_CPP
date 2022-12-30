#include<iostream>
#include<vector>
using namespace std;


int get_length(char name[]) {
    int i = 0;
    for(i=0; name[i]!='\0'; i++);
    return i;
}

void reverse_string(char name[], int n) {
    int start = 0, end = n-1;
    
    while(start<=end) {
        swap(name[start++], name[end--]);
    }
}

char to_lowercase(char ch) {
    return (ch>='A' && ch<='Z')? (ch - 'A' + 'a') : ch;
}

bool is_palindrome(char name[], int n) {
    int start = 0, end = n-1;

    while(start<=end) {
        if(name[start++] != name[end--]) {return false;}
    }
    return true;
}

string filter_string(string name) {
    string temp = "";
    for(int i=0; i<name.length(); i++) {
        char ch = name[i];
        if(ch>='A'&&ch<='Z' || ch>='a'&&ch<='z' || ch>='0'&&ch<='9'){temp.push_back(ch);}
    }
    return temp;
}
string to_lowercase_string(string str) {
    for(int i=0; i<str.length(); i++) {
        char ch = str[i];
        (ch>='A'&&ch<='Z') && (str[i] = ch-'A'+'a');
    }
    return str;
} 
bool is_palindrome_special(string name) {
    name = filter_string(name);
    name = to_lowercase_string(name);

    int start = 0, end = name.length()-1;
    while(start<=end) {
        if(name[start++]!=name[end--]){return false;}
    }

    return true;
}

string reverse_word(string str, int start, int end) {
    while(start<=end) {
        swap(str[start++], str[end--]);
    }

    return str;
}
string reverse_string(string str) {
    int start = 0, end = 0;
    for(int i=0; i<=str.length(); i++) {
        char ch = str[i];
        if(ch==' ' || ch=='\0') {
            end = i-1;
            str = reverse_word(str, start, end);
            start = i+1;
        }
    }

    return str;
}

void max_count(string str) {

    int letter[26] = {0};

    for(int i=0; i<str.length(); i++) {

        char ch = str[i];

        // Converting character to lowercase :
        (ch>='A' && ch<='Z') && (ch = ch-'A'+'a');

        // Getting the index value of the character :
        int index = ch - 'a';

        // increasing the value of that index in letter :
        letter[index]++;
    }

    int max_value = -1;
    int max_index = -1;
    for(int i=0; i<26; i++) {
        (letter[i] >= max_value) && 
        (max_value = letter[i], max_index = i);
    }

    // Converting it to letter :
    char ch = 'a'+max_index;
    cout << "Max occurrance : " << ch << endl;
    cout << "Occurrance number : " << max_value << endl;
}

string change_space_into(string sentence, string str) {
    for(int i=0; i<sentence.length(); i++) {
        char ch = sentence[i];
        if(ch == ' ') {
            string first = sentence.substr(0, i);
            string last = sentence.substr(i+1);
            sentence = first+str+last;
        }
    }

    return sentence;
}

string remove_occurrences(string str, string part) {
    while( str.length() && str.find(part)<str.length() ) {
        str.erase(str.find(part), part.length());
    }

    return str;
}

bool is_equal(int count1[], int count2[]) {
    for(int i=0; i<26; i++) {
        if(count1[i] != count2[i]){return false;}
    }
    return true;
}
bool does_exists(string s1, string s2) {
    int count1[26] = {0};
    int count2[26] = {0};

    // Mapping s1 to count1 :
    for(int i=0; i<s1.length(); i++) {
        int index = s1[i]-'a';
        count1[index]++;
    }

    // Getting the window size :
    int window_size = s1.length();

    int i = 0;

    // Processing the first window :
    while(i<window_size && i<s2.length()) {
        int index = s2[i]-'a';
        count2[index]++;
        i++;
    }
    if(is_equal(count1, count2)){return true;}

    // Process next windows :
    while(i<s2.length()) {
        int index = s2[i]-'a';
        count2[index]++;

        // Decreasing the previous exited value :
        index = s2[i-window_size]-'a';
        count2[index]--;

        i++;
        if(is_equal(count1, count2)){return true;}
    }

    return false;

}

int compress(vector<char> chars) {
    int n = chars.size();
    int i = 0;
    int pos = 0;

    // chars = {'a','a','b','c','c','c'};
    while(i<n) {
        int j = i+1;

        while(j<n && chars[i]==chars[j]){
            j++;
        }
        chars[pos++] = chars[i];        
        int count = j-i;
        if(count>1){
            string cnt = to_string(count);
            for(char ch:cnt) {
                chars[pos++] = ch;
            }
        }

        i = j;
    }
    
    for(int j=0; j<pos; j++) {
        cout << chars[j] << " ";
    }
    cout << endl;

    return pos;
}


int main(){

    // char name[20] = "Suraj";
    // cout << "Length : " << get_length(name) << endl;

    // char name[20] = "Suraj";		
    // reverse_string(name, get_length(name));
    // cout << "Reverse of your name : " << name << endl;

    // cout << "To Lower Case : " << to_lowercase('d') << endl;
    // cout << "To Lower Case : " << to_lowercase('B') << endl;

    // char name[20] = "NooN";
    // int len = get_length(name);
    // cout << (is_palindrome(name, len)? "Yes" : "No");

    // string name = "N^^2o@o#2n";
    // bool ans = is_palindrome_special(name);
    // cout << (ans?"Yes":"No");

    // string str = "My name is Suraj";
    // string ans = reverse_string(str);
    // cout << "After reverse : " << ans;

    // string str = "Hellooooo my name is suraj zzzzz";
    // max_count(str);

    // string sentence = "My name is Suraj";
    // sentence = change_space_into(sentence, "@40");
    // cout << "New Sentence : " << sentence;

    // string str = "daabcbaabcbc";
    // string part = "abc";
    // cout << "After removing part : " << remove_occurrences(str, part);

    // string s1 = "ab";
    // // string s2 = "eidbaooo";
    // string s2 = "eidboaoo";
    // bool ans = does_exists(s1, s2);
    // cout << (ans? "Yes": "No");

    // vector<char> chars = {'a','a','b','c','c','c'};
    // int count = compress(chars);
    // cout << "Count : " << count;


    cout << endl;
    return 0;
}