// 10. Given an array of integers, count how many numbers are even and how many are odd.
// Examplef
// Input: [1, 2, 3, 4, 5]
// Output: Even: 2, Odd: 3
let arr=[1,2,3,4,5];
let i,cnt1=0,cnt2=0;
for(i=0;i<arr.length;i++){
    if(arr[i]%2==0){
        cnt1+=1;
    }
    else{
        cnt2+=1;
    }
}
console.log("even nos:",cnt1);
console.log("odd nos:",cnt2);