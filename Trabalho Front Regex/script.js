document.getElementById("myForm").addEventListener("submit", function (event) {
  var name = document.getElementById("name").value;
  var email = document.getElementById("email").value;
  var phone = document.getElementById("phone").value;

  var namePattern = /^[a-zA-Z\s]*$/;
  var emailPattern = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
  var phonePattern = /^\d{10,}$/;

  var nameIsValid = namePattern.test(name);
  var emailIsValid = emailPattern.test(email);
  var phoneIsValid = phonePattern.test(phone);

  console.log(name);
  console.log(email);
  console.log(phone);

  if (!nameIsValid) {
    document.getElementById("nameError").innerHTML =
      "Por favor, insira um nome válido.";
    event.preventDefault();
  } else {
    document.getElementById("nameError").innerHTML = "";
  }

  if (!emailIsValid) {
    document.getElementById("emailError").innerHTML =
      "Por favor, insira um email válido.";
    event.preventDefault();
  } else {
    document.getElementById("emailError").innerHTML = "";
  }

  if (!phoneIsValid) {
    document.getElementById("phoneError").innerHTML =
      "Por favor, insira um número de telefone válido (mínimo 10 dígitos).";
    event.preventDefault();
  } else {
    document.getElementById("phoneError").innerHTML = "";
  }
});
