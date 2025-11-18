#include <iostream>
#include <vector>
#include <string>
using std::vector, std::string;

void addBook(vector<string>& title_S, vector<string>& author_S, vector<int>& serialNum_S, string title, string author, int serialNum){
    title_S.push_back(title);
    author_S.push_back(author);
    serialNum_S.push_back(serialNum);
}
void removeBook(vector<string>& title_S, vector<string>& author_S, vector<int>& serialNum_S){
    std::cout << "Remove book by 1) Title 2) Serial Number? (1/2) ";
    int entr;
    std::cin >> entr;
    int bySerial;
    string byName;
    switch (entr)
    {
    case 1:
        std::cout << "Enter your Book's Title: ";
        std::getline(std::cin >> std::ws, byName);
        for (int i =0; i<title_S.size(); i++){
            if (byName==title_S[i]){
                title_S.erase(title_S.begin() + i);
                author_S.erase(author_S.begin() + i);
                serialNum_S.erase(serialNum_S.begin() + i);
                std::cout << "Book removed successfully." << '\n';
                break;
            }
            std::cout << "Book not found.\n";
        }
        break;
    case 2:
        std::cout << "Enter your Book's Serial number: ";
        std::cin >> bySerial;
        for (int i =0; i<serialNum_S.size(); i++){
            if (bySerial==serialNum_S[i]){
                title_S.erase(title_S.begin() + i);
                author_S.erase(author_S.begin() + i);
                serialNum_S.erase(serialNum_S.begin() + i);
                std::cout << "Book removed successfully." << '\n';
                break;
            }
        }
        std::cout << "Book not found.\n";
        break;
    default:
        std::cout << "Adade eshtebah vared kardid.\n";
        break;
    }
}
void searchBook(vector<string>& title_S, vector<string>& author_S,vector<int>& serialNum_S){
    std::cout << "1)By title or author 2)serial number? (1/2) ";
    int entr;
    std::cin >> entr;
    int forserial;
    string forname;
    switch (entr)
    {
    case 1:
        std::cout << "Enter title or author: ";
        std::getline(std::cin >> std::ws, forname);
        for (int i =0; i < title_S.size(); i++){
            if (forname==title_S[i] || forname == author_S[i]){
                std::cout << "\nWe find your book in system:\nTitle: " << title_S[i] << "Writen by : " << author_S[i] << "\tSerial Number: " << serialNum_S[i] << "\n\n"; 
            }
        }
        break;
    case 2:
        std::cout << "Enter serial number: ";
        std::cin >> forserial;
        for (int i =0; i < serialNum_S.size(); i++){
            if (forserial==serialNum_S[i]){
                std::cout << "\nWe find your book in system:\nTitle: " << title_S[i] << "Writen by : " << author_S[i] << "\tSerial Number: " << serialNum_S[i] << "\n\n"; 
            }
        }
        break;
    default:
        std::cout << "gozine eshtebah vared kardid!!\n";
        break;
    }


}
void showBooks(vector<string>& title_S, vector<string>& author_S, vector<int>& serialNum_S){
    for (int i = 0; i<title_S.size(); i++){
        std::cout << i+1 << ": " << title_S[i] << "\tWroten by " << author_S[i] << "\t Serial Number: " << serialNum_S[i] << '\n';
    }
}
void sortBook(vector<string>& title_S){
    vector<string> tempTitle(title_S.size());
    for (int i =0; i<title_S.size(); i++){
        tempTitle[i] = title_S[i];
    }
    for (int i = 0; i < tempTitle.size(); ++i) {
        for (int j = i + 1; j < tempTitle.size(); ++j) {
            if (tempTitle[i] > tempTitle[j]) {
                std::swap(tempTitle[i], tempTitle[j]);
            }
        }
    }
    
    std::cout << "Sortable Books: \n";
    for (const auto& n : tempTitle) {
        std::cout << n << '\n';
    }
}
int main(){
    using std::cout, std::cin, std::getline;
    // Lists
    vector<string> title_S;
    vector<string> author_S;
    vector<int> serialNum_S;

    // Variables 
    string title;
    string author;
    int serialNum;

    // Menu
    int choise;

    //
    do {
        cout << "------------------\n";
        cout << "| 1) Add Book    |\n| 2) Remove Book |\n| 3) Update Book |\n| 4) Search Book |\n| 5) Show Books  |\n| 6) Sort Books  |\n";
        cout << "------------------\n";
        cout << "Enter your operation number-> ";
        cin >> choise;

        switch (choise)
        {
            case 1:
                cout << "Enter title: ";
                getline(cin >> std::ws, title);
                cout << "Enter author name: ";
                getline(cin >> std::ws, author);
                cout << "Enter serial number: ";
                cin >> serialNum;
                addBook(title_S, author_S, serialNum_S, title, author, serialNum);
                cout << "SUCCESS!!!!!\n";
                break;
            case 2:
                removeBook(title_S, author_S, serialNum_S);
                break;
            case 4:
                searchBook(title_S, author_S, serialNum_S);
                break;
            case 5:
                showBooks(title_S, author_S, serialNum_S);
                break;
            case 6:
                sortBook(title_S);
                break;
            default:
                std::cout << "Eshtebah vared kardi!!\n";
                break;
        }
    } while (choise != 0);

    return 0;
}