// #include <bits/stdc++.h> 
// void sortedInsert(stack<int> &s , int n){
//     // base case 
//     if(s.empty() || (!s.empty() && n > s.top())){
//         s.push(n);
//         return;
//     }
    
//     int v = s.top();
//     s.pop();
    
// //     recursive calls 
//     sortedInsert(s,n);
//     s.push(v);
// }
// void sortStack(stack<int> &stack)
// {
//     // base case 
//     if(stack.empty()){
//         return;
//     }
    
//      int num   = stack.top();
//       stack.pop();
    
//     // recursive call
//     sortStack(stack);
    
//     sortedInsert(stack,num);
    
    
// }