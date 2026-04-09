let signUpBtn=document.querySelector('.signupBtn');
let signInBtn=document.querySelector('.signinBtn');
let NameField=document.querySelector('.namefield');
let title=document.querySelector('.title');
let text=document.querySelector('.text');

signInBtn.addEventListener('click',()=>{
    NameField.style.maxHeight='0';
    title.innerHTML='Sign In';
    text.innerHTML='Lost password?';
    signUpBtn.classList.add('disable');
    signInBtn.classList.remove('disable');
})
signUpBtn.addEventListener('click',()=>{
    NameField.style.maxHeight='60px';
    title.innerHTML='Sign Up';
    text.innerHTML='Forget password?';
    signInBtn.classList.add('disable');
    signUpBtn.classList.remove('disable');
})