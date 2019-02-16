(function(){
	'use strict'
   var 	x=angular.module('calculate',[]);
	x.controller('calculateController',function($scope){
		$scope.name="";
		$scope.ttv=0;
		$scope.display= function()
		{
			var t=cal($scope.name);
			$scope.ttv=t;
		}
		function cal(s)
		{
			var c=0;
			for (var i =s.length - 1; i >= 0; i--) {
			c++;
			}
			return c*5;
		}
})

}


	)();