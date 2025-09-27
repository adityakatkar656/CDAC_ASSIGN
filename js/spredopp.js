function add(...a)
{
    var sum=0;
    a.forEach(element => {
        sum+=element;
        
    });
    console.log("sum =",sum);
}


add(10,20,30,43);