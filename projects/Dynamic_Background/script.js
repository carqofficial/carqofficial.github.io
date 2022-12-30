let time = new Date().toTimeString(); // taking local time as string

// time = prompt();
time = time.slice(0, 2); // taking the hours for validation check about morning, or afternoon etc.

time = parseInt(time); // parsing time into integer to fair comparison

body = document.querySelector("body");
if (time > 24 || time < 0) {
  document.write("<h1>invalid time</h1>"); // this is for invalid time cond. which help developer during website building
} else {
  // Changing wallpaper according to time zones
  if (time >= 5 && time < 7) {
    body.style.background = "url(./photos/perfect_morning.webp)";
  }
  else if (time >= 7 && time < 10) {
    body.style.background = "url(./photos/morning.webp)";
  }
  else if (time >= 10 && time < 13) {
    body.style.background = "url(./photos/mid_day.jpg)";
  }
  else if (time >= 13 && time < 16) {
    body.style.background = "url(./photos/afternoon.png)";
  }
  else if (time >= 16 && time < 18) {
    body.style.background = "url(./photos/late_afternoon.webp)";
    body.style.backgroundSize = "cover";
  }
  else if (time >= 18 && time < 21) {
    body.style.background = "url(./photos/evening.png)";
  }
  else if (time >= 21) {
    body.style.background = "url(./photos/night.jpg)";
    body.style.backgroundSize = "cover";
  }
  else if (time >= 0 && time < 3) {
    body.style.background = "url(./photos/midnight.webp)";
  } 
  else {
    body.style.background = "url(./photos/before_dawn.webp)";
  }
}

const date = new Date(); //creating fresh date object for better understanding

//creating month array
const monthNames = [
  "January",
  "February",
  "March",
  "April",
  "May",
  "June",
  "July",
  "August",
  "September",
  "October",
  "November",
  "December",
];

// Creating day array
const daysName = [
  "Sunday",
  "Monday",
  "Tuesday",
  "Wednesday",
  "Thursday",
  "Friday",
  "Saturday",
];

// taking the id, so that we can manipulate DOM
let displayTime = document.getElementById("time");

let min = parseInt(date.getMinutes()),
  hour = parseInt(date.getHours());

// if the digit come single, like if its "1" am then below returns "01"
if (min < 10) min = "0" + min;
if (hour < 10) hour = "0" + hour;

//Changing the DOM
displayTime.innerHTML = hour + ":" + min;

// Creating setInterval so that time will update without page refresh
setInterval(() => {
  b = new Date();
  min = b.getMinutes();
  hour = b.getHours();
  if (min < 10) min = "0" + min;
  if (hour < 10) hour = "0" + hour;
  displayTime.innerHTML = hour + ":" + min;
}, 1000);

//similarly displayed the weekday, month name as described earlier
let displayDateHTML = document.getElementById("date");
let displayMonth = monthNames[date.getMonth()];
let displayDay = daysName[date.getDay()];
let displayDate = date.getDate();

displayDateHTML.innerHTML =
  displayDay + ", " + `<nobr>${displayDate} ${displayMonth}</nobr>`;
