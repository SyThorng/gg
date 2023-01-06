import 'package:flutter/material.dart';
import 'package:get/route_manager.dart';
import 'package:khfood/buy.dart';
import 'package:khfood/drawer/drawer.dart';
import 'package:khfood/home.dart';
import 'package:khfood/lang/languge.dart';
import 'package:khfood/map/map.dart';
import 'package:khfood/nav_bar/nav_bar.dart';
import 'package:khfood/notifications/cation.dart';
import 'package:khfood/search/search.dart';

void main(List<String> args) {
  runApp(const kk());
}

class kk extends StatelessWidget {
  const kk({super.key});

  @override
  Widget build(BuildContext context) {
    // bool lang = themedata.read('lang') ?? false;
    return GetMaterialApp(
      home: MyWidget(),
      translations: localString(),
      // locale: lang ? Locale('en', 'kh') : Locale('en', 'us'),
      // home: buy(),
      debugShowCheckedModeBanner: false,
    );
  }
}

// class null_page extends StatelessWidget {
//   const null_page({super.key});

//   @override
//   Widget build(BuildContext context) {
//     return Container();
//   }
// }
