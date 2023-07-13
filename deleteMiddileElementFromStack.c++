// #include <bits/stdc++.h> 
// void solve(stack<int>&inputStack, int s , int count){
//     // base case 
//     if(count == s/2){
//         inputStack.pop();
//         return;
//     }
    
//     // top number out 
//     int n = inputStack.top();
//      inputStack.pop();
    
//     // recursive call 
//     solve(inputStack , s , count+1);
//     inputStack.push(n);
// }
// void deleteMiddle(stack<int>&inputStack, int N){
//     int count=0;
//     solve(inputStack, N , count);
   
// }