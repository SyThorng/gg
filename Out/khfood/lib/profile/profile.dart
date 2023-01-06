import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';
import 'package:flutter/src/widgets/container.dart';
import 'package:flutter/src/widgets/framework.dart';
import 'package:get/get.dart';
import 'package:get/instance_manager.dart';
import 'package:google_fonts/google_fonts.dart';

class profile extends StatefulWidget {
  const profile({super.key});

  @override
  State<profile> createState() => _profileState();
}

class _profileState extends State<profile> {
  bool b = false;
  bool lang = false;
  @override
  Widget build(BuildContext context) {
    dynamic col = Colors.black;
    return Scaffold(
      body: Column(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          const SizedBox(
            height: 40,
          ),
          Padding(
            padding: const EdgeInsets.only(top: 20),
            child: Row(
              mainAxisAlignment: MainAxisAlignment.center,
              children: [
                Center(
                  child: Text(
                    'Profile',
                    style: GoogleFonts.aBeeZee(
                        fontSize: 25, fontWeight: FontWeight.bold),
                  ),
                ),
                // Container(
                //     margin: EdgeInsets.only(),
                //     child: IconButton(
                //       onPressed: () {},
                //       icon: Icon(Icons.dark_mode),
                //     )),
              ],
            ),
          ),
          const SizedBox(
            height: 20,
          ),
          Center(
            child: Container(
              width: 180,
              height: 180,
              decoration: const BoxDecoration(
                  shape: BoxShape.circle,
                  // color: Colors.red,
                  image: DecorationImage(
                    fit: BoxFit.cover,
                    image: AssetImage('lib/assets/img.jpeg'),
                  )),
            ),
          ),
          const SizedBox(
            height: 10,
          ),
          Padding(
            padding: const EdgeInsets.only(top: 0),
            child: Center(
              child: Text(
                'Sythorng Sun',
                style: GoogleFonts.aBeeZee(
                    fontSize: 25, fontWeight: FontWeight.bold),
              ),
            ),
          ),
          const SizedBox(
            height: 10,
          ),
          Column(
            children: [
              Card(
                elevation: 5,
                shadowColor: Colors.pink,
                child: ListTile(
                  onTap: () {},
                  trailing: Icon(
                    Icons.arrow_forward_ios,
                    color: col,
                  ),
                  leading: Icon(
                    Icons.person,
                    color: col,
                  ),
                  title: Text(
                    'Personal Information',
                    style: TextStyle(color: col, fontWeight: FontWeight.bold),
                  ),
                  // enabled: false,
                ),
              ),
              Card(
                shadowColor: Colors.pink,
                elevation: 5,
                child: ListTile(
                  onTap: () {},
                  trailing: Icon(
                    Icons.arrow_forward_ios,
                    color: col,
                  ),
                  leading: Icon(
                    Icons.lock,
                    color: col,
                  ),
                  title: Text(
                    'Privacy',
                    style: TextStyle(color: col, fontWeight: FontWeight.bold),
                  ),
                  // enabled: false,
                ),
              ),
              Card(
                elevation: 5,
                shadowColor: Colors.pink,
                child: ListTile(
                  onTap: () {},
                  trailing: Icon(
                    Icons.arrow_forward_ios,
                    color: col,
                  ),
                  leading: Icon(
                    Icons.rotate_left,
                    color: col,
                  ),
                  title: Text(
                    'Order History',
                    style: TextStyle(color: col, fontWeight: FontWeight.bold),
                  ),
                  // enabled: false,
                ),
              ),
              Card(
                elevation: 5,
                shadowColor: Colors.pink,
                child: ListTile(
                  onTap: () {},
                  trailing: CupertinoSwitch(
                    value: lang,
                    onChanged: (value) {
                      setState(() {
                        lang = value;
                      });
                    },
                  ),
                  leading: Icon(
                    Icons.payment,
                    color: col,
                  ),
                  title: Text(
                    'English / ភាសាខ្មែរ',
                    style: TextStyle(color: col, fontWeight: FontWeight.bold),
                  ),
                  // enabled: false,
                ),
              ),
              Card(
                elevation: 5,
                shadowColor: Colors.pink,
                child: ListTile(
                  onTap: () {},
                  trailing: CupertinoSwitch(
                    onChanged: (value) {
                      setState(() {
                        b = value;
                      });
                      if (b == false) {
                        Get.changeTheme(ThemeData.light());
                      } else {
                        Get.changeTheme(ThemeData.dark());
                      }
                    },
                    value: b,
                  ),
                  leading: Icon(
                    Icons.dark_mode,
                    color: Colors.black,
                  ),
                  title: Text(
                    'Dark Mode',
                    style: TextStyle(color: col, fontWeight: FontWeight.bold),
                  ),
                  // enabled: false,
                ),
              ),
              Card(
                elevation: 5,
                shadowColor: Colors.pink,
                child: ListTile(
                  onTap: () {
                    showDialog(
                      context: context,
                      builder: (context) => AlertDialog(
                          // backgroundColor: Colors.black,
                          title: Text('Are you sure for Logout'),
                          actions: [
                            Padding(
                              padding:
                                  const EdgeInsets.symmetric(horizontal: 30),
                              child: Row(
                                mainAxisAlignment:
                                    MainAxisAlignment.spaceBetween,
                                children: [
                                  MaterialButton(
                                    onPressed: () {
                                      Navigator.pop(context);
                                    },
                                    child: Text('No'),
                                    color: Colors.blue,
                                  ),
                                  MaterialButton(
                                    onPressed: () {},
                                    child: Text('Yes'),
                                    color: Colors.red,
                                  ),
                                ],
                              ),
                            )
                          ]),
                    );
                  },
                  trailing: Icon(
                    Icons.arrow_forward_ios,
                    color: col,
                  ),
                  leading: Icon(
                    Icons.logout,
                    color: col,
                  ),
                  title: Text(
                    'Logout',
                    style: TextStyle(color: col, fontWeight: FontWeight.bold),
                  ),
                  // enabled: false,
                ),
              ),
            ],
          ),
        ],
      ),
    );
  }
}
