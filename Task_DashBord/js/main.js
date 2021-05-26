const CHART = document.getElementById("lineChart")
console.log(CHART)

let lineChart = new Chart(CHART,{
  type:'line',
  data:{
    labels:["","","","","",""],
    datasets:[
      {
        label:"This Week",
        fill:true,
        // lineTesion:0.1,
        backgroundColor:"rgba(252, 87, 95, 0.377)",
        borderColor:"rgb(252, 87, 94)",
        // borderStyleCap:"round",
        borderWidth:1,
        // borderJoinStyle:"miter",
        data:[15,18,20,15,17,16]        

      },
      {
        label:"Previous Week",
        fill:true,
        // lineTesion:0.1,
        backgroundColor:"rgba(117, 117, 117, 0.288)",
        borderColor:"rgba(117, 117, 117, 0.288)",
        // borderStyleCap:"round",
        borderWidth:1,
        // borderJoinStyle:"miter",
        data:[21,19,16,16,20,26]        

      }
    ]
  },
  options: {
    responsive: true,
    plugins: {
      legend: {
        position: 'top',
      },
      title: {
        display: true,
        text: 'Spent Time'
      }
    }
  }
});

const CHART2 = document.getElementById("radarChart")
console.log(CHART2)

let raderChart2 = new Chart(CHART2,{
  type:'radar',
  data:{
    labels:["Sci","Maths","Phy","Cs"],
    datasets:[
      {
        label:"This Month",
        fill:true,
        // lineTesion:0.1,
        backgroundColor:"rgba(252, 87, 95, 0.377)",
        borderColor:"rgb(252, 87, 94)",
        borderStyleCap:"round",
        borderWidth:1,
        borderJoinStyle:"round",
        data:[16,18,20,20]        

      },
      {
        label:"Previous Month",
        fill:true,
        lineTesion:0.1,
        backgroundColor:"rgba(117, 117, 117, 0.288)",
        borderColor:"rgba(117, 117, 117, 0.288)",
        // borderStyleCap:"round",
        borderWidth:1,
        // borderJoinStyle:"miter",
        data:[19,19,16,16]        

      }
    ]
  },
  options: {
    plugins: {
      filler: {
        propagate: false
      },
      'samples-filler-analyser': {
        target: 'chart-analyser'
      }
    },
    interaction: {
      intersect: false
    }
  }
 
})