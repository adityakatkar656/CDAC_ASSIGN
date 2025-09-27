import { Component } from "react";

export default class ClassDemo extends Component{
    constructor(props){
        super(props);
        this.state = {"color": "red"}
    }
//    static getDerivedStateFromProps(props,state){
//         console.log(state.color);
//         return {color:props.color};
//     }

    componentDidMount(){
        console.log("mount");
    }
     onchange = ()=>{
          this.setState({color:"blue"});
    }
    render(){
        return(
            <div>
                <h1>{this.state.color}</h1>
                <button onClick={this.onchange}>Change Color</button>
            </div>
        )
    }
}
