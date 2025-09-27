function getFactorialImp(choice){
    if(choice === "FORLOOP"){
      //  console.log("fact1")
      return "fact1";
    }
 else if (choice==="recurtment")
    {
        //console.log("fact2")
      return "fact2";
    }
};

var a = getFactorialImp("recurtment");
console.log(a);
var b = getFactorialImp("FORLOOP");
console.log(b);