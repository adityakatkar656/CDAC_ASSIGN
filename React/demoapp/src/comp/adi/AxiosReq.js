import axios from "axios";
import { useEffect, useState } from "react"

export default function AxiosReq(){
    const [data,setData] = useState([]);
    const [loading,setLoading] = useState(false);
    useEffect(()=>{
        setLoading(true);
      axios.get("https://jsonplaceholder.typicode.com/users")
      .then((resp)=> {
        setData(resp.data)
        setLoading(false)
    })
      .catch(error => console.error)                 
    },[])
   if(loading){
    return(
        <h1>Loading...</h1>
    );
   }
    return(
        <div>
            {data.map((ele)=>{
                return(
                <p key={ele.id}>{ele.name}</p>
                )
            })}
        </div>
    )
}