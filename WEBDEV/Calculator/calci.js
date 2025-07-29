var arr = new Array();
var eqn = new Array();
var num = new Array();
var occupy = 0;
var i = 0;
var j = 0;
var k = 0;
var sum = 0;
var x = 0;
var z;


function calculate(a){
    num[i] = a;
    x = (x*10) + num[i];
    document.getElementById("inp").innerHTML = x;
    i++;
    document.getElementById("p1").innerHTML = arr;
}
function operator(s){
    z = s;
    if(!occupy){
        arr[0] = x;
        occupy = 1;
        x = 0;
    }
    else{ arr[1] = x;
        x = 0;
        j = 1;
    }
    // alert("hi");
    if(j){
        // alert("si");
        final();
    }
    document.getElementById("inp1").innerHTML = z;
}
function final(){
    if(!occupy){
        arr[0] = x;
        occupy = 1;
        x = 0;
        }
    else{ 
    arr[1] = x;
    x = 0;}
    switch(z){
        case '+':
            arr[0]+=arr[1];
            break;
        case '-':
            arr[0]-=arr[1];
            break;
        case '*':
            arr[0]*=arr[1];
            break;
        case '/':
            arr[0]/=arr[1];
            break;
        }
    sum = arr[0];
    document.getElementById("inp").innerHTML = sum;
    document.getElementById("p2").innerHTML = arr[0];
}
function reset(){
    i = 0;
    j = 0;
    k = 0;
    x = 0;
    occupy = 0;
    arr.splice(0, arr.length);
    document.getElementById("inp").innerHTML = null;
    document.getElementById("inp1").innerHTML = '.';
}