import { useContext,useState,createContext, Children } from "react"

   export const userContext = createContext();

export default function UserProvider({children}){
   const [data,setData] = useState(1);
    return(
        <userContext.Provider value={{data,setData}}>
           {children}
        </userContext.Provider>
    )
};
export function useUser(){
    return useContext(userContext);
}