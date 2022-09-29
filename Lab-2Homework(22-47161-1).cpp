#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter array size: "<<endl;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cout<<"Enter element no. "<<i+1<<": ";
        cin >> arr[i];
    }
    int checked[n];
    for(int i = 0; i < n; i++)
        checked[i] = 0;

    for(int i = 0; i < n; i++)
        {
            if(checked[i] == 0)
            {
                int count = 0;
                for(int j = i; j < n; j++)
                    if(arr[j] == arr[i])
                    if(arr[j] == arr[i])
                        {
                        count += 1;
                        checked[j] = 1;
                    }
                cout << arr[i] << " occurs " << count << " times" << endl;
            }
        }

    return 0;
}

