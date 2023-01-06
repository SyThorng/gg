import 'dart:ffi';

import 'package:flutter/material.dart';
import 'package:flutter/src/widgets/container.dart';
import 'package:flutter/src/widgets/framework.dart';
import 'package:hexcolor/hexcolor.dart';

class t5 extends StatefulWidget {
  const t5({super.key});

  @override
  State<t5> createState() => _t5State();
}

class _t5State extends State<t5> {
  int index = 0;

  @override
  Widget build(BuildContext context) {
    List col = ['#08d134', '#080cd1', '#d1084f', '#b8981c'];

    void select(int c) {
      setState(() {
        index = c;
      });
    }

    return Scaffold(
      body: Center(
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            InkWell(
              onTap: () {
                select(3);
              },
              child: Container(
                width: 30,
                height: 30,
                decoration: BoxDecoration(
                  shape: BoxShape.circle,
                  color: Colors.red,
                ),
              ),
            ),
            Text(
              col[index],
              style: TextStyle(fontSize: 30, color: Colors.white),
            ),
            Row(
              mainAxisAlignment: MainAxisAlignment.spaceBetween,
              children: [
                ElevatedButton(
                  style: ElevatedButton.styleFrom(
                    backgroundColor: Color.fromARGB(255, 50, 241, 56),
                  ),
                  onPressed: () {
                    select(0);
                  },
                  child: Text('green'),
                ),
                ElevatedButton(
                  onPressed: () {
                    select(1);
                  },
                  child: Text(''),
                ),
                ElevatedButton(
                  style: ElevatedButton.styleFrom(
                      primary: Colors.pink,
                      onPrimary: Color.fromARGB(255, 33, 242, 238)),
                  onPressed: () {
                    select(2);
                  },
                  child: Text('pink'),
                )
              ],
            ),
          ],
        ),
      ),
      backgroundColor: HexColor(col[index]),
    );
  }
}
