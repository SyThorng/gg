import 'package:get/get.dart';
import 'package:get/get_state_manager/get_state_manager.dart';

class Cunter_product extends GetxController {
  var products = <Product_2>[].obs();
  addProduct(Product_2 product) {
    products.add(product);
    update();
  }

  int count = 0.obs();
  increment() {
    count++;
    update();
  }

  int num = 0.obs();
  int numshop = 0.obs();

  var shoppings = <Product_shopping>[].obs();
  addShope(Product_shopping shopping) {
    shoppings.add(shopping);
    update();
  }

  add() {
    num++;
    update();
  }

  remove() {
    if (num > 1) {
      num--;
    } else {
      num = 1;
    }
    update();
  }

  addnum() {
    Product_shopping pro;
    numshop++;
    update();
  }
}

class Product_2 {
  String? name;
  String? pic1;
  String? price;

  Product_2({this.name, this.pic1, this.price});
}

class Product_shopping {
  String? name;
  String? pic;
  String? price;

  Product_shopping(
      {required this.name, required this.pic, required this.price});
}
