import { useState ,useEffect } from "react";
export default function CountNum(){
    const[count,setCount]=useState(0);
    const[sum,setSum]=useState(0);
    function calcu()
    {
        setCount(count+1);
    }
     useEffect(()=>
     {
        console.log("useEfxcd call")
          // setCount(count+1);
          // sum;
          setSum(sum+1);
     },[count])
     return(
        <>
        {/* count {count} */}
        sum {sum}
        <button onClick={calcu}>click me</button>
        </>
     )
} 