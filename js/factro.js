function factori(n)
{
    if(n==0)
    {
          return 1
    }
    else
    {
        return n*factori(n-1);
    }
}
 
 let a = process.argv[2];
console.log(factori(a));
