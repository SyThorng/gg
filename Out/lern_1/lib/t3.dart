import 'package:flutter/material.dart';
import 'package:flutter/src/widgets/container.dart';
import 'package:flutter/src/widgets/framework.dart';

class t_3 extends StatefulWidget {
  t_3({super.key});

  @override
  State<t_3> createState() => _t_3State();
}

class _t_3State extends State<t_3> {
  late int i = 0;

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Colors.black,
      body: Center(
        child: Stack(
          children: [
            Container(
              width: 100,
              height: 100,
              decoration: const BoxDecoration(
                shape: BoxShape.circle,
                color: Colors.amber,
              ),
            ),
            Container(
              margin: const EdgeInsets.only(left: 70, bottom: 20),
              width: 50,
              height: 50,
              alignment: Alignment.center,
              decoration: const BoxDecoration(
                shape: BoxShape.circle,
                color: Color.fromARGB(255, 214, 50, 38),
              ),
              child: Text(
                "$i",
                style: const TextStyle(
                    color: Colors.white,
                    fontSize: 20,
                    fontWeight: FontWeight.bold),
              ),
            ),
          ],
        ),
      ),
      floatingActionButton: FloatingActionButton(
        backgroundColor: Colors.black,
        child: Icon(
          Icons.add,
          shadows: [Shadow(color: Colors.orange, offset: Offset(5, 5))],
        ),
        onPressed: () {
          setState(() {
            i++;
          });
        },
      ),
    );
  }
}
