vector<int> printNos(int x) {
    // Write Your Code Here
    if(x>0)
    {
        printNos(x-1);
        cout << x << " ";
    }
    return {};//why did we use return {} -> https://stackoverflow.com/questions/39487065/what-does-return-statement-mean-in-c11#:~:text=return%5D%20in%20the%20C%2B%2B%20Standard,was%20in%20the%20return%20statement.
}
