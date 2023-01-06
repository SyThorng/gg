import 'package:convex_bottom_bar/convex_bottom_bar.dart';
import 'package:flutter/material.dart';
import 'package:flutter/src/widgets/container.dart';
import 'package:flutter/src/widgets/framework.dart';
import 'package:get/get_state_manager/get_state_manager.dart';
import 'package:get/instance_manager.dart';
import 'package:khfood/List/ls_home.dart';
import 'package:khfood/fav/fav.dart';
import 'package:khfood/getx/controller.dart';
import 'package:khfood/home.dart';
import 'package:khfood/main.dart';
import 'package:khfood/map/map.dart';
import 'package:khfood/notifications/cation.dart';
import 'package:khfood/profile/profile.dart';
import 'package:khfood/search/search.dart';

class nav_bar extends StatefulWidget {
  const nav_bar({super.key});

  @override
  State<nav_bar> createState() => _nav_barState();
}

class _nav_barState extends State<nav_bar> {
  int selectindex = 0;
  List<Widget> obj = [home(), map(), search(), fav(), profile()];
  @override
  Widget build(BuildContext context) {
    Cunter_product controller = Get.put(Cunter_product());

    return GetBuilder(
        init: controller,
        builder: (context) {
          return Scaffold(
            bottomNavigationBar: ConvexAppBar.badge({
              3: '${controller.count}',
            },
                badgeMargin: EdgeInsets.only(left: 35, bottom: 10),
                badgeColor: Colors.pink,
                initialActiveIndex: selectindex, onTap: (index) {
              setState(() {
                selectindex = index;
                print('$selectindex');
              });
            },
                elevation: 1,
                shadowColor: Colors.pink,
                activeColor: Colors.pink,
                color: Colors.pink,
                height: 26,
                backgroundColor: Colors.white,
                items: const [
                  TabItem(icon: Icons.home),
                  TabItem(
                    icon: Icons.location_on,
                  ),
                  TabItem(
                    icon: Icons.search,
                  ),
                  TabItem(
                    icon: Icons.favorite,
                  ),
                  TabItem(
                    icon: Icons.person,
                  ),
                ]),
            body: obj[selectindex],
          );
        });
  }
}
