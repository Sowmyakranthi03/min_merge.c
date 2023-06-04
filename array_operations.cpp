#include  <iostream>

using namespace std;

int insert(int arr[], int a, int n);
int print(int arr[], int n);
int search(int arr[], int n , int a);
int remove(int arr[], int n , int a);
int sort(int arr[], int n );

int main()
{
    int n , arr[n];
    int choice ;
    int a;
    cout<<"Enter the size of array"<<endl;
    std::cin>>n;
    for(int i =0;i<=n;i++)
    {
        std::cin>>arr[i];
    }
    while(choice!=0)
    {
        cout<<"Choose operations\n"<<endl;
        cout<<"1. Insert\n 2.Search \n 3.Remove \n 4.sort \n 5. Print \n 6. Exit"<<endl;   
        std::cin>>choice; 
        switch(choice)
        {
            case 1:
            {
                cout<<"Enter the element to be inserted"<<endl;
                std::cin>>a;
                insert(arr, a, n);
                break;


            }
            case 2:
            {
                cout<<"Enter the element to be search"<<endl;
                std::cin>>a;
                search(arr, n, a);
                break;
            }
            case 3:
            {
                cout<<"Enter the element to be Removed"<<endl;
                std::cin>>a;
                remove(arr, n, a);
                break;

            }
            case 4:
            {
                sort(arr, n);
                break;
            }
            case 5:
            {
                print(arr, n);
                break;

            }
            case 0:
              exit(0);
            default:
              cout<<"Choose correct option "<<endl;
              break;
        }    
    }
   
}
int insert(int arr[], int a, int n)
{
    for (int i = 0;i<=n;i++)
    {
        if(arr[i] == false)
        {
            n++;
            arr[i] = a;
            
            break;
        }
    }
    cout<<"After insertion Array :\n"<<endl;

    return 0;
   
}
int print(int arr[], int n)
{
    for(int i = 0;i<=n;i++)
    {
        cout<<arr[i];
    }

    return 0;
}

int search(int arr[], int n , int a)
{
    for(int i =0;i<=n;i++)
    {
        if(arr[i] == a)
        {
            cout<<a<<"Found at "<<i<<endl;
        }
    }
    return 0;
}


int sort(int arr[], int n )
{
    int temp;
    for(int i =0;i<=n;i++)
    {
        if(arr[i]>arr[i+1])
        {
            temp = arr[i];
            arr[i]= arr[i+1];
            arr[i+1] = temp;
        }
    }
    cout<<"After sorting array would be :"<<endl;
   
    return 0;
}
int remove(int arr[], int n , int a)
{
    for(int i = 0 ;i<=n ;i++)
    {
        if(arr[i]== a)
        {
            for(int j = i;j<=n;j++)
            {
                arr[i] = arr[i+1];
            }
        }
    }
    return 0;
}