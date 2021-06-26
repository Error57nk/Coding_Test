const menubtn = document.getElementById("hm-btn");
var btnState = true;


menubtn.addEventListener("click",(e)=>{
  const btnmenutxt = document.getElementById("btn-link");
  const btnmenuicon = document.getElementById("menuico");
  const slink = document.getElementById("slink");

  if(btnState){
  btnmenuicon.classList.remove("fa-grip-lines");
  btnmenuicon.classList.add("fa-times");
  btnmenutxt.style.display = "inline-block";
  slink.style.opacity = "1";
  slink.style.height = "100vh";
  btnState=false;
  }else{
  btnmenuicon.classList.remove("fa-times");
  btnmenuicon.classList.add("fa-grip-lines");
  btnmenutxt.style.display = "none";
  slink.style.opacity = "0";
  slink.style.height = "0px";
  btnState=true;
  }
})