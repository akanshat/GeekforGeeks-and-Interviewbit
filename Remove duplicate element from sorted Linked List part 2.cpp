int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    if(A.size()<3) return A.size();
    int l=2,r=2,n=A.size();
    while(l<n and r<n){
        if(A[r]==A[l-1] and A[r]==A[l-2]){
            r++;
        }else{
            A[l]=A[r];
            l++;r++;
        }
    }
    return l;
}

