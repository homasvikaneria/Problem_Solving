// 9. Sort an Array in Ascending Order Example: Input: nums = [4,2,8,5,1]; Output: nums = [1,2,4,5,8].
let arr=[4,2,8,5,1];
console.log(arr.sort());

or

let arr = [4, 2, 8, 5, 1];
let n = arr.length;
let i, j;
for (i=0;i<n-1;i++){
    for (j=0;j<n-1-i;j++) { 
        if (arr[j]>arr[j+1]) {
            [arr[j], arr[j + 1]] = [arr[j + 1], arr[j]];
        }
    }
}
console.log("Sorted Array:", arr); 

