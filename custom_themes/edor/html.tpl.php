<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" lang="en">

<head>
  <meta name="verify-v1" content="e3MOV90iw0qDePZu6RTQIkEoaxssH69SSCZ2JHh4jLA=" />
	<meta http-equiv="X-UA-Compatible" value="IE7">
<script type="text/javascript">window.NREUM||(NREUM={});NREUM.info={"licenseKey":"091eca083b","errorBeacon":"bam.nr-data.net","ttGuid":"","queueTime":0,"transactionName":"el1XRxFeCQhQExYAVlodUF0HVB0=","agent":"js-agent.newrelic.com/nr-411.min.js","agentToken":null,"applicationID":"100313","applicationTime":407,"beacon":"beacon-3.newrelic.com"}</script>
<script type="text/javascript">(window.NREUM||(NREUM={})).loader_config={xpid:"VQYDVlBUGwIAVFJTBA=="};window.NREUM||(NREUM={}),__nr_require=function(t,e,n){function r(n){if(!e[n]){var o=e[n]={exports:{}};t[n][0].call(o.exports,function(e){var o=t[n][1][e];return r(o?o:e)},o,o.exports)}return e[n].exports}if("function"==typeof __nr_require)return __nr_require;for(var o=0;o<n.length;o++)r(n[o]);return r}({1:[function(t,e){function n(t,e,n){n||(n={});for(var r=o[t],a=r&&r.length||0,s=n[i]||(n[i]={}),u=0;a>u;u++)r[u].apply(s,e);return s}function r(t,e){var n=o[t]||(o[t]=[]);n.push(e)}var o={},i="nr@context";e.exports={on:r,emit:n}},{}],2:[function(t){function e(t,e,n,i,s){return u?u-=1:r("err",[s||new UncaughtException(t,e,n)]),"function"==typeof a?a.apply(this,o(arguments)):!1}function UncaughtException(t,e,n){this.message=t||"Uncaught error with no additional information",this.sourceURL=e,this.line=n}function n(t){r("err",[t,(new Date).getTime()])}var r=t("handle"),o=t(6),i=t(5),a=window.onerror,s=!1,u=0;t("loader").features.push("err"),window.onerror=e,NREUM.noticeError=n;try{throw new Error}catch(d){"stack"in d&&(t(1),t(2),"addEventListener"in window&&t(3),window.XMLHttpRequest&&XMLHttpRequest.prototype&&XMLHttpRequest.prototype.addEventListener&&t(4),s=!0)}i.on("fn-start",function(){s&&(u+=1)}),i.on("fn-err",function(t,e,r){s&&(this.thrown=!0,n(r))}),i.on("fn-end",function(){s&&!this.thrown&&u>0&&(u-=1)}),i.on("internal-error",function(t){r("ierr",[t,(new Date).getTime(),!0])})},{1:5,2:4,3:3,4:6,5:1,6:14,handle:"D5DuLP",loader:"G9z0Bl"}],3:[function(t){function e(t){r.inPlace(t,["addEventListener","removeEventListener"],"-",n)}function n(t){return t[1]}var r=t(1),o=(t(3),t(2));if(e(window),"getPrototypeOf"in Object){for(var i=document;i&&!i.hasOwnProperty("addEventListener");)i=Object.getPrototypeOf(i);i&&e(i);for(var a=XMLHttpRequest.prototype;a&&!a.hasOwnProperty("addEventListener");)a=Object.getPrototypeOf(a);a&&e(a)}else XMLHttpRequest.prototype.hasOwnProperty("addEventListener")&&e(XMLHttpRequest.prototype);o.on("addEventListener-start",function(t){if(t[1]){var e=t[1];"function"==typeof e?this.wrapped=e["nr@wrapped"]?t[1]=e["nr@wrapped"]:e["nr@wrapped"]=t[1]=r(e,"fn-"):"function"==typeof e.handleEvent&&r.inPlace(e,["handleEvent"],"fn-")}}),o.on("removeEventListener-start",function(t){var e=this.wrapped;e&&(t[1]=e)})},{1:15,2:1,3:14}],4:[function(t){var e=(t(3),t(1)),n=t(2);e.inPlace(window,["requestAnimationFrame","mozRequestAnimationFrame","webkitRequestAnimationFrame","msRequestAnimationFrame"],"raf-"),n.on("raf-start",function(t){t[0]=e(t[0],"fn-")})},{1:15,2:1,3:14}],5:[function(t){function e(t){var e=t[0];"string"==typeof e&&(e=new Function(e)),t[0]=n(e,"fn-")}var n=(t(3),t(1)),r=t(2);n.inPlace(window,["setTimeout","setInterval","setImmediate"],"setTimer-"),r.on("setTimer-start",e)},{1:15,2:1,3:14}],6:[function(t){function e(){o.inPlace(this,s,"fn-")}function n(t,e){o.inPlace(e,["onreadystatechange"],"fn-")}function r(t,e){return e}var o=t(1),i=t(2),a=window.XMLHttpRequest,s=["onload","onerror","onabort","onloadstart","onloadend","onprogress","ontimeout"];window.XMLHttpRequest=function(t){var n=new a(t);try{i.emit("new-xhr",[],n),o.inPlace(n,["addEventListener","removeEventListener"],"-",function(t,e){return e}),n.addEventListener("readystatechange",e,!1)}catch(r){try{i.emit("internal-error",r)}catch(s){}}return n},window.XMLHttpRequest.prototype=a.prototype,o.inPlace(XMLHttpRequest.prototype,["open","send"],"-xhr-",r),i.on("send-xhr-start",n),i.on("open-xhr-start",n)},{1:15,2:1}],7:[function(t){function e(){function e(t){if("string"==typeof t&&t.length)return t.length;if("object"!=typeof t)return void 0;if("undefined"!=typeof ArrayBuffer&&t instanceof ArrayBuffer&&t.byteLength)return t.byteLength;if("undefined"!=typeof Blob&&t instanceof Blob&&t.size)return t.size;if("undefined"!=typeof FormData&&t instanceof FormData)return void 0;try{return JSON.stringify(t).length}catch(e){return void 0}}function n(t){var n=this.params,r=this.metrics;if(!this.ended){this.ended=!0;for(var i=0;u>i;i++)t.removeEventListener(s[i],this.listener,!1);if(!n.aborted){if(r.duration=(new Date).getTime()-this.startTime,4===t.readyState){n.status=t.status;var a=t.responseType,d="arraybuffer"===a||"blob"===a||"json"===a?t.response:t.responseText,f=e(d);if(f&&(r.rxSize=f),this.sameOrigin){var c=t.getResponseHeader("X-NewRelic-App-Data");c&&(n.cat=c.split(", ").pop())}}else n.status=0;r.cbTime=this.cbTime,o("xhr",[n,r])}}}function r(t,e){var n=i(e),r=t.params;r.host=n.hostname+":"+n.port,r.pathname=n.pathname,t.sameOrigin=n.sameOrigin}t("loader").features.push("xhr");var o=t("handle"),i=t(1),a=t(5),s=["load","error","abort","timeout"],u=s.length,d=t(2);t(3),t(4),a.on("new-xhr",function(){this.totalCbs=0,this.called=0,this.cbTime=0,this.end=n,this.ended=!1,this.xhrGuids={}}),a.on("open-xhr-start",function(t){this.params={method:t[0]},r(this,t[1]),this.metrics={}}),a.on("open-xhr-end",function(t,e){"loader_config"in NREUM&&"xpid"in NREUM.loader_config&&this.sameOrigin&&e.setRequestHeader("X-NewRelic-ID",NREUM.loader_config.xpid)}),a.on("send-xhr-start",function(t,n){var r=this.metrics,o=t[0],i=this;if(r&&o){var d=e(o);d&&(r.txSize=d)}this.startTime=(new Date).getTime(),this.listener=function(t){try{"abort"===t.type&&(i.params.aborted=!0),("load"!==t.type||i.called===i.totalCbs&&(i.onloadCalled||"function"!=typeof n.onload))&&i.end(n)}catch(e){try{a.emit("internal-error",e)}catch(r){}}};for(var f=0;u>f;f++)n.addEventListener(s[f],this.listener,!1)}),a.on("xhr-cb-time",function(t,e,n){this.cbTime+=t,e?this.onloadCalled=!0:this.called+=1,this.called!==this.totalCbs||!this.onloadCalled&&"function"==typeof n.onload||this.end(n)}),a.on("xhr-load-added",function(t,e){var n=""+d(t)+!!e;this.xhrGuids&&!this.xhrGuids[n]&&(this.xhrGuids[n]=!0,this.totalCbs+=1)}),a.on("xhr-load-removed",function(t,e){var n=""+d(t)+!!e;this.xhrGuids&&this.xhrGuids[n]&&(delete this.xhrGuids[n],this.totalCbs-=1)}),a.on("addEventListener-end",function(t,e){e instanceof XMLHttpRequest&&"load"===t[0]&&a.emit("xhr-load-added",[t[1],t[2]],e)}),a.on("removeEventListener-end",function(t,e){e instanceof XMLHttpRequest&&"load"===t[0]&&a.emit("xhr-load-removed",[t[1],t[2]],e)}),a.on("fn-start",function(t,e,n){e instanceof XMLHttpRequest&&("onload"===n&&(this.onload=!0),("load"===(t[0]&&t[0].type)||this.onload)&&(this.xhrCbStart=(new Date).getTime()))}),a.on("fn-end",function(t,e){this.xhrCbStart&&a.emit("xhr-cb-time",[(new Date).getTime()-this.xhrCbStart,this.onload,e],e)})}window.XMLHttpRequest&&XMLHttpRequest.prototype&&XMLHttpRequest.prototype.addEventListener&&!/CriOS/.test(navigator.userAgent)&&e()},{1:8,2:11,3:3,4:6,5:1,handle:"D5DuLP",loader:"G9z0Bl"}],8:[function(t,e){e.exports=function(t){var e=document.createElement("a"),n=window.location,r={};e.href=t,r.port=e.port;var o=e.href.split("://");return!r.port&&o[1]&&(r.port=o[1].split("/")[0].split(":")[1]),r.port&&"0"!==r.port||(r.port="https"===o[0]?"443":"80"),r.hostname=e.hostname||n.hostname,r.pathname=e.pathname,"/"!==r.pathname.charAt(0)&&(r.pathname="/"+r.pathname),r.sameOrigin=!e.hostname||e.hostname===document.domain&&e.port===n.port&&e.protocol===n.protocol,r}},{}],handle:[function(t,e){e.exports=t("D5DuLP")},{}],D5DuLP:[function(t,e){function n(t,e){var n=r[t];return n?n.apply(this,e):(o[t]||(o[t]=[]),void o[t].push(e))}var r={},o={};e.exports=n,n.queues=o,n.handlers=r},{}],11:[function(t,e){function n(t){if(!t||"object"!=typeof t&&"function"!=typeof t)return-1;if(t===window)return 0;if(o.call(t,"__nr"))return t.__nr;try{return Object.defineProperty(t,"__nr",{value:r,writable:!0,enumerable:!1}),r}catch(e){return t.__nr=r,r}finally{r+=1}}var r=1,o=Object.prototype.hasOwnProperty;e.exports=n},{}],loader:[function(t,e){e.exports=t("G9z0Bl")},{}],G9z0Bl:[function(t,e){function n(){var t=p.info=NREUM.info;if(t&&t.agent&&t.licenseKey&&t.applicationID&&u&&u.body){p.proto="https"===c.split(":")[0]||t.sslForHttp?"https://":"http://",a("mark",["onload",i()]);var e=u.createElement("script");e.src=p.proto+t.agent,u.body.appendChild(e)}}function r(){"complete"===u.readyState&&o()}function o(){a("mark",["domContent",i()])}function i(){return(new Date).getTime()}var a=t("handle"),s=window,u=s.document,d="addEventListener",f="attachEvent",c=(""+location).split("?")[0],p=e.exports={offset:i(),origin:c,features:[]};u[d]?(u[d]("DOMContentLoaded",o,!1),s[d]("load",n,!1)):(u[f]("onreadystatechange",r),s[f]("onload",n)),a("mark",["firstbyte",i()])},{handle:"D5DuLP"}],14:[function(t,e){function n(t,e,n){e||(e=0),"undefined"==typeof n&&(n=t?t.length:0);for(var r=-1,o=n-e||0,i=Array(0>o?0:o);++r<o;)i[r]=t[e+r];return i}e.exports=n},{}],15:[function(t,e){function n(t,e,r,s){function nrWrapper(){try{var n,a=u(arguments),d=this,f=r&&r(a,d)||{}}catch(c){i([c,"",[a,d,s],f])}o(e+"start",[a,d,s],f);try{return n=t.apply(d,a)}catch(p){throw o(e+"err",[a,d,p],f),p}finally{o(e+"end",[a,d,n],f)}}return a(t)?t:(e||(e=""),nrWrapper[n.flag]=!0,nrWrapper)}function r(t,e,r,o){r||(r="");var i,s,u,d="-"===r.charAt(0);for(u=0;u<e.length;u++)s=e[u],i=t[s],a(i)||(t[s]=n(i,d?s+r:r,o,s,t))}function o(t,e,n){try{s.emit(t,e,n)}catch(r){i([r,t,e,n])}}function i(t){try{s.emit("internal-error",t)}catch(e){}}function a(t){return!(t&&"function"==typeof t&&t.apply&&!t[n.flag])}var s=t(1),u=t(2);e.exports=n,n.inPlace=r,n.flag="nr@wrapper"},{1:1,2:14}]},{},["G9z0Bl",2,7]);</script>
<meta http-equiv="X-UA-Compatible" value="IE8">
<meta http-equiv="X-UA-Compatible" value="IE9">
<meta http-equiv="Content-Type" content="text/html; charset=utf-8"/>


  <link rel="shortcut icon" href="http://episcopalrochester.org/images/favicon/episcopalian.ico" type="image/x-icon">




  <meta name="description" content="  " />
  <meta name="keywords" content="  " />
  <title>
    
      
        Joy in Christ
      
     | 
      Episcopal Diocese of Rochester
</title>




  <link rel="stylesheet" type="text/css" href="http://episcopalrochester.org/stylesheets/print.css" media="print" />

  <meta http-equiv="X-UA-Compatible" content="IE=8" >

  <script src="http://episcopalrochester.org/javascripts/application.js?1296424828" type="text/javascript"></script>

  <script type="text/javascript" src="http://ajax.googleapis.com/ajax/libs/jquery/1.2.6/jquery.min.js"></script>
  <script type="text/javascript" src="http://s3.amazonaws.com/dfc_attachments/public/documents/2149/jqueryslidemenu.js"></script>
  <link rel="shortcut icon" href="http://episcopalrochester.org/images/icons/episcopal-sheild.ico" />
  

  <link href="http://episcopalrochester.org/stylesheets/buttons/screen.css?1298439022" media="screen" rel="stylesheet" type="text/css" />
  
  <link href="http://episcopalrochester.org/stylesheets/new-rochester.css?1329940667" media="screen" rel="stylesheet" type="text/css" />

  <style type="text/css">/* hide people toolbar */

h2 {
  margin-bottom: 10px;
}
#drupal-page li {
  list-style-type: disc !important;
margin-left: 20px;
}
div#navbuttons {
  display: none;
  visiblity: hidden;
}

#navwrapper a, #navwrapper a:visited {
  line-height: 14px;
  font-weight: normal;
}

#navwrapper ul ul a, #navwrapper ul ul a:visited {
  line-height: 18px;
}
hr.small {
  border: 0px;
}

.jqueryslidemenu{
font: bold 12px Verdana;
width: 100%;
}

.jqueryslidemenu ul{
margin: 0;
padding: 0;
list-style-type: none;
}

/*Top level list items*/
.jqueryslidemenu ul li{
position: relative;
display: inline;
float: left;
}

/*Top level menu link items style*/
.jqueryslidemenu ul li a{
background: url("http://s3.amazonaws.com/dfc_attachments/images/1353093/gradient_web.png") repeat scroll center top #51b6e0;
display: block;
color: white;
padding-left: 20px;
padding: 8px 14px;
border-right: 1px solid #51b6e0;
color: #2d2b2b;
text-decoration: none;
font-weight: normal;
}

* html .jqueryslidemenu ul li a{ /*IE6 hack to get sub menu links to behave correctly*/
display: inline-block;
}

.jqueryslidemenu ul li a:link, .jqueryslidemenu ul li a:visited{
color: white;
}

.jqueryslidemenu ul li a:hover{
background: #229fd3; /*tab link background during hover state*/
color: white;
}
  
/*1st sub level menu*/
.jqueryslidemenu ul li ul{
position: absolute;
left: 0;
display: block;
visibility: hidden;
background: #51b6e0;
}

/*Sub level menu list items (undo style from Top level List Items)*/
.jqueryslidemenu ul li ul li{
display: list-item;
background: #51b6e0;
border-bottom: 1px solid #9ed4eb;
float: none;
}

/*All subsequent sub menu levels vertical offset after 1st level sub menu */
.jqueryslidemenu ul li ul li ul{
top: 0;
}

/* Sub level menu links style */
.jqueryslidemenu ul li ul li a{
font: normal 13px Verdana;
width: 160px; /*width of sub menus*/
padding: 5px;
margin: 0;
border-top-width: 0;
/* border-bottom: 1px solid #9ed4eb; */
border-bottom: 0px;
}

.jqueryslidemenuz ul li ul li a:hover{ /*sub menus hover style*/
background: #229fd3;
color: black;
}

/* ######### CSS classes applied to down and right arrow images  ######### */

.downarrowclass{
position: absolute;
top: 12px;
right: 7px;
}

.rightarrowclass{
position: absolute;
top: 6px;
right: 5px;
}

#primary .item {
border-bottom: 1px solid #B8B490;
}

#rightside .item{
border-bottom: 1px solid #B8B490;
}

#globalheaderimage {
padding-bottom: 0px;
}

#globalheader {
    background-color: #51b6e0;
      -moz-border-radius: 15px 15px 0px 0px;
    -webkit-border-radius: 15px 15px 0px 0px;
    border-radius: 15px 15px 0px 0px;
}

#globalheadernav li a {
color: white;
}

body {
background: url("/images/rochester/bg-new.png") no-repeat scroll center top #d9d4b7;
font-family: "Droid Sans",Arial, Tahoma, Verdana;
font-size: .87em;
}

#pagewrapper {
border:1px solid #371041;
}

h3 {
  -moz-border-radius: 5px 0px 5px 5px;
    -webkit-border-radius: 5px 0px 5px 5px;
    border-radius: 5px 0px 5px 5px;
}

#pagewrapper {
  -moz-border-radius:  15px 15px 0px 0px;
    -webkit-border-radius: 15px 15px 0px 0px;
    border-radius: 15px 15px 0px 0px;
   -moz-box-shadow: 0 5px 10px #000000;
   -webkit-box-shadow: 0 5px 10px #000000;
   box-shadow: 0 5px 10px #000000;
}

body {
    background-image: none;
    background-color: #C5EAFA;
}

#footer {
background-image: none;
background: #64c2f3;
}
#primarycontent {
  margin: 15px;
  width: 635px;
}

/* Added by Matt Townsend */

/* General */

body {
  line-height: 1.6em;
}

h1 {
  line-height: 30px;
  font-family: "EB Garamond", Arial, sans;
}

#primary ul li {
  background: none;
  list-style-type: disc;
  font-size: inherit;
  padding-left:5px;
}

#primary ul ul li {
  background: none !important;
  list-style-type: disc;
  font-size: inherit;
  padding-left:5px !important;
}

#primary ul {
  margin-left: 15px;
}

#primary ul ul {
  margin-left: 20px;
}

.addthissection {
  background:#ededed;
  border: 1px #f1f1f1 solid;
  padding: 5px;
}

#primary .addthissection img {
  margin: 0px;
}

#primary .back-button {
  display: none;
}

/* News */

.newsdetail_2 h2 {
  font-size: 24px;
  line-height: 30px;
}

.chunk {
  border-bottom: 0px;
  padding-right: 8px;
}

.news-date {
  font-family: inherit;
  text-align: left;
  font-size: .9em;
}

p.subheading {
  font-size: 16px;
  font-style: italic;
}

#globalheadersearch {
  left: 774px;
  top: 10px;
}

#globalheadersearch form {
  line-height: 0px;
}

#globalheadersearch input {
  font-size: 10px;
  line-height: 14px;
  border: 1px #22a9d3 solid;
  background: #66cbea;
  color: #fff;
  height: auto;
  padding: 4px;
  box-shadow: none;
  border-radius: none;
  margin: 0px;
  -webkit-appearance: none;
}

#navwrapper {
  padding-top: 3px;
  background: url("http://s3.amazonaws.com/dfc_attachments/images/3093/gradient_web.png") repeat-x scroll center bottom #51b6e0;
}</style>
  <style type="text/css">.front-info {
  float: left;
  width: 47%;
  text-align: left;
  padding-top: 10px;
}

#mission.front-info {
  margin: 10px 1% 10px 2%;
}

#bishop.front-info {
  margin: 10px 2% 10px 1%;
}

.front-info h2 {
  font-family: "EB Garamond", Arial, sans;
  margin-bottom: 8px;
  font-size: 24px;
}

.front-info ul {
  padding-left: 10px;
}

.front-info li {
  list-style: disc;
  margin-left: 10px;
}

.front-info img {
  margin: 10px 0px;
}

hr {
color: #ccc;
background-color: #ccc;
width: 96%;
height: 1px;
clear: both;
margin: 15px 2%;
padding: 0px;
border: 0px;
}

#buttons {
margin-left: -10px;
z-index: 999999;
}

#slideshow {
/* height: 530px; */
height: auto;
margin-top: 33px;
background: white;
}

#primary {
display: none;
}

#rightside {
display: none;
}

/*============================*/
/*=== Custom Slider Styles ===*/
/*============================*/

#slider {
  position:relative;
  width:960px;
  height:368px;
  background:url(/images/nivo/loading.gif) no-repeat 50% 50%;
}
#slider img {
  position:absolute;
  top:0px;
  left:0px;
  display:block;
}
#slider a {
  border:0;
  display:block;
}

#slideshow-pager {
margin-top: -30px;
position: absolute;
z-index: 10;
right: 10px;
}

#slideshow .controls {
  position: absolute;
  margin-top: -198px;
  z-index: 10;
  width: 100%;
}

.nivo-controlNav {
  position:absolute;
  bottom: 0px;
}
#slideshow-pager a,
.nivo-controlNav a {
  display:block;
  width:22px;
  height:22px;
  background:url(/images/nivo/bullets.png) no-repeat;
  text-indent:-9999px;
  border:0;
  margin-right:3px;
  float:left;
}
#slideshow-pager a.activeSlide,
.nivo-controlNav a.active {
  background-position:0 -22px;
}

#slideshow .controls a,
.nivo-directionNav a {
  display:block;
  width:30px;
  height:30px;
  background:url(/images/nivo/arrows.png) no-repeat;
  text-indent:-9999px;
  border:0;
  position: absolute;
}
#slideshow .controls li.next a,
a.nivo-nextNav {
  background-position:-30px 0;
  right:15px;
}
#slideshow .controls li.prev a,
a.nivo-prevNav {
  left:15px;
}

.nivo-caption {
    text-shadow:block;
    font-family: Helvetica, Arial, sans-serif;
}
.nivo-caption a { 
    color:#efe9d1;
    text-decoration:underline;
}


 
/* The Nivo Slider styles */
.nivoSlider {
  position:relative;
}
.nivoSlider img {
  position:absolute;
  top:0px;
  left:0px;
}
a.nivo-imageLink {
 cursor: default;
}
/* If an image is wrapped in a link */
.nivoSlider a.nivo-imageLink {
  position:absolute;
  top:0px;
  left:0px;
  width:100%;
  height:100%;
  border:0;
  padding:0;
  margin:0;
  z-index:60;
  display:block;
}
/* The slices in the Slider */
.nivo-slice {
  display:block;
  position:absolute;
  z-index:50;
  height:100%;
}
/* Caption styles */
.nivo-caption {
  position:absolute;
  left:0px;
  bottom:0px;
  background:#000;
  color:#fff;
  opacity:0.8; /* Overridden by captionOpacity setting */
  width:100%;
  z-index:89;
}
.nivo-caption p {
  padding:5px;
  margin:0;
}
.nivo-caption a {
  display:inline !important;
}
.nivo-html-caption {
    display:block;
}
/* Direction nav styles (e.g. Next & Prev) */
.nivo-directionNav a {
  position:absolute;
  top:45%;
  z-index:99;
  cursor:pointer;
}
.nivo-prevNav {
  left:0px;
}
.nivo-nextNav {
  right:0px;
}
/* Control nav styles (e.g. 1,2,3...) */
.nivo-controlNav a {
  position:relative;
  z-index:99;
  cursor:pointer;
}
.nivo-controlNav a.active {
  font-weight:bold;
}

.slider-cell-text {
  float: right;
  position: relative;
  z-index: 10;
  background: black;
  opacity: 0.65;
  top: 286px;
  padding: 15px 0px 15px 25px;
  color: #fff;
  width: 935px;
  text-align: left;
  height: 52px;
}

.slider-cell-text-title {
  font-size: 24px;
  padding-bottom: 8px;
  margin-bottom: 8px;
  width: 100%;
  border-bottom: 1px #fff solid;
  opacity: 1.0;
}

.slider-cell-text-desc {
  font-size: 16px;
    opacity: 1.0;
}</style>
  <meta name="google-site-verification" content="yaFB4LwBc-nRQPoIbXURnFm6Te4Ec4n8zh3nnZDwNec" />
<link href='http://fonts.googleapis.com/css?family=EB+Garamond' rel='stylesheet' type='text/css'>
<link href='http://fonts.googleapis.com/css?family=Droid+Sans:400,700' rel='stylesheet' type='text/css'>
<script type="text/javascript">
var jQueryStock = jQuery.noConflict(true);
var $ = jQueryStock;
</script>
<script src="http://ajax.googleapis.com/ajax/libs/jquery/1.10.1/jquery.min.js"></script>
<script type="text/javascript" src="https://maps.googleapis.com/maps/api/js?v=3.exp$key=AIzaSyBHK4EdzSisrtu6h-8tOU_u0csjekCsxAg&sensor=false"></script>
<script type="text/javascript" src="http://s3.amazonaws.com/dfc_attachments/public/documents/3178157/jquery.csv-0.71.min.js"></script>
<script type="text/javascript" src="http://s3.amazonaws.com/dfc_attachments/public/documents/3178162/gmap3.min.js"></script>
<script type="text/javascript" src="http://s3.amazonaws.com/dfc_attachments/public/documents/3178210/edormap.js"></script>
 	 
  
</head>

<body>
<div align="center">
  <div id="pagewrapper">
    
    <div id="globalheader">
      

      
      <h3 class="globallogo">
  <!-- this is where a global national logo goes-->
      </h3>
      <div id="globalheadersearch">
        <form action="http://episcopalrochester.org/digital_faith/search" method="get">
          <input id="search" name="query" type="text" />
          <input id="button" type="submit" value="Search" />
        </form>
      </div>
  
      <ul id="globalheadernav">
        
        
         
          <li><a href="http://www.episcopalrochester.org/index.html" title="Diocesan Home">DIOCESAN HOME</a></li>|
<!-- <li><a href="http://www.episcopalrochester.org/bishop/bishops-office.html" title="Bishop's Pages">BISHOP'S PAGES</a></li>|
<li><a href="http://www.episcopalrochester.org/news/news.html" title="News">NEWS</a></li>|
<li><a href="http://www.episcopalrochester.org/digital_faith/events/" title="Events">EVENTS</a></li>|-->
<li><a href="http://episcopalrochester.org/church-map.html" title="Church Locator">FIND A CHURCH</a></li>
          

             </ul>
      </div>      
    <div id="globalheaderimage">
      
        <a href="http://episcopalrochester.org/"><img src="http://s3.amazonaws.com/dfc_attachments/images/3254960/banner5.png" alt="Episcopal Diocese of Rochester - Joy in Christ as a way of life"></a>
<script type="text/javascript" src="http://ajax.googleapis.com/ajax/libs/jquery/1.2.6/jquery.min.js"></script>
<script type="text/javascript" src="http://s3.amazonaws.com/dfc_attachments/public/documents/2149/jqueryslidemenu.js"></script>  
      
    </div>    
    

    
    <div id="leftside">
     
        
      
        
  
      <div id="navwrapper">
<?php
  $homepage = str_replace("\n","",file_get_contents("http://episcopalrochester.org/index.html"));
  preg_match('/<div id="myslidemenu".*<!-- \/#myslidemenu -->/',$homepage,$nav);
  $nav[0] = str_replace('href="/','href="http://episcopalrochester.org/',$nav[0]);
  print $nav[0];
?>
   </div></div>    
<br />
  <div id="drupal-page" style="padding: 30px 20px; text-align: left;">
<?php print $page; ?>
</div> 

<div id="primary">

<div id="primarycontent" class="dfc_controller dfc_controller index" >
  
     <br>
    <div id="left-main">
        <h3><a href="http://episcopalrochester.org/digital_faith/news">Diocesan News</a></h3>
        

<div class="news">
  
    <div class="chunk">
      <h4 class="title"><a href="http://www.episcopalrochester.org:/dfc/newsdetail_2/3165494">Flooding in Penn Yan/Yates County</a></h4>
      <div class="news-date">May 16, 2014</div>	
      
      
      <div class="item">
            <div class="news-image">
              
            </div>
            
              <div class="subheading">
                Update and how you can help
              </div>
            
            <p class="newsfeed newsbodyclip">
              Several of you have called to ask how you can help with relief efforts in Penn Yan assevere flooding continues.</p>
            </p>
            <div style="clear:both;"></div>
        <div class="read-more">
          <a href="http://www.episcopalrochester.org:/dfc/newsdetail_2/3165494">More</a>
        </div>
      </div>
    </div>
  
    <div class="chunk">
      <h4 class="title"><a href="http://www.episcopalrochester.org:/dfc/newsdetail_2/3161277">Kristin Woodard and Lisa Bodenstedt Welcomed to the Bishop’s Staff</a></h4>
      <div class="news-date">September 04, 2013</div>	
      
      
      <div class="item">
            <div class="news-image">
              
            </div>
            
              <div class="subheading">
                New hires begin this month
              </div>
            
            <p class="newsfeed newsbodyclip">
              ROCHESTER - The Episcopal Diocese of Rochester has hired a Diocesan Accountant and an Interim Manager for the Good Book Store.</p>
            </p>
            <div style="clear:both;"></div>
        <div class="read-more">
          <a href="http://www.episcopalrochester.org:/dfc/newsdetail_2/3161277">More</a>
        </div>
      </div>
    </div>
  
    <div class="chunk">
      <h4 class="title"><a href="http://www.episcopalrochester.org:/dfc/newsdetail_2/3159653">May 29 meeting to discuss public gardening opportunity for worship communities</a></h4>
      <div class="news-date">May 15, 2013</div>	
      
      
      <div class="item">
            <div class="news-image">
              
            </div>
            
              <div class="subheading">
                ROCHESTER
              </div>
            
            <p class="newsfeed newsbodyclip">
              An upcoming meeting will discuss how religious institutions can participate in Lots of Food, a new resource for creating public food forests and edible gardens intended for free community use. Open to all Rochester-area worship communities, the discussion will be held at 4:30 p.m. on Wednesday, May 29, at the Episcopal Diocese of Rochester offices, 935 East Ave.</p>
            </p>
            <div style="clear:both;"></div>
        <div class="read-more">
          <a href="http://www.episcopalrochester.org:/dfc/newsdetail_2/3159653">More</a>
        </div>
      </div>
    </div>
  
    <div class="chunk">
      <h4 class="title"><a href="http://www.episcopalrochester.org:/dfc/newsdetail_2/3158962">Bishop for Armed Services, Federal Ministries to Visit Rochester</a></h4>
      <div class="news-date">April 03, 2013</div>	
      
      
      <div class="item">
            <div class="news-image">
              
            </div>
            
            <p class="newsfeed newsbodyclip">
              ROCHESTER - The Rt. Rev. James B. &ldquo;Jay&rdquo; Magness, Episcopal Bishop Suffragan for the Armed Services and Federal Ministries, will visit Rochester on May 22 and 23, 2013. During his visit, there will be at least two opportunities for members of the community and clergy to talk with Bishop Magness about ministries for veterans and prisoners.</p>
            </p>
            <div style="clear:both;"></div>
        <div class="read-more">
          <a href="http://www.episcopalrochester.org:/dfc/newsdetail_2/3158962">More</a>
        </div>
      </div>
    </div>
  
    <div class="chunk">
      <h4 class="title"><a href="http://www.episcopalrochester.org:/dfc/newsdetail_2/3158293">Social Media in the Church</a></h4>
      <div class="news-date">March 01, 2013</div>	
      
      
      <div class="item">
            <div class="news-image">
              
            </div>
            
            <p class="newsfeed newsbodyclip">
              Changes in the religious landscape of the world today, as well as advances in modern technology, present serious challenges and exciting possibilities for the Church. Despite the numerical decline of mainline churches in America, a recent Pew report found that two-thirds of those who claimed no religion say they still believe in God, and one-fifth say they pray every day. Diana Butler Bass observes, &ldquo;The United States...</p>
            </p>
            <div style="clear:both;"></div>
        <div class="read-more">
          <a href="http://www.episcopalrochester.org:/dfc/newsdetail_2/3158293">More</a>
        </div>
      </div>
    </div>
  
    <div class="chunk">
      <h4 class="title"><a href="http://www.episcopalrochester.org:/dfc/newsdetail_2/3158292">Walking St. George's Path</a></h4>
      <div class="news-date">March 01, 2013</div>	
      
      
      <div class="item">
            <div class="news-image">
              
            </div>
            
            <p class="newsfeed newsbodyclip">
              A little more than twenty years ago, St. George&rsquo;s Episcopal Church and the Diocese of Rochester jointly agreed to move the parish to an area of Monroe County with no existing Episcopal presence. Ten acres of land just east of the village of Hilton became St. George&rsquo;s new home after more than a century in the Charlotte Beach area.</p>
            </p>
            <div style="clear:both;"></div>
        <div class="read-more">
          <a href="http://www.episcopalrochester.org:/dfc/newsdetail_2/3158292">More</a>
        </div>
      </div>
    </div>
  
    <div class="chunk">
      <h4 class="title"><a href="http://www.episcopalrochester.org:/dfc/newsdetail_2/3158289">Keep watch this night</a></h4>
      <div class="news-date">March 01, 2013</div>	
      
      
      <div class="item">
            <div class="news-image">
              
            </div>
            
              <div class="subheading">
                How Christ Church, Rochester, brings young people through its doors with an ancient tradition
              </div>
            
            <p class="newsfeed newsbodyclip">
              It&rsquo;s hard to talk about welcoming younger people into Episcopal churches without discussing leading-edge technology and social media. While many churches have found success in reaching out to teenagers and twenty-somethings through novel channels, others - like Christ Episcopal Church in Rochester, N.Y. - have likewise seen increased attendance among these age groups through something you might call unconventional con...</p>
            </p>
            <div style="clear:both;"></div>
        <div class="read-more">
          <a href="http://www.episcopalrochester.org:/dfc/newsdetail_2/3158289">More</a>
        </div>
      </div>
    </div>
  
</div>


                               
       
    </div>
    <div id="right-main">
       <h3><a href="http://episcopalrochester.org/digital_faith/news?global=true">Parish News</a></h3>        
       
       

<div class="news">
  
    <div class="chunk">
      <h4 class="title"><a href="http://st-stephens-church-rochester.episcopalrochester.org:/dfc/newsdetail_2/3154619">Exploring an Episcopal School </a></h4>
      <div class="news-date">July 30, 2012</div>	
      
      <h5 class="from">
        <a href="http://st-stephens-church-rochester.episcopalrochester.org:/digital_faith">St. Stephen's Church, Rochester, Rochester</a>
      </h5>
      
      <div class="item">
            <div class="news-image">
              
            </div>
            
              <div class="subheading">
                Market Feasibility Study Results
              </div>
            
            <p class="newsfeed newsbodyclip">
              In December 2011 Diocesan Council approved funds to conduct a Market Feasibility Study for an Episcopal School in Rochester. A survey of community leaders was conducted by a consultant at the same time clergy and lay members across the diocese were surveyed by the School Exploratory Team.</p>
            </p>
            <div style="clear:both;"></div>
        <div class="read-more">
          <a href="http://st-stephens-church-rochester.episcopalrochester.org:/dfc/newsdetail_2/3154619">More</a>
        </div>
      </div>
    </div>
  
    <div class="chunk">
      <h4 class="title"><a href="http://st-stephens-church-rochester.episcopalrochester.org:/dfc/newsdetail_2/3153273">Take the Episcopal School Survey</a></h4>
      <div class="news-date">May 16, 2012</div>	
      
      <h5 class="from">
        <a href="http://st-stephens-church-rochester.episcopalrochester.org:/digital_faith">St. Stephen's Church, Rochester, Rochester</a>
      </h5>
      
      <div class="item">
            <div class="news-image">
              
            </div>
            
            <p class="newsfeed newsbodyclip">
              We are exploring the possibility of starting an Episcopal School in the city of Rochester. An exploratory team has developed a preliminary model for an elementary (K-5) school. A Market Study of the model is being conducted in the Maplewood neighborhood, the proposed site of the school,and in the church. All lay people are invited and encouraged to give us feedback on the schooldesign.</p>
            </p>
            <div style="clear:both;"></div>
        <div class="read-more">
          <a href="http://st-stephens-church-rochester.episcopalrochester.org:/dfc/newsdetail_2/3153273">More</a>
        </div>
      </div>
    </div>
  
    <div class="chunk">
      <h4 class="title"><a href="http://chapel-of-the-good-shepherd-ro.episcopalrochester.org:/dfc/newsdetail_2/3153236">ESLC Receives Grant from Daisy Marquis Jones Foundation</a></h4>
      <div class="news-date">May 13, 2012</div>	
      
      <h5 class="from">
        <a href="http://chapel-of-the-good-shepherd-ro.episcopalrochester.org:/digital_faith">Chapel of the Good Shepherd - Rochester, Rochester</a>
      </h5>
      
      <div class="item">
            <div class="news-image">
              
            </div>
            
            <p class="newsfeed newsbodyclip">
              </p>
            </p>
            <div style="clear:both;"></div>
        <div class="read-more">
          <a href="http://chapel-of-the-good-shepherd-ro.episcopalrochester.org:/dfc/newsdetail_2/3153236">More</a>
        </div>
      </div>
    </div>
  
    <div class="chunk">
      <h4 class="title"><a href="http://chapel-of-the-good-shepherd-ro.episcopalrochester.org:/dfc/newsdetail_2/3151488">ESLC, The First in Area to Receive New Type of Vehicle</a></h4>
      <div class="news-date">February 07, 2012</div>	
      
      <h5 class="from">
        <a href="http://chapel-of-the-good-shepherd-ro.episcopalrochester.org:/digital_faith">Chapel of the Good Shepherd - Rochester, Rochester</a>
      </h5>
      
      <div class="item">
            <div class="news-image">
              
            </div>
            
            <p class="newsfeed newsbodyclip">
              Episcopal SeniorLife Communities is the first in the area to receive a new type of handicapped-accessible van designed from the ground up for people who use wheelchairs, scooters or walkers to get around. The vehicle is small, easy to use and allows passengers to stay in their wheelchair and sit in the front next to the driver. The MV-1 is new to the market, built by Florida-based Vehicle Production Group.</p>
            </p>
            <div style="clear:both;"></div>
        <div class="read-more">
          <a href="http://chapel-of-the-good-shepherd-ro.episcopalrochester.org:/dfc/newsdetail_2/3151488">More</a>
        </div>
      </div>
    </div>
  
</div>


     
       
        <h3><a href="http://www.episcopalchurch.org/episcopal_life.htm">Episcopal News</a></h3>
        
    </div>
       <br>   <br>
  

</div>
</div>
    
    <div id="rightside">
      
      
      
      <div class="buttons">
    <a href="http://www.episcopalrochester.org/digital_faith/people">
    <img src="http://s3.amazonaws.com/dfc_attachments/images/3077/find-clergy-button_web.png" width="80px" desc="Find Clergy and People">  
    </a>
     <a href="http://www.episcopalrochester.org/digital_faith/parishes">
      <img src="http://s3.amazonaws.com/dfc_attachments/images/3081/find-a-church-button_web.png" width="80px" desc="Find a Church">  
      </a>
    
    <a href="http://www.facebook.com/pages/Episcopal-Diocese-of-Rochester-NY/118658858144769">
    <img src="http://s3.amazonaws.com/dfc_attachments/images/3085/facebook-button_web.png" width="80px" desc="Join our Facebook Group">  
    </a>
    <a href="http://twitter.com/#!/RocEpiscopal">
    <img src="http://s3.amazonaws.com/dfc_attachments/images/3089/twitter-button_web.png" width="80px" desc="Follow us on Twitter">  
    </a>
    </div>
<div style="clear:both;"></div>

        <!-- BEGIN: Constant Contact Stylish Email Newsletter Form -->
<div align="center">
<div style="width:160px; background-color: #ffffff;">
<form name="ccoptin" action="http://visitor.r20.constantcontact.com/d.jsp" target="_blank" method="post" style="margin-bottom:3;"><span style="background-color: #51B6E0; float:right;margin-right:5;margin-top:3"><img src="https://imgssl.constantcontact.com/ui/images1/visitor/email5_trans.gif" alt="Email Newsletter icon, E-mail Newsletter icon, Email List icon, E-mail List icon" border="0"></span>
<font style="font-weight: bold; font-family:Arial; font-size:16px; color:#51B6E0;">Sign up for our Email Newsletter</font>
<input type="text" name="ea" size="20" value="" style="font-family:Verdana,Geneva,Arial,Helvetica,sans-serif; font-size:10px; border:1px solid #999999;">
<input type="submit" name="go" value="GO" class="submit"  style="font-family:Verdana,Arial,Helvetica,sans-serif; font-size:10px;">
<input type="hidden" name="llr" value="o99wpleab">
<input type="hidden" name="m" value="1104192170830">
<input type="hidden" name="p" value="oi">
</form>
</div>
</div>
<!-- END: Constant Contact Stylish Email Newsletter Form -->
<!-- BEGIN: SafeSubscribe -->
<div align="center" style="padding-top:5px;">
<img src="https://imgssl.constantcontact.com/ui/images1/safe_subscribe_logo.gif" border="0" width="168" height="14" alt=""/>
</div>
<!-- END: SafeSubscribe -->

<!-- BEGIN: Email Marketing you can trust -->
<div align="center" style="font-family:Arial,Helvetica,sans-serif;font-size:10px;color:#999999;">
For <a href="http://www.constantcontact.com/jmml/email-newsletter.jsp" style="text-decoration:none;font-family:Arial,Helvetica,sans-serif;font-size:10px;color:#999999;" target="_blank">Email Newsletters</a> you can trust
</div>
<!-- END: Email Newsletters you can trust -->
  
      
         
        
               <h3><a href="http://episcopalrochester.org/digital_faith/events?global=true">Upcoming Events</a></h3>  
            
<div class="news">

<div class="chunk">
    <h5 class="from"><a href="http://schuyler-county-watkins-glen.episcopalrochester.org:/digital_faith">Episcopal Parishes of Schuyler County, Watkins Glen</a></h5>
    <h4 class="title">
    
    <a href="http://schuyler-county-watkins-glen.episcopalrochester.org:/digital_faith/events/3160739">Schuyler County Concert Series VIII</a></h4>
    <h4 class="event-date">
      Fri - Jul 18, 2014<br>

      
       7:30 PM
      -  9:00 PM
      
      <br>
    </h4>
  <div class="item">
   
    <div class="read-more"><a href="http://schuyler-county-watkins-glen.episcopalrochester.org:/digital_faith/events/3160739">More</a></div>
    
  </div>
</div>

<div class="chunk">
    <h5 class="from"><a href="http://st-peters-church-henrietta.episcopalrochester.org:/digital_faith">St. Peter's Church, Henrietta, Henrietta</a></h5>
    <h4 class="title">
    
    <a href="http://st-peters-church-henrietta.episcopalrochester.org:/digital_faith/events/3161038">Summer Series 2014 "The First One Ever: Women and Female Images of the Bible"</a></h4>
    <h4 class="event-date">
      Wed - Jul 09, 2014<br>

      
       7:00 PM
      <br><br>
      Wed - Aug 27, 2014
      <br>
       8:00 PM

      
      <br>
    </h4>
  <div class="item">
   
    <div class="read-more"><a href="http://st-peters-church-henrietta.episcopalrochester.org:/digital_faith/events/3161038">More</a></div>
    
  </div>
</div>

<div class="chunk">
    <h5 class="from"><a href="http://schuyler-county-watkins-glen.episcopalrochester.org:/digital_faith">Episcopal Parishes of Schuyler County, Watkins Glen</a></h5>
    <h4 class="title">
    
    <a href="http://schuyler-county-watkins-glen.episcopalrochester.org:/digital_faith/events/3160740">Schuyler County Concert Series VIII</a></h4>
    <h4 class="event-date">
      Sat - Sep 13, 2014<br>

      
       7:30 PM
      -  9:00 PM
      
      <br>
    </h4>
  <div class="item">
   
    <div class="read-more"><a href="http://schuyler-county-watkins-glen.episcopalrochester.org:/digital_faith/events/3160740">More</a></div>
    
  </div>
</div>

<div class="chunk">
    <h5 class="from"><a href="http://st-peters-church-henrietta.episcopalrochester.org:/digital_faith">St. Peter's Church, Henrietta, Henrietta</a></h5>
    <h4 class="title">
    
      <img alt="Volunteer" src="http://episcopalrochester.org/images/icons/volunteer.png?1346409386" width="25px" />
    
    <a href="http://st-peters-church-henrietta.episcopalrochester.org:/digital_faith/events/3160868">St. Peter's Episcopal Church Running with the Angels 5k Race</a></h4>
    <h4 class="event-date">
      Sun - Oct 19, 2014<br>

      
       1:00 PM
      -  4:00 PM
      
      <br>
    </h4>
  <div class="item">
   
    <div class="read-more"><a href="http://st-peters-church-henrietta.episcopalrochester.org:/digital_faith/events/3160868">More</a></div>
    
  </div>
</div>

</div>

            
        
             
         
        
      
      
    
    


    

      
    </div>
  
    <div id="footer">
      <div id="growfaith"><a href="http://support.digitalfaith.org" alt="Powered by GrowFaith"><img alt="Growfaith" height="41px" src="http://episcopalrochester.org/images/digitalfaith.png?1321298634" width="193px" /></a></div>
      <span class="contact">
        <p>935 East Ave | Rochester,&nbsp; NY 14607&nbsp;| Phone: (585) 473-2977  FAX (585) 473-3195 <br />
        <a href="mailto:communications@episcopaldioceseofrochester.org">Contact Us</a> | <a href="http://episcopalrochester.org/digital_faith/management/" title="Manage this site">Manage this site</a>
      </span> 
    </div>
  </div>
</div>

</div>


<script type='text/javascript'>
  //<![CDATA[
    var gaJsHost = (("https:" == document.location.protocol) ? "https://ssl." : "http://www.");
    document.write(unescape("%3Cscript src='" + gaJsHost + "google-analytics.com/ga.js' type='text/javascript'%3E%3C/script%3E"));
  //]]>
</script>
<script type='text/javascript'>
  //<![CDATA[
    try {
      var pageTracker = _gat._getTracker("UA-218069-51");
      pageTracker._trackPageview();
    } catch(err) {}
  //]]>
</script>


<script>
  (function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function(){
  (i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s.createElement(o),
  m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m.parentNode.insertBefore(a,m)
  })(window,document,'script','//www.google-analytics.com/analytics.js','ga');

  // Load the plugin.
  ga('require', 'linker');
  // Define which domains to autoLink.
  ga('linker:autoLink', ['episcopalrochester.org']);


  ga('create', 'UA-218069-29', 'auto', {
    'allowLinker': true
  });
  
  ga('send', 'pageview');

</script>

     <script type="text/javascript">
       AjaxHelper.load();
     </script>
 	 <br><br>
 </body>
</html>

