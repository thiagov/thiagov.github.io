(function() {
    'use strict';

    angular
        .module('app')
        .config(configureRoutes);

    configureRoutes.$inject = ['$routeProvider'];

    function configureRoutes($routeProvider) {
        $routeProvider
            .when('/', {
                controller: 'HomeController',
                controllerAs: 'vm',
                templateUrl: 'view/home.html'
        });
    }
})();
