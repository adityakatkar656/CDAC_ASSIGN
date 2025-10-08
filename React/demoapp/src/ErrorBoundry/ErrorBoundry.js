const { Component } = require("react");

export default class ErrorBoundary extends Component{
    constructor(props){
        super(props);
        this.state = {hasError : false};
    }
     static getDerivedStateFromError(error) {
    // Update state so the next render will show th fallback UI.
    return { hasError: true };
  }
   componentDidCatch(err, Info) {
    console.log(err);
   }
    render(){
        if(this.state.hasError){
            return <h1>Something went wrong</h1>;
        }
        return this.props.children;
    }
}