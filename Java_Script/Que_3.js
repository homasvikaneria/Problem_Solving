// 3. Write a function that takes three sides of a triangle and checks whether the triangle is equilateral, isosceles, or scalene.
function tri(a,b,c){
    if(a==b && b==c){
        console.log("equilateral Triangle");
    }
    else if(a!=b && b!=c && c!=a){
        console.log("scalene Triangle");
    }
    else{
        console.log("isosceles Triangle");
    }
}
tri(5,5,4);