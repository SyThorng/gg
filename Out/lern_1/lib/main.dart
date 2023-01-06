import 'package:flutter/material.dart';
import 'package:lern_1/Zoom_drawer/drawer.dart';
import 'package:lern_1/t1.dart';
import 'package:lern_1/t2.dart';
import 'package:lern_1/t3.dart';
import 'package:lern_1/t4.dart';
import 'package:lern_1/t5.dart';
import 'package:lern_1/t6.dart';

void main(List<String> args) {
  runApp(home());
}

class home extends StatelessWidget {
  const home({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: ui(),
      debugShowCheckedModeBanner: false,
    );
  }
}
