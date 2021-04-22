var otval = null
$("#btnlb").click()
function getInput(btnobj){
  var iid = $(btnobj).attr("id")
  if(iid == "btnlb"){
    $("#btnlb").addClass("btn-active")
    $("#btnkg").removeClass("btn-active")    
    otval = true    
  }else{
    $("#btnkg").addClass("btn-active")
    $("#btnlb").removeClass("btn-active")    
    otval = false
  }
 
  console.log(otval)
}


$('#dosingVal').bind('input', function() { 
  let i = $(this).val() // get the current value of the input field.
  if(!isNaN(i)){
    let wt = parseFloat(i)
    let wto = 0
    if(otval){
      wto = ((wt*2.2046226218)*0.05).toFixed(1);
    }else{
      wto = (wt*0.05).toFixed(1);
    }
    $(this).css({"border-color":"transparent"})   
    $("#dosingot").html(`PI dose = ${wto}gms`)
  }else{
    $(this).css({"border-color":"red"})
    $("#dosingot").html("Invalid Input")
    // alert("Enter Numeric Value")
  }
});