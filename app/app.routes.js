(function() {
    'use strict';

    angular
        .module('app')
        .config(configureRoutes);

    configureRoutes.$inject = ['$routeProvider'];

    function configureRoutes($routeProvider) {
        $routeProvider
            .when('/', {
                templateUrl: 'cronograma/cronograma.html'
            }).when('/editor_codigo', {
                controller: 'EditorCodigoController',
                controllerAs: 'vm',
                templateUrl: 'editor_codigo/editor_codigo.html'
            }).when('/submissoes', {
                templateUrl: 'submissoes/submissoes.html'
            }).when('/aula1', {
                templateUrl: 'notas_aula/aula1.html'
            });

    }
})();
