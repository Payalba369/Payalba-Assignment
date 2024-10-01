import React from 'react';

function Navigation({ isLoggedIn, onLoginLogout }) {
  return (
    <nav className="navigation">
      <div>Navigation</div>
      <button onClick={onLoginLogout}>
        {isLoggedIn ? 'Logout' : 'Login'}
      </button>
    </nav>
  );
}

export default Navigation;