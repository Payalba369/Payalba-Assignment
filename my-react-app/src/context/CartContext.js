// src/context/CartContext.js
import React, { createContext, useState, useEffect } from 'react';
import axios from 'axios';

export const CartContext = createContext();

export const CartProvider = ({ children }) => {
    const [cartItems, setCartItems] = useState([]);

    const fetchCartItems = async () => {
        const response = await axios.get('/cart.json');
        setCartItems(response.data.cartItems);
    };

    const addToCart = async (item) => {
        const updatedCart = [...cartItems, item];
        await axios.post('/cart.json', { cartItems: updatedCart });
        setCartItems(updatedCart);
    };

    const removeFromCart = async (itemId) => {
        const updatedCart = cartItems.filter(item => item.id !== itemId);
        await axios.post('/cart.json', { cartItems: updatedCart });
        setCartItems(updatedCart);
    };

    useEffect(() => {
        fetchCartItems();
    }, []);

    return (
        <CartContext.Provider value={{ cartItems, addToCart, removeFromCart }}>
            {children}
        </CartContext.Provider>
    );
};