import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';
import 'package:flutter/src/widgets/container.dart';
import 'package:flutter/src/widgets/framework.dart';
import 'package:google_fonts/google_fonts.dart';
import 'package:khfood/List/ls_home.dart';
import 'package:khfood/notifications/cation.dart';
import 'package:lottie/lottie.dart';

class home extends StatelessWidget {
  const home({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      // drawer: Drawer(),
      body: SingleChildScrollView(
        child: Container(
          decoration: BoxDecoration(),
          child: Column(
            crossAxisAlignment: CrossAxisAlignment.start,
            children: [
              const SizedBox(
                height: 30,
              ),
              Padding(
                padding: const EdgeInsets.only(left: 10, top: 10),
                child: Row(
                  mainAxisAlignment: MainAxisAlignment.spaceBetween,
                  children: [
                    Row(
                      children: [
                        const Icon(
                          Icons.location_on,
                          color: Colors.pink,
                        ),
                        const Text(
                          'Phnom Penh,City',
                          style: TextStyle(fontWeight: FontWeight.bold),
                        ),
                        const Icon(Icons.arrow_drop_down)
                      ],
                    ),
                    Row(
                      children: [
                        Container(
                          margin: const EdgeInsets.only(right: 10),
                          child: Stack(
                            children: [
                              IconButton(
                                  onPressed: () {
                                    Navigator.push(
                                        context,
                                        MaterialPageRoute(
                                          builder: (context) => cation(),
                                        ));
                                  },
                                  icon: Icon(Icons.notifications))
                              //  IconButton(
                              //   onPressed: () {},
                              //   Icons.shopping_cart,
                              //   size: 30,
                              // ),
                              ,
                              Container(
                                alignment: Alignment.center,
                                margin: const EdgeInsets.only(left: 23, top: 7),
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
              Padding(
                padding: const EdgeInsets.only(
                  left: 20,
                ),
                child: Row(
                  children: [
                    const Text(
                      'Hello, ',
                      style: TextStyle(fontSize: 25),
                    ),
                    Text(
                      'Sythorng',
                      style: GoogleFonts.aBeeZee(
                          fontSize: 25, fontWeight: FontWeight.bold),
                    )
                  ],
                ),
              ),
              const SizedBox(
                height: 10,
              ),
              Padding(
                padding: const EdgeInsets.only(left: 10, top: 10),
                child: Stack(
                  children: [
                    Container(
                      width: 360,
                      height: 200,
                      decoration: BoxDecoration(
                        color: Colors.pink,
                        borderRadius: BorderRadius.circular(20),
                      ),
                    ),
                    Container(
                      margin: const EdgeInsets.only(left: 10, top: 30),
                      child: const Text(
                        'THE',
                        style: TextStyle(
                            fontSize: 20,
                            color: Colors.white,
                            fontWeight: FontWeight.bold),
                      ),
                    ),
                    Container(
                      margin: const EdgeInsets.only(left: 15, top: 60),
                      width: 120,
                      height: 30,
                      alignment: Alignment.center,
                      decoration: BoxDecoration(
                        borderRadius: BorderRadius.circular(10),
                        color: Colors.black,
                      ),
                      child: Text(
                        'FASTEST',
                        style: GoogleFonts.aBeeZee(
                            fontSize: 20,
                            color: Colors.white,
                            fontWeight: FontWeight.bold),
                      ),
                    ),
                    Container(
                      margin: const EdgeInsets.only(left: 20, top: 100),
                      child: Text(
                        'Food Delivery',
                        style: GoogleFonts.aBeeZee(
                            fontSize: 25,
                            color: Colors.white,
                            fontWeight: FontWeight.bold),
                      ),
                    ),
                    InkWell(
                      onTap: () {
                        print('object');
                      },
                      child: Container(
                        margin: const EdgeInsets.only(left: 20, top: 140),
                        width: 120,
                        height: 35,
                        alignment: Alignment.center,
                        decoration: BoxDecoration(
                          color: Colors.white,
                          borderRadius: BorderRadius.circular(5),
                        ),
                        child: Text(
                          'Oder Now',
                          style: GoogleFonts.aBeeZee(
                              fontSize: 20,
                              color: Colors.black,
                              fontWeight: FontWeight.bold),
                        ),
                      ),
                    ),
                    Container(
                      margin: const EdgeInsets.only(left: 170, top: 30),
                      width: 150,
                      height: 150,
                      // color: Colors.amber,
                      child: Container(
                        // width: 100,
                        // height: 130,
                        child: Lottie.network(
                            'https://assets9.lottiefiles.com/packages/lf20_6sxyjyjj.json',
                            fit: BoxFit.cover),
                      ),
                    )
                  ],
                ),
              ),
              Padding(
                padding: const EdgeInsets.only(left: 20, top: 10),
                child: Row(
                  mainAxisAlignment: MainAxisAlignment.spaceBetween,
                  children: [
                    Text(
                      'popular Food nearby',
                      style: GoogleFonts.aBeeZee(
                          fontSize: 20, fontWeight: FontWeight.bold),
                    ),
                    Container(
                        margin: const EdgeInsets.only(right: 10),
                        child: CupertinoButton(
                            child: const Text(
                              'See all',
                              style: TextStyle(color: Colors.pink),
                            ),
                            onPressed: () {}))
                  ],
                ),
              ),
              Padding(
                padding: const EdgeInsets.only(
                  left: 10,
                ),
                child: SingleChildScrollView(
                  scrollDirection: Axis.horizontal,
                  child: Container(
                    height: 210,
                    child: Row(
                      children: [
                        Row(
                          children: List.generate(
                              ls_home.length,
                              (index) => Padding(
                                    padding: const EdgeInsets.only(
                                      left: 20,
                                    ),
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
                                        children: [
                                          Container(
                                            margin:
                                                const EdgeInsets.only(top: 0),
                                            width: 150,
                                            height: 100,
                                            decoration: BoxDecoration(
                                                // color: Colors.indigo,
                                                image: DecorationImage(
                                              image: NetworkImage(
                                                  ls_home[index]['pic']),
                                            )),
                                          ),
                                          Container(
                                            margin:
                                                const EdgeInsets.only(top: 10),
                                            alignment: Alignment.center,
                                            width: double.infinity,
                                            height: 40,
                                            child: Text(
                                              ls_home[index]['name'],
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
                                  )),
                        )
                      ],
                    ),
                  ),
                ),
              ),
              Padding(
                padding: const EdgeInsets.only(
                  left: 20,
                ),
                child: Row(
                  mainAxisAlignment: MainAxisAlignment.spaceBetween,
                  children: [
                    Text(
                      'popular Restaurants',
                      style: GoogleFonts.aBeeZee(
                          fontSize: 20, fontWeight: FontWeight.bold),
                    ),
                    Container(
                        margin: const EdgeInsets.only(right: 10),
                        child: CupertinoButton(
                            child: const Text(
                              'See all',
                              style: TextStyle(color: Colors.pink),
                            ),
                            onPressed: () {}))
                  ],
                ),
              ),
              Container(
                // color: Colors.pink,
                height: 110,
                child: SingleChildScrollView(
                  scrollDirection: Axis.horizontal,
                  child: Row(
                      children: List.generate(
                    ls_home.length,
                    (index) => Padding(
                      padding: const EdgeInsets.only(
                        left: 20,
                      ),
                      child: Container(
                        width: 280,
                        height: 100,
                        decoration: BoxDecoration(
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
                          borderRadius: BorderRadius.circular(10),
                          color: Colors.white,
                        ),
                        child: Row(
                          children: [
                            Row(
                              children: [
                                Container(
                                  margin: const EdgeInsets.only(left: 10),
                                  width: 100,
                                  height: 80,
                                  decoration: BoxDecoration(

                                      // color: Colors.indigo,
                                      image: DecorationImage(
                                    image: NetworkImage(ls_home[index]['pic2']),
                                  )),
                                )
                              ],
                            ),
                            Row(
                              children: [
                                Column(
                                  crossAxisAlignment: CrossAxisAlignment.start,
                                  children: [
                                    const Padding(
                                      padding:
                                          EdgeInsets.only(left: 10, top: 10),
                                      child: Text(
                                        'KFC',
                                        style: TextStyle(
                                            fontWeight: FontWeight.bold,
                                            fontSize: 20),
                                      ),
                                    ),
                                    Padding(
                                      padding: const EdgeInsets.only(
                                          left: 10, top: 5),
                                      child: Text(
                                        'We have more food',
                                        style: GoogleFonts.alegreyaSc(
                                            fontSize: 15),
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
                                              const Text(' 90 /day')
                                            ],
                                          ),
                                        ],
                                      ),
                                    ),
                                  ],
                                )
                              ],
                            ),
                          ],
                        ),
                      ),
                    ),
                  )),
                ),
              )
            ],
          ),
        ),
      ),
    );
  }
}
