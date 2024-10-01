import logo from './logo.svg';
import './App.css';
import Counter from './counter';

function App() {
  return (
    <div className="App">
      <header className="App-header">
      <img 
          src="https://upload.wikimedia.org/wikipedia/commons/a/a7/React-icon.svg" 
          className="App-logo" 
          alt="React logo" 
        />
          
        <Counter/>
      </header>
    </div>
  );
}

export default App;


