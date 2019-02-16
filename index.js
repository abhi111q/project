(function(){
    'use strict'//"$scope" is use for reserved keyword
    // 'use strict' is used to follow rules
var x=angular.module('Myfirst',[]);
x.controller('Mysecond',function($scope){
   /* $scope.name=function(){
        return 5-5;
    };*/
    $scope.name1="";
    $scope.name2="";
    $scope.name3=$scope.name1+$scope.name2;//concatenation of name1 and name2


})
})
();