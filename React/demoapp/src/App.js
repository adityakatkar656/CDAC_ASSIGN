import logo from './logo.svg';
import './App.css';
import Factorial from './comp/Factorial';
import EventsDemo from './comp/EventsDemo';
import ClassDemo from './classComp/ClassDemo';
import Radio from './classComp/Radio';
import FromViewToComp from './classComp/FromViewToComp';
import ParentComponent from './comp/ParentComponent';
import UserDetails from './comp/UserDetails';

function App() {
  return (
    <div className="App">
      {/* <Factorial num="5"></Factorial>
      <EventsDemo/> */}
      {/* <ClassDemo color="yello"/> */}
      {/* <Radio/> */}
      {/* <FromViewToComp/> */}
      {/* <ParentComponent/> */}
      <UserDetails/>
    </div>
  );
}

export default App;