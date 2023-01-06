import 'package:flutter/material.dart';
import 'package:flutter/src/widgets/container.dart';
import 'package:flutter/src/widgets/framework.dart';

class t4 extends StatelessWidget {
  const t4({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: SingleChildScrollView(
        child: Column(
          children: [
            SizedBox(
              height: 100,
            ),
            Text(
              'Hello',
              style: TextStyle(fontSize: 40),
            ),
            Container(
              height: 700,
              child: GridView.builder(
                gridDelegate: SliverGridDelegateWithFixedCrossAxisCount(
                    crossAxisCount: 2, childAspectRatio: 1 / 1.3),
                itemCount: 18,
                itemBuilder: (context, index) {
                  return Padding(
                    padding:
                        const EdgeInsets.only(left: 20, right: 10, bottom: 20),
                    child: Container(
                      width: 180,
                      height: 190,
                      decoration: BoxDecoration(
                          color: Colors.blue,
                          // boxShadow: [
                          //   const BoxShadow(
                          //       blurRadius: 1,
                          //       offset: Offset(2, 2),
                          //       color: Colors.pink),
                          //   const BoxShadow(
                          //       blurRadius: 5,
                          //       offset: Offset(-2, -2),
                          //       color: Colors.pink),
                          // ],
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
                            margin: const EdgeInsets.only(top: 0),
                            width: 150,
                            height: 100,
                            decoration: BoxDecoration(
                                // color: Colors.indigo,
                                image: DecorationImage(
                              image: NetworkImage('pro.img'),
                            )),
                          ),
                          Container(
                            margin: const EdgeInsets.only(top: 10),
                            alignment: Alignment.center,
                            width: double.infinity,
                            height: 40,
                            child: Text(
                              '',
                              textAlign: TextAlign.center,
                              style: const TextStyle(
                                  fontSize: 15, fontWeight: FontWeight.bold),
                            ),
                          ),
                          Padding(
                            padding: const EdgeInsets.all(8.0),
                            child: Row(
                              mainAxisAlignment: MainAxisAlignment.spaceBetween,
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
            ),
          ],
        ),
      ),
    );
  }
}

List<Map<String, dynamic>> ls_home = [
  {
    'pic':
        'https://www.seekpng.com/png/full/186-1862998_plato-de-pizza-png.png',
    'name': 'Chiken MashRoom Pizzaa',
    'pic2':
        'https://www.pngkey.com/png/full/52-527002_kfc-chicken-bucket-png-kfc-full-menu-nz.png'
  },
  {
    'pic': 'https://www.imagensempng.com.br/wp-content/uploads/2022/01/240.png',
    'name': 'Chiken Us  Pizzaa',
    'pic2':
        'https://www.pngkey.com/png/full/79-793304_kfc-png-download-franquia-frango-no-balde.png'
  },
  {
    'pic':
        'https://www.transparentpng.com/thumb/burger/hot-burger-king-hd-png-9dzyCE.png',
    'name': 'Chiken Us  Buger',
    'pic2': 'https://pngimg.com/uploads/kfc_food/kfc_food_PNG53.png'
  },
  {
    'pic':
        'https://www.freepnglogos.com/uploads/burger-png/burger-png-png-images-yellow-images-12.png',
    'name': 'Chiken china burger',
    'pic2':
        'https://www.kindpng.com/picc/m/726-7266082_kfc-chicken-transparent-image-kfc-bucket-png-png.png'
  },
];
