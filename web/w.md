### **1. Website (Register Page, Login Page, Other Pages)**  
Use **HTML, CSS, and JavaScript** to create forms for user authentication. Example:  
```html
<form id="registerForm">
    <input type="text" placeholder="Username" required>
    <input type="password" placeholder="Password" required>
    <button type="submit">Register</button>
</form>
```

---

### **2. Factorial**  
```js
function factorial(n) {
    return n === 0 ? 1 : n * factorial(n - 1);
}
console.log(factorial(5)); // 120
```

---

### **3. Current Day**  
```js
const days = ["Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"];
console.log(days[new Date().getDay()]);
```

---

### **4. Sort an Array**  
```js
let numbers = [5, 2, 9, 1, 3];
numbers.sort((a, b) => a - b);
console.log(numbers); // [1, 2, 3, 5, 9]
```

---

### **5. Add Item in Blank Array**  
```js
let items = [];
items.push("Apple");
console.log(items); // ["Apple"]
```

---

### **6. iFrames**  
```html
<iframe src="https://www.example.com" width="600" height="400"></iframe>
```

---

### **7. Request Form**  
```html
<form action="submit.php" method="post">
    <input type="text" name="name" required>
    <button type="submit">Submit</button>
</form>
```

---

### **8. Events**  
```js
document.getElementById("myButton").addEventListener("click", () => alert("Clicked!"));
```
```html
<button id="myButton">Click Me</button>
```