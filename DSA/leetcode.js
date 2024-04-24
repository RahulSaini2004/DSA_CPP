// var createHelloWorld = function(){
//     return function(){
//         return 'Hello World';
//     }
  
// }

// var helloWorld = createHelloWorld();
// alert(helloWorld()); 


var createCounter = function(n) {
    
    return function() {
     return n=n++;
    };
};

