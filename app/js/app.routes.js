(function() {
    'use strict';

    angular
        .module('app')
        .config(configureRoutes);

    configureRoutes.$inject = ['$routeProvider'];

    function configureRoutes($routeProvider) {
        $routeProvider
            .when('/', {
                templateUrl: 'view/home.html'
        });
    }
})();
