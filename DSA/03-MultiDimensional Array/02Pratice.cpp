#include<iostream>
using namespace std;

int  linearSearch(int arr[3][4],int key)
{
    int ans;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==key){
                return true;
            }            
        }
    }
    return false;
    
}

int  SumOfElements(int arr[3][4],int rows,int cols)
{
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            sum+=arr[i][j];          
        }
    }
    return sum;
    
}

void  SumOfMaxRow(int arr[3][4],int rows,int cols)
{
    int Maxsum=0;
    int index=0;
    for(int i=0;i<3;i++){
        int sum=0;

        for(int j=0;j<4;j++){
            sum+=arr[i][j];
        }

        if(sum>Maxsum){
            Maxsum=sum;
            index=i;
        }
    }
    cout<<" Max sum: "<<Maxsum<<" Row index:"<<index;
    
}

//Wave pattern 
void printWavePattern(int arr[][4],int rows ,int cols){
    for(int j=0;j<cols;j++){
        if(j % 2 == 0){
            for(int i=0;i<rows;i++){
                cout<<arr[i][j]<<" ";
            }
        }else{
            for(int i=rows-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
        
    }
    cout<<endl;
}

void printSpiralPattern(int arr[5][5],int row,int col){
    int top=0,left=0;
    int bottom=row-1,right=col-1;

    while(top<=bottom && left<=right){
        //top row
        for(int i=left;i<=right;i++){
            cout<<arr[top][i]<<" ";
        }
        top++;


        //right column
        for(int i=top;i<=bottom;i++){
            cout<<arr[i][right]<<" ";
        }
        right--;

        //top <= bottom
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                cout<<arr[bottom][i]<<" ";
            }
            bottom--;
        }

        //left <= right
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                cout<<arr[i][left]<<" ";
            }
            left++;
        }
        cout<<endl;
    }
}


int main()
{
    //int arr[3][4]={1,12,3,8,5,16,7,21,11,10,1,12};
    int arr[5][5]={
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };

    // int key;
    // cout<<"Enter a key to search : ";
    // cin>>key;
    
    // bool res = linearSearch(arr, key);
    // if (res) {
    
    rrT!000000000000000000000000000000000000000      //     cout << "Key found!" << endl;
    // } else {
    //     cout << "Key not found!" << endl;
    // }

    //cout<<SumOfElements(arr,3,4);

    //SumOfMaxRow(arr,3,4);
    //cout << "Wave Pattern: ";
    //printWavePattern(arr, 3, 4);


    cout << "Spiral Pattern: ";
    printSpiralPattern(arr, 5, 5);
}