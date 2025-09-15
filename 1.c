
<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1" />
  <title>Event Listeners Example</title>
</head>
<body>
  <button id="myButton">Click me!</button>
  <p id="message"></p>

  <script>
    // Get references to the elements
    const button = document.getElementById('myButton');
    const message = document.getElementById('message');

    // Add click event listener
    button.addEventListener('click', () => {
      message.textContent = 'Button was clicked!';
      message.style.color = 'green';
    });

    // Add mouseover event listener
    button.addEventListener('mouseover', () => {
      button.style.backgroundColor = 'lightblue';
    });

    // Add mouseout event listener to reset background color
    button.addEventListener('mouseout', () => {
      button.style.backgroundColor = '';
    });
  </script>
</body>
</html>
