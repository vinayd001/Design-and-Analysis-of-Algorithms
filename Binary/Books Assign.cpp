#include<iostream>
using namespace std;

bool books_readable(int pages[], int n, int m, int students) {

    int last_pages_read = pages[0];
    int count=1;

    for(int i=1; i<n; i++) {
        if(pages[i]-last_cow>=m) {
            last_cow = pages[i];
            count++;
            if(count>=students)
                return true;
        }
    }

    return false;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        int books, students;
        cin>>books>>students;

        int pages[n];
        for(int i=0; i<books; i++) {
            cin>>pages[i];
        }

        // minimum number of pages a student read is
        // equals to the number of pages on the last book
        // becuase pages are given in ascending order
        int ans = pages[n-1];

        for(int i=1; i<books; i++) {
            pages[i]=pages[i-1];
        }

        int s = pages[i], e = pages[n-1];
        
        while(s<=e) {
            int mid = (s+e)/2;

            bool readable = books_readable(pages,books,mid,students);
            if(readable) {
                ans = mid;
                s=mid+1;
            }
            else
                e=mid-1;
        }
        cout<<ans<<endl;
    }
}