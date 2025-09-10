#include<iostream>
#include<vector>
using namespace std;

vector<int> search (int arr[], int k) 
{
    vector<int> index;
    int j=0;
    for(int i=0; i<sizeof(arr); i++)
        if(arr[i] == k)
            index.push_back(i);
    return index;
}

int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    if(n<=0)
    {
        cout<<"Invalid size of array";
        return 0;
    }
    int arr[n];
    cout<<"Enter elements of array: " <<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int key;
    cout<<"Enter element to be searched: ";
    cin>>key;
    vector <int> indices = search(arr, key);
    if(indices.empty())
        cout<<"Element not found in array";
    else
    {
        cout<<"Element found at indices: ";
        for(int idx : indices )
            cout<<idx<<" ";
    }
    return 0;
}