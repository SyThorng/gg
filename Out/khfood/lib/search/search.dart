import 'package:badges/badges.dart';
import 'package:flutter/material.dart';
import 'package:get/get.dart';
import 'package:google_fonts/google_fonts.dart';
import 'package:khfood/buy.dart';
import 'package:khfood/fav/fav.dart';
import 'package:khfood/getx/controller.dart';

class search extends StatefulWidget {
  const search({super.key});

  @override
  State<search> createState() => _searchState();
}

class _searchState extends State<search> {
  TextEditingController con_search = TextEditingController();
  Cunter_product controller = Get.put(Cunter_product());
  @override
  Widget build(BuildContext context) {
    return GetBuilder<Cunter_product>(
        init: controller,
        builder: (context) {
          return Scaffold(
            body: SingleChildScrollView(
              child: Column(
                crossAxisAlignment: CrossAxisAlignment.start,
                children: [
                  const SizedBox(
                    height: 50,
                  ),
                  Row(
                    mainAxisAlignment: MainAxisAlignment.spaceBetween,
                    children: [
                      Container(
                        margin: const EdgeInsets.only(left: 165),
                        child: Text(
                          'Search',
                          style: GoogleFonts.aBeeZee(
                              fontSize: 25, fontWeight: FontWeight.bold),
                        ),
                      ),
                      Padding(
                        padding: const EdgeInsets.only(left: 10, top: 10),
                        child: Row(
                          children: [
                            Row(
                              children: [
                                Container(
                                  margin: const EdgeInsets.only(right: 10),
                                  child: Stack(
                                    children: [
                                      IconButton(
                                          onPressed: () {
                                            Get.to(() => fav());
                                          },
                                          icon: const Icon(
                                            Icons.favorite,
                                            color: Colors.pink,
                                          )),
                                      Badge(
                                        animationType: BadgeAnimationType.slide,
                                        // toAnimate: false,
                                        shape: BadgeShape.square,
                                        showBadge:
                                            controller.count > 0 ? true : false,
                                        badgeColor: Colors.pink,
                                        borderRadius: BorderRadius.circular(8),
                                        position: BadgePosition.topEnd(),
                                        badgeContent: Text(
                                            '${controller.count}',
                                            style: TextStyle(
                                                color: Colors.white,
                                                fontSize: 12)),
                                      ),
                                    ],
                                  ),
                                )
                              ],
                            )
                          ],
                        ),
                      ),
                    ],
                  ),
                  Padding(
                    padding:
                        const EdgeInsets.only(left: 20, top: 10, right: 20),
                    child: Container(
                      child: TextField(
                        onChanged: (value) {
                          setState(() {
                            file_product = ls_Product
                                .where((element) => element.name!
                                    .toLowerCase()
                                    .contains(value.toLowerCase()))
                                .toList();
                          });
                        },
                        controller: con_search,
                        cursorColor: Colors.pink,
                        decoration: InputDecoration(
                          focusedBorder: OutlineInputBorder(
                              borderSide: BorderSide(color: Colors.pink),
                              borderRadius: BorderRadius.circular(10)),
                          enabledBorder: OutlineInputBorder(
                              borderSide: BorderSide(color: Colors.pink),
                              borderRadius: BorderRadius.circular(20)),
                          // filled: true,
                          // fillColor: Colors.pink,
                          hintText: 'Search',
                          prefixStyle: TextStyle(color: Colors.pink),
                          prefixIcon: Icon(
                            Icons.search,
                            color: Colors.pink,
                          ),
                          prefixIconColor: Colors.black,
                          border: OutlineInputBorder(
                            borderRadius: BorderRadius.circular(20),
                          ),
                        ),
                      ),
                    ),
                  ),
                  Padding(
                    padding: const EdgeInsets.only(left: 25, top: 20),
                    child: Text('Result Found'),
                  ),
                  SizedBox(
                    height: 5,
                  ),
                  Container(
                    height: 590,
                    child: GridView.builder(
                      gridDelegate: SliverGridDelegateWithFixedCrossAxisCount(
                          crossAxisCount: 2, childAspectRatio: 1 / 1.3),
                      itemCount:
                          con_search.text.isEmpty || con_search.text == ''
                              ? ls_Product.length
                              : file_product.length,
                      itemBuilder: (context, index) {
                        var pro =
                            con_search.text.isEmpty || con_search.text == ''
                                ? ls_Product[index]
                                : file_product[index];
                        return Padding(
                          padding: const EdgeInsets.only(
                              left: 20, right: 10, bottom: 20),
                          child: InkWell(
                            onTap: () {
                              Navigator.push(
                                  context,
                                  MaterialPageRoute(
                                    builder: (context) => buy(
                                      img: pro.img,
                                      name: pro.name,
                                      price: pro.price.toString(),
                                    ),
                                  ));
                            },
                            child: Container(
                              width: 180,
                              height: 190,
                              decoration: BoxDecoration(
                                  color: Colors.white,
                                  boxShadow: [
                                    const BoxShadow(
                                        blurRadius: 1,
                                        offset: Offset(2, 2),
                                        color: Colors.pink),
                                    const BoxShadow(
                                        blurRadius: 5,
                                        offset: Offset(-2, -2),
                                        color: Colors.pink),
                                  ],
                                  borderRadius: BorderRadius.circular(10)),
                              child: Column(
                                crossAxisAlignment: CrossAxisAlignment.end,
                                children: [
                                  Padding(
                                    padding: const EdgeInsets.all(8.0),
                                    child: Container(
                                      alignment: Alignment.center,
                                      width: 25,
                                      height: 25,
                                      decoration: BoxDecoration(
                                        // border: Border.all(
                                        //     width: 0, color: Colors.pink),
                                        color: Colors.pink,
                                        shape: BoxShape.circle,
                                      ),
                                      child: IconButton(
                                          onPressed: () {
                                            pro.b = true;
                                            controller.increment();
                                            controller.addProduct(Product_2(
                                                name: pro.name,
                                                pic1: pro.img,
                                                price: pro.price.toString()));
                                          },
                                          icon: Icon(
                                            Icons.favorite,
                                            size: 10,
                                            color: pro.b == true
                                                ? Colors.yellow
                                                : Colors.white,
                                          )),
                                    ),
                                  ),
                                  Container(
                                    margin: const EdgeInsets.only(top: 0),
                                    width: 150,
                                    height: 100,
                                    decoration: BoxDecoration(
                                        // color: Colors.indigo,
                                        image: DecorationImage(
                                      image: NetworkImage(pro.img),
                                    )),
                                  ),
                                  Container(
                                    margin: const EdgeInsets.only(top: 10),
                                    alignment: Alignment.center,
                                    width: double.infinity,
                                    height: 40,
                                    child: Text(
                                      pro.name.toString(),
                                      textAlign: TextAlign.center,
                                      style: const TextStyle(
                                          fontSize: 15,
                                          fontWeight: FontWeight.bold),
                                    ),
                                  ),
                                  Padding(
                                    padding: const EdgeInsets.all(8.0),
                                    child: Row(
                                      mainAxisAlignment:
                                          MainAxisAlignment.spaceBetween,
                                      children: [
                                        Row(
                                          children: [
                                            const Icon(
                                              Icons.location_on,
                                              size: 17,
                                              color: Colors.pink,
                                            ),
                                            const Text('FC shop')
                                          ],
                                        ),
                                        Row(
                                          children: [
                                            const Icon(
                                              Icons.star,
                                              size: 17,
                                              color: Colors.yellow,
                                            ),
                                            const Text(' 50 /day')
                                          ],
                                        ),
                                      ],
                                    ),
                                  ),
                                ],
                              ),
                            ),
                          ),
                        );
                      },
                    ),
                  )
                ],
              ),
            ),
          );
        });
  }
}

class Product {
  String? name;
  dynamic? img;
  double? price;
  bool? b;
  Product({this.name, this.img, this.price, this.b});
}

List<Product> file_product = [];

List<Product> ls_Product = [
  Product(
      b: false,
      name: 'Pizzaa Chiken MashRoom ',
      img:
          'https://www.seekpng.com/png/full/186-1862998_plato-de-pizza-png.png',
      price: 30.99),
  Product(
      b: false,
      name: 'Chiken Us Pizzaa',
      img: 'https://www.imagensempng.com.br/wp-content/uploads/2022/01/240.png',
      price: 30.99),
  Product(
      b: false,
      img:
          'https://www.transparentpng.com/thumb/burger/hot-burger-king-hd-png-9dzyCE.png',
      name: 'Chiken Us  Buger',
      price: 40.99),
  Product(
      b: false,
      img:
          'https://www.freepnglogos.com/uploads/burger-png/burger-png-png-images-yellow-images-12.png',
      name: 'burger Chiken china ',
      price: 25.99),
  Product(
      b: false,
      img:
          'https://www.pngkey.com/png/full/52-527002_kfc-chicken-bucket-png-kfc-full-menu-nz.png',
      name: 'china  KFC',
      price: 25.99),
  Product(
      b: false,
      img:
          'https://www.pngkey.com/png/full/79-793304_kfc-png-download-franquia-frango-no-balde.png',
      name: 'US  KFC',
      price: 25.99),
  Product(
      b: false,
      img: 'https://pngimg.com/uploads/kfc_food/kfc_food_PNG53.png',
      name: 'Kh KFC',
      price: 28.99),
  Product(
      b: false,
      img:
          'https://www.kindpng.com/picc/m/726-7266082_kfc-chicken-transparent-image-kfc-bucket-png-png.png',
      name: 'Kh KFC',
      price: 30.99),
];
