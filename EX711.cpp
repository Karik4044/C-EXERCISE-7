#include<iostream>
using namespace std;
//void Display_Array (int[10][10], int, int);
//void Row_Sum  (int[10][10], int, int);
//void Col_Sum  (int[10][10], int, int);
void Input_Array (int arr[10][10], int row, int col)
{
    int m,n;
    for(m=0; m<row; m++)
    {
        for(n=0; n<col; n++){
		
            cout<<"arr["<<m<<"]["<<n<<"] = :"; cin>>arr[m][n];
        cout<<endl;
    }
    }
    cout<<endl;
}
void Display_Array (int arr[10][10], int row, int col)
{
    int m,n;
    for(m=0; m<row; m++)
    {
        for(n=0; n<col; n++)
            cout<<"arr["<<m<<"]["<<n<<"] = "<<arr[m][n]<<"  ";
        cout<<endl;
    }
    cout<<endl;
}
void Row_Sum (int arr[10][10], int row, int col)
{
    int m,n;
    for(m=0; m<row; m++)
    {
        int sumRow=0;
        for(n=0; n<col; n++)
            {
                sumRow += arr[m][n];
            }
            cout << "\nSum of value of elements in row  "<<m<<": " << sumRow<<"\n";
        cout<<endl;
    }
    cout<<endl;
}
void Col_Sum (int arr[10][10], int row, int col)
{
    int m,n;
    for(n=0; n<col; n++)
    {
        int sumCol=0;
        for(m=0; m<row; m++)
            {
                sumCol += arr[m][n];
            }
            cout << "\nSum of value of elements in col  "<<n<<": " << sumCol<<"\n";
        cout<<endl;
    }
    cout<<endl;
}

int main()
{
    int row, col, i, j, arr[10][10];
    cout<<"Enter the Row Size for Array: ";
    cin>>row;
    cout<<"Enter the Column Size for Array: ";
    cin>>col;
    //Check whether size (row as well as column) < 1 or not
    if (row<1 or col<1)
        {
            cout<<"\nThis is out of range.\n";
            exit(0);
        }
  
    Input_Array (arr, row, col);
    Display_Array (arr, row, col);
    cout<<"\nCalculate and display the sum of value of elements in each row:\n";
   Row_Sum (arr, row, col);
    
   cout<<"\nCalculate and display the sum of value of elements in each column:\n";
   Col_Sum (arr, row, col);
    
    return 0;
}