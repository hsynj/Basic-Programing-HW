#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void addBook(std::vector<std::string>& titles, std::vector<std::string>& authors, std::vector<int>& serialNumbers, 
             const std::string& title, const std::string& author, int serialNumber) {
    titles.push_back(title);
    authors.push_back(author);
    serialNumbers.push_back(serialNumber);
}

void displayBooks(const std::vector<std::string>& titles, const std::vector<std::string>& authors, const std::vector<int>& serialNumbers) {
    for (size_t i = 0; i < titles.size(); ++i) {
        std::cout << "Title: " << titles[i] << ", Author: " << authors[i] << ", Serial Number: " << serialNumbers[i] << std::endl;
    }
}

void searchBook(const std::vector<std::string>& titles, const std::vector<std::string>& authors, const std::string& query) {
    for (size_t i = 0; i < titles.size(); ++i) {
        if (titles[i] == query || authors[i] == query) {
            std::cout << "Found: " << titles[i] << " by " << authors[i] << std::endl;
            return;
        }
    }
    std::cout << "Book not found." << std::endl;
}

void removeBook(std::vector<std::string>& titles, std::vector<std::string>& authors, std::vector<int>& serialNumbers, int serialNumber) {
    for (size_t i = 0; i < serialNumbers.size(); ++i) {
        if (serialNumbers[i] == serialNumber) {
            titles.erase(titles.begin() + i);
            authors.erase(authors.begin() + i);
            serialNumbers.erase(serialNumbers.begin() + i);
            std::cout << "Book removed." << std::endl;
            return;
        }
    }
    std::cout << "Book not found." << std::endl;
}

// تابع برای مرتب‌سازی کتاب‌ها بر اساس عنوان
void sortBooks(std::vector<std::string>& titles, std::vector<std::string>& authors, std::vector<int>& serialNumbers) {
    // ایجاد یک لیست موقت از اندیس‌ها
    std::vector<size_t> indices(titles.size());
    for (size_t i = 0; i < indices.size(); ++i) {
        indices[i] = i;
    }

    // مرتب‌سازی اندیس‌ها بر اساس عنوان
    std::sort(indices.begin(), indices.end(), [&](size_t a, size_t b) {
        return titles[a] < titles[b];
    });

    // ایجاد آرایه‌های موقت برای ذخیره داده‌های مرتب‌شده
    std::vector<std::string> sortedTitles, sortedAuthors;
    std::vector<int> sortedSerialNumbers;

    for (size_t i : indices) {
        sortedTitles.push_back(titles[i]);
        sortedAuthors.push_back(authors[i]);
        sortedSerialNumbers.push_back(serialNumbers[i]);
    }

    // جایگزینی آرایه‌های اصلی با داده‌های مرتب‌شده
    titles = sortedTitles;
    authors = sortedAuthors;
    serialNumbers = sortedSerialNumbers;
}

// تابع برای بررسی وجود کتاب بر اساس شماره سریال
bool bookExists(const std::vector<int>& serialNumbers, int serialNumber) {
    for (int sn : serialNumbers) {
        if (sn == serialNumber) {
            return true;
        }
    }
    return false;
}

// تابع اصلی برنامه
int main() {
    std::vector<std::string> titles;   // لیست عنوان‌ها
    std::vector<std::string> authors;  // لیست نویسنده‌ها
    std::vector<int> serialNumbers;    // لیست شماره سریال‌ها

    int choice;
    std::string title, author, query;
    int serialNumber;

    do {
        // نمایش منو
        std::cout << "\n1. Add Book\n2. Display Books\n3. Search Book\n4. Remove Book\n5. Sort Books\n6. Check Book Existence\n0. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter title: ";
                std::cin.ignore(); // برای جلوگیری از مشکل ورودی
                std::getline(std::cin, title);
                std::cout << "Enter author: ";
                std::getline(std::cin, author);
                std::cout << "Enter serial number: ";
                std::cin >> serialNumber;
                addBook(titles, authors, serialNumbers, title, author, serialNumber);
                break;
            case 2:
                displayBooks(titles, authors, serialNumbers);
                break;
            case 3:
                std::cout << "Enter title or author to search: ";
                std::cin.ignore();
                std::getline(std::cin, query);
                searchBook(titles, authors, query);
                break;
            case 4:
                std::cout << "Enter serial number to remove: ";
                std::cin >> serialNumber;
                removeBook(titles, authors, serialNumbers, serialNumber);
                break;
            case 5:
                sortBooks(titles, authors, serialNumbers);
                std::cout << "Books sorted by title." << std::endl;
                break;
            case 6:
                std::cout << "Enter serial number to check: ";
                std::cin >> serialNumber;
                if (bookExists(serialNumbers, serialNumber)) {
                    std::cout << "Book exists." << std::endl;
                } else {
                    std::cout << "Book does not exist." << std::endl;
                }
                break;
            case 0:
                std::cout << "Exiting..." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 0);

    return 0;
}