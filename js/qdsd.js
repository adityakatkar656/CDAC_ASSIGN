function print()
{
    for(var i =1;i<=100 ;i++)
    {
        if(i%3==0)
        {
            console.log(i," foo")
        }
        if(i%5==0)
        {
            console.log(i,"  boo")
        }
        if(i%5==0&&i%3==0)
        {
            console.log(i,"fobar")
        }
        if(i!=0)
        {
            console.log(i)

        }
    }
}
print()