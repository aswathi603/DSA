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