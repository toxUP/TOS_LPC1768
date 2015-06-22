<!DOCTYPE html>




<!-- paulirish.com/2008/conditional-stylesheets-vs-css-hacks-answer-neither/ -->
<!--[if IE 8]> <html class="no-js lt-ie9" lang="en"> <![endif]-->
<!--[if gt IE 8]><!--> <html class="no-js" lang="en"> <!--<![endif]-->
<head>
    <title>
    mbed - a mercurial repository
 | mbed</title>
    <meta charset="utf-8"/>
    <meta http-equiv="X-UA-Compatible" content="IE=9; IE=8; IE=7; IE=EDGE"/><script type="text/javascript">(window.NREUM||(NREUM={})).loader_config={xpid:"VQQHVVBUGwQDUVJSBQ=="};window.NREUM||(NREUM={}),__nr_require=function(t,e,n){function r(n){if(!e[n]){var o=e[n]={exports:{}};t[n][0].call(o.exports,function(e){var o=t[n][1][e];return r(o?o:e)},o,o.exports)}return e[n].exports}if("function"==typeof __nr_require)return __nr_require;for(var o=0;o<n.length;o++)r(n[o]);return r}({QJf3ax:[function(t,e){function n(t){function e(e,n,a){t&&t(e,n,a),a||(a={});for(var c=s(e),f=c.length,u=i(a,o,r),d=0;f>d;d++)c[d].apply(u,n);return u}function a(t,e){f[t]=s(t).concat(e)}function s(t){return f[t]||[]}function c(){return n(e)}var f={};return{on:a,emit:e,create:c,listeners:s,_events:f}}function r(){return{}}var o="nr@context",i=t("gos");e.exports=n()},{gos:"7eSDFh"}],ee:[function(t,e){e.exports=t("QJf3ax")},{}],3:[function(t){function e(t){try{i.console&&console.log(t)}catch(e){}}var n,r=t("ee"),o=t(1),i={};try{n=localStorage.getItem("__nr_flags").split(","),console&&"function"==typeof console.log&&(i.console=!0,-1!==n.indexOf("dev")&&(i.dev=!0),-1!==n.indexOf("nr_dev")&&(i.nrDev=!0))}catch(a){}i.nrDev&&r.on("internal-error",function(t){e(t.stack)}),i.dev&&r.on("fn-err",function(t,n,r){e(r.stack)}),i.dev&&(e("NR AGENT IN DEVELOPMENT MODE"),e("flags: "+o(i,function(t){return t}).join(", ")))},{1:23,ee:"QJf3ax"}],4:[function(t){function e(t,e,n,i,s){try{c?c-=1:r("err",[s||new UncaughtException(t,e,n)])}catch(f){try{r("ierr",[f,(new Date).getTime(),!0])}catch(u){}}return"function"==typeof a?a.apply(this,o(arguments)):!1}function UncaughtException(t,e,n){this.message=t||"Uncaught error with no additional information",this.sourceURL=e,this.line=n}function n(t){r("err",[t,(new Date).getTime()])}var r=t("handle"),o=t(6),i=t("ee"),a=window.onerror,s=!1,c=0;t("loader").features.err=!0,t(5),window.onerror=e;try{throw new Error}catch(f){"stack"in f&&(t(1),t(2),"addEventListener"in window&&t(3),window.XMLHttpRequest&&XMLHttpRequest.prototype&&XMLHttpRequest.prototype.addEventListener&&window.XMLHttpRequest&&XMLHttpRequest.prototype&&XMLHttpRequest.prototype.addEventListener&&!/CriOS/.test(navigator.userAgent)&&t(4),s=!0)}i.on("fn-start",function(){s&&(c+=1)}),i.on("fn-err",function(t,e,r){s&&(this.thrown=!0,n(r))}),i.on("fn-end",function(){s&&!this.thrown&&c>0&&(c-=1)}),i.on("internal-error",function(t){r("ierr",[t,(new Date).getTime(),!0])})},{1:10,2:9,3:7,4:11,5:3,6:24,ee:"QJf3ax",handle:"D5DuLP",loader:"G9z0Bl"}],5:[function(t){t("loader").features.ins=!0},{loader:"G9z0Bl"}],6:[function(t){function e(){}if(window.performance&&window.performance.timing&&window.performance.getEntriesByType){var n=t("ee"),r=t("handle"),o=t(1),i=t(2);t("loader").features.stn=!0,t(3),n.on("fn-start",function(t){var e=t[0];e instanceof Event&&(this.bstStart=Date.now())}),n.on("fn-end",function(t,e){var n=t[0];n instanceof Event&&r("bst",[n,e,this.bstStart,Date.now()])}),o.on("fn-start",function(t,e,n){this.bstStart=Date.now(),this.bstType=n}),o.on("fn-end",function(t,e){r("bstTimer",[e,this.bstStart,Date.now(),this.bstType])}),i.on("fn-start",function(){this.bstStart=Date.now()}),i.on("fn-end",function(t,e){r("bstTimer",[e,this.bstStart,Date.now(),"requestAnimationFrame"])}),n.on("pushState-start",function(){this.time=Date.now(),this.startPath=location.pathname+location.hash}),n.on("pushState-end",function(){r("bstHist",[location.pathname+location.hash,this.startPath,this.time])}),"addEventListener"in window.performance&&(window.performance.addEventListener("webkitresourcetimingbufferfull",function(){r("bstResource",[window.performance.getEntriesByType("resource")]),window.performance.webkitClearResourceTimings()},!1),window.performance.addEventListener("resourcetimingbufferfull",function(){r("bstResource",[window.performance.getEntriesByType("resource")]),window.performance.clearResourceTimings()},!1)),document.addEventListener("scroll",e,!1),document.addEventListener("keypress",e,!1),document.addEventListener("click",e,!1)}},{1:10,2:9,3:8,ee:"QJf3ax",handle:"D5DuLP",loader:"G9z0Bl"}],7:[function(t,e){function n(t){i.inPlace(t,["addEventListener","removeEventListener"],"-",r)}function r(t){return t[1]}var o=(t(1),t("ee").create()),i=t(2)(o),a=t("gos");if(e.exports=o,n(window),"getPrototypeOf"in Object){for(var s=document;s&&!s.hasOwnProperty("addEventListener");)s=Object.getPrototypeOf(s);s&&n(s);for(var c=XMLHttpRequest.prototype;c&&!c.hasOwnProperty("addEventListener");)c=Object.getPrototypeOf(c);c&&n(c)}else XMLHttpRequest.prototype.hasOwnProperty("addEventListener")&&n(XMLHttpRequest.prototype);o.on("addEventListener-start",function(t){if(t[1]){var e=t[1];"function"==typeof e?this.wrapped=t[1]=a(e,"nr@wrapped",function(){return i(e,"fn-",null,e.name||"anonymous")}):"function"==typeof e.handleEvent&&i.inPlace(e,["handleEvent"],"fn-")}}),o.on("removeEventListener-start",function(t){var e=this.wrapped;e&&(t[1]=e)})},{1:24,2:25,ee:"QJf3ax",gos:"7eSDFh"}],8:[function(t,e){var n=(t(2),t("ee").create()),r=t(1)(n);e.exports=n,r.inPlace(window.history,["pushState"],"-")},{1:25,2:24,ee:"QJf3ax"}],9:[function(t,e){var n=(t(2),t("ee").create()),r=t(1)(n);e.exports=n,r.inPlace(window,["requestAnimationFrame","mozRequestAnimationFrame","webkitRequestAnimationFrame","msRequestAnimationFrame"],"raf-"),n.on("raf-start",function(t){t[0]=r(t[0],"fn-")})},{1:25,2:24,ee:"QJf3ax"}],10:[function(t,e){function n(t,e,n){t[0]=o(t[0],"fn-",null,n)}var r=(t(2),t("ee").create()),o=t(1)(r);e.exports=r,o.inPlace(window,["setTimeout","setInterval","setImmediate"],"setTimer-"),r.on("setTimer-start",n)},{1:25,2:24,ee:"QJf3ax"}],11:[function(t,e){function n(){f.inPlace(this,p,"fn-")}function r(t,e){f.inPlace(e,["onreadystatechange"],"fn-")}function o(t,e){return e}function i(t,e){for(var n in t)e[n]=t[n];return e}var a=t("ee").create(),s=t(1),c=t(2),f=c(a),u=c(s),d=window.XMLHttpRequest,p=["onload","onerror","onabort","onloadstart","onloadend","onprogress","ontimeout"];e.exports=a,window.XMLHttpRequest=function(t){var e=new d(t);try{a.emit("new-xhr",[],e),u.inPlace(e,["addEventListener","removeEventListener"],"-",o),e.addEventListener("readystatechange",n,!1)}catch(r){try{a.emit("internal-error",[r])}catch(i){}}return e},i(d,XMLHttpRequest),XMLHttpRequest.prototype=d.prototype,f.inPlace(XMLHttpRequest.prototype,["open","send"],"-xhr-",o),a.on("send-xhr-start",r),a.on("open-xhr-start",r)},{1:7,2:25,ee:"QJf3ax"}],12:[function(t){function e(t){var e=this.params,r=this.metrics;if(!this.ended){this.ended=!0;for(var i=0;c>i;i++)t.removeEventListener(s[i],this.listener,!1);if(!e.aborted){if(r.duration=(new Date).getTime()-this.startTime,4===t.readyState){e.status=t.status;var a=t.responseType,f="arraybuffer"===a||"blob"===a||"json"===a?t.response:t.responseText,u=n(f);if(u&&(r.rxSize=u),this.sameOrigin){var d=t.getResponseHeader("X-NewRelic-App-Data");d&&(e.cat=d.split(", ").pop())}}else e.status=0;r.cbTime=this.cbTime,o("xhr",[e,r,this.startTime])}}}function n(t){if("string"==typeof t&&t.length)return t.length;if("object"!=typeof t)return void 0;if("undefined"!=typeof ArrayBuffer&&t instanceof ArrayBuffer&&t.byteLength)return t.byteLength;if("undefined"!=typeof Blob&&t instanceof Blob&&t.size)return t.size;if("undefined"!=typeof FormData&&t instanceof FormData)return void 0;try{return JSON.stringify(t).length}catch(e){return void 0}}function r(t,e){var n=i(e),r=t.params;r.host=n.hostname+":"+n.port,r.pathname=n.pathname,t.sameOrigin=n.sameOrigin}if(window.XMLHttpRequest&&XMLHttpRequest.prototype&&XMLHttpRequest.prototype.addEventListener&&!/CriOS/.test(navigator.userAgent)){t("loader").features.xhr=!0;var o=t("handle"),i=t(2),a=t("ee"),s=["load","error","abort","timeout"],c=s.length,f=t(1);t(4),t(3),a.on("new-xhr",function(){this.totalCbs=0,this.called=0,this.cbTime=0,this.end=e,this.ended=!1,this.xhrGuids={}}),a.on("open-xhr-start",function(t){this.params={method:t[0]},r(this,t[1]),this.metrics={}}),a.on("open-xhr-end",function(t,e){"loader_config"in NREUM&&"xpid"in NREUM.loader_config&&this.sameOrigin&&e.setRequestHeader("X-NewRelic-ID",NREUM.loader_config.xpid)}),a.on("send-xhr-start",function(t,e){var r=this.metrics,o=t[0],i=this;if(r&&o){var f=n(o);f&&(r.txSize=f)}this.startTime=(new Date).getTime(),this.listener=function(t){try{"abort"===t.type&&(i.params.aborted=!0),("load"!==t.type||i.called===i.totalCbs&&(i.onloadCalled||"function"!=typeof e.onload))&&i.end(e)}catch(n){try{a.emit("internal-error",[n])}catch(r){}}};for(var u=0;c>u;u++)e.addEventListener(s[u],this.listener,!1)}),a.on("xhr-cb-time",function(t,e,n){this.cbTime+=t,e?this.onloadCalled=!0:this.called+=1,this.called!==this.totalCbs||!this.onloadCalled&&"function"==typeof n.onload||this.end(n)}),a.on("xhr-load-added",function(t,e){var n=""+f(t)+!!e;this.xhrGuids&&!this.xhrGuids[n]&&(this.xhrGuids[n]=!0,this.totalCbs+=1)}),a.on("xhr-load-removed",function(t,e){var n=""+f(t)+!!e;this.xhrGuids&&this.xhrGuids[n]&&(delete this.xhrGuids[n],this.totalCbs-=1)}),a.on("addEventListener-end",function(t,e){e instanceof XMLHttpRequest&&"load"===t[0]&&a.emit("xhr-load-added",[t[1],t[2]],e)}),a.on("removeEventListener-end",function(t,e){e instanceof XMLHttpRequest&&"load"===t[0]&&a.emit("xhr-load-removed",[t[1],t[2]],e)}),a.on("fn-start",function(t,e,n){e instanceof XMLHttpRequest&&("onload"===n&&(this.onload=!0),("load"===(t[0]&&t[0].type)||this.onload)&&(this.xhrCbStart=(new Date).getTime()))}),a.on("fn-end",function(t,e){this.xhrCbStart&&a.emit("xhr-cb-time",[(new Date).getTime()-this.xhrCbStart,this.onload,e],e)})}},{1:"XL7HBI",2:13,3:11,4:7,ee:"QJf3ax",handle:"D5DuLP",loader:"G9z0Bl"}],13:[function(t,e){e.exports=function(t){var e=document.createElement("a"),n=window.location,r={};e.href=t,r.port=e.port;var o=e.href.split("://");return!r.port&&o[1]&&(r.port=o[1].split("/")[0].split("@").pop().split(":")[1]),r.port&&"0"!==r.port||(r.port="https"===o[0]?"443":"80"),r.hostname=e.hostname||n.hostname,r.pathname=e.pathname,r.protocol=o[0],"/"!==r.pathname.charAt(0)&&(r.pathname="/"+r.pathname),r.sameOrigin=!e.hostname||e.hostname===document.domain&&e.port===n.port&&e.protocol===n.protocol,r}},{}],14:[function(t,e){function n(t){return function(){r(t,[(new Date).getTime()].concat(i(arguments)))}}var r=t("handle"),o=t(1),i=t(2);"undefined"==typeof window.newrelic&&(newrelic=window.NREUM);var a=["setPageViewName","addPageAction","setCustomAttribute","finished","addToTrace","inlineHit","noticeError"];o(a,function(t,e){window.NREUM[e]=n("api-"+e)}),e.exports=window.NREUM},{1:23,2:24,handle:"D5DuLP"}],"7eSDFh":[function(t,e){function n(t,e,n){if(r.call(t,e))return t[e];var o=n();if(Object.defineProperty&&Object.keys)try{return Object.defineProperty(t,e,{value:o,writable:!0,enumerable:!1}),o}catch(i){}return t[e]=o,o}var r=Object.prototype.hasOwnProperty;e.exports=n},{}],gos:[function(t,e){e.exports=t("7eSDFh")},{}],handle:[function(t,e){e.exports=t("D5DuLP")},{}],D5DuLP:[function(t,e){function n(t,e,n){return r.listeners(t).length?r.emit(t,e,n):(o[t]||(o[t]=[]),void o[t].push(e))}var r=t("ee").create(),o={};e.exports=n,n.ee=r,r.q=o},{ee:"QJf3ax"}],id:[function(t,e){e.exports=t("XL7HBI")},{}],XL7HBI:[function(t,e){function n(t){var e=typeof t;return!t||"object"!==e&&"function"!==e?-1:t===window?0:i(t,o,function(){return r++})}var r=1,o="nr@id",i=t("gos");e.exports=n},{gos:"7eSDFh"}],G9z0Bl:[function(t,e){function n(){var t=p.info=NREUM.info,e=f.getElementsByTagName("script")[0];if(t&&t.licenseKey&&t.applicationID&&e){s(d,function(e,n){e in t||(t[e]=n)});var n="https"===u.split(":")[0]||t.sslForHttp;p.proto=n?"https://":"http://",a("mark",["onload",i()]);var r=f.createElement("script");r.src=p.proto+t.agent,e.parentNode.insertBefore(r,e)}}function r(){"complete"===f.readyState&&o()}function o(){a("mark",["domContent",i()])}function i(){return(new Date).getTime()}var a=t("handle"),s=t(1),c=(t(2),window),f=c.document,u=(""+location).split("?")[0],d={beacon:"bam.nr-data.net",errorBeacon:"bam.nr-data.net",agent:"js-agent.newrelic.com/nr-632.min.js"},p=e.exports={offset:i(),origin:u,features:{}};f.addEventListener?(f.addEventListener("DOMContentLoaded",o,!1),c.addEventListener("load",n,!1)):(f.attachEvent("onreadystatechange",r),c.attachEvent("onload",n)),a("mark",["firstbyte",i()])},{1:23,2:14,handle:"D5DuLP"}],loader:[function(t,e){e.exports=t("G9z0Bl")},{}],23:[function(t,e){function n(t,e){var n=[],o="",i=0;for(o in t)r.call(t,o)&&(n[i]=e(o,t[o]),i+=1);return n}var r=Object.prototype.hasOwnProperty;e.exports=n},{}],24:[function(t,e){function n(t,e,n){e||(e=0),"undefined"==typeof n&&(n=t?t.length:0);for(var r=-1,o=n-e||0,i=Array(0>o?0:o);++r<o;)i[r]=t[e+r];return i}e.exports=n},{}],25:[function(t,e){function n(t){return!(t&&"function"==typeof t&&t.apply&&!t[i])}var r=t("ee"),o=t(1),i="nr@wrapper",a=Object.prototype.hasOwnProperty;e.exports=function(t){function e(t,e,r,a){function nrWrapper(){var n,i,s,f;try{i=this,n=o(arguments),s=r&&r(n,i)||{}}catch(d){u([d,"",[n,i,a],s])}c(e+"start",[n,i,a],s);try{return f=t.apply(i,n)}catch(p){throw c(e+"err",[n,i,p],s),p}finally{c(e+"end",[n,i,f],s)}}return n(t)?t:(e||(e=""),nrWrapper[i]=!0,f(t,nrWrapper),nrWrapper)}function s(t,r,o,i){o||(o="");var a,s,c,f="-"===o.charAt(0);for(c=0;c<r.length;c++)s=r[c],a=t[s],n(a)||(t[s]=e(a,f?s+o:o,i,s))}function c(e,n,r){try{t.emit(e,n,r)}catch(o){u([o,e,n,r])}}function f(t,e){if(Object.defineProperty&&Object.keys)try{var n=Object.keys(t);return n.forEach(function(n){Object.defineProperty(e,n,{get:function(){return t[n]},set:function(e){return t[n]=e,e}})}),e}catch(r){u([r])}for(var o in t)a.call(t,o)&&(e[o]=t[o]);return e}function u(e){try{t.emit("internal-error",e)}catch(n){}}return t||(t=r),e.inPlace=s,e.flag=i,e}},{1:24,ee:"QJf3ax"}]},{},["G9z0Bl",4,12,6,5]);</script><script type="text/javascript">window.NREUM||(NREUM={});NREUM.info={"beacon":"bam.nr-data.net","queueTime":1,"licenseKey":"0c341c3bde","agent":"js-agent.newrelic.com/nr-632.min.js","transactionName":"Z11UMERTXUUEWhYLXV4XcBFYUUdfCldND1BVXBgWU0JcRQxNDRBbVUsYEl9XREVfSwcSXW9cUxBXW18=","applicationID":"735302,5266396","errorBeacon":"bam.nr-data.net","applicationTime":1435}</script>
    <!-- Set the viewport width to device width for mobile -->
    <meta name="viewport" content="user-scalable=yes,width=device-width,initial-scale=0.9"/>


    <!-- Included CSS Files -->
    <link type="text/css" href="/static/A.css,,_app.css+css,,_mbed.css+css,,_questions.css+css,,_responsive-tables.css+webfonts,,_ss-standard.css+css,,_general_foundicons.css+css,,_social_foundicons.css,Mcc.Lq8p_StKDG.css.pagespeed.cf.kRYmOOzjz8.css" rel="stylesheet"/>
    
    
    
    
    
    
    
    
    <script src="/static/js/foundation/modernizr.foundation.js.pagespeed.jm.fHFG8H195u.js"></script>
    
<script src="/static/js/foundation/jquery.js.pagespeed.jm.qG3eX37gsb.js"></script>
    
<script src="/static/js/date.js+mbedcom.js+jquery.timeago.js+jquery.cycle.all.latest.js.pagespeed.jc.HyLsfzrjVk.js"></script><script>eval(mod_pagespeed_Ofw5$xybCR);</script>
    
<script>eval(mod_pagespeed_WKG7Pme_wq);</script>
    
<script>eval(mod_pagespeed_5dtSPSSlBV);</script>
    
<script>eval(mod_pagespeed_sgzDt0TR$s);</script>
    
<script src="/static/js/json2.js+foundation,_jquery.event.move.js+foundation,_jquery.event.swipe.js+foundation,_jquery.foundation.alerts.js+foundation,_jquery.foundation.buttons.js+foundation,_jquery.foundation.forms.js+foundation,_jquery.foundation.navigation.js+foundation,_jquery.foundation.tabs.js+foundation,_jquery.foundation.reveal.js+foundation,_jquery.foundation.topbar.js+foundation,_jquery.placeholder.js+foundation,_responsive-tables.js+jquery.smooth-scroll.min.js.pagespeed.jc.odck0T0Rv5.js"></script><script>eval(mod_pagespeed_SZ_1k$2DaU);</script>
    
<script>eval(mod_pagespeed_dLrHXePpSz);</script>
    
<script>eval(mod_pagespeed_i2SP3Stp1X);</script>
    
<script>eval(mod_pagespeed_567YJB4z3s);</script>
    
<script>eval(mod_pagespeed_UxfahZVCG4);</script>
    
<script>eval(mod_pagespeed_AYmLeGe3xm);</script>
    
<script>eval(mod_pagespeed_a2gdlseRvJ);</script>
    
<script>eval(mod_pagespeed_pHsAO6E8d4);</script>
	
<script>eval(mod_pagespeed_zuece6P4An);</script>
    
<script>eval(mod_pagespeed_dAoq3OW7vY);</script>
    
<script>eval(mod_pagespeed_WznPWbuyz_);</script>
    
<script>eval(mod_pagespeed_9AuvBNBptM);</script>
    
<script>eval(mod_pagespeed__yzEbVRriU);</script>
    
<script src="/static/webfonts,_ss-standard.js+webfonts,_ss-social.js+js,_foundation,_app.js.pagespeed.jc.9Vx21zQEIr.js"></script><script>eval(mod_pagespeed_yHz83s_fwC);</script>
    
<script>eval(mod_pagespeed_p5p2wzu3Cx);</script>
    
    
<script>eval(mod_pagespeed_fBYX5Lh9yl);</script>
    
    <!--[if (gte IE 6)&(lte IE 8)]>
        <script type="text/javascript" src="/static/js/selectivizr-min.js"></script>
  <![endif]-->

    
        <script src="/static/js/jquery.ajaxQueue.js+jquery.autocomplete.js+jquery-fieldselection.js.pagespeed.jc.TdQIBLeGgd.js"></script><script>eval(mod_pagespeed_9UBBG_NMFA);</script>
            
<script>eval(mod_pagespeed_pFB7gDGm8l);</script>
            
<script>eval(mod_pagespeed_eUJQESS_ZO);</script>
            
        
    
    
<!--[if IE]><script type="text/javascript" src="/static/js/excanvas.js"></script><![endif]-->
  <style>.page-header{margin-bottom:2em}dt{width:15em;padding:.2em;float:left;margin:0;font-weight:bold;clear:left}dd{margin-left:16em;padding:.2em}table#changes_list{table-layout:fixed}.description{background-color:#feffaa;color:#000;padding:1em;margin:0}span.desc{padding-right:1em}span.logtags span{padding:0px 6px;font-weight:normal;font-size:11px;border:1px solid;background-color:#faf;border-color:#fcf #f0e #f0e #fcf}span.logtags span.tagtag{background-color:#ffa;border-color:#ffc #fe0 #fe0 #ffc}span.logtags span.branchtag{background-color:#afa;border-color:#cfc #0c3 #0c3 #cfc}span.logtags span.inbranchtag{background-color:#d5dde6;border-color:#e3ecf4 #9398f4 #9398f4 #e3ecf4}div.diff pre{margin:10px 0 0 0!important}div.diff pre span{font-family:monospace;white-space:pre;font-size:1.2em;padding:3px 0!important}td.source{white-space:pre;font-family:monospace}div.source{font-size:1.2em}.linenr{color:#999;text-align:right}.lineno{text-align:right}.lineno a{color:#999}td.linenr{width:10px}div#powered-by{position:absolute;width:75px;top:15px;right:20px;font-size:1.2em}div#powered-by a{color:#eee;text-decoration:none}div#powered-by a:hover{text-decoration:underline}p.files{margin:0 0 0 20px;font-size:2.0em;font-weight:bold}div#wrapper{position:relative}canvas{position:absolute;z-index:5;top:-.7em}ul#nodebgs li.parity0{background:#f1f6f7}ul#nodebgs li.parity1{background:#fff}ul#graphnodes{position:absolute;z-index:10;top:7px;padding:0 0 0 1em;margin:0;list-style:none inside none}ul#nodebgs li,ul#graphnodes li{list-style:none inside none!important}ul#nodebgs{list-style:none inside none!important;padding:0}ul#graphnodes li,ul#nodebgs li{height:39px}.object-tools ul{}.object-tools li{border-bottom:1px solid #ddd;float:right;padding-left:1em;list-style:none}</style>


</head>
<body>

<div class="row nav-wrapper ">
        <div class="twelve columns navigation">
        
            <ul class="nav-bar radius" id="nav">
                <li><a href="/"><script pagespeed_no_defer="">//<![CDATA[
(function(){var g=this,h=function(b,d){var a=b.split("."),c=g;a[0]in c||!c.execScript||c.execScript("var "+a[0]);for(var e;a.length&&(e=a.shift());)a.length||void 0===d?c[e]?c=c[e]:c=c[e]={}:c[e]=d};var l=function(b){var d=b.length;if(0<d){for(var a=Array(d),c=0;c<d;c++)a[c]=b[c];return a}return[]};var m=function(b){var d=window;if(d.addEventListener)d.addEventListener("load",b,!1);else if(d.attachEvent)d.attachEvent("onload",b);else{var a=d.onload;d.onload=function(){b.call(this);a&&a.call(this)}}};var n,p=function(b,d,a,c,e){this.f=b;this.h=d;this.i=a;this.c=e;this.e={height:window.innerHeight||document.documentElement.clientHeight||document.body.clientHeight,width:window.innerWidth||document.documentElement.clientWidth||document.body.clientWidth};this.g=c;this.b={};this.a=[];this.d={}},q=function(b,d){var a,c,e=d.getAttribute("pagespeed_url_hash");if(a=e&&!(e in b.d))if(0>=d.offsetWidth&&0>=d.offsetHeight)a=!1;else{c=d.getBoundingClientRect();var f=document.body;a=c.top+("pageYOffset"in window?window.pageYOffset:(document.documentElement||f.parentNode||f).scrollTop);c=c.left+("pageXOffset"in window?window.pageXOffset:(document.documentElement||f.parentNode||f).scrollLeft);f=a.toString()+","+c;b.b.hasOwnProperty(f)?a=!1:(b.b[f]=!0,a=a<=b.e.height&&c<=b.e.width)}a&&(b.a.push(e),b.d[e]=!0)};p.prototype.checkImageForCriticality=function(b){b.getBoundingClientRect&&q(this,b)};h("pagespeed.CriticalImages.checkImageForCriticality",function(b){n.checkImageForCriticality(b)});h("pagespeed.CriticalImages.checkCriticalImages",function(){r(n)});var r=function(b){b.b={};for(var d=["IMG","INPUT"],a=[],c=0;c<d.length;++c)a=a.concat(l(document.getElementsByTagName(d[c])));if(0!=a.length&&a[0].getBoundingClientRect){for(c=0;d=a[c];++c)q(b,d);a="oh="+b.i;b.c&&(a+="&n="+b.c);if(d=0!=b.a.length)for(a+="&ci="+encodeURIComponent(b.a[0]),c=1;c<b.a.length;++c){var e=","+encodeURIComponent(b.a[c]);131072>=a.length+e.length&&(a+=e)}b.g&&(e="&rd="+encodeURIComponent(JSON.stringify(s())),131072>=a.length+e.length&&(a+=e),d=!0);t=a;if(d){c=b.f;b=b.h;var f;if(window.XMLHttpRequest)f=new XMLHttpRequest;else if(window.ActiveXObject)try{f=new ActiveXObject("Msxml2.XMLHTTP")}catch(k){try{f=new ActiveXObject("Microsoft.XMLHTTP")}catch(u){}}f&&(f.open("POST",c+(-1==c.indexOf("?")?"?":"&")+"url="+encodeURIComponent(b)),f.setRequestHeader("Content-Type","application/x-www-form-urlencoded"),f.send(a))}}},s=function(){var b={},d=document.getElementsByTagName("IMG");if(0==d.length)return{};var a=d[0];if(!("naturalWidth"in a&&"naturalHeight"in a))return{};for(var c=0;a=d[c];++c){var e=a.getAttribute("pagespeed_url_hash");e&&(!(e in b)&&0<a.width&&0<a.height&&0<a.naturalWidth&&0<a.naturalHeight||e in b&&a.width>=b[e].k&&a.height>=b[e].j)&&(b[e]={rw:a.width,rh:a.height,ow:a.naturalWidth,oh:a.naturalHeight})}return b},t="";h("pagespeed.CriticalImages.getBeaconData",function(){return t});h("pagespeed.CriticalImages.Run",function(b,d,a,c,e,f){var k=new p(b,d,a,e,f);n=k;c&&m(function(){window.setTimeout(function(){r(k)},0)})});})();pagespeed.CriticalImages.Run('/mod_pagespeed_beacon','http://developer.mbed.org/users/mbed_official/code/mbed/file/dbbf35b96557/mbed.h','l8PuqRhht8',true,false,'DHKXzcKA8SA');
//]]></script><img height="16" width="16" class="icon icon_house" src="data:image/gif;base64,R0lGODlhAQABAJEAAAAAAP///////wAAACH5BAEAAAIALAAAAAABAAEAAAICVAEAOw==" pagespeed_url_hash="3154373828" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/></a></li>
                <li><a href="/platforms/">Platforms</a></li>
                <li><a href="/components/">Components</a></li>   
                <li><a href="/handbook/">Handbook</a></li>
                <li><a href="/cookbook/">Cookbook</a></li>
                <li><a href="/code/">Code</a></li>
                <li><a href="/questions/">Questions</a></li>
                <li><a href="/forum/">Forum</a></li>
                <li class="user-links"><a href="https://developer.mbed.org/compiler/" target="compiler">Compiler</a></li>
                <li class="user-links"><a class="dashboard-link" href="/dashboard/">Dashboard</a></li>

            </ul>
        
        </div>
    </div>

    <div class="row" id="top">
        <div class="three columns logo mobile-two">
            <h1><a href="https://mbed.org/"><img src="/static/img/xarmmbed.png.pagespeed.ic.qebrTYOtUg.png" alt="ARM mbed" pagespeed_url_hash="1531830657" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/></a></h1>
        </div>
        <div class="three columns header login-block push-six mobile-two">
         
            
            <p>
                Hi,
                <a href="/users/mbedist1/" class="user">
                    <img alt="Profile" height="16" width="16" class="icon icon_profile" src="data:image/gif;base64,R0lGODlhAQABAJEAAAAAAP///////wAAACH5BAEAAAIALAAAAAABAAEAAAICVAEAOw==" pagespeed_url_hash="3154373828" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/>
                    mbedist1
                </a>
                &nbsp;
                <a href="/account/logout/" class="button small radius success">
                    <img alt="Logout" height="16" width="16" class="icon icon_logout" src="data:image/gif;base64,R0lGODlhAQABAJEAAAAAAP///////wAAACH5BAEAAAIALAAAAAABAAEAAAICVAEAOw==" pagespeed_url_hash="3154373828" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/>
                    Logout
                </a>
            </p>
            
        
        </div>

        <div class="six columns header pull-three search-block">
             
            <form id="search" action="/search/" method="GET">
            <input type="hidden" name="type" value=""/>
                <div class="row">
                    <div class="ten mobile-three columns">
                        <input type="search" name="q" id="id_q" placeholder="Search developer.mbed.org..." class="search-input"/>
                    </div>
                    <div class="two mobile-one columns">
                        <input type="submit" value="Go" class="button radius  "/>
                    </div>
                </div>
            </form>
            
        </div>
    </div><!-- end of #top -->
    
    <div id="breadcrumbs" class="row">
        <div class="twelve columns" style="position: relative;">
            <div class="breadcrumbs">
                
    
    <a href="/activity/">Users</a> &raquo; <a href="/users/mbed_official/">mbed_official</a>
    
    
 
        &raquo; <a href="/users/mbed_official/code/">Code</a>

        
        &raquo; <a href="/users/mbed_official/code/mbed/">mbed</a>
            



            </div>
            
            <div class="breadcrumbs breadcrumbs-right">
                
            </div>

        </div>
    </div>
    
    
    
    <div class="row">
        <div class="nine columns main-content" id="mbed-content">
            
        
            







<div class="content-actions">
</div>




<div style="font-size: 1.6em; padding-bottom: 4px;">
    
        <a href="/users/mbed_official/">
            
                <img src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAADIAAAAyCAMAAAAp4XiDAAACbVBMVEUAif8Ai/8AjP8Ajf8Ajv8Aj/8AkP8Akf8Akv8Ak/8AlP8Alf8Alv8Al/8AmP8Amf8BlP8Blv8Bl/8BmP8Bmf8Bmv8ClP8Clf8Clv8Cmf8Cmv8DmP8Dmf8Dmv8Dm/8Ek/8Elf8Elv8El/8Emv8Em/8Fmf8Fm/8Gm/8GnP8Hmv8HnP8Imf8InP8Knf8Lnf8Nm/8Pm/8Pn/8Qn/8SoP8ToP8Uof8VoP8Wmf8Wov8Xn/8Xov8Yov8Yo/8ZnP8Znv8Zof8aoP8bo/8bpP8cpP8dpP8epf8hov8ipf8ipv8jp/8kpv8kp/8pqf8qqP8sqv8uq/8urP8vrP8wrP8xrf8yrf8yrv81rv83r/84r/86sP87sf88r/89sf89sv8/sv9Asv9Bs/9Htf9Ktf9Lt/9Mt/9OuP9PuP9Quf9Vu/9Wu/9XvP9Zvf9bvf9dvv9iwP9jwP9lwf9lwv9sw/9uxf9wxf9wxv90x/92yP95yf96yv+AzP+BzP+K0P+N0v+P0v+Q0v+R0f+T1P+X1f+Y1v+Z1v+b1/+g2f+h1/+h2f+h2v+i2f+j2v+m2f+m3P+n2v+s3v+v3v+v3/+x3/+x4P+y4P+y4f+z4f+04f+14f+24v+44/+54/+64/+85P+95P+95f++5f/A5v/B5v/C5v/F6P/G6P/H6P/I6f/J6f/K6v/L6v/O6//P7P/S7f/U7v/W7//Y8P/Z8P/a8P/b8P/c8f/d8f/d8v/e8v/g8//h8//l9P/m9f/n9f/n9v/o9v/r9//s9//t+P/u+P/x+v/0+//3/P/4/P/5/f/6/f/7/f/8/v/9/v/+/v/+//////8ahqqgAAACS0lEQVRIx+3U51fTUBQA8KLYJu9lCCYWI1GRWLBuceAeFSdaqag4cCGKihtBC4qoKO6NWAX3Hki1bpwompD7N5nE2hZsP/A975z3cs89+eUl5948C9vpYTGJSUwSMbgYN3OxCCcw0UEwH4XQOC3qNjR2Rid84jTf2QThPyAkzKo/joUQEUVBklI5UZJEAS+G+ynpkoG4VC1jbCk6+60BHxJDhCQpgiAYRBCoD14oN8SThP5AntGypP7VPEl2WSBfDhGO2rJ5bkXVtmFrq/avprAHHu86sjcbCTw1cOuhAxtohmeogsqDXrgSIiJ5DxQAeKdN2NRtiX6B1mLUe8ojPbowKLn/CSNXFybofFv1pMIW2DO2FB7YcsE/f+rOXz9nE1ehfPi4k7Avbjc8WzG5FGojSC3kWOmAPMKWCa+xGxpsTHwNbB8Nn7LnzSxofdj9ibLKSuR0IPk9nQE1y54FbzRyJ2lw3zK1bGmbbLzP8/Qv8sRk+8oOZDnpCKjTkcsgt5KGWCvUHW5oXFdUVLgxz/FRcSWmLGtHLikaeSlrRHmF3eptm22MHzxDf3ybY4nDFMI3VS/RNU+5GEGuQT7peA8uNAM+4EUAvjOfoYZCXlDPHWs+asfrAe6eaobrYYIP+3ORVP9iPJ7QdAN7vp/+Cm/LB/ToRZU0gtpUQouo+Onvljp/NQ5Xn9fbQwgujkwkZYiEXmOSzRjJkHrxmVFpWm1jdTJDiwzNGK0lsjTNin8DRmj/i3H/Fn3yLMcH2z8UsFrAmYeSSUzS2fEHn40xjRdYyrEAAAAASUVORK5CYII=" pagespeed_url_hash="2142622064" onload="pagespeed.CriticalImages.checkImageForCriticality(this);">

            mbed official 
        </a> 
    
    / <a style="font-weight: bold;" href="/users/mbed_official/code/mbed/">
        
            <img title="This repository is a library" height="16" width="16" class="icon icon_library" src="data:image/gif;base64,R0lGODlhAQABAJEAAAAAAP///////wAAACH5BAEAAAIALAAAAAABAAEAAAICVAEAOw==" pagespeed_url_hash="3154373828" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/>
        

        mbed</a>

    
        <span class="featured"><img height="16" width="16" class="icon icon_tick" src="data:image/gif;base64,R0lGODlhAQABAJEAAAAAAP///////wAAACH5BAEAAAIALAAAAAABAAEAAAICVAEAOw==" pagespeed_url_hash="3154373828" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/> Featured</span>
    
</div>



    <br/>
    <p>The official mbed C/C++ SDK provides the software platform and libraries to build your applications.</p>





    <p>
    <b>  
        
            <a href="/users/mbed_official/code/mbed/dependents">
                <img height="16" width="16" class="icon icon_program_new" src="data:image/gif;base64,R0lGODlhAQABAJEAAAAAAP///////wAAACH5BAEAAAIALAAAAAABAAEAAAICVAEAOw==" pagespeed_url_hash="3154373828" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/> Dependents:
            </a> &nbsp;
        
    </b>

    
        <a href="/users/testlpc/code/hello/">
            
                <img title="This repository is a program" height="16" width="16" class="icon icon_program" src="data:image/gif;base64,R0lGODlhAQABAJEAAAAAAP///////wAAACH5BAEAAAIALAAAAAABAAEAAAICVAEAOw==" pagespeed_url_hash="3154373828" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/>
            
            hello
        </a>
    
        <a href="/users/simon/code/SerialTestv11/">
            
                <img title="This repository is a program" height="16" width="16" class="icon icon_program" src="data:image/gif;base64,R0lGODlhAQABAJEAAAAAAP///////wAAACH5BAEAAAIALAAAAAABAAEAAAICVAEAOw==" pagespeed_url_hash="3154373828" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/>
            
            SerialTestv11
        </a>
    
        <a href="/users/simon/code/SerialTestv12/">
            
                <img title="This repository is a program" height="16" width="16" class="icon icon_program" src="data:image/gif;base64,R0lGODlhAQABAJEAAAAAAP///////wAAACH5BAEAAAIALAAAAAABAAEAAAICVAEAOw==" pagespeed_url_hash="3154373828" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/>
            
            SerialTestv12
        </a>
    
        <a href="/users/EricWieser/code/Sierpinski/">
            
                <img title="This repository is a program" height="16" width="16" class="icon icon_program" src="data:image/gif;base64,R0lGODlhAQABAJEAAAAAAP///////wAAACH5BAEAAAIALAAAAAABAAEAAAICVAEAOw==" pagespeed_url_hash="3154373828" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/>
            
            Sierpinski
        </a>
    

    
        <small>
            
                <a href="/users/mbed_official/code/mbed/dependents">
                    ... more
                </a>
            
        </small>
    
    </p>







   

<div class="page-header">
        <ul id="tabmenu">


            <li><a href="/users/mbed_official/code/mbed/">
            <img height="16" width="16" class="icon icon_repo_home" src="data:image/gif;base64,R0lGODlhAQABAJEAAAAAAP///////wAAACH5BAEAAAIALAAAAAABAAEAAAICVAEAOw==" pagespeed_url_hash="3154373828" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/>  Home</a></li>


            <li><a href="/users/mbed_official/code/mbed/shortlog">
            <img height="16" width="16" class="icon icon_repo_revisions" src="data:image/gif;base64,R0lGODlhAQABAJEAAAAAAP///////wAAACH5BAEAAAIALAAAAAABAAEAAAICVAEAOw==" pagespeed_url_hash="3154373828" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/>  History</a></li>


            <li><a href="/users/mbed_official/code/mbed/graph">
            <img height="16" width="16" class="icon icon_repo_graph" src="data:image/gif;base64,R0lGODlhAQABAJEAAAAAAP///////wAAACH5BAEAAAIALAAAAAABAAEAAAICVAEAOw==" pagespeed_url_hash="3154373828" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/> Graph</a></li>


            <li><a href="/users/mbed_official/code/mbed/docs/">
            <img height="16" width="16" class="icon icon_documentation" src="data:image/gif;base64,R0lGODlhAQABAJEAAAAAAP///////wAAACH5BAEAAAIALAAAAAABAAEAAAICVAEAOw==" pagespeed_url_hash="3154373828" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/>  API Documentation</a></li>


            <li><a href="/users/mbed_official/code/mbed/wiki/">
            <img height="16" width="16" class="icon icon_repo_wiki" src="data:image/gif;base64,R0lGODlhAQABAJEAAAAAAP///////wAAACH5BAEAAAIALAAAAAABAAEAAAICVAEAOw==" pagespeed_url_hash="3154373828" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/>  Wiki</a></li>


    
                <li><a href="/users/mbed_official/code/mbed/issues/">
                <img height="16" width="16" class="icon icon_repo_issue" src="data:image/gif;base64,R0lGODlhAQABAJEAAAAAAP///////wAAACH5BAEAAAIALAAAAAABAAEAAAICVAEAOw==" pagespeed_url_hash="3154373828" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/>  Issues</a></li>
    


    
                <li><a href="/users/mbed_official/code/mbed/pull-requests/">
                <img height="16" width="16" class="icon icon_repo_merge" src="data:image/gif;base64,R0lGODlhAQABAJEAAAAAAP///////wAAACH5BAEAAAIALAAAAAABAAEAAAICVAEAOw==" pagespeed_url_hash="3154373828" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/>  Pull Requests</a></li>
    





        </ul>
    </div>





<div id="container">
      
        <ul class="object-tools">
            <li class="current"><a href="/users/mbed_official/code/mbed/file/dbbf35b96557/mbed.h">file</a></li>
            <li><a href="/users/mbed_official/code/mbed/log/dbbf35b96557/mbed.h">revisions</a></li>
            <li><a href="/users/mbed_official/code/mbed/annotate/dbbf35b96557/mbed.h">annotate</a></li>
            <li><a href="/users/mbed_official/code/mbed/diff/dbbf35b96557/mbed.h">diff</a></li>
            <li><a href="/users/mbed_official/code/mbed/raw-file/dbbf35b96557/mbed.h">raw</a></li>
        </ul>

   <div class="module">

    <h2>mbed.h</h2>

    <dl class="overview ">
        <dt>Committer:</dt>
        <dd><span class="authortext"><a href="https://developer.mbed.org/users/Kojto/"><img alt="" class="icon" src="data:image/jpeg;base64,/9j/4AAQSkZJRgABAQAAAQABAAD/2wBDAAUDBAQEAwUEBAQFBQUGBwwIBwcHBw8LCwkMEQ8SEhEPERETFhwXExQaFRERGCEYGh0dHx8fExciJCIeJBweHx7/2wBDAQUFBQcGBw4ICA4eFBEUHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh7/wAARCAAQABADASIAAhEBAxEB/8QAFgABAQEAAAAAAAAAAAAAAAAABgME/8QAIxAAAQMCBgMBAAAAAAAAAAAAAQIDEQQFAAYHEiFBCDFRgf/EABUBAQEAAAAAAAAAAAAAAAAAAAID/8QAHREAAQMFAQAAAAAAAAAAAAAAAQACFAMRE1Fhof/aAAwDAQACEQMRAD8AN6wakDKbzNktVTXN3Ne119yldCC03zAP0kwY+Yvo9qO1nF5+z17tYu6U6C6hyqcCy80IB5HognkfO/eDvkrZmU3Sz1DSgaqqL+9RbTuIlASmYmB1PcnvGbxyy9Qi9VN1ccSbhTOJQzuJTCCkhcAQCSD3Pr9xGNUFOQWnVge2SkMyYA7zi//Z" pagespeed_url_hash="3511014252" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/></a> <a href="https://developer.mbed.org/users/Kojto/"> Martin Kojtal</a></span></dd>
        <dt>Date:</dt>
        <dd><abbr class="timeago" title="Wed May 13 08:08:21 2015 +0200"><abbr class="timeago" title="2015-05-13T06:08:21+00:00">13 May 2015</abbr></abbr></dd>
        
        <dt>Revision:</dt>
        <dd><b><a class="list" href="/users/mbed_official/code/mbed/rev/#node|short#">99:dbbf35b96557</a></b></dd>
        <dt>Parent: </dt><dd><a href="/users/mbed_official/code/mbed/file/8ab26030e058/mbed.h"> 98:8ab26030e058</a></dd>
        
    </dl>

    <div class="source">
     <h3>File content as of revision 99:dbbf35b96557:</h3>
        <pre class="mbed-code">
/* mbed Microcontroller Library
 * Copyright (c) 2006-2013 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the &quot;License&quot;);
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an &quot;AS IS&quot; BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef MBED_H
#define MBED_H

#define MBED_LIBRARY_VERSION 99

#include &quot;platform.h&quot;

// Useful C libraries
#include &lt;math.h&gt;
#include &lt;time.h&gt;

// mbed Debug libraries
#include &quot;mbed_error.h&quot;
#include &quot;mbed_interface.h&quot;

// mbed Peripheral components
#include &quot;DigitalIn.h&quot;
#include &quot;DigitalOut.h&quot;
#include &quot;DigitalInOut.h&quot;
#include &quot;BusIn.h&quot;
#include &quot;BusOut.h&quot;
#include &quot;BusInOut.h&quot;
#include &quot;PortIn.h&quot;
#include &quot;PortInOut.h&quot;
#include &quot;PortOut.h&quot;
#include &quot;AnalogIn.h&quot;
#include &quot;AnalogOut.h&quot;
#include &quot;PwmOut.h&quot;
#include &quot;Serial.h&quot;
#include &quot;SPI.h&quot;
#include &quot;SPISlave.h&quot;
#include &quot;I2C.h&quot;
#include &quot;I2CSlave.h&quot;
#include &quot;Ethernet.h&quot;
#include &quot;CAN.h&quot;
#include &quot;RawSerial.h&quot;

// mbed Internal components
#include &quot;Timer.h&quot;
#include &quot;Ticker.h&quot;
#include &quot;Timeout.h&quot;
#include &quot;LowPowerTimeout.h&quot;
#include &quot;LowPowerTicker.h&quot;
#include &quot;LowPowerTimer.h&quot;
#include &quot;LocalFileSystem.h&quot;
#include &quot;InterruptIn.h&quot;
#include &quot;wait_api.h&quot;
#include &quot;sleep_api.h&quot;
#include &quot;rtc_time.h&quot;

using namespace mbed;
using namespace std;

#endif

            </pre>
    </div>

    </div>
</div>
            


    





<div id="component-discussions">
    <div class="component-community panel">
        
            
    <p class="qbutton">
        
        
        <a class="button radius" href="/questions/create?url=/users/mbed_official/code/mbed/">
            <img height="16" width="16" class="icon icon_question_add" src="data:image/gif;base64,R0lGODlhAQABAJEAAAAAAP///////wAAACH5BAEAAAIALAAAAAABAAEAAAICVAEAOw==" pagespeed_url_hash="3154373828" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/>
            Ask a question
        </a>
        
        
        <a class="button radius" href="javascript:void(0)" onclick="javascript:$('#newtopic').slideToggle('medium');">
            <img height="16" width="16" class="icon icon_comment_add" src="data:image/gif;base64,R0lGODlhAQABAJEAAAAAAP///////wAAACH5BAEAAAIALAAAAAABAAEAAAICVAEAOw==" pagespeed_url_hash="3154373828" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/>
            Start a discussion
        </a>
        
    </p>


            
                

<script language="javascript" type="text/javascript" src="/static/filebrowser/js/AddFileBrowser.js"></script>
<script src='https://www.google.com/recaptcha/api.js'></script>

<div id="newtopic" class="" style="display: none;">
    <p style="float: right; margin: 0px;">
    <b>
        <a href="javascript:void(0)" onclick="javascript:$('#newtopic').slideToggle('medium');">
            <img height="16" width="16" class="icon icon_cross" src="data:image/gif;base64,R0lGODlhAQABAJEAAAAAAP///////wAAACH5BAEAAAIALAAAAAABAAEAAAICVAEAOw==" pagespeed_url_hash="3154373828" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/>
            Close
        </a>
    </b>
    </p>

    <h3 class="sectionheader" style="margin-top: 0px;">
        
        Start new topic
        
    </h3>
    <div id="result" style="display:none;">
        <h4>Preview of your unsaved post:</h4>
        <div id="resultcontent"></div><br/>
    </div>

    <form method="post" action="/forum/repo-4-mbed-community/">
        <input type='hidden' name='csrfmiddlewaretoken' value='IpNTCfAk0ceEWBauonlVtCTI4SL9BUob'/>
        <table class="formtable">
            <tr>
                <td>
                    <label for="id_topic_name">Topic Title:</label>
                    
                    <input id="id_topic_name" maxlength="150" name="topic_name" size="60" type="text"/>
                </td>
            </tr>
            <tr>
                <td>
                    
                    <div style="text-align: right; margin-bottom: 5px;"><a href="javascript:FileBrowser.show('id_content', '/filebrowser/browse/?pop=1&amp;mode=wiki&amp;editor=id_body');" class="fb_show">Insert images or files <img src="data:image/gif;base64,R0lGODlhGgAWANU/AKbC1dDf6FyRtKC+03Shv8HU4WCUtuPr8LXM3FmPs1uQtM7d52iZuoyxysbX422dvOHq77TM3Ji5z+7z9erw9N7o7l+Ttpe5z6XB1bHJ2oCpxaG/016StYqwyYSrxoGqxYuwyXumwoSsxvH09pW3zrPL28/d51qPs7LK2/j5+uzx9Jm5z7HK2nWiv/X3+Hymw8/e6Onv83ulwmubu9De6Pr6+uDp72aYuXKgvsPW4vP19+rw85q60Hmlwcra5fv7+yH5BAEAAD8ALAAAAAAaABYAAAbIwF8AwCsaj0geIPBrNgMDQm9KrVp7hAHTCZBev1UCwPnjgc9UHllNbrvX8Lc83mT77r4ffr+v0+dybH56eIR8fWV/gIt2hYdNCx4MDA8bO06CiygCDQULGS0zNoN9ewc/MAIsZCofIROJiz8iDW4QBgWxpYU/DDluNR0XPwCnizcLbxIkQgPGcw8lbi49GE9ESUY/AzgUbQ4CW7I/MTMaECk/Og4GCQjjThUvBiASMgInCQrv8D8jBStIAKCBQEECDv3kRLAQIQgAOw==" height="18" alt="" pagespeed_url_hash="3413799593" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/></a></div>
                    <textarea cols="40" id="id_body" name="body" rows="15" style="width: 100%;">
</textarea>
                    <script type="text/javascript">$(document).ready(function()
{$("#showhelp").click(function(){$("#help").slideToggle('fast')});});</script>
            <div style="text-align: right;"><a href="#" onClick="return false;" id="showhelp"><img alt="arrow" src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAQAAAC1+jfqAAAABGdBTUEAAK/INwWK6QAAABl0RVh0U29mdHdhcmUAQWRvYmUgSW1hZ2VSZWFkeXHJZTwAAABbSURBVCjPY/jPgB8yDCkFB/7v+r/5/+r/i/7P+N/3DYuC7V93/d//fydQ0Zz/9eexKFgtsejLiv8b/8/8X/WtUBGrGyZLdH6f8r/sW64cTkdWSRS+zpQbgiEJAI4UCqdRg1A6AAAAAElFTkSuQmCC" class="icon" pagespeed_url_hash="2190093177" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/> Editing tips</a>
            </div>
            <div id="help" style="display: none; margin: 10px 0 20px 0" class="flashbox finfo">

                <h4 class="ftitle">Editing tips</h4>
                
                <div class="row">
                	<div class="twelve columns">
<h5>Headings</h5>
<pre>= Heading 1 =
== Heading 2 ==
=== Heading 3 ===
</pre>

<h5>Styling</h5>
<pre>**bold text**, //italic text//, ##monospaced text##
__underlined text__, --strikethrough text--
^^superscript text^^, ,,subscript text,,</pre>

<h5>Lists</h5>
<pre>* List Item 1
* List Item 2
 # Numbered List Item 2.1
</pre>

<h5>Links</h5>
<pre>[[WikiPage]]
[[http://mbed.org]]
[[/handbook/SPI|More about SPI]]
</pre>

<h5>Upverter embed <small>(hint - use the unique id found in the embed code)</small></h5>
<pre>
&lt;&lt;upverter&gt;&gt;634b5640a5bbd8a7&lt;&lt;/upverter&gt;&gt;
</pre>

<h5>Code <small>(hint - publishing your code and linking to it makes it easier to import your program)</small></h5>
<pre>
&lt;&lt;code title=include the mbed library with this snippet&gt;&gt;
#include "mbed.h"
&lt;&lt;/code&gt;&gt;
</pre>
<h5>Linking to a program</h5>
<pre>
&lt;&lt;program  /users/simon/programs/SerialBuffer/latest/ &gt;&gt;</pre>

<h5>Upverter embed <small>(hint - use the unique id found in the embed code)</small></h5>
<pre>
&lt;&lt;upverter&gt;&gt;634b5640a5bbd8a7&lt;&lt;/upverter&gt;&gt;
</pre>

<h5>Team embed example</h5>
<pre>
&lt;&lt;team http://mbed.org/teams/mqtt/ /&gt;&gt;
</pre>

<h5>Component embed example</h5>
<pre>
&lt;&lt;component http://mbed.org/components/AX-12/ /&gt;&gt;
</pre>




<h5>Table of Contents <small> is included by default, to disable put this snippet on the page.</small></h5>
<pre>
&lt;&lt;notoc&gt;&gt;
</pre>

<h5>Blocks</h5>
<pre>
&lt;&lt;quote&gt;&gt;
Can I markup a quote, help or warning block?
&lt;&lt;/quote&gt;&gt;
</pre>

<h5>Images</h5>
<pre>
&#123;&#123;/static/img/mbed.gif&#125;&#125;
&#123;&#123;http://mbed.org/static/img/mbed.gif&#125;&#125; 
[[WikiPage|&#123;&#123;/static/img/mbed.gif&#125;&#125;]]
[[WikiPage|&#123;&#123;/static/img/mbed.gif&#125;&#125;]]
</pre>

<h5>Gallery <small>size argument can be either small or medium, default is large</small></h5>
<pre>
&lt;&lt;gallery size=small&gt;&gt;
&#123;&#123;/static/img/mbed.gif&#125;&#125;
&#123;&#123;/static/img/mbed.gif|mbed logo&#125;&#125;
[[http://mbed.org|&#123;&#123;/static/img/mbed.gif&#125;&#125;]]
[[http://mbed.org|&#123;&#123;/static/img/mbed.gif|mbed logo&#125;&#125;]]
&lt;&lt;/gallery&gt;&gt;
</pre>

<h5>Videos</h5>
<pre>
&#123;&#123;http://www.youtube.com/watch?v=7LPDRcahhUE&#125;&#125;
</pre>
</div>
                	
                	<div class="twelve columns">
                	<p style="text-align:right; margin-bottom: 0;">See the <a target="_blank" href="/cookbook/Wiki-Syntax">full wiki syntax (in new window)</a></p>
                	</div>
                
                
</div>
                
                
 
            </div>


                </td>
            </tr>
            <tr>
                <td>
                    <label for="id_tags">Topic Tags:</label>
                    <input id="id_tags" name="tags" style="width: 300px" type="text"/><script type="text/javascript">jQuery("#id_tags").autocomplete(["__ldrex","__strex","_NARGS","1","1-wire","100MHz","10base-t 100base-tx","11","11062","11bit","11U24","11u35","12","12C","12v","15A","16 bit ADC","163","1768","1800","1Mbit/sec","2","2.0","230","2368","23K256","24 bits","29bit","2D","3-Space","3.1","3.3v Vout","32-bit","32KB","3D","3g","3pi","3v","4.21","400khz","401RE","4088","422","433","433MHz","434","434MHz","4D SGC TFT Screen","4DGL","4x4x4","5110","513137","5v","6","60MHz","64","64-bit","64bit","64KB","6610","6610LCD","6dof","7","7segment","8.3","802.3af","802.3AT","9","9 bit","9-DOF","9bit","a","A1","a9","AA","acceleration","accelerometer","acceptance","access","accounts","Accuracy","acelerometro","acquisition","ActiveSync","activity","AD345","AD5666","AD7190","AD7746","Adafruit","adafruit GPS breakout","adapter","adc","address","ade7754","ADK","administration","ADT7410","Advancement","adxl335","ADXL345","AES","AES256","agilent","AHBSRAM","AHBSRAM0","AHBSRAM1","AHRS","AIC23","ain","Airplay","Airtunes","ajax","algebra","all","allocation","almeno","Altimeter","altium","amin","amoled","Amp","amplifier","Amps","an","Analog","Analog Devices","analog out","AnalogIn","AnalogInOut","AnalogOut","analogue","analogue output","Analytics","ANCS","and","android","AndroidAccessory","ANGLE","animatronics","anologin","ANT","ANT+","Antenna","AP2","apache","api","APP","app-board","append","Apple","application","April","arch gprs","Arch Max","architecture","arduino","are","ARES","arguments","arithmetic","ARM","ARM7","ARM9","arr","array","Arrays","Artists","as5050","Ascii","ASEE","asks","Assembler","assembly","assertion","Astrobe","async","AT","at45","at90","atoi","attach","attach()","audio","auto","Automobile","AUTOSAR","average","AVR","AVReceiver","awesome","awesome!","Ax500","AxedaGO","background","balancing","banging","bare metal","Base","base board","baseboard","basic","bass","batteries","Battery","baud","baudrate","BBC","beacon","BeagleBone","Bee","beginner","belgium","Bertl","Best","beta","BetaBug","between","beyond","Bi-Directional","Bidirectional","big","Bill","billy","bin","binary","Binocular Disparity","biped","bit","bit-band","bitbang","bitmap","Bitmaps","bits","bitwise","bitwise or","Black Friday","BLE","BLE_API","BLE_BlueNRG","bleeper","blend","blink","blinkm","Blinky","blip","Blob Algorithm","blocks","blocks free","BLOD","Blue","bluebrain","bluegiga","BlueNRG","BlueRay","bluetooth","Bluetooth 4.0","Bluetooth modules BX100","bluetooth smart","blueusb","bma180","bmp085","BMPTK","Board","boards","bob2","bog","BOM","bonding","bonjour","bookmark","books","bool","boost clock rate","Boot","bootloader","bootstrapping","brace","braces","brea","breadboard","break","breakout","breakout board","brick","broadcasting","broken","brown-out","browser","BSOD","BTstack","buffer","bufferd","BufferedSerial","bug","bugs","build","Build Options","builder","buildsystem","burst","bus","BusIn","BusInOut","BusOut","BUTTON","buzzer","BX10","Byte","bytes","bzr","C","C Library","c programming","c-embeded","C++","c++0x","C027","C16-U20","C24LCXX_I2C","Cable","caching","Cad","call","callbacks","camera","CAN","CAN adapter","can-bus","canbus","cancel","cannot","cannybots","CANRAM","Capacitance","Capacity","Captcha","captions","captouch","capture","car","card","caret","case","cast","cc2500","CC3000","CDC","CEC","CELL","CGI","chain","Change","Char","char *","character","checkout","chinese","chip","chip select","Chord","chrome","chromium","cinder","Circuit","circular","class","class D","classes","clean","cli","client","clock","clone","close","cloud","cluster","cm0","cmake","cmis","CMPS03","cmsis","cmsis dsp","CMSIS-DAP","CNC","CoAP","code","Code 10","code folding","code generation","code red","Code Sourcery","code_red","code?","Coder;","CodeRed","codes","CodeSourcery","CoIDE","colapse","collaborate","Collaboration update","collision","color","colors","com","COM3","command","commands","comment","comments","commit","common","comms","Communication","comparator","compass","compatibility","competition","compi","compilation","compile","compiler","compiler erro","compiler error","compiler error codes","Compiling","Compoler","component","component_database","componentless","components","Computer","concatenation","Configuration","connect","connector","connectors","const","constant","constructor","consumption","contest","contract","contributions","control","controller","controllerless","conversion","CooCox","cookbook","copy","copyrights","corrupt","Cortex","Cortex-M0","Cortex-M0+","cortex-m4","cos","cosm","counter","counters","counting","cout","CPHA","CPOL","cpplapack","CPU","CPUマニュアル","CRC","critical","critical_section","Crius","CRP","Crypto","crystal","CS4331","CS5331","css","CT32","CTCR","CTS","cube","CubieBoard","current","current sensor","custom","Custom Terminal","cut","CW","CyaSSL","D-","D+","D0","D1","D5","D6","da","DA14580","dac","DAC noise","daisy","Dalek","Dali","damage","DAP","DAQ","data","data abort","data entry","Data Logging","Database","datalogging","Date","datestamp","DC motor","dc-offset","dead","deadlock","deadmbed","debounce","debug","debugger","debugging","debugging DigitalOut","declaration","deep sleep","DeepSleep","default","defined","definition","DEGREE","delay","delete","demo","demo 1","deploy","DerbyCon","derive","description","Descriptors","Design","design101","DesignSpark","desk","destroyed","Destructor","detach","detection","detection/awareness","development","developmet","device","devices","DFRobot","DFU","DHCP","DHT11","DHT22","Differant","difference","Digilent","Digital","digital compass","Digital I/O","digital servos","DigitalDice","DigitalIn","DigitalInOut","digitalOut","DigitialOut","DIGL1024","dint","diode","DIP","direct test mode","direction","directive","directory","disable","DISCONNECT","Disk","display","Displays","distance","distributers","DIY","dll;matlab;","DM9161","DMA","dmu02","DMX","DMX512","doa","doc","document","documentation","does","domotic","don't","dongle","doorbell","dot","DotNet","double","DoubleEdge","Dowload","Download","downloads","doxygen","DP83848","drain","dram","drift","Drive","driver","driverlibrary","driving","ds-5","DS1052E","ds1307","DS1820","DS18B20","DS18S20","DSP","dtm","dual-core","duplex","duty cycle","DVI","Dynamic","dynamixel","dyndns","e-ink hoopup","E-Paper","E1550","E260-D","E289","E980","EA","Eagle","easy","Easydriver","echo","eclipse","editor","EEPROM","effect","EGAS","ehternet","EIDE","eint","elegant coding","Element14","eLua","em-406","EM-406A","EM408","email","Embedded","EmbeddedArtists","EmBlocks","empty","empty binary file","EMS","emulator","emwin","enclosure","Encoder","encoders","encoding","encrypted firmware","encryption","Endpoint","Endpoints events","energy","energy monitoring","engine","entire","enum","Environment","EPD","ERIC","err","errata sheet","Error","Error code","esc","ESP8266","español","etc...","eth","ETH_RST","etherCAT","ethernet","EthernetIfBeta","EthernetInterface","EthernetNetIf","eve","events","Ever","eVY1","example","exception handling","exit","Expansion","Export","Export C","extended operating temperature","extension","external","external memory","extract","eye-fi","F2","F302R8","F334R8","f401","F401RE","facebook","fail.txt","failed","failure","fall()","FAQ","fashion","fast","faster","FastIn","FastOut","FAT","FAT FS","fatfilesystem","FatFIlesystem.lib","FATFS","faulty mbed","Favorites","FDRM","FDRM_KL25Z_USBSerial_example","FDRM-KL25Z","feature","features","fedora","feedback","Felica","feof","ffc","fgetc","Fiel","fields","FIFO","file","File Exclusion","file format","filename","files","Filesys","filesystem","filetree","filter","filtering","filters","find","finder","firefox","firm","firmata","firmware","firmware 141212","Firmware over the air","Firmware Update","firmware.bin","fix","fixedpoint","flash","flash drive","flashing","flexibility","flicker","float","Floating point","Flot","flow","Fm+","folders","Follow","following","font","Fools","FOOTPRINT","fopen","for","foreground","fork","format","formating","formatting","Forum","FOTA","fpc","fpc1011f","FPF212","FPGA","fprint","fprintf","fragmentation","frame","frame rate","framework","FRDM","FRDM K64F","FRDM-K22F","FRDM-K64F","FRDM-KL-46Z","FRDM-KL05z","FRDM-KL25Z","FRDM-KL46Z","FRDM0K22F","free","freebsd","Freedom","FreeRTOS","Freescale","freeze","Freq","frequency","Fried","frmd-kl25z","frog","front panel","frozen program","frustration","fscanf","fseek","FSK","FT232R","FTDI","FTDI Cable","FTP","fubction","fun","function","function prototypes","für","fuse","fusion","future","Fwrite","fxos8700cq","G","gadgeteer","game","gang","garbage","gateway 504 timeout","GATT Client","gcc","gcc arm","GCC_CR","gdb","GDE021A","generate","Gesture","get","getc","GFX","GHI","git","glasses","GLCD","glitch","global","gmail","gnu","GNU GCC","google","gpdma","GPIO","GPRS","GPS","GR-PEACH","GR-PEACH　Hardware","GR-PEACH_producer_meeting","GR-PEACHで、128x64ドットのグラフィックLcdに表示","GR-SAKURA","graphic","Graphics","Graphics Driver","graphing","graycode","group","GSM","guest","GUI","guitar","gyro","gyroscope","h","H-bridge","hacking","hacks","HAL","half","hall effect sensor","HAM","HAM Radio","hand crank","handler","handshaking","hang","hangs","hardhackers","hardware","HcHCCA","HCSR04","HD44780","HDD","HDL","HDMI","header","headers","heap","heat","hello","helloworld","help","Helpful_1","hepl","herd","hex","hexapod","hg","hibernate","hibernation","HID","high","high temperature","high-pass","hire","Hitachi","Hitec","hm-10","HMAC","HMC6352","HMI","Home Automation","hookup","Host","HotSync","hour glass","how","howto","HRM1017","HSYNC","html","http","HTTPClient","httpd","HTTPDynamicPage","HTTPfile","HTTPLog","https","HTTPServer","HTTPServer_echoback","HTTPServerExample","HTTPText","HTTs","HUAWEI","hub","hub scynchronisig","Humidity","I/O","I2C","I2C/SPI-to-UART IC","I2C2","I2CC0","I2CLCD","i2cmaster","i2cslave","I2S","I2S;","IAP","IAR","Icrease","ID","ID12","idb04A1","ide","ideas","ie7","IE9","if","ifdef","ignore","ILI9325","ILI9328","ILI9341","image","Images","impl","import","importing","IMU","IMU Razor","In","inches","include file","Increasing","indent","indexing","industrial","Inertial","infinite loop","infra","infrared","init()","initialisation","initialization","initiliazation","inline","Input","Insertion","Install","installer","instance","Instances","Instructables","int","Int to String","integer","integration","Intel ISEF","interface","interface chip","interfacing","intern","internal","Internet","internet of things","Interr","interrupt","interrupt callback","Interrupt priority","InterruptIn","interrupts","introduction","intsall","invalid","IO","iOS","IOT","ip","ip address","IP checksum","ipad","iPhone","IR","IR Sensors","IRC","irq","is","ISIS","ISP","ISR","Issue","issues","italic","ITG3200","iTunes","J-Link","Japan","Japanese","Java","JPEG","jQuery","JSON","JTAG","Jumentum","k20d50m","K22F","K64","k64-m4-accel","K64F","KB","KDS","keil","kernel","key","keyboard","keypad","keys","kickstarter","Kinetis","kit","kits","KL-25Z","KL05Z","KL25z","KL43Z","kl46z","kl64f","KS0108","KURD","L152RE","L293D","l298n","labview","labview2009","Lack","LAN","lan8720","landscape","language","lapack","laser","laser cut","latency","layout","LCD","LCP11U24","ldr","LE","leak","learning","least","led","led matrix","LED1","LED3","LEDboard","LEDS","LEDscreen","LEDSflashfast","LEFT","LEM","level","Level Converter","level shifting","level translation","LF1S022","LFN","lib","LibHumidity","libraries","library","license","lifespan","light","light sensor","Like","limit","limitations","limits","LIN","line","line 21","Line Follower","line numbers","linefollow","link","LINK_LED","LINK_SPEED","linkedin","linker","links","lint","linux","lipo","LiquidCristal","LiquidWare","LIS302","LISA","LISA_U200","listener","liwp","LM175","LM34","load","loading","LocaFileSystem","Local","localdisk","localfile","LocalFileHandle","LocalFileSystem","LocalFileSystem not released","localflash","localhost","localtime","locks","lockup","logging","logging levels","logo","Long","Look Up Table LOT","loops","lost","lost program","lot","low","low power","low power operation","low temperature","low-level","low-pass","LPBmini","LPC","LPC_CAN","LPC_MCI","LPC_MIC","LPC1114","LPC1114FN28","LPC11U24","LPC11U35","LPC11U67","LPC11U68","LPC11U6X","lpc11uxx","LPC1549","LPC15xx","LPC17","lpc17_emac.c","LPC1768","LPC1768.sct","LPC1769","lpc1788","LPC1857","LPC18XX","lpc2368","LPC23xx.h","lpc2478","LPC407x","LPC4088","LPC408x","lpc43xx","lpc810max","LPC812","LPC824","LPCmini","LPCXpresso","LPCXpresso1549","LPS331AP","LSM303","lt8500","LTC2400","lua","lwip","M0","M2M","m2p","m3pi","m4","mac","MAC address","mac os","Machine","macos","macro","madplayer","magic","magician","magjack","magnetics","magnetometer","Main","mainpage","Make","makefile","Makefile;","malloc","MAM","Management","manager","Manufacture","manufacturing","map","mapping","marble run","markdown","mask","mass","master","materials","math","math.h","MATLAB","matrix","Maturity of mbed","mAVRISP","max","MAX11110AUT+T","MAX233","MAX5842","MAX6675","MAX6952 LED driver","maximum","maze","mb","mb90f549","mbed","mbed account","MBED Application Board","mbed firmware","mbed LPC1768","mbed rtos","mbed SDK","mbed SPI","MBED website","mbed_debug","mbed_die","MBED_MICROCONTROLLER","mbed_official","mbed_reset","mbed_rtos","mbed-dsp","mbed-rtos","mbed.h","MBED.HTM","mbed.lib","mbed.org","mbedchallenge","mbedlib","mBuino","MCP23017","mcp2551","MCU","MD25","mean","measure","measurement","mechatronics","median","Medical device","mega","MemberFunction","memory","memory allocation","memory error","Menbed","menu","mercurial","Mesauer","message","Meter","micro","micro amp","Microchip","microlib","micromouse","micros","microSD","Microwire","MID","MIDI","mien","MIFARE","millis","milliseconds","MiMic","mindstorms","mini","minimu9","minimum","miniusb","Mint","Mirror","Missing","MK20Dx256","MK64FX512","mkit","mobile","mobile phone","mobileLCD","Modbus","modbustcp","MODDMA","MODDMA.h","mode","model","modem","MODGPS","MODI2C","modifications","MODSERIAL","Modula-2","module","monitor","monitor mode","morpho","Morse","Mosi","mossmann Bluetooth radio","motion","motor","motor driver","motors","mount","Mouse","mouth","mp3","mp3player","MPL3115A2","mpr121","MPU-6000","MPU-6050","MPU6000","MPU6050","MPU9250","MQTT","msc","MSCFileSystem","MSCUsbHost","MSD","mtu","multi-core","multicast","multiple","multiple binaries","multiple devices","multiplexing","multitasking","music","mutiplex","mysql","N-Key","n'","n64 controller","Name","Names","namespace","nano","nanopb","NanoSocketiWifi","navigation","NB","NDS","Near Field Communication","NeatGUI","negotiate","NeoPixel","nested","NET","NetServices","NetServicesMod","network","networking","new","new board","NEW MBED","new tcp-ip stack","new users","newbie","Newhaven","newlib","newline","news","NFC","NFS","NHD-2.4-240320SF-CTXI#-1","NMEA","No Space in Execution Regions","nohl","noise","Nokia","Nokia LCD","Nokia6610","Non","non-blocking","non-public","non-pulic","non-volatile memory","non-volotile","Noob","Nordic","not","not available","not consecutive sectors","not mounting","Notebook","notebook pages","notebooks","notes","novice","nRF2401A","nRF24L01","nRF51 SDK","nRF51-DK","nRF51822","NTP","ntp server","ntpdate","Nucleo","NUCLEO-F411RE","nucleos","nulll","number","numbers","numeric","NVIC","nvic_systemreset","NVM","nxp","NXP/mbed","nxp1768","OAuth","Oberon","object","Object Design","occupancy","octal","octopus card","of","offline","offline compile","offset","old","OLED","OM13056","on","on screen display","onchip","One Wire","OneWire","online","online compiler","onlinehelp","oooooooooooooooyyyooooooo","Op","Open","open drain","open source","openair","OpenDrain","OpennNETCF","openocd","opensolaris","opensource","opera","operators","Optimization","options","Optocoupler","Orange","OS","osc","OSC_ENA","oscillator","Oscilloscope","osd","OSEK","ostream","OSX","OTA","OU","Out","out of date","output","outputs","Outrageous","Outrageous Circuits","Over","overloading","P0_15","P0_3","p15","p29","p2m","Pachube","package","Page","paho","pain","pairing","PAKET","pal","Parity","parse","parts","Pascal","Password","paste","PATA","pbuf","pc","PC board","pc-lint","pc.printf","PC.scanf():","PCA9532","PCB","PCF8574","PCF8575","PCF8575C","PCLKSEL0","PCLKSEL1","pcRx_interrupt()","performance","period","peripheral","peripheral clock","Permission Denied","persistent","phase","phi","photos","phy","Physical Web","Pi","PIC","PIC32MZ","picture","pictures","PID","piezo","Pin","pin 18.","pin21","pin24","pin25","pinball","PinDetect","PING","pinmap","PinNames","pinou","pinout","pins","Pinsel4","PIO","pir","pixel","plan","plastic parts","platform","platformio","player","playstation","PLC","PLL0","PLL1","Plotting","Plus One","PM","POE","pointer","pointers","polarity","pollici","polling","polohu","pololu","port","port expander","porting","portpin","ports","position contro","post","pow(","Power","power factor","power harvesting","power management","power managment","power over ethernet","Power Up","powerdown","Powering","powerline","powersource","PPM","ppmsum","PPP","prallax","Precompiled","preprocessor","Press","pressure","preview","print","Printed Circuit Board","printf","printout","priority","private","Private message","prject","problem","processing","Processor_update","Production","profile","program","program details","Programme","programming","project","project list","projects","promiscuous","Promiscuous mode","Promisuous mode. Moniter mode","promotion","proposal","prot","Protection","proteus","proto","protoboard","protobuf","protocol","prototype","prototype to hardware","prototyping","ps","PS/2","PS2","PS3","PSP","PTC1","public","publish","published","publishing","pulldown","pullup","pulse","pulse direction","Pulse;","Pulsewidth","push","putc","pwm","PwmIn","PwmOut","pymite","pyOCD","python","QEI","qp","qq","qsort","QSP Revue","QTR-1RC","quadrature","quadrocopter","quality","quaternions","questions","quiescent","quiz","QVGA","R","racing","Radio","rain","RAM","range","RangeFinder","Rasperry","rate","rates","raw","RC","RC5","re-entrancy","read","read_us","readdir","reader","Reading","readNB","real","real product","real-time","realloc","realtimeclock","reboot","rebuild;","rebuilt","receive","recognition","recognized","recommend","recover","red","red suite","RedBearLab","reference","Reference code","reference design","References","Reflectance","Register","registers","registration","regression","regulator","Relay","relays","remote","remote data collection","Remote LCD","Removal","remove","rename","Renesas","replace","replace all","Report","Repository","reprogram","reset","Reset Button","resistor","Resize","resolved","response","retrieval","Retrieving","Return Code 9","Returntype int","reverse","review","revision","revisions","rf","RF4463PRO","RFID","rfm12","RFM12B","rgb","RGBLed","ribbon","RIGHT","Rigol","rise","rise()","RIT","rj45","rld","rmdir","RMII","rms","RN-XV","rn41","roadmap","robo3001","RoboClaw","robodog","robot","Robotics","robotis","rollover","ROM","ROSMbed","rotary","Roulette","router","routine","rover","rpc","RPCFunction","RPCVariable","RPG","RS-485","rs232","RS485","RSA","rss","RTC","rtos","Rtostimer","RTS","RTX","ruby","rugged","rules","rx","RX-64","RxIrq","rxtx","RZ/A1H","s","SAA1064","sabirin","Safari","SALE","sampling","sampling time.","Save","save as","SC16IS750","SCA3000","scanf","Scanning Matrix","scatter file","Scheduler","Schematics","Science","sclk","scmRTOS","scope","scp1000","SCR","Scratch","screen","script","Scroll","SD","SD Card","SD-Card","SDCard","SDFileSystem","SDFileSystem Library","SDFileSystemSystem","SDHC","sdhcfilesystem","SDK","sdram","SE95D","search","Sections of Aggregate Size","secure boot","security","Seeedstudio","Segger","segment","segway","select","selection","semaphore","semihost","semihosting","Send","sensor","sensors","Serial","Serial Flash","serial interrupt","Serial LCD Library","Serial Number","serial port","serial_api.h","Serial::RxIrq","serial.attach","serial.getc()","serial.readable()","SerialHalfDuplex","SerialPC","server","service","servlet","Servo","servos","set","set_link()","setting","SETUP.cpp","Shared resources","Sharing","Sharp","Sheet","shield","shift","shirt","shoes","shopping","short","shortcut","show","Show/hide","SID","signal","signal processing","signal_wait","signature","SiliconSensingDMU","SIM","SIM900","SimpeSerialProtocol","SimpleSocket","Simulator","sin","single axis","sink","size","slave","Sleep","slow","slow clock rate","slow GPIO","smart","smartphone","smd","SMS","SMS shoulder tap","SMT","SMTP","SNES","SNIFFER","snip","snippets","SNMP","SNMP;","socket","sockets","Sof_event","software","software Uart","solar","solaris","some","sound","SoundRecorder","source","source code","sourcery","Sourcery;","SP14Q002","space","spaces","sparkfun","SparkFun MicroSD Breakout Board","Spartan 3E","SPDIF","speaker","specification","Speed","SPI","spi 10mhz","SPI input","SPI master","SPI Slave","SPI3","spice","SPISlave","spree","SQL","SQLite","square","sram","SRF08","ssb","sscanf","SSD1963","SSH","SSI","SSL","SSP","SST","ST","ST Nucleo F072RB","ST Nucleo F302R8","ST Nucleo F401RE","ST Nucleo L053R8","ST Nucleo L152RE","st7580","stable","stack","Stamp","standalone","standard","star","StarBoard","start","starter","starters","startup","State","State Machine","statement","static","status","std:string","stderr","stdio","stdout","STEM","Step","step direction","Stepper","stepper driver","stepper motor","StepperMotorUni","Stick","stm32","STM32 Bugs","stm32F030","STM32F1","STM32F103","STM32F103RB","STM32F401RE","STM32F407","stm32L053","STM32L1","stop","stop bit","stops working","storage","strange","Strange Error","strcpy","stream","stretching","string","strtof","strtol","structures","student","Studio","suart","Subscriptions","substr","suggestion","suggestions","SumoBot","super","super capacitor","supply","Support","suspend","SVC","svn","SWD","switch","switcher","SWL","SX1276","SX1276MB1MAs","sync","synchronize","Syncronised","Synergy","syntax","synth","synthesizer","System","SystemInit","SysTick","tab","table","tabs","Tag","tagged","tai","talkie","target","task","task number","TCP","tcp/ip","TCPS","TCPSocket","TCPSocketConnection","TCPSocketServer","team","teensy","Telnet","Telnet server","Temperature","tera","Tera Term","TeraTerm","term","Terminal","test","Testbed","testing","text","TextLCD","TextStar","TFT","the","thermoelectric","things","thread","threads","THROTTLE","thumb","TI","Ticker","time","time saving or time consuming","time-triggered","timeline","Timeout","timer","timer2","timer3","timers","timing","tinyclr","tip","tlc5940","TLS","TLV1572","TLV320","TMP102","to","to?","Toggle","tolerant","tollos","toolchain","toolchain;","touch","touch input","touchpad","Touchscreen","tracker","training","Transceivers","transfer","transfer speed","translation","translator","transmit","tri-state","triac","trigger","Trigonometric","trimble","troub","troubleshooting","try catch","TSL2560","TSL2561","TTL","ttyACM0","turn","tutorial","twitter","TwitterExample","Two","Tx","typedef","typos","uA","UART","UART0","uartsb","uav","ubertooth","ublox","Ubuntu","UDP","UDPSocket","uint16_t","ultrasonic","UM6","uml","umts","UMTSStick","undo","unicode","unique","unit","unix","Unknown","unlock","unmount","unresponsive","unseren","unsigned int","unstable","update","updates","UPGRADE","Upload","uploading","UPnP","url","US Naval Academy","usability","usage","usart","USB","USB connector","USB device","USB Host","USB memory","USB MSC","usb prober","USB to CAN","USB_CDC_MSD_Hello","USB_MSD","USB_VBUS","USB-stick","USB2CAN","USB3.0","USBA","USBB","usbcdc","USBD480","USBDevice","USBHID","USBHostMSD","USBKeyboard","USBMIDI","USBMouse","USBMSD","usbrx","usbserial","usbtx","USBUDCAH","use","user","username","utf 8","utf-8","Utilities","UVC;","uvision","V OUT","Valid","variable","variables","vars","VB","VB.NET","VB6","VCP","vector","vector.cc","vehicle","Venus","verification","verify","version","version control","VGA","vibration","VID","video","Vin","virtual","virtual disk","virus","visa","vista","Visual","Visual Basic","VMWare","Vodafone","Vodafonemodem","voich","volatile","voltage","volume","volunteer","VOUT","vprintf","VSYNC","VU","W5500Interface","W5UXH","wait","wait()","wake on LAN","wake on movement","wake on SMS","wake up","wakeup","walkie","wallbot","warning","warnings","watchdog","wav","wave","WavePlayer","WDT","we","weak","wearable","weather","Web","webfs","webserver","website","Websockets","What","wheel","while loop","while(1)","Wi-Fi","WiConnect","width","wifi","WiFly","Wii","Wii60","wiimote","wiki","Win2000","win7","Win8.1","wind","windows","Windows serial configuration","Windows Serial Driver","windows7","Windows8","wireless","wiring","wirless","with","Wixel","Wiznet","work","workflow","working","workshop","world","write","writeable","writer","wrong","ws2801","WSE","wt32","wwdt","WYSIWYG","X","X-10","xbeat","xbee","XBeePro","Xbox","Xbox 360","xively","xml","XP","Xpresso","XTAL","y5design","YEI","yellow","yosemite","yotta","You Tube","ZeroG","zigbee","zip","Zumo"],{width:150,max:10,multiple:true,multipleSeparator:",",scroll:true,scrollHeight:300,});</script>
                </td>
            </tr>
            <tr>
                <td>
                    
                    <div class="g-recaptcha" data-sitekey="6LdH1dMSAAAAAOYJDzwa5KEUq1tPtV9sTrGJoSUu"></div>
                </td>
            </tr>
            <tr><td>
                <input type="submit" name="submit" class="button large radius" style="font-weight: bold; margin-top: 5px;" value="Post new topic"/> &nbsp;
                <input type="button" href="#" onClick="return false;" id="preview" class="button secondary radius" value="Show preview"/>  <span id="loading"></span> &nbsp;
            </td></tr>
        </table>
    </form>
</div>

                
            
        


        
            <h2><a name="questions"> <A href="#questions">Questions</A></h2>
            
                
                    
                        <div class="question">
                            <a href="/questions/8016/mbed-zip-file-download-is-corrupted-I-am/" style="color: inherit !important;">
                                <div class="stats">
                                    
                                    <div class="answers" style="background:#B2EEB2;" title="This question has been solved.">
                                    

                                        <div class="qstat">9</div>
                                        answers
                                    </div>
                                </div>
                            </a>

                            
                            <img title="This question has been solved" height="16" width="16" class="icon icon_tick" src="data:image/gif;base64,R0lGODlhAQABAJEAAAAAAP///////wAAACH5BAEAAAIALAAAAAABAAEAAAICVAEAOw==" pagespeed_url_hash="3154373828" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/>
                            

                            <a href="/questions/8016/mbed-zip-file-download-is-corrupted-I-am/" class="title" title="mbed zip file download is corrupted !! I am trying to download it for KL25Z for matlab but failed">
                                mbed zip file download is corrupted !! I am trying to download it for KL25Z for matlab but failed
                            </a>

                            <span class="qdata">
                                <span class="authortext"><a href="https://developer.mbed.org/users/spacetoon34/"><img alt="" class="icon" src="data:image/jpeg;base64,/9j/4AAQSkZJRgABAQAAAQABAAD/2wBDAAUDBAQEAwUEBAQFBQUGBwwIBwcHBw8LCwkMEQ8SEhEPERETFhwXExQaFRERGCEYGh0dHx8fExciJCIeJBweHx7/2wBDAQUFBQcGBw4ICA4eFBEUHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh7/wAARCAAQABADASIAAhEBAxEB/8QAFwAAAwEAAAAAAAAAAAAAAAAABAUGCP/EACUQAAIABQIGAwAAAAAAAAAAAAECAwQFBhEAEgcTITFBYSJx4f/EABQBAQAAAAAAAAAAAAAAAAAAAAD/xAAUEQEAAAAAAAAAAAAAAAAAAAAA/9oADAMBAAIRAxEAPwDUfFEzq2bNtJO6kFTFKHB5efl++s6ScETOGm1AxWdpURUWCGYkBgDuwPHddRl03dWKxGmZd5xlkGiNsgw1CgpnoCR1PjudB27clWoDsafMAQ3O54LruRj9eD7GNB//2Q==" pagespeed_url_hash="195629526" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/></a> <a href="https://developer.mbed.org/users/spacetoon34/"> S T</a></span> <br/>
                                <abbr title="Tue 05 May 2015 07:21">1 week, 3 days ago</abbr>
                            </span>

                            <p class="tags">
                            
                                <img height="16" width="16" class="icon icon_tag" src="data:image/gif;base64,R0lGODlhAQABAJEAAAAAAP///////wAAACH5BAEAAAIALAAAAAABAAEAAAICVAEAOw==" pagespeed_url_hash="3154373828" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/>
                                
                                <a href="/questions/tag/MATLAB">MATLAB</a>, 
                                
                                <a href="/questions/tag/mbed">mbed</a>
                                
                            
                            </p>
                        </div>
                    
                
                    
                        <div class="question">
                            <a href="/questions/8010/Classes-of-mbedh-disappeared/" style="color: inherit !important;">
                                <div class="stats">
                                    
                                    <div class="answers" style="background:#d7eaef;" title="This question has 1 answers.">
                                    

                                        <div class="qstat">1</div>
                                        answers
                                    </div>
                                </div>
                            </a>

                            

                            <a href="/questions/8010/Classes-of-mbedh-disappeared/" class="title" title="Where are the classes of mbed.h? I need to know how use the functions of PwmOut.">
                                Classes of mbed.h disappeared
                            </a>

                            <span class="qdata">
                                <span class="authortext"><a href="https://developer.mbed.org/users/schone/"><img alt="" class="icon" src="data:image/jpeg;base64,/9j/4AAQSkZJRgABAQAAAQABAAD/2wBDAAUDBAQEAwUEBAQFBQUGBwwIBwcHBw8LCwkMEQ8SEhEPERETFhwXExQaFRERGCEYGh0dHx8fExciJCIeJBweHx7/2wBDAQUFBQcGBw4ICA4eFBEUHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh7/wAARCAAQABADASIAAhEBAxEB/8QAFwAAAwEAAAAAAAAAAAAAAAAABAUGCP/EACUQAAIABQIGAwAAAAAAAAAAAAECAwQFBhEAEgcTITFBYSJx4f/EABQBAQAAAAAAAAAAAAAAAAAAAAD/xAAUEQEAAAAAAAAAAAAAAAAAAAAA/9oADAMBAAIRAxEAPwDUfFEzq2bNtJO6kFTFKHB5efl++s6ScETOGm1AxWdpURUWCGYkBgDuwPHddRl03dWKxGmZd5xlkGiNsgw1CgpnoCR1PjudB27clWoDsafMAQ3O54LruRj9eD7GNB//2Q==" pagespeed_url_hash="195629526" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/></a> <a href="https://developer.mbed.org/users/schone/"> Matheus Schone</a></span> <br/>
                                <abbr title="Mon 04 May 2015 06:51">1 week, 4 days ago</abbr>
                            </span>

                            <p class="tags">
                            
                                <img height="16" width="16" class="icon icon_tag" src="data:image/gif;base64,R0lGODlhAQABAJEAAAAAAP///////wAAACH5BAEAAAIALAAAAAABAAEAAAICVAEAOw==" pagespeed_url_hash="3154373828" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/>
                                
                                <a href="/questions/tag/mbed">mbed</a>
                                
                            
                            </p>
                        </div>
                    
                
                    
                        <div class="question">
                            <a href="/questions/6915/RawSerial-should-add-one-function-of-as-/" style="color: inherit !important;">
                                <div class="stats">
                                    
                                    <div class="answers" style="background:#B2EEB2;" title="This question has been solved.">
                                    

                                        <div class="qstat">2</div>
                                        answers
                                    </div>
                                </div>
                            </a>

                            
                            <img title="This question has been solved" height="16" width="16" class="icon icon_tick" src="data:image/gif;base64,R0lGODlhAQABAJEAAAAAAP///////wAAACH5BAEAAAIALAAAAAABAAEAAAICVAEAOw==" pagespeed_url_hash="3154373828" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/>
                            

                            <a href="/questions/6915/RawSerial-should-add-one-function-of-as-/" class="title" title="I thought that RawSerial should add one function like WriteBytes(const uint8_t* buf, int len), it will be usefull.
BTW, can the printf change impl...">
                                RawSerial should add one function of as WriteBytes(const uint8_t* buf, int len)
                            </a>

                            <span class="qdata">
                                <span class="authortext"><a href="https://developer.mbed.org/users/kenlee_gz/"><img alt="" class="icon" src="data:image/jpeg;base64,/9j/4AAQSkZJRgABAQAAAQABAAD/2wBDAAUDBAQEAwUEBAQFBQUGBwwIBwcHBw8LCwkMEQ8SEhEPERETFhwXExQaFRERGCEYGh0dHx8fExciJCIeJBweHx7/2wBDAQUFBQcGBw4ICA4eFBEUHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh7/wAARCAAQABADASIAAhEBAxEB/8QAFwAAAwEAAAAAAAAAAAAAAAAABAUGCP/EACUQAAIABQIGAwAAAAAAAAAAAAECAwQFBhEAEgcTITFBYSJx4f/EABQBAQAAAAAAAAAAAAAAAAAAAAD/xAAUEQEAAAAAAAAAAAAAAAAAAAAA/9oADAMBAAIRAxEAPwDUfFEzq2bNtJO6kFTFKHB5efl++s6ScETOGm1AxWdpURUWCGYkBgDuwPHddRl03dWKxGmZd5xlkGiNsgw1CgpnoCR1PjudB27clWoDsafMAQ3O54LruRj9eD7GNB//2Q==" pagespeed_url_hash="195629526" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/></a> <a href="https://developer.mbed.org/users/kenlee_gz/"> Ken Lee</a></span> <br/>
                                <abbr title="Tue 21 Apr 2015 19:40">3 weeks, 2 days ago</abbr>
                            </span>

                            <p class="tags">
                            
                                <img height="16" width="16" class="icon icon_tag" src="data:image/gif;base64,R0lGODlhAQABAJEAAAAAAP///////wAAACH5BAEAAAIALAAAAAABAAEAAAICVAEAOw==" pagespeed_url_hash="3154373828" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/>
                                
                                <a href="/questions/tag/mbed">mbed</a>, 
                                
                                <a href="/questions/tag/printf">printf</a>, 
                                
                                <a href="/questions/tag/RawSerial">RawSerial</a>
                                
                            
                            </p>
                        </div>
                    
                
                    
                        <div class="question">
                            <a href="/questions/6824/Pinname-specification/" style="color: inherit !important;">
                                <div class="stats">
                                    
                                    <div class="answers" style="opacity: 0.4;" title="This question has no answers.">
                                    

                                        <div class="qstat" style="color:#6B2B28;">0</div>
                                        answers
                                    </div>
                                </div>
                            </a>

                            

                            <a href="/questions/6824/Pinname-specification/" class="title" title="Is there an mbed specification on how a microcontroller should define pinnames.h? I am especially interested if what the enum PinName has a specifi...">
                                Pinname specification
                            </a>

                            <span class="qdata">
                                <span class="authortext"><a href="https://developer.mbed.org/users/urmi/"><img alt="" class="icon" src="data:image/jpeg;base64,/9j/4AAQSkZJRgABAQAAAQABAAD/2wBDAAUDBAQEAwUEBAQFBQUGBwwIBwcHBw8LCwkMEQ8SEhEPERETFhwXExQaFRERGCEYGh0dHx8fExciJCIeJBweHx7/2wBDAQUFBQcGBw4ICA4eFBEUHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh7/wAARCAAQABADASIAAhEBAxEB/8QAFwAAAwEAAAAAAAAAAAAAAAAABAUGCP/EACUQAAIABQIGAwAAAAAAAAAAAAECAwQFBhEAEgcTITFBYSJx4f/EABQBAQAAAAAAAAAAAAAAAAAAAAD/xAAUEQEAAAAAAAAAAAAAAAAAAAAA/9oADAMBAAIRAxEAPwDUfFEzq2bNtJO6kFTFKHB5efl++s6ScETOGm1AxWdpURUWCGYkBgDuwPHddRl03dWKxGmZd5xlkGiNsgw1CgpnoCR1PjudB27clWoDsafMAQ3O54LruRj9eD7GNB//2Q==" pagespeed_url_hash="1689587769" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/></a> <a href="https://developer.mbed.org/users/urmi/"> urmi pil</a></span> <br/>
                                <abbr title="Wed 25 Mar 2015 19:48">1 month, 2 weeks ago</abbr>
                            </span>

                            <p class="tags">
                            
                                <img height="16" width="16" class="icon icon_tag" src="data:image/gif;base64,R0lGODlhAQABAJEAAAAAAP///////wAAACH5BAEAAAIALAAAAAABAAEAAAICVAEAOw==" pagespeed_url_hash="3154373828" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/>
                                
                                <a href="/questions/tag/mbed">mbed</a>
                                
                            
                            </p>
                        </div>
                    
                
                    
                        <div class="question">
                            <a href="/questions/6810/How-to-download-from-here/" style="color: inherit !important;">
                                <div class="stats">
                                    
                                    <div class="answers" style="background:#d7eaef;" title="This question has 2 answers.">
                                    

                                        <div class="qstat">2</div>
                                        answers
                                    </div>
                                </div>
                            </a>

                            

                            <a href="/questions/6810/How-to-download-from-here/" class="title" title="Hello, I&#39;m new to this site, How do I download anything from here? Anything I click just takes me somewhere else.">
                                How to download from here
                            </a>

                            <span class="qdata">
                                <span class="authortext"><a href="https://developer.mbed.org/users/MikeB223/"><img alt="" class="icon" src="data:image/jpeg;base64,/9j/4AAQSkZJRgABAQAAAQABAAD/2wBDAAUDBAQEAwUEBAQFBQUGBwwIBwcHBw8LCwkMEQ8SEhEPERETFhwXExQaFRERGCEYGh0dHx8fExciJCIeJBweHx7/2wBDAQUFBQcGBw4ICA4eFBEUHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh4eHh7/wAARCAAQABADASIAAhEBAxEB/8QAFwAAAwEAAAAAAAAAAAAAAAAABAUGCP/EACUQAAIABQIGAwAAAAAAAAAAAAECAwQFBhEAEgcTITFBYSJx4f/EABQBAQAAAAAAAAAAAAAAAAAAAAD/xAAUEQEAAAAAAAAAAAAAAAAAAAAA/9oADAMBAAIRAxEAPwDUfFEzq2bNtJO6kFTFKHB5efl++s6ScETOGm1AxWdpURUWCGYkBgDuwPHddRl03dWKxGmZd5xlkGiNsgw1CgpnoCR1PjudB27clWoDsafMAQ3O54LruRj9eD7GNB//2Q==" pagespeed_url_hash="195629526" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/></a> <a href="https://developer.mbed.org/users/MikeB223/"> Michael Burgess</a></span> <br/>
                                <abbr title="Thu 26 Mar 2015 11:00">1 month, 2 weeks ago</abbr>
                            </span>

                            <p class="tags">
                            
                                <img height="16" width="16" class="icon icon_tag" src="data:image/gif;base64,R0lGODlhAQABAJEAAAAAAP///////wAAACH5BAEAAAIALAAAAAABAAEAAAICVAEAOw==" pagespeed_url_hash="3154373828" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/>
                                
                                <a href="/questions/tag/mbed">mbed</a>
                                
                            
                            </p>
                        </div>
                    
                

                
                    
                        <a href="/questions/related/148/4/mbed/">See more related questions</a>
                    
                

            
        
    </div>
</div>




        </div>
        
        <div class="three columns sidebar ">
            







<div class="panel radius">
    <h5 class="subheader">Repository toolbox</h5>
    <table id="repo_actions">
        <tr>
            <td>
                
                <a style="width: 100%;" class="button radius" target="compiler" href="https://developer.mbed.org/compiler/#import:/users/mbed_official/code/mbed/builds/dbbf35b96557;mode:lib;platform:">
                
                	<span>
                        Import this
                        
                            library
                        
                	</span>
                </a>
            </td>
        </tr>
        <tr>
        	<td>
    	    	<a style="width: 100%;" class="button secondary small radius" href="/users/mbed_official/code/mbed/export">
    	    		<span>
    	    			<img class="icon" src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAMAAAAoLQ9TAAABYlBMVEUAAAAAAAsAABUAACAAACoEBC4GBjAHBxwICDINDTcZGUNDQ21ISHJMTHZOTnhQUHpTU31UVH5WVoD///8AAAAAAAAAAAAAAAAAAAAZGUMAAAAAAAAAAAA/P2lISHJJSXNQUHpWVoAAAAAAAAAAAAAAAAAAAAAAACAAACoAAAAAAAAQEDoAABhpaYxwcJNzc5ZXV3phYYRwcJM5OVxOTnAnJ0ptbYxiYoF9fZyDg6GFhaSEhKCKiqaRka2Skq5TU3CPj6tNTWpUVHKYmLBzc4p5eZGzs8TFxdfGxtfMzN7Ozt/R0d/U1OHd3eff3+e4uMm8vM3AwNHBwdLHx9jIyNnLy9zMzN3Nzd7Ozt/Pz+DS0uPT0+TU1OXV1ebX1+fX1+jY2Oba2uvb2+zc3Orc3Ove3uzg4O7g4O/h4e7i4vDm5vPn5/Lp6fTr6/Tr6/Xs7PTs7PXv7/bw8Pb29vv39/r+/v/TvxR9AAAAT3RSTlMAAAAAAAAAAAAAAAAAAAAAAAAAAAIDBAgJDRAREhISEhISGBkaISQvLzAxNEhiYmJjY2NubnOdoKCgoKGhoaGssrOzzNnZ+Pr6+vr6+vr6kQiSaQAAANVJREFUGNNVwUFPwkAQgNFvdrdUsgSoiGKMxBijXr378717lyORRA0RcFut7c549j2Z8V/4ESmYjCP1YW+oBkCry+lttxqzA/xAhIv5vfjYxGrovgPHkxhvFNz51FY784vl2V1ZiFnTD2Typf56dtU1reQ6ddlql0J59Aa5LVtIyWoN6QDgC60z5LSRoUHmcdF+PuHBydBUH0b+tN3n9Oycc6gyWkYp4nKEKt73xkBOxJebzVZz57OZbQtXudf1iwIC8yIGP+dD++b3nQCWm9Ktwdpe4Q8s62T+y9T5AwAAAABJRU5ErkJggg==" pagespeed_url_hash="578549518" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/>
    	    			Export to desktop IDE
    	    		</span>
    	    	</a>
        	</td>
        </tr>

        

        

        
        <tr>
            <td> 
                

<a style="width: 100%;" href="javascript:void(0)" onclick="follow(this, 4, 'repositories', 'repository', 'repository');" class="button small radius secondary" title="Click to follow.">
    <span>
        <img height="16" width="16" class="icon icon_add" src="data:image/gif;base64,R0lGODlhAQABAJEAAAAAAP///////wAAACH5BAEAAAIALAAAAAABAAEAAAICVAEAOw==" pagespeed_url_hash="3154373828" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/>
    </span>
    Follow
</a> 



            </td>
        </tr>
        

        

        
            
                <br/>
                <img height="16" width="16" class="icon icon_repo_embed" src="data:image/gif;base64,R0lGODlhAQABAJEAAAAAAP///////wAAACH5BAEAAAIALAAAAAABAAEAAAICVAEAOw==" pagespeed_url_hash="3154373828" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/> Embed:
                <input type="text" value="<<repo /users/mbed_official/code/mbed/file/dbbf35b96557/mbed.h>>" onclick="select()" readonly="yes" size="45" title="Copy and paste this code to insert a preview of this page into any wiki page or edit box"/>
                </td>
            </tr>
            

             <tr>
                <td>
                    <img src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAYAAAAf8/9hAAAABGdBTUEAAK/INwWK6QAAABl0RVh0U29mdHdhcmUAQWRvYmUgSW1hZ2VSZWFkeXHJZTwAAAKUSURBVDjLhVNdSJNRGH6++enSTc3Rl9Y0KzRcoSHShURERRldlLGLMsqrCO2iLuwuL7qKLr0MoQvDHJigJkEbG5mGdzKU1PnvN7I2Fgu33Or7W+858YkrpRee8x7ec97n/TtHyGQyCAQCVtJXCS2GYdSQribQ1vhEeon0C0KgublZx18i+P3+43TJI0lSXVlZGWw2GwoKCsCINzY2kEwmEQ6HEYvFPpLtptvtXs9i8Pl872VZZuEyu4mqqplgMJh57O1Ya/e25jByExZaTpSWluJ/4nQ6kdZSTlXRAtvtIkXmTNPT07Db7RwlJSVYSS7infwGa8llaJoOTdXhLCwX7Zr97C3PdW9fy2BTFoHD4WB1IhKJIJH3HZPKBA4UOXHh4GXoGR0GQTd0vk+l0peuPW9aGm7zVolmLSyyKIoUTUMgPoN9uRIk635MRYNY+bYMVVFRXlTBz0PhBf/Ifd9FloHFzIAdULM4FhMh7jiyMIREfBOte9vwtLEL65+/anNyaFz5qTSdf3Y6P6sEXdc5CcO9Qw85UTQaRfJHktvYnTzFqpPzOV/HmEG+6awMzOgmyRahquHtlyF+p0FoTJCz/s8UGExHk1DRflHjDAxHBpBSNrldURQ0djaMUT/O0DgZuSyySPF4HPQS+QTS6fQfZksuBuQ+5BXlQFDzceflDWqkJh2tOCydqq/H7Pw8xsYnvILH47lC7P0ul8tWWVkJq9UKQRBw99VtFBcW4+Sx2q3xmeNcWl2F3z86qWv6I4Gl29vbe4RIOglui8VSzP4CK2dQfo09ksgf0kxoDhpPm/VG/0DOT1Z7wqOcYLt0d3cXknMVwaCmhjzRHi+l7pjqmq3b8Y1v/xg7ofZBTY6rvbp/t/PfI0AjgZ0qo+wAAAAASUVORK5CYII=" class="icon" pagespeed_url_hash="669866341" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"> Clone repository to desktop: </br>
                    <input type="text" style="display:inline-block; width: 200px" value="hg clone https://mbedist1@developer.mbed.org/users/mbed_official/code/mbed/">
                </td>
            </tr>
         
        

    </table>
</div>


<div class="panel radius">
    <h5 class="subheader">Repository details</h5>
    <table>
        
        <tr>
            <th>Type:</th>
            <td>
                <img height="16" width="16" class="icon icon_library" src="data:image/gif;base64,R0lGODlhAQABAJEAAAAAAP///////wAAACH5BAEAAAIALAAAAAABAAEAAAICVAEAOw==" pagespeed_url_hash="3154373828" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/>
                Library
            </td>
        </tr>
        
        <tr>
            <th>Created:</th>
            <td><abbr class="timeago" title="2012-05-15T11:17:13+00:00">15 May 2012</abbr></td>
        </tr>
        <tr>
            <th>Imports:</th>
            <td>
                <a title="Number of times this repository has been imported" href="/users/mbed_official/code/mbed/">
                    <img height="16" width="16" class="icon icon_imports" src="data:image/gif;base64,R0lGODlhAQABAJEAAAAAAP///////wAAACH5BAEAAAIALAAAAAABAAEAAAICVAEAOw==" pagespeed_url_hash="3154373828" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/>
                    263202
                </a>
            </td>
        </tr>
        <tr>
            <th>Forks:</th>
            <td>
                <a title="Copies of this repository" href="/users/mbed_official/code/mbed/forks">
                    <img height="16" width="16" class="icon icon_repo_fork" src="data:image/gif;base64,R0lGODlhAQABAJEAAAAAAP///////wAAACH5BAEAAAIALAAAAAABAAEAAAICVAEAOw==" pagespeed_url_hash="3154373828" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/>
                    10
                </a>
            </td>
        </tr>
        <tr>
            <th width="40%">Commits:</th>
            <td>
                <a href="shortlog">
                    <img height="16" width="16" class="icon icon_commits" src="data:image/gif;base64,R0lGODlhAQABAJEAAAAAAP///////wAAACH5BAEAAAIALAAAAAABAAEAAAICVAEAOw==" pagespeed_url_hash="3154373828" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/>
                    100
                </a>
            </td>
        </tr>
        <tr>
            <th>Dependents:</th>
            <td>
                <a title="Programs or libraries which need this repository" href="/users/mbed_official/code/mbed/dependents">
                    <img height="16" width="16" class="icon icon_program_new" src="data:image/gif;base64,R0lGODlhAQABAJEAAAAAAP///////wAAACH5BAEAAAIALAAAAAABAAEAAAICVAEAOw==" pagespeed_url_hash="3154373828" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/>
                    10665
                </a>
            </td>
        </tr>
        <tr>
            <th>Dependencies:</th>
            <td>
                <a title="Libraries which this program or library needs to function" href="/users/mbed_official/code/mbed/dependencies">
                    <img height="16" width="16" class="icon icon_repo_deps" src="data:image/gif;base64,R0lGODlhAQABAJEAAAAAAP///////wAAACH5BAEAAAIALAAAAAABAAEAAAICVAEAOw==" pagespeed_url_hash="3154373828" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/>
                    0
                </a>
            </td>
        </tr>
        <tr>
            <th>Followers:</th>
            <td>
                <a title="Followers of this repository" href="/users/mbed_official/code/mbed/followers">
                    <img height="16" width="16" class="icon icon_add" src="data:image/gif;base64,R0lGODlhAQABAJEAAAAAAP///////wAAACH5BAEAAAIALAAAAAABAAEAAAICVAEAOw==" pagespeed_url_hash="3154373828" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/>
                    2308
                </a>
            </td>
        </tr>
        
        <tr>
            <th>Issues:</th>
            <td>
                <a title="Issues" href="/users/mbed_official/code/mbed/issues">
                    <img height="16" width="16" class="icon icon_repo_issue" src="data:image/gif;base64,R0lGODlhAQABAJEAAAAAAP///////wAAACH5BAEAAAIALAAAAAABAAEAAAICVAEAOw==" pagespeed_url_hash="3154373828" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/>
                    9
                </a>
            </td>
        </tr>
        
    </table>

    

</div>








<div class="panel radius">
    <h5 class="subheader">Software licencing information</h5>
    <div style="text-align: center; ">
        <img src="/static/img/xOSI.png.pagespeed.ic.GHeg6V3bGN.png" class="border" pagespeed_url_hash="2412592522" onload="pagespeed.CriticalImages.checkImageForCriticality(this);"/>
        <p>
            The code in this repository is <a href="http://mbed.org/handbook/Apache-Licence">Apache</a> licensed.
        </p>
    </div>
</div>








        </div>
    </div>
    
    
    <div class="row footer ">
        <div class="twelve columns">
        <hr/>
        <ul>
            <li>&copy; mbed</li> 
            <li><a href="/blog">blog</a></li>
            <li><a href="/handbook/Jobs">we're hiring!</a></li>
            <li><a href="/handbook/Help">support</a></li>
            <li><a href="/handbook/Service-status">service status</a></li>
            <li><a href="/privacy">privacy policy</a></li>
            <li><a href="/terms">terms and conditions</a> </li>
            <li class="last">Language: 
             
                    <a style="font-weight: bold;" href="/setlang?lang=en">en</a>
             
             <a style="font-weight: " href="/setlang?lang=ja">ja</a> 
             <a style="font-weight: " href="/setlang?lang=es">es</a> 
             <a style="font-weight: " href="/setlang?lang=de">de</a>
             </li> 
            </ul>
       </div>

	
	</div>
    <div id="flag-content" class="reveal-modal small">
        <h2>Report Content</h2>
        <a class="close-reveal-modal">&#215;</a>
        <form action="" method="post" id="flag-content-form">
            <input type='hidden' name='csrfmiddlewaretoken' value='IpNTCfAk0ceEWBauonlVtCTI4SL9BUob'/>
            <ul>
                <li>
                <label for="id_reason_1">
                    <input id="id_reason_1" name="reason" type="radio" value="1"/>
                    Spam
                </label>
                </li>
                <li>
                <label for="id_reason_2">
                    <input id="id_reason_2" name="reason" type="radio" value="2"/>
                    Inappropriate
                </label>
                </li>
            </ul>
            <a class="button radius secondary cancel-flag">Cancel</a>
            <input type="submit" value="Report" class="button radius"/>
        </form>
    </div>


<script type="text/javascript">try{if(window.opener&&typeof window.opener.mbed_user_logged_in=='function'){window.opener.mbed_user_logged_in();};}catch(err){}</script>


<script type="text/javascript">var gaJsHost=(("https:"==document.location.protocol)?"https://ssl.":"http://www.");document.write(unescape("%3Cscript src='"+gaJsHost+"google-analytics.com/ga.js' type='text/javascript'%3E%3C/script%3E"));</script>
<script type="text/javascript">try{var pageTracker=_gat._getTracker("UA-1447836-8");pageTracker._setCustomVar(1,'User Type','Registered',2);pageTracker._trackPageview();}catch(err){}</script>



</body>
</html>
