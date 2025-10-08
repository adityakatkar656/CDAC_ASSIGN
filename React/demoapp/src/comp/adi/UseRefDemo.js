import { use, useEffect, useRef, useState } from "react"

export default function UseRefDemo(){
     const count = useRef(0);
     const [data,setData] = useState(0);

    const handleChange = ()=>{
           count.current++;
           console.log(count.current);
          // setData(data+1);
    }
    return(
        <>
        <h1>{count.current}</h1>
        <button onClick={handleChange}>click</button>
        </>
    )
}
