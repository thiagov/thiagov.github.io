(function() {
    'use strict';

    angular
        .module('app')
        .controller('HeaderController', HeaderController);

    HeaderController.$inject = ['$location'];

    function HeaderController($location) {
        var vm = this;
        vm.isActive = isActive;

        ////////////////

        function isActive(viewLocation) {
            return viewLocation === $location.path();
        }
    }
})();
