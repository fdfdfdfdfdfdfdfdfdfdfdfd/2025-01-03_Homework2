#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std; // namespace std ���

class Book 
{
public:
    string title;
    string author;
    
    Book(const string& title, const string& author)
        : title(title), author(author)
    {
    }
};

class BookManager 
{
private:
    vector<Book> books; // å ��� ����

public:
    // å �߰� �޼���
    void addBook(const string& title, const string& author) 
    {
        books.push_back(Book(title, author)); // push_back ���
        cout << "å�� �߰��Ǿ����ϴ�: " << title << " by " << author << endl;
    }

    // ��� å ��� �޼���
    void displayAllBooks() const 
    {
        if (books.empty()) 
        {
            cout << "���� ��ϵ� å�� �����ϴ�." << endl;
            return;
        }

        cout << "���� ���� ���:" << endl;
        for (size_t i = 0; i < books.size(); i++) { // �Ϲ����� for�� ���
            cout << "- " << books[i].title << " by " << books[i].author << endl;
        }
    }

    // å �˻� �ڵ�
    void search()
    {
        cout << "1. å �������� �˻�" << endl << "2. �۰��� �˻�" << endl;
        int searchType = 0;
        string searchName;
        cin >> searchType;
        
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (searchType == 1)
        {
            cout << "å ������ �Է��� �ֽʽÿ�." << endl;
            getline(cin, searchName);

            for (int i = 0; i < books.size(); ++i)
            {
                if (searchName == books[i].title)
                {
                    cout << "å�� ã�ҽ��ϴ�!" << endl << "����: " << books[i].title << endl << "�۰�: " << books[i].author << endl;
                }
            }
        }

        else if (searchType == 2)
        {
            cout << "�۰��� �̸��� �Է��� �ֽʽÿ�." << endl;
            getline(cin, searchName);

            for (int i = 0; i < books.size(); ++i)
            {
                if (searchName == books[i].author)
                {
                    cout << "�۰��� ã�ҽ��ϴ�!" << endl << "�۰�: " << books[i].author << endl << "����: " << books[i].title << endl;
                }
            }
        }

        else
            cout << "�߸��� �Է� ���Դϴ�." << endl;
    }
};

int main() {
    BookManager manager;

    // ������ ���� ���α׷��� �⺻ �޴��� �ݺ������� ����Ͽ� ����� �Է��� ó���մϴ�.
    // ���α׷� ���Ḧ �����ϱ� ������ ��� �����մϴ�.
    while (true) 
    {
        cout << "\n������ ���� ���α׷�" << endl;
        cout << "1. å �߰�" << endl; // å ������ �Է¹޾� å ��Ͽ� �߰�
        cout << "2. ��� å ���" << endl; // ���� å ��Ͽ� �ִ� ��� å ���
        cout << "3. å �˻�" << endl; // ���� å ��Ͽ� �ִ� ��� å ���
        cout << "4. ����" << endl; // ���α׷� ����
        cout << "����: ";

        int choice; // ������� �޴� ������ ����
        cin >> choice;

        if (choice == 1) {
            // 1�� ����: å �߰�
            // ����ڷκ��� å ����� ���ڸ��� �Է¹޾� BookManager�� �߰��մϴ�.
            string title, author;
            cout << "å ����: ";
            cin.ignore(); // ���� �Է��� �ܿ� ���۸� ����
            getline(cin, title); // ���� �Է� (���� ����)
            cout << "å ����: ";
            getline(cin, author); // ���ڸ� �Է� (���� ����)
            manager.addBook(title, author); // �Է¹��� å ������ �߰�
        }
        else if (choice == 2) {
            // 2�� ����: ��� å ���
            // ���� BookManager�� ����� å ����� ����մϴ�.
            manager.displayAllBooks();
        }
        else if (choice == 3) 
        {
            // 3�� ����: �˻�
            // ���� BookManager�� ����� å ����� ����մϴ�.
            manager.search();
        }
        else if (choice == 4) {
            // 4�� ����: ����
            // ���α׷��� �����ϰ� ����ڿ��� �޽����� ����մϴ�.
            cout << "���α׷��� �����մϴ�." << endl;
            break; // while ���� ����
        }
        else {
            // �߸��� �Է� ó��
            // �޴��� ���� ��ȣ�� �Է����� ��� ��� �޽����� ����մϴ�.
            cout << "�߸��� �Է��Դϴ�. �ٽ� �õ��ϼ���." << endl;
        }
    }

    return 0; // ���α׷� ���� ����
}
