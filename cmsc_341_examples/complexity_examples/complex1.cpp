
//To calculate T(n), count assignment operation,
int main_2() {
    int n=4;  //O(1)
    int a = 2; //O(1)
    int b = 4; //O(1)
    int c = 10; //O(1)
    //4
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            //assignments in the nested loop
            //3n^2
            int x = i * i;
            int y = j * j;
            int z = i * j;
        }
    }
    //This gives us 4+3n^2

    //Now our next loop, it is not a nested loop
    for (int i=0;i<n;i++) {
        //assignment in loop
        //2n
        int d = b * b;
        int e = 20;
    }
    //4+3n^2+2n
    //O(n^2) upper bound
}

