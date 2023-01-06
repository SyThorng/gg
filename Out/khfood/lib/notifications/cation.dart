import 'package:flutter/material.dart';
import 'package:flutter/src/widgets/container.dart';
import 'package:flutter/src/widgets/framework.dart';
import 'package:khfood/List/ls_home.dart';
import 'package:khfood/home.dart';
import 'package:khfood/nav_bar/nav_bar.dart';

class cation extends StatelessWidget {
  const cation({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: SingleChildScrollView(
        child: Column(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            const SizedBox(
              height: 40,
            ),
            Padding(
              padding: const EdgeInsets.only(top: 10, left: 20),
              child: Row(
                children: [
                  Container(
                    alignment: Alignment.center,
                    width: 30,
                    height: 40,
                    decoration: const BoxDecoration(
                      color: Colors.black,
                      shape: BoxShape.circle,
                    ),
                    child: IconButton(
                      color: Colors.white,
                      onPressed: () {
                        Navigator.push(
                            context,
                            MaterialPageRoute(
                              builder: (context) => const nav_bar(),
                            ));
                      },
                      icon: const Icon(Icons.arrow_back_ios),
                    ),
                  ),
                  Container(
                    margin: const EdgeInsets.only(left: 80),
                    child: const Text(
                      'Notification',
                      style:
                          TextStyle(fontSize: 25, fontWeight: FontWeight.bold),
                    ),
                  ),
                  Container(
                    margin: const EdgeInsets.only(left: 60),
                    child: IconButton(
                      onPressed: () {},
                      icon: const Icon(Icons.delete),
                    ),
                  )
                ],
              ),
            ),
            const Padding(
              padding: EdgeInsets.only(left: 20, top: 30),
              child: Text(
                'Today',
                style: TextStyle(fontSize: 20, fontWeight: FontWeight.bold),
              ),
            ),
            Column(
              children: List.generate(
                  ls_home.length,
                  (index) => Padding(
                        padding: const EdgeInsets.only(left: 20, top: 10),
                        child: Card(
                          elevation: 5,
                          shadowColor: Colors.grey,
                          child: Stack(
                            children: [
                              Container(
                                width: 350,
                                height: 100,
                                decoration: BoxDecoration(
                                  color: Colors.white,
                                  borderRadius: BorderRadius.circular(10),
                                ),
                              ),
                              // Img
                              Padding(
                                padding: const EdgeInsets.all(8.0),
                                child: Container(
                                  width: 80,
                                  height: 80,
                                  decoration: BoxDecoration(
                                      // color: Colors.red,
                                      image: DecorationImage(
                                          image: NetworkImage(
                                              ls_home[index]['pic2']))),
                                ),
                              ),
                              Container(
                                margin:
                                    const EdgeInsets.only(left: 100, top: 10),
                                width: 200,
                                child: const Text(
                                  'Get one free 1 and add more for my shop',
                                  style: TextStyle(
                                      fontWeight: FontWeight.bold,
                                      fontSize: 13),
                                ),
                              ),
                              Container(
                                margin: EdgeInsets.only(left: 290, top: 50),
                                child: Text(
                                  '7:50 AM',
                                ),
                              ),
                              Container(
                                margin: EdgeInsets.only(left: 330, top: 10),
                                width: 10,
                                height: 10,
                                decoration: BoxDecoration(
                                  color: Colors.red,
                                  shape: BoxShape.circle,
                                ),
                              )
                            ],
                          ),
                        ),
                      )),
            ),
            const Padding(
              padding: EdgeInsets.only(left: 20, top: 30),
              child: Text(
                'Yesterday',
                style: TextStyle(fontSize: 20, fontWeight: FontWeight.bold),
              ),
            ),
            Column(
              children: List.generate(
                  ls_home.length,
                  (index) => Padding(
                        padding: const EdgeInsets.only(left: 20, top: 10),
                        child: Card(
                          elevation: 5,
                          shadowColor: Colors.grey,
                          child: Stack(
                            children: [
                              Container(
                                width: 350,
                                height: 100,
                                decoration: BoxDecoration(
                                  color: Colors.white,
                                  borderRadius: BorderRadius.circular(10),
                                ),
                              ),
                              // Img
                              Padding(
                                padding: const EdgeInsets.all(8.0),
                                child: Container(
                                  width: 80,
                                  height: 80,
                                  decoration: BoxDecoration(
                                      // color: Colors.red,
                                      image: DecorationImage(
                                          image: NetworkImage(
                                              ls_home[index]['pic']))),
                                ),
                              ),
                              Container(
                                margin:
                                    const EdgeInsets.only(left: 100, top: 10),
                                width: 200,
                                child: const Text(
                                  'Get one free 1 and add more for my shop',
                                  style: TextStyle(
                                      fontWeight: FontWeight.bold,
                                      fontSize: 13),
                                ),
                              ),
                              Container(
                                margin: EdgeInsets.only(left: 290, top: 50),
                                child: Text(
                                  '13:52 AM',
                                ),
                              ),
                              Container(
                                margin: EdgeInsets.only(left: 330, top: 10),
                                width: 10,
                                height: 10,
                                decoration: BoxDecoration(
                                  color: Colors.grey,
                                  shape: BoxShape.circle,
                                ),
                              )
                            ],
                          ),
                        ),
                      )),
            )
          ],
        ),
      ),
    );
  }
}
