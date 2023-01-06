import 'package:badges/badges.dart';
import 'package:flutter/material.dart';
import 'package:get/get_state_manager/get_state_manager.dart';
import 'package:get/instance_manager.dart';
import 'package:google_fonts/google_fonts.dart';
import 'package:khfood/getx/controller.dart';

class buy extends StatelessWidget {
  buy({super.key, required this.img, required this.name, required this.price});

  String? name;
  String? img;
  String? price;

  @override
  Widget build(BuildContext context) {
    double pri = double.parse(price!);
    var bold = TextStyle(fontSize: 20, fontWeight: FontWeight.bold);
    Cunter_product shop_controller = Get.put(Cunter_product());
    return GetBuilder(
        init: shop_controller,
        builder: (context) {
          return Scaffold(
            body: SingleChildScrollView(
              child: Column(
                children: [
                  Stack(
                    children: [
                      Container(
                        width: double.infinity,
                        height: 300,
                        color: Colors.pink,
                      ),
                      Container(
                        margin: EdgeInsets.only(top: 200),
                        width: double.infinity,
                        height: 644,
                        decoration: BoxDecoration(
                            boxShadow: [
                              BoxShadow(
                                  offset: Offset(
                                    -2,
                                    -2,
                                  ),
                                  color: Colors.white,
                                  blurRadius: 10)
                            ],
                            color: Colors.white,
                            borderRadius: BorderRadius.only(
                              topLeft: Radius.circular(40),
                              topRight: Radius.circular(40),
                            )),
                        child: Column(
                          crossAxisAlignment: CrossAxisAlignment.start,
                          children: [
                            Container(
                              margin: EdgeInsets.only(top: 110),
                              child: Center(
                                child: Text(
                                  '$name',
                                  style: GoogleFonts.aBeeZee(
                                      fontSize: 25,
                                      fontWeight: FontWeight.bold),
                                ),
                              ),
                            ),
                            Padding(
                              padding: const EdgeInsets.all(20.0),
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
                                      Text(
                                        'FC shop | ',
                                        style: bold,
                                      )
                                    ],
                                  ),
                                  Row(
                                    children: [
                                      const Icon(
                                        Icons.star,
                                        size: 17,
                                        color: Colors.yellow,
                                      ),
                                      Text(
                                        ' 50 /day |',
                                        style: bold,
                                      )
                                    ],
                                  ),
                                  Row(
                                    children: [
                                      const Icon(
                                        Icons.local_fire_department,
                                        size: 17,
                                        color: Colors.red,
                                      ),
                                      Text(
                                        ' 120Hz ',
                                        style: bold,
                                      )
                                    ],
                                  ),
                                ],
                              ),
                            ),
                            Padding(
                              padding: const EdgeInsets.only(left: 30, top: 10),
                              child: Text(
                                'Ingredlents',
                                style: GoogleFonts.aBeeZee(
                                    fontSize: 20, fontWeight: FontWeight.bold),
                              ),
                            ),
                            Padding(
                              padding: const EdgeInsets.only(left: 30, top: 20),
                              child: Row(
                                children: [
                                  Container(
                                    child: Icon(
                                      Icons.local_pizza,
                                      color: Colors.pink,
                                    ),
                                    width: 70,
                                    height: 70,
                                    decoration: BoxDecoration(
                                        color: Colors.white,
                                        boxShadow: [
                                          BoxShadow(
                                              offset: Offset(5, 5),
                                              color: Colors.pink,
                                              blurRadius: 5)
                                        ]),
                                  ),
                                  Container(
                                    margin: EdgeInsets.only(left: 10),
                                    child: Icon(
                                      Icons.lunch_dining,
                                      color: Colors.pink,
                                    ),
                                    width: 70,
                                    height: 70,
                                    decoration: BoxDecoration(
                                        color: Colors.white,
                                        boxShadow: [
                                          BoxShadow(
                                              offset: Offset(5, 5),
                                              color: Colors.pink,
                                              blurRadius: 5)
                                        ]),
                                  ),
                                  Container(
                                    margin: EdgeInsets.only(left: 20),
                                    child: Icon(
                                      Icons.coffee,
                                      color: Colors.pink,
                                    ),
                                    width: 70,
                                    height: 70,
                                    decoration: BoxDecoration(
                                        color: Colors.white,
                                        boxShadow: [
                                          BoxShadow(
                                              offset: Offset(5, 5),
                                              color: Colors.pink,
                                              blurRadius: 5)
                                        ]),
                                  ),
                                  Container(
                                    margin: EdgeInsets.only(left: 20),
                                    child: Icon(
                                      Icons.local_gas_station,
                                      color: Colors.pink,
                                    ),
                                    width: 70,
                                    height: 70,
                                    decoration: BoxDecoration(
                                        color: Colors.white,
                                        boxShadow: [
                                          BoxShadow(
                                              offset: Offset(5, 5),
                                              color: Colors.pink,
                                              blurRadius: 5)
                                        ]),
                                  ),
                                ],
                              ),
                            ),
                            Padding(
                              padding: const EdgeInsets.only(left: 30, top: 20),
                              child: Text(
                                'Description',
                                style: GoogleFonts.aBeeZee(
                                    fontSize: 20, fontWeight: FontWeight.bold),
                              ),
                            ),
                            Padding(
                              padding: const EdgeInsets.only(left: 30, top: 20),
                              child: Container(
                                width: 340,
                                height: 50,
                                color: Color.fromARGB(6, 158, 158, 158),
                                child: Text(
                                  'This is my shop you can order for eat and some drink in here >_<',
                                  style: GoogleFonts.aBeeZee(fontSize: 17),
                                ),
                              ),
                            ),
                            Row(
                              mainAxisAlignment: MainAxisAlignment.spaceBetween,
                              children: [
                                Column(
                                  children: [
                                    Padding(
                                      padding: const EdgeInsets.only(
                                          left: 30, top: 10),
                                      child: Text(
                                        'Size',
                                        style: GoogleFonts.aBeeZee(
                                            fontSize: 20,
                                            fontWeight: FontWeight.bold),
                                      ),
                                    ),
                                  ],
                                ),
                                Column(
                                  children: [
                                    Padding(
                                      padding: const EdgeInsets.only(
                                          left: 30, top: 10, right: 30),
                                      child: Text(
                                        'Quantity',
                                        style: GoogleFonts.aBeeZee(
                                            fontSize: 20,
                                            fontWeight: FontWeight.bold),
                                      ),
                                    ),
                                    Container(
                                      child: Row(
                                        mainAxisAlignment:
                                            MainAxisAlignment.spaceEvenly,
                                        children: [
                                          IconButton(
                                              onPressed: () {
                                                shop_controller.remove();
                                              },
                                              icon: Icon(Icons.remove)),
                                          Text(
                                            '${shop_controller.num}',
                                            style: TextStyle(
                                                fontSize: 15,
                                                fontWeight: FontWeight.bold),
                                          ),
                                          IconButton(
                                              onPressed: () {
                                                shop_controller.add();
                                              },
                                              icon: Icon(Icons.add)),
                                        ],
                                      ),
                                      width: 115,
                                      height: 35,
                                      color: Color.fromARGB(29, 158, 158, 158),
                                    )
                                  ],
                                )
                              ],
                            ),
                            Row(
                              mainAxisAlignment: MainAxisAlignment.spaceBetween,
                              children: [
                                Column(
                                  children: [
                                    Padding(
                                      padding: const EdgeInsets.only(
                                          left: 30, top: 30),
                                      child: Text(
                                        'Total Price',
                                        style: GoogleFonts.aBeeZee(
                                            fontSize: 20,
                                            fontWeight: FontWeight.bold),
                                      ),
                                    ),
                                    Padding(
                                        padding: const EdgeInsets.only(
                                            left: 30, top: 5),
                                        child: shop_controller.num == 0
                                            ? Text(
                                                '\$ ${price}',
                                                style: GoogleFonts.aBeeZee(
                                                    fontSize: 20,
                                                    fontWeight: FontWeight.bold,
                                                    color: Colors.pink),
                                              )
                                            : Text(
                                                '\$ ${pri * shop_controller.num}',
                                                style: GoogleFonts.aBeeZee(
                                                    fontSize: 20,
                                                    fontWeight: FontWeight.bold,
                                                    color: Colors.pink),
                                              ))
                                  ],
                                ),
                                Container(
                                  margin: EdgeInsets.only(right: 20, top: 10),
                                  child: MaterialButton(
                                    height: 50,
                                    onPressed: () {
                                      shop_controller.addnum();
                                    },
                                    elevation: 10,
                                    textColor: Colors.white,
                                    color: Colors.pink,
                                    child: Text(
                                      'ADD TO CART',
                                      style: GoogleFonts.aBeeZee(
                                          fontSize: 20,
                                          fontWeight: FontWeight.bold),
                                    ),
                                  ),
                                )
                              ],
                            ),
                          ],
                        ),
                      ),
                      Container(
                        margin: EdgeInsets.only(left: 100, top: 120),
                        width: 200,
                        height: 180,
                        // color: Colors.indigo,
                        decoration: BoxDecoration(
                            borderRadius: BorderRadius.circular(20),
                            color: Colors.white,
                            image: DecorationImage(image: NetworkImage('$img')),
                            boxShadow: [
                              BoxShadow(
                                  offset: Offset(5, 5),
                                  color: Colors.pink,
                                  blurRadius: 5),
                            ]),
                      ),
                      Container(
                        margin: EdgeInsets.only(top: 30),
                        child: Padding(
                          padding: const EdgeInsets.all(8.0),
                          child: Row(
                            mainAxisAlignment: MainAxisAlignment.spaceBetween,
                            children: [
                              Container(
                                  width: 30,
                                  height: 30,
                                  decoration: BoxDecoration(
                                    shape: BoxShape.circle,
                                    color: Colors.white,
                                  ),
                                  child: IconButton(
                                      alignment: Alignment.center,
                                      onPressed: () {
                                        // Navigator.push(
                                        //     context,
                                        //     MaterialPageRoute(
                                        //       builder: (context) => MyWidget(),
                                        //     ));
                                      },
                                      icon: Icon(
                                        Icons.arrow_back_ios,
                                        color: Colors.pink,
                                        size: 15,
                                      ))),
                              Text(
                                'Detials',
                                style: GoogleFonts.aBeeZee(
                                    color: Colors.white,
                                    fontSize: 20,
                                    fontWeight: FontWeight.bold),
                              ),
                              Stack(
                                children: [
                                  IconButton(
                                      onPressed: () {
                                        // Get.to(() => fav());
                                      },
                                      icon: const Icon(
                                        Icons.shopping_cart,
                                        color: Colors.white,
                                      )),
                                  Container(
                                    margin:
                                        EdgeInsets.only(left: 28, bottom: 1),
                                    child: Badge(
                                      animationType: BadgeAnimationType.slide,
                                      // toAnimate: false,
                                      shape: BadgeShape.square,
                                      badgeColor: Colors.white,
                                      borderRadius: BorderRadius.circular(8),
                                      position: BadgePosition.topEnd(),
                                      badgeContent: Text(
                                          '${shop_controller.numshop}',
                                          style: TextStyle(
                                              color: Colors.pink,
                                              fontSize: 12,
                                              fontWeight: FontWeight.bold)),
                                    ),
                                  ),
                                ],
                              ),
                            ],
                          ),
                        ),
                      ),
                    ],
                  )
                ],
              ),
            ),
          );
        });
  }
}
