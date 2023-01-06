import 'package:flutter/material.dart';
import 'package:flutter/src/widgets/container.dart';
import 'package:flutter/src/widgets/framework.dart';
import 'package:get/get_state_manager/get_state_manager.dart';
import 'package:get/instance_manager.dart';
import 'package:google_fonts/google_fonts.dart';
import 'package:icon_badge/icon_badge.dart';
import 'package:khfood/getx/controller.dart';
import 'package:khfood/notifications/cation.dart';

class fav extends StatelessWidget {
  const fav({super.key});

  @override
  Widget build(BuildContext context) {
    Cunter_product controller = Get.put(Cunter_product());
    return GetBuilder(
        init: controller,
        builder: (context) {
          return Scaffold(
            body: SingleChildScrollView(
              child: Column(
                children: [
                  SizedBox(
                    height: 50,
                  ),
                  Row(
                    mainAxisAlignment: MainAxisAlignment.spaceBetween,
                    children: [
                      Container(
                        margin: const EdgeInsets.only(left: 165),
                        child: Text(
                          'Favorite',
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
                                            // Navigator.push(
                                            //     context,
                                            //     MaterialPageRoute(
                                            //       builder: (context) => cation(),
                                            //     ));
                                          },
                                          icon:
                                              const Icon(Icons.shopping_cart)),
                                      Container(
                                        alignment: Alignment.center,
                                        margin: const EdgeInsets.only(
                                            left: 23, top: 7),
                                        width: 13,
                                        height: 13,
                                        decoration: const BoxDecoration(
                                          color: Colors.red,
                                          shape: BoxShape.circle,
                                        ),
                                        child: const Text(
                                          '4',
                                          style: TextStyle(
                                              color: Colors.white, fontSize: 9),
                                        ),
                                      )
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
                  Container(
                      height: 730,
                      child: controller.products.length != 0
                          ? Expanded(
                              child: GridView.builder(
                                gridDelegate:
                                    SliverGridDelegateWithFixedCrossAxisCount(
                                        crossAxisCount: 2,
                                        childAspectRatio: 1 / 1.3),
                                itemCount: controller.products.length,
                                itemBuilder: (context, index) {
                                  var pro = controller.products[index];
                                  return Padding(
                                    padding: const EdgeInsets.only(
                                        left: 20, right: 10, bottom: 20),
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
                                          borderRadius:
                                              BorderRadius.circular(10)),
                                      child: Column(
                                        crossAxisAlignment:
                                            CrossAxisAlignment.end,
                                        children: [
                                          Padding(
                                            padding: const EdgeInsets.all(8.0),
                                            child: Container(
                                              alignment: Alignment.center,
                                              width: 25,
                                              height: 25,
                                              decoration: BoxDecoration(
                                                color: Colors.pink,
                                                shape: BoxShape.circle,
                                              ),
                                              child: IconButton(
                                                  onPressed: () {},
                                                  icon: Icon(
                                                    Icons.favorite,
                                                    size: 10,
                                                    color: Colors.white,
                                                  )),
                                            ),
                                          ),
                                          Container(
                                            margin:
                                                const EdgeInsets.only(top: 0),
                                            width: 150,
                                            height: 100,
                                            decoration: BoxDecoration(
                                                // color: Colors.indigo,
                                                image: DecorationImage(
                                              image: NetworkImage(controller
                                                  .products[index].pic1
                                                  .toString()),
                                            )),
                                          ),
                                          Container(
                                            margin:
                                                const EdgeInsets.only(top: 10),
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
                                                  MainAxisAlignment
                                                      .spaceBetween,
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
                                  );
                                },
                              ),
                            )
                          : Column(
                              children: [
                                Container(
                                  margin: EdgeInsets.only(top: 300),
                                  child: Text('No Favorite'),
                                ),
                              ],
                            )),
                ],
              ),
            ),
          );
        });
  }
}

class Pro {
  String? name;
  dynamic? img;
  double? price;

  Pro({this.name, this.img, this.price});
}

List<Pro> ls_Product = [
  Pro(
      name: 'Pizzaa Chiken MashRoom ',
      img:
          'https://www.seekpng.com/png/full/186-1862998_plato-de-pizza-png.png',
      price: 30.99),
  Pro(
      name: 'Chiken Us Pizzaa',
      img: 'https://www.imagensempng.com.br/wp-content/uploads/2022/01/240.png',
      price: 30.99),
  Pro(
      img:
          'https://www.transparentpng.com/thumb/burger/hot-burger-king-hd-png-9dzyCE.png',
      name: 'Chiken Us  Buger',
      price: 40.99),
  Pro(
      img:
          'https://www.freepnglogos.com/uploads/burger-png/burger-png-png-images-yellow-images-12.png',
      name: 'burger Chiken china ',
      price: 25.99),
];
