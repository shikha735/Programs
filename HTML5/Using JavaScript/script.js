// JavaScript Document
function getStuff(){
	var list = document.querySelectorAll('#first');
	for(var i = 0; i < list.length; i++){
		list[i].onclick = talk;
	}
}
function talk(){
	alert("YoYo!!!");
}
window.onload=getStuff;
