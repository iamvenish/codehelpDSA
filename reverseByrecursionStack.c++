// void putAtBottom(stack<int> &stack , int num){
//     // base case 
//     if(stack.empty()){
//         stack.push(num);
//         return;
//     }
    
//     int n = stack.top();
//      stack.pop();
   
//     putAtBottom(stack , num);
//     stack.push(n);
// }
// void reverseStack(stack<int> &stack) {
//      if(stack.empty()){
//          return;
//      }
    
//     int num = stack.top();
//     stack.pop();
    
//     reverseStack(stack);
    
//     // bottom element 
//     putAtBottom(stack , num);
    
// }