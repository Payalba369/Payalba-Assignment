import logo from './logo.svg';
import './App.css';

import React, { useState } from 'react';
import Navigation from './Navigation';
import Footer from './Footer';
import PublicView from './PublicView';
import PrivateView from './PrivateView';

function App() {
  const [isLoggedIn, setIsLoggedIn] = useState(false);

  // Function to toggle login/logout
  const handleLoginLogout = () => {
    setIsLoggedIn(!isLoggedIn);
  };

  return (
    <div className="App">
      <Navigation isLoggedIn={isLoggedIn} onLoginLogout={handleLoginLogout} />
      <div className="view-container">
        {isLoggedIn ? <PrivateView /> : <PublicView />}
      </div>
      <Footer />
    </div>
  );
}

export default App;
