(function(){
	angular.module('Myap',[]).controller('Myapp',function($scope,$filter){
     $scope.name="Jibin and abhishek";
     $scope.upper=function(){
     	var x=$filter('lowercase');
     	$scope.name=x($scope.name);
     };

	})
})();