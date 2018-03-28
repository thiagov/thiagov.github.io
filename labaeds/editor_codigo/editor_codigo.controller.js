(function() {
    'use strict';

    angular
        .module('app')
        .controller('EditorCodigoController', EditorCodigoController);

    EditorCodigoController.$inject = ['$http'];

    function EditorCodigoController($http) {
        var vm = this;
        var editor;
        vm.title = 'EditorCodigoController';
        vm.compile = compile;

        activate();

        ////////////////

        function activate() {
            editor = ace.edit('editor');
            editor.setTheme('ace/theme/monokai');
            editor.getSession().setMode('ace/mode/c_cpp');
        }

        function compile() {
           var source = editor.getValue();
           var data = {};
           data.code = source;
           $http({
               method: 'POST',
//               url: 'https://teste-api.herokuapp.com/compile',
               url: 'http://localhost:3000/compile',
               data: data
           }).then(success).catch(error);

           function success(response) {
               vm.executedCode = response.data.msg.replace(/\n/g, '<br/>');
               console.log('OK!');
               console.log(response);
           }
           function error(response) {
               console.log('NOT OK!');
               console.log(response);
           }
        }
    }
})();
