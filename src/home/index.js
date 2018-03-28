import $ from 'jquery';
import 'materialize-css/dist/css/materialize.css';
import 'materialize-css/dist/js/materialize.js';
import './main.css';

$(document).ready(function() {
    $('.scrollspy').scrollSpy();
    $('.sidenav').sidenav();
});
