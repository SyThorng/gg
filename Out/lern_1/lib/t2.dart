import 'package:flutter/material.dart';
import 'package:flutter/src/widgets/container.dart';
import 'package:flutter/src/widgets/framework.dart';

class t_2 extends StatefulWidget {
  t_2({super.key});

  @override
  State<t_2> createState() => _t_2State();
}

class _t_2State extends State<t_2> {
  int select = 0;

  List col = [Colors.black, Colors.amber, Colors.blue];
  List bar = [Colors.blue];

  void change(int index) {
    setState(() {
      select = index;
    });
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text('Index'),
      ),
      bottomNavigationBar: BottomNavigationBar(
          currentIndex: select,
          onTap: (index) {
            change(index);
          },
          items: const [
            BottomNavigationBarItem(
                icon: Icon(
                  Icons.home,
                  // color: Colors.indigo,
                ),
                label: 'Home'),
            BottomNavigationBarItem(
                icon: Icon(Icons.favorite), label: 'favarate'),
            BottomNavigationBarItem(icon: Icon(Icons.person), label: 'profile'),
          ]),
      backgroundColor: col[select],
    );
  }
}
