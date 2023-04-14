typedef void *__builtin_va_list;
char **_global_argv;
int _global_argc;
char **_global_envp;
int main(int argc, char **argv, char **_formal_envp);
unsigned int OBF_FUNC(unsigned int input);
extern int(rand)();
extern int(strtol)();
unsigned int OBF_FUNC(unsigned int input) {
  int __RANDVAR__60741584203479995232__;
  unsigned int localStaticState[2];
  unsigned int _induction1_0_2;
  int __RANDVAR__83982222079286754025__;
  unsigned int _index0_0;
  unsigned int _induction3_2_2;
  int __RANDVAR__10556054145881529881__;
  int __RANDVAR__34815215373023684084__;
  int __RANDVAR__57468664460219754011__;
  unsigned int _index2_9;
  unsigned int _induction5_4_2;
  int __RANDVAR__98273354423294819813__;
  int __RANDVAR__75632417493315499390__;
  unsigned int _index4_3;
  int __RANDVAR__8031520469538810918__;
  int __RANDVAR__85623698597509032015__;
  int __RANDVAR__56607255466525641566__;
  int __RANDVAR__58725193425287744003__;
  int tmp;
  int __RANDVAR__35241405615068754488__;
  int __RANDVAR__37479632579831035260__;
  int __RANDVAR__4790461565210995910__;
  int __RANDVAR__20656989549887475716__;
  int __RANDVAR__32746725975157387791__;
  int tmp___0;
  int tmp___1;
  int __RANDVAR__9352580917151922783__;
  int __RANDVAR__42748445059285856887__;
  int tmp___2;
  int __RANDVAR__64831518678489178964__;
  int __RANDVAR__79046849700744148827__;
  int __RANDVAR__29226577853266481396__;
  int __RANDVAR__88377353497487231283__;
  int tmp___3;
  int __RANDVAR__36117935578945731636__;
  int __RANDVAR__81354712444520477708__;
  int __RANDVAR__5504614195676730594__;
  int __RANDVAR__52150513885679027095__;
  int tmp___4;
  int __RANDVAR__41617778862803776002__;
  int __RANDVAR__55548608379091760618__;
  int __RANDVAR__95599697337627832246__;
  int __RANDVAR__1910181562252897599__;
  int __RANDVAR__23280519072788231856__;
  int __RANDVAR__88111602244818669202__;
  int tmp___5;
  int __RANDVAR__96194052284985609063__;
  int __RANDVAR__29737785404328615997__;
  int __RANDVAR__53520841717220357480__;
  int __RANDVAR__48607918751517202080__;
  int __RANDVAR__55884391336903599784__;
  int __RANDVAR__7615261552277207878__;
  int __RANDVAR__52877684795876173310__;
  int tmp___6;
  int tmp___7;
  int __RANDVAR__11767152468731440608__;
  int __RANDVAR__69489634207856904374__;
  int __RANDVAR__97097176194915942269__;
  int __RANDVAR__5947330628796151522__;
  int __RANDVAR__53228514722932028771__;
  int __RANDVAR__31184616379951158352__;
  int __RANDVAR__9636812148152897108__;
  int __RANDVAR__84708511557553092046__;
  int __RANDVAR__893168347820407448__;
  int __RANDVAR__82990725920570288223__;
  int __RANDVAR__29763906809319327731__;
  unsigned long _1_OBF_FUNC_next;
  void *_1_OBF_FUNC_jumpTab[261] = {&&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab1, &&_1_OBF_FUNC_lab2, &&_1_OBF_FUNC_lab3, &&_1_OBF_FUNC_lab4, &&_1_OBF_FUNC_lab5, &&_1_OBF_FUNC_lab6, &&_1_OBF_FUNC_lab7, &&_1_OBF_FUNC_lab8, &&_1_OBF_FUNC_lab9, &&_1_OBF_FUNC_lab10, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab12, &&_1_OBF_FUNC_lab13, &&_1_OBF_FUNC_lab14, &&_1_OBF_FUNC_lab15, &&_1_OBF_FUNC_lab16, &&_1_OBF_FUNC_lab17, &&_1_OBF_FUNC_lab18, &&_1_OBF_FUNC_lab19, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab21, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab23, &&_1_OBF_FUNC_lab24, &&_1_OBF_FUNC_lab25, &&_1_OBF_FUNC_lab26, &&_1_OBF_FUNC_lab27, &&_1_OBF_FUNC_lab28, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab30, &&_1_OBF_FUNC_lab31, &&_1_OBF_FUNC_lab32, &&_1_OBF_FUNC_lab33, &&_1_OBF_FUNC_lab34, &&_1_OBF_FUNC_lab35, &&_1_OBF_FUNC_lab36, &&_1_OBF_FUNC_lab37, &&_1_OBF_FUNC_lab38, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab40, &&_1_OBF_FUNC_lab41, &&_1_OBF_FUNC_lab42, &&_1_OBF_FUNC_lab43, &&_1_OBF_FUNC_lab44, &&_1_OBF_FUNC_lab45, &&_1_OBF_FUNC_lab46, &&_1_OBF_FUNC_lab47, &&_1_OBF_FUNC_lab48, &&_1_OBF_FUNC_lab49, &&_1_OBF_FUNC_lab50, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab52, &&_1_OBF_FUNC_lab53, &&_1_OBF_FUNC_lab54, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab58, &&_1_OBF_FUNC_lab59, &&_1_OBF_FUNC_lab60, &&_1_OBF_FUNC_lab61, &&_1_OBF_FUNC_lab62, &&_1_OBF_FUNC_lab63, &&_1_OBF_FUNC_lab64, &&_1_OBF_FUNC_lab65, &&_1_OBF_FUNC_lab66, &&_1_OBF_FUNC_lab67, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab69, &&_1_OBF_FUNC_lab70, &&_1_OBF_FUNC_lab71, &&_1_OBF_FUNC_lab72, &&_1_OBF_FUNC_lab73, &&_1_OBF_FUNC_lab74, &&_1_OBF_FUNC_lab75, &&_1_OBF_FUNC_lab76, &&_1_OBF_FUNC_lab77, &&_1_OBF_FUNC_lab78, &&_1_OBF_FUNC_lab79, &&_1_OBF_FUNC_lab80, &&_1_OBF_FUNC_lab81, &&_1_OBF_FUNC_lab82, &&_1_OBF_FUNC_lab83, &&_1_OBF_FUNC_lab84, &&_1_OBF_FUNC_lab85, &&_1_OBF_FUNC_lab86, &&_1_OBF_FUNC_lab87, &&_1_OBF_FUNC_lab88, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab90, &&_1_OBF_FUNC_lab91, &&_1_OBF_FUNC_lab92, &&_1_OBF_FUNC_lab93, &&_1_OBF_FUNC_lab94, &&_1_OBF_FUNC_lab95, &&_1_OBF_FUNC_lab96, &&_1_OBF_FUNC_lab97, &&_1_OBF_FUNC_lab98, &&_1_OBF_FUNC_lab99, &&_1_OBF_FUNC_lab100, &&_1_OBF_FUNC_lab101, &&_1_OBF_FUNC_lab102, &&_1_OBF_FUNC_lab103, &&_1_OBF_FUNC_lab104, &&_1_OBF_FUNC_lab105, &&_1_OBF_FUNC_lab106, &&_1_OBF_FUNC_lab107, &&_1_OBF_FUNC_lab108, &&_1_OBF_FUNC_lab109, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab111, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab113, &&_1_OBF_FUNC_lab114, &&_1_OBF_FUNC_lab115, &&_1_OBF_FUNC_lab116, &&_1_OBF_FUNC_lab117, &&_1_OBF_FUNC_lab118, &&_1_OBF_FUNC_lab119, &&_1_OBF_FUNC_lab120, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab122, &&_1_OBF_FUNC_lab123, &&_1_OBF_FUNC_lab124, &&_1_OBF_FUNC_lab125, &&_1_OBF_FUNC_lab126, &&_1_OBF_FUNC_lab127, &&_1_OBF_FUNC_lab128, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab131, &&_1_OBF_FUNC_lab132, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab134, &&_1_OBF_FUNC_lab135, &&_1_OBF_FUNC_lab136, &&_1_OBF_FUNC_lab137, &&_1_OBF_FUNC_lab138, &&_1_OBF_FUNC_lab139, &&_1_OBF_FUNC_lab140, &&_1_OBF_FUNC_lab141, &&_1_OBF_FUNC_lab142, &&_1_OBF_FUNC_lab143, &&_1_OBF_FUNC_lab144, &&_1_OBF_FUNC_lab145, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab147, &&_1_OBF_FUNC_lab148, &&_1_OBF_FUNC_lab149, &&_1_OBF_FUNC_lab150, &&_1_OBF_FUNC_lab151, &&_1_OBF_FUNC_lab152, &&_1_OBF_FUNC_lab153, &&_1_OBF_FUNC_lab154, &&_1_OBF_FUNC_lab155, &&_1_OBF_FUNC_lab156, &&_1_OBF_FUNC_lab157, &&_1_OBF_FUNC_lab158, &&_1_OBF_FUNC_lab159, &&_1_OBF_FUNC_lab160, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab162, &&_1_OBF_FUNC_lab163, &&_1_OBF_FUNC_lab164, &&_1_OBF_FUNC_lab165, &&_1_OBF_FUNC_lab166, &&_1_OBF_FUNC_lab167, &&_1_OBF_FUNC_lab168, &&_1_OBF_FUNC_lab169, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab171, &&_1_OBF_FUNC_lab172, &&_1_OBF_FUNC_lab173, &&_1_OBF_FUNC_lab174, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab176, &&_1_OBF_FUNC_lab177, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab179, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab181, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab183, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab186, &&_1_OBF_FUNC_lab187, &&_1_OBF_FUNC_lab188, &&_1_OBF_FUNC_lab189, &&_1_OBF_FUNC_lab190, &&_1_OBF_FUNC_lab191, &&_1_OBF_FUNC_lab192, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab195, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab197, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab199, &&_1_OBF_FUNC_lab200, &&_1_OBF_FUNC_lab201, &&_1_OBF_FUNC_lab202, &&_1_OBF_FUNC_lab203, &&_1_OBF_FUNC_lab204, &&_1_OBF_FUNC_lab205, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab207, &&_1_OBF_FUNC_lab208, &&_1_OBF_FUNC_lab209, &&_1_OBF_FUNC_lab210, &&_1_OBF_FUNC_lab211, &&_1_OBF_FUNC_lab212, &&_1_OBF_FUNC_lab213, &&_1_OBF_FUNC_lab214, &&_1_OBF_FUNC_lab215, &&_1_OBF_FUNC_lab216, &&_1_OBF_FUNC_lab217, &&_1_OBF_FUNC_lab218, &&_1_OBF_FUNC_lab219, &&_1_OBF_FUNC_lab220, &&_1_OBF_FUNC_lab221, &&_1_OBF_FUNC_lab222, &&_1_OBF_FUNC_lab223, &&_1_OBF_FUNC_lab224, &&_1_OBF_FUNC_lab225, &&_1_OBF_FUNC_lab226, &&_1_OBF_FUNC_lab227, &&_1_OBF_FUNC_lab228, &&_1_OBF_FUNC_lab229, &&_1_OBF_FUNC_lab230, &&_1_OBF_FUNC_lab231, &&_1_OBF_FUNC_lab232, &&_1_OBF_FUNC_lab233, &&_1_OBF_FUNC_lab234, &&_1_OBF_FUNC_lab235, &&_1_OBF_FUNC_lab236, &&_1_OBF_FUNC_lab237, &&_1_OBF_FUNC_lab238, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab240, &&_1_OBF_FUNC_lab241, &&_1_OBF_FUNC_lab242, &&_1_OBF_FUNC_lab243, &&_1_OBF_FUNC_lab244, &&_1_OBF_FUNC_lab245, &&_1_OBF_FUNC_lab246, &&_1_OBF_FUNC_lab247, &&_1_OBF_FUNC_lab248, &&_1_OBF_FUNC_lab249, &&_1_OBF_FUNC_lab250, &&_1_OBF_FUNC_lab251, &&_1_OBF_FUNC_lab252, &&_1_OBF_FUNC_lab253, &&_1_OBF_FUNC_lab254, &&_1_OBF_FUNC_lab255, &&_1_OBF_FUNC_lab256, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab258, &&_1_OBF_FUNC_lab259, &&_1_OBF_FUNC_lab260};
  {
    { _1_OBF_FUNC_next = 211UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next - 0]); }
  _1_OBF_FUNC_lab26:;
    if (__RANDVAR__81354712444520477708__ < (168 + __RANDVAR__81354712444520477708__) * (__RANDVAR__88377353497487231283__ + 892)) {
      goto _1_OBF_FUNC_lab148;
    } else {
      goto _1_OBF_FUNC_lab98;
    }
  _1_OBF_FUNC_lab96:
    __RANDVAR__82990725920570288223__ = __RANDVAR__88111602244818669202__;
    goto _1_OBF_FUNC_lab69;
  _1_OBF_FUNC_lab177:
    _induction3_2_2 = 0U;
    goto _1_OBF_FUNC_lab33;
  _1_OBF_FUNC_lab143:;
    if (__RANDVAR__29226577853266481396__ < __RANDVAR__42748445059285856887__) {
      goto _1_OBF_FUNC_lab204;
    } else {
      goto _1_OBF_FUNC_lab82;
    }
  _1_OBF_FUNC_lab4:;
    if (tmp___6 % 10 >= 5) {
      goto _1_OBF_FUNC_lab219;
    } else {
      goto _1_OBF_FUNC_lab187;
    }
  _1_OBF_FUNC_lab237:
    _index4_3 = 0U;
    goto _1_OBF_FUNC_lab73;
  _1_OBF_FUNC_lab136:;
    if (__RANDVAR__8031520469538810918__ < 651) {
      goto _1_OBF_FUNC_lab208;
    } else {
      goto _1_OBF_FUNC_lab171;
    }
  _1_OBF_FUNC_lab93:
    tmp___0 = rand();
    goto _1_OBF_FUNC_lab205;
  _1_OBF_FUNC_lab7:
    __RANDVAR__20656989549887475716__ = __RANDVAR__8031520469538810918__;
    goto _1_OBF_FUNC_lab93;
  _1_OBF_FUNC_lab94:
    __RANDVAR__60741584203479995232__ -= 313;
    goto _1_OBF_FUNC_lab16;
  _1_OBF_FUNC_lab169:
    __RANDVAR__10556054145881529881__ = 142;
    goto _1_OBF_FUNC_lab226;
  _1_OBF_FUNC_lab223:
    __RANDVAR__60741584203479995232__ -= 779;
    goto _1_OBF_FUNC_lab86;
  _1_OBF_FUNC_lab13:
    tmp___5 = rand();
    goto _1_OBF_FUNC_lab1;
  _1_OBF_FUNC_lab213:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab168;
  _1_OBF_FUNC_lab77:;
    if (__RANDVAR__88111602244818669202__ < 849) {
      goto _1_OBF_FUNC_lab217;
    } else {
      goto _1_OBF_FUNC_lab229;
    }
  _1_OBF_FUNC_lab144:
    __RANDVAR__60741584203479995232__ -= 776;
    goto _1_OBF_FUNC_lab189;
  _1_OBF_FUNC_lab40:;
    if ((unsigned long)_index0_0 < 0UL) {
      goto _1_OBF_FUNC_lab136;
    } else {
      goto _1_OBF_FUNC_lab162;
    }
  _1_OBF_FUNC_lab14:
    _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab243;
  _1_OBF_FUNC_lab86:
    __RANDVAR__60741584203479995232__ += 779;
    goto _1_OBF_FUNC_lab156;
  _1_OBF_FUNC_lab259:
    __RANDVAR__8031520469538810918__ += 458;
    goto _1_OBF_FUNC_lab157;
  _1_OBF_FUNC_lab25:;
    if (tmp___3 % 10 >= 5) {
      goto _1_OBF_FUNC_lab152;
    } else {
      goto _1_OBF_FUNC_lab153;
    }
  _1_OBF_FUNC_lab174:
    _index2_9 = (unsigned int)((unsigned long)_index2_9 + 2UL);
    goto _1_OBF_FUNC_lab172;
  _1_OBF_FUNC_lab150:
    __RANDVAR__60741584203479995232__ -= 729;
    goto _1_OBF_FUNC_lab41;
  _1_OBF_FUNC_lab108:
    __RANDVAR__42748445059285856887__ -= 367;
    goto _1_OBF_FUNC_lab58;
  _1_OBF_FUNC_lab238:
    __RANDVAR__60741584203479995232__ += 282;
    goto _1_OBF_FUNC_lab232;
  _1_OBF_FUNC_lab24:
    __RANDVAR__96194052284985609063__ = __RANDVAR__60741584203479995232__;
    goto _1_OBF_FUNC_lab99;
  _1_OBF_FUNC_lab114:
    __RANDVAR__8031520469538810918__ -= 366;
    goto _1_OBF_FUNC_lab160;
  _1_OBF_FUNC_lab187:
    localStaticState[_induction5_4_2] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    goto _1_OBF_FUNC_lab100;
  _1_OBF_FUNC_lab103:
    __RANDVAR__97097176194915942269__ = 888 + __RANDVAR__29226577853266481396__;
    goto _1_OBF_FUNC_lab197;
  _1_OBF_FUNC_lab234:;
    if (__RANDVAR__60741584203479995232__ < 616) {
      goto _1_OBF_FUNC_lab256;
    } else {
      goto _1_OBF_FUNC_lab259;
    }
  _1_OBF_FUNC_lab222:;
    if ((61 + __RANDVAR__29226577853266481396__) - 468 < __RANDVAR__42748445059285856887__) {
      goto _1_OBF_FUNC_lab134;
    } else {
      goto _1_OBF_FUNC_lab224;
    }
  _1_OBF_FUNC_lab181:
    __RANDVAR__98273354423294819813__++;
    goto _1_OBF_FUNC_lab135;
  _1_OBF_FUNC_lab138:
    __RANDVAR__53228514722932028771__ = __RANDVAR__60741584203479995232__ * 797 + 18 * __RANDVAR__60741584203479995232__;
    goto _1_OBF_FUNC_lab244;
  _1_OBF_FUNC_lab5:;
    if ((unsigned long)_index4_3 < 3UL) {
      goto _1_OBF_FUNC_lab18;
    } else {
      goto _1_OBF_FUNC_lab12;
    }
  _1_OBF_FUNC_lab142:
    __RANDVAR__81354712444520477708__ = __RANDVAR__60741584203479995232__;
    goto _1_OBF_FUNC_lab26;
  _1_OBF_FUNC_lab78:
    __RANDVAR__42748445059285856887__ += 495;
    goto _1_OBF_FUNC_lab155;
  _1_OBF_FUNC_lab65:
    _index4_3++;
    goto _1_OBF_FUNC_lab195;
  _1_OBF_FUNC_lab209:
    __RANDVAR__8031520469538810918__ -= 869;
    goto _1_OBF_FUNC_lab13;
  _1_OBF_FUNC_lab36:
    __RANDVAR__29737785404328615997__ = __RANDVAR__8031520469538810918__;
    goto _1_OBF_FUNC_lab203;
  _1_OBF_FUNC_lab216:;
    if ((225 - __RANDVAR__8031520469538810918__) + 340 < 701) {
      goto _1_OBF_FUNC_lab248;
    } else {
      goto _1_OBF_FUNC_lab145;
    }
  _1_OBF_FUNC_lab75:
    localStaticState[1UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[1UL];
    goto _1_OBF_FUNC_lab84;
  _1_OBF_FUNC_lab66:
    __RANDVAR__60741584203479995232__ += 303;
    goto _1_OBF_FUNC_lab177;
  _1_OBF_FUNC_lab117:
    __RANDVAR__60741584203479995232__ -= 158;
    goto _1_OBF_FUNC_lab9;
  _1_OBF_FUNC_lab215:;
    if (tmp___7 % 10 >= 5) {
      goto _1_OBF_FUNC_lab5;
    } else {
      goto _1_OBF_FUNC_lab8;
    }
  _1_OBF_FUNC_lab102:;
    if (718 + (__RANDVAR__88111602244818669202__ - 140) < (__RANDVAR__88111602244818669202__ - __RANDVAR__88111602244818669202__) + __RANDVAR__60741584203479995232__) {
      goto _1_OBF_FUNC_lab78;
    } else {
      goto _1_OBF_FUNC_lab132;
    }
  _1_OBF_FUNC_lab147:
    __RANDVAR__42748445059285856887__ += 604;
    goto _1_OBF_FUNC_lab76;
  _1_OBF_FUNC_lab189:
    __RANDVAR__60741584203479995232__ += 776;
    goto _1_OBF_FUNC_lab91;
  _1_OBF_FUNC_lab10:
    __RANDVAR__8031520469538810918__ += 869;
    goto _1_OBF_FUNC_lab209;
  _1_OBF_FUNC_lab23:;
    if (__RANDVAR__60741584203479995232__ < 556 + (__RANDVAR__8031520469538810918__ + 456)) {
      goto _1_OBF_FUNC_lab141;
    } else {
      goto _1_OBF_FUNC_lab233;
    }
  _1_OBF_FUNC_lab159:
    __RANDVAR__57468664460219754011__ = (__RANDVAR__57468664460219754011__ + __RANDVAR__60741584203479995232__) - 91;
    goto _1_OBF_FUNC_lab226;
  _1_OBF_FUNC_lab119:
    __RANDVAR__60741584203479995232__ += 729;
    goto _1_OBF_FUNC_lab150;
  _1_OBF_FUNC_lab204:
    __RANDVAR__84708511557553092046__ = 290;
    goto _1_OBF_FUNC_lab91;
  _1_OBF_FUNC_lab0:
    tmp___4 = rand();
    goto _1_OBF_FUNC_lab111;
  _1_OBF_FUNC_lab31:
    __RANDVAR__42748445059285856887__ += 742;
    goto _1_OBF_FUNC_lab59;
  _1_OBF_FUNC_lab12:
    __RANDVAR__9636812148152897108__++;
    goto _1_OBF_FUNC_lab143;
  _1_OBF_FUNC_lab251:;
    if (__RANDVAR__29226577853266481396__ < 407) {
      goto _1_OBF_FUNC_lab218;
    } else {
      goto _1_OBF_FUNC_lab81;
    }
  _1_OBF_FUNC_lab38:
    __RANDVAR__60741584203479995232__ -= 777;
    goto _1_OBF_FUNC_lab200;
  _1_OBF_FUNC_lab3:
    tmp = rand();
    goto _1_OBF_FUNC_lab101;
  _1_OBF_FUNC_lab76:
    __RANDVAR__42748445059285856887__ -= 604;
    goto _1_OBF_FUNC_lab176;
  _1_OBF_FUNC_lab160:;
    if ((unsigned long)_index0_0 < 0UL) {
      goto _1_OBF_FUNC_lab3;
    } else {
      goto _1_OBF_FUNC_lab40;
    }
  _1_OBF_FUNC_lab74:
    __RANDVAR__60741584203479995232__ += 58;
    goto _1_OBF_FUNC_lab258;
  _1_OBF_FUNC_lab107:
    _index0_0++;
    goto _1_OBF_FUNC_lab40;
  _1_OBF_FUNC_lab122:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[0UL] - localStaticState[(unsigned long)_index2_9 % 2UL];
    goto _1_OBF_FUNC_lab46;
  _1_OBF_FUNC_lab210:
    __RANDVAR__42748445059285856887__ -= 245;
    goto _1_OBF_FUNC_lab71;
  _1_OBF_FUNC_lab188:
    __RANDVAR__8031520469538810918__ += 366;
    goto _1_OBF_FUNC_lab114;
  _1_OBF_FUNC_lab225:;
    if ((unsigned long)_index2_9 < 9UL) {
      goto _1_OBF_FUNC_lab120;
    } else {
      goto _1_OBF_FUNC_lab152;
    }
  _1_OBF_FUNC_lab240:
    __RANDVAR__29226577853266481396__ += 61;
    goto _1_OBF_FUNC_lab183;
  _1_OBF_FUNC_lab19:;
    if (388385 - __RANDVAR__88111602244818669202__ < __RANDVAR__8031520469538810918__) {
      goto _1_OBF_FUNC_lab96;
    } else {
      goto _1_OBF_FUNC_lab108;
    }
  _1_OBF_FUNC_lab113:
    tmp___7 = rand();
    goto _1_OBF_FUNC_lab215;
  _1_OBF_FUNC_lab87:
    __RANDVAR__8031520469538810918__ -= 61;
    goto _1_OBF_FUNC_lab37;
  _1_OBF_FUNC_lab200:
    __RANDVAR__60741584203479995232__ += 777;
    goto _1_OBF_FUNC_lab160;
  _1_OBF_FUNC_lab226:;
    if (__RANDVAR__60741584203479995232__ < 973) {
      goto _1_OBF_FUNC_lab181;
    } else {
      goto _1_OBF_FUNC_lab50;
    }
  _1_OBF_FUNC_lab116:
    _index0_0 = 0U;
    goto _1_OBF_FUNC_lab216;
  _1_OBF_FUNC_lab92:
    __RANDVAR__60741584203479995232__ += 158;
    goto _1_OBF_FUNC_lab117;
  _1_OBF_FUNC_lab197:
    _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab149;
  _1_OBF_FUNC_lab171:
    __RANDVAR__4790461565210995910__ = __RANDVAR__8031520469538810918__ * (633 - __RANDVAR__4790461565210995910__);
    goto _1_OBF_FUNC_lab15;
  _1_OBF_FUNC_lab115:
    __RANDVAR__29226577853266481396__ -= 305;
    goto _1_OBF_FUNC_lab53;
  _1_OBF_FUNC_lab64:
    tmp___2 = rand();
    goto _1_OBF_FUNC_lab158;
  _1_OBF_FUNC_lab16:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab128;
  _1_OBF_FUNC_lab124:
    _index2_9 = (unsigned int)((unsigned long)_index2_9 + 2UL);
    goto _1_OBF_FUNC_lab241;
  _1_OBF_FUNC_lab218:
    __RANDVAR__1910181562252897599__ = 502 - __RANDVAR__42748445059285856887__;
    goto _1_OBF_FUNC_lab202;
  _1_OBF_FUNC_lab173:
    __RANDVAR__8031520469538810918__ -= 230;
    goto _1_OBF_FUNC_lab166;
  _1_OBF_FUNC_lab135:
    localStaticState[0UL] = (unsigned int)(((unsigned long)input + 727910775UL) + 3707576828UL);
    goto _1_OBF_FUNC_lab79;
  _1_OBF_FUNC_lab202:
    _index2_9 = (unsigned int)((unsigned long)_index2_9 + 2UL);
    goto _1_OBF_FUNC_lab183;
  _1_OBF_FUNC_lab27:;
    if (!((localStaticState[0UL] >> 4U) & 1U)) {
      goto _1_OBF_FUNC_lab80;
    } else {
      goto _1_OBF_FUNC_lab72;
    }
  _1_OBF_FUNC_lab44:;
    if (tmp___1 % 10 >= 5) {
      goto _1_OBF_FUNC_lab214;
    } else {
      goto _1_OBF_FUNC_lab97;
    }
  _1_OBF_FUNC_lab79:
    localStaticState[1UL] = (unsigned int)(((unsigned long)input + 784159696UL) - (261949459UL + (unsigned long)localStaticState[0UL]));
    goto _1_OBF_FUNC_lab235;
  _1_OBF_FUNC_lab256:
    __RANDVAR__60741584203479995232__ += 313;
    goto _1_OBF_FUNC_lab94;
  _1_OBF_FUNC_lab99:;
    if (__RANDVAR__29226577853266481396__ < 594) {
      goto _1_OBF_FUNC_lab163;
    } else {
      goto _1_OBF_FUNC_lab36;
    }
  _1_OBF_FUNC_lab48:
    __RANDVAR__7615261552277207878__ = 93 * __RANDVAR__8031520469538810918__;
    goto _1_OBF_FUNC_lab195;
  _1_OBF_FUNC_lab71:
    __RANDVAR__42748445059285856887__ += 245;
    goto _1_OBF_FUNC_lab53;
  _1_OBF_FUNC_lab183:;
    if ((unsigned long)_index2_9 < 9UL) {
      goto _1_OBF_FUNC_lab0;
    } else {
      goto _1_OBF_FUNC_lab241;
    }
  _1_OBF_FUNC_lab45:
    localStaticState[_index0_0] = localStaticState[1UL] + localStaticState[0UL];
    goto _1_OBF_FUNC_lab213;
  _1_OBF_FUNC_lab8:
    localStaticState[_induction5_4_2] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    goto _1_OBF_FUNC_lab34;
  _1_OBF_FUNC_lab6:
    __RANDVAR__83982222079286754025__++;
    goto _1_OBF_FUNC_lab212;
  _1_OBF_FUNC_lab217:;
    if (__RANDVAR__55884391336903599784__ * __RANDVAR__55884391336903599784__ + (30 - __RANDVAR__8031520469538810918__) < 850) {
      goto _1_OBF_FUNC_lab48;
    } else {
      goto _1_OBF_FUNC_lab49;
    }
  _1_OBF_FUNC_lab227:
    __RANDVAR__53520841717220357480__ = 854;
    goto _1_OBF_FUNC_lab222;
  _1_OBF_FUNC_lab109:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab119;
  _1_OBF_FUNC_lab61:;
    if (!(__RANDVAR__60741584203479995232__ < 202)) {
      goto _1_OBF_FUNC_lab159;
    }
  _1_OBF_FUNC_lab83:
    __RANDVAR__34815215373023684084__ = __RANDVAR__60741584203479995232__;
    goto _1_OBF_FUNC_lab226;
  _1_OBF_FUNC_lab41:
    _index0_0++;
    goto _1_OBF_FUNC_lab162;
  _1_OBF_FUNC_lab224:
    __RANDVAR__48607918751517202080__ = 251;
    goto _1_OBF_FUNC_lab195;
  _1_OBF_FUNC_lab34:
    _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab102;
  _1_OBF_FUNC_lab190:
    __RANDVAR__36117935578945731636__ = 864 + __RANDVAR__8031520469538810918__;
    goto _1_OBF_FUNC_lab253;
  _1_OBF_FUNC_lab53:
    _index4_3++;
    goto _1_OBF_FUNC_lab67;
  _1_OBF_FUNC_lab167:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab236;
  _1_OBF_FUNC_lab98:
    __RANDVAR__88377353497487231283__ += 239;
    goto _1_OBF_FUNC_lab191;
  _1_OBF_FUNC_lab128:
    __RANDVAR__9352580917151922783__ = __RANDVAR__60741584203479995232__;
    goto _1_OBF_FUNC_lab220;
  _1_OBF_FUNC_lab125:;
    if (__RANDVAR__8031520469538810918__ < __RANDVAR__56607255466525641566__ + 839) {
      goto _1_OBF_FUNC_lab118;
    } else {
      goto _1_OBF_FUNC_lab38;
    }
  _1_OBF_FUNC_lab166:
    __RANDVAR__8031520469538810918__ += 230;
    goto _1_OBF_FUNC_lab174;
  _1_OBF_FUNC_lab246:
    __RANDVAR__60741584203479995232__ -= 303;
    goto _1_OBF_FUNC_lab66;
  _1_OBF_FUNC_lab100:
    _induction5_4_2 = (unsigned int)(((unsigned long)_induction5_4_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab65;
  _1_OBF_FUNC_lab18:
    localStaticState[_induction5_4_2] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    goto _1_OBF_FUNC_lab103;
  _1_OBF_FUNC_lab105:
    _induction1_0_2 = (unsigned int)(((unsigned long)_induction1_0_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab107;
  _1_OBF_FUNC_lab164:
    __RANDVAR__8031520469538810918__ = -824 * __RANDVAR__8031520469538810918__;
    goto _1_OBF_FUNC_lab116;
  _1_OBF_FUNC_lab255:
    __RANDVAR__5504614195676730594__ = __RANDVAR__60741584203479995232__;
    goto _1_OBF_FUNC_lab186;
  _1_OBF_FUNC_lab127:
    __RANDVAR__8031520469538810918__ += 864;
    goto _1_OBF_FUNC_lab195;
  _1_OBF_FUNC_lab67:;
    if ((unsigned long)_index4_3 < 3UL) {
      goto _1_OBF_FUNC_lab10;
    } else {
      goto _1_OBF_FUNC_lab254;
    }
  _1_OBF_FUNC_lab2:
    __RANDVAR__29226577853266481396__ -= 10;
    goto _1_OBF_FUNC_lab167;
  _1_OBF_FUNC_lab73:
    __RANDVAR__88111602244818669202__ = __RANDVAR__60741584203479995232__;
    goto _1_OBF_FUNC_lab67;
  _1_OBF_FUNC_lab84:
    __RANDVAR__79046849700744148827__ = __RANDVAR__60741584203479995232__;
    goto _1_OBF_FUNC_lab122;
  _1_OBF_FUNC_lab149:
    __RANDVAR__5947330628796151522__ = __RANDVAR__42748445059285856887__;
    goto _1_OBF_FUNC_lab140;
  _1_OBF_FUNC_lab145:
    __RANDVAR__58725193425287744003__ = __RANDVAR__60741584203479995232__;
    goto _1_OBF_FUNC_lab160;
  _1_OBF_FUNC_lab199:
    __RANDVAR__60741584203479995232__ += 426;
    goto _1_OBF_FUNC_lab160;
  _1_OBF_FUNC_lab21:
    localStaticState[1UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[1UL];
    goto _1_OBF_FUNC_lab17;
  _1_OBF_FUNC_lab195:;
    if ((unsigned long)_index4_3 < 3UL) {
      goto _1_OBF_FUNC_lab247;
    } else {
      goto _1_OBF_FUNC_lab219;
    }
  _1_OBF_FUNC_lab236:
    __RANDVAR__95599697337627832246__ = 769968;
    goto _1_OBF_FUNC_lab251;
  _1_OBF_FUNC_lab254:;
    if (__RANDVAR__60741584203479995232__ < __RANDVAR__42748445059285856887__) {
      goto _1_OBF_FUNC_lab137;
    } else {
      goto _1_OBF_FUNC_lab104;
    }
  _1_OBF_FUNC_lab260:
    __RANDVAR__32746725975157387791__ = 415;
    goto _1_OBF_FUNC_lab93;
  _1_OBF_FUNC_lab201:
    __RANDVAR__55548608379091760618__ += __RANDVAR__60741584203479995232__;
    goto _1_OBF_FUNC_lab249;
  _1_OBF_FUNC_lab151:
    _index2_9 = (unsigned int)((unsigned long)_index2_9 + 2UL);
    goto _1_OBF_FUNC_lab225;
  _1_OBF_FUNC_lab158:;
    if (tmp___2 % 10 >= 5) {
      goto _1_OBF_FUNC_lab95;
    } else {
      goto _1_OBF_FUNC_lab30;
    }
  _1_OBF_FUNC_lab242:
    __RANDVAR__52150513885679027095__ = 673;
    goto _1_OBF_FUNC_lab151;
  _1_OBF_FUNC_lab72:;
    if (__RANDVAR__60741584203479995232__ < __RANDVAR__8031520469538810918__ * __RANDVAR__29226577853266481396__ - 279) {
      goto _1_OBF_FUNC_lab32;
    } else {
      goto _1_OBF_FUNC_lab207;
    }
  _1_OBF_FUNC_lab63:
    __RANDVAR__8031520469538810918__ += 510;
    goto _1_OBF_FUNC_lab47;
  _1_OBF_FUNC_lab52:
    __RANDVAR__8031520469538810918__ += 650;
    goto _1_OBF_FUNC_lab245;
  _1_OBF_FUNC_lab229:
    __RANDVAR__42748445059285856887__ += 352;
    goto _1_OBF_FUNC_lab192;
  _1_OBF_FUNC_lab211:
    __RANDVAR__60741584203479995232__++;
    goto _1_OBF_FUNC_lab6;
  _1_OBF_FUNC_lab49:
    __RANDVAR__52877684795876173310__ = 179;
    goto _1_OBF_FUNC_lab195;
  _1_OBF_FUNC_lab214:;
    if ((unsigned long)_index0_0 < 0UL) {
      goto _1_OBF_FUNC_lab43;
    } else {
      goto _1_OBF_FUNC_lab87;
    }
  _1_OBF_FUNC_lab156:;
    if (__RANDVAR__60741584203479995232__ < (__RANDVAR__60741584203479995232__ + __RANDVAR__60741584203479995232__) + 516) {
      goto _1_OBF_FUNC_lab169;
    } else {
      goto _1_OBF_FUNC_lab61;
    }
  _1_OBF_FUNC_lab101:;
    if (tmp % 10 >= 5) {
      goto _1_OBF_FUNC_lab40;
    } else {
      goto _1_OBF_FUNC_lab221;
    }
  _1_OBF_FUNC_lab62:
    __RANDVAR__64831518678489178964__ = __RANDVAR__60741584203479995232__;
    goto _1_OBF_FUNC_lab75;
  _1_OBF_FUNC_lab219:;
    if ((unsigned long)_index4_3 < 3UL) {
      goto _1_OBF_FUNC_lab113;
    } else {
      goto _1_OBF_FUNC_lab5;
    }
  _1_OBF_FUNC_lab235:
    __RANDVAR__60741584203479995232__ -= 282;
    goto _1_OBF_FUNC_lab238;
  _1_OBF_FUNC_lab70:
    __RANDVAR__29226577853266481396__ -= 207;
    goto _1_OBF_FUNC_lab167;
  _1_OBF_FUNC_lab208:
    __RANDVAR__37479632579831035260__ = __RANDVAR__60741584203479995232__;
    goto _1_OBF_FUNC_lab93;
  _1_OBF_FUNC_lab221:
    __RANDVAR__35241405615068754488__ = 747;
    goto _1_OBF_FUNC_lab45;
  _1_OBF_FUNC_lab232:
    _induction1_0_2 = 0U;
    goto _1_OBF_FUNC_lab164;
  _1_OBF_FUNC_lab258:
    __RANDVAR__60741584203479995232__ -= 58;
    goto _1_OBF_FUNC_lab156;
  _1_OBF_FUNC_lab228:;
    if (!((localStaticState[0UL] >> 4U) & 1U)) {
      goto _1_OBF_FUNC_lab21;
    } else {
      goto _1_OBF_FUNC_lab28;
    }
  _1_OBF_FUNC_lab126:
    __RANDVAR__8031520469538810918__ -= 650;
    goto _1_OBF_FUNC_lab52;
  _1_OBF_FUNC_lab220:
    _index0_0++;
    goto _1_OBF_FUNC_lab214;
  _1_OBF_FUNC_lab59:
    _index4_3++;
    goto _1_OBF_FUNC_lab219;
  _1_OBF_FUNC_lab139:
    __RANDVAR__29763906809319327731__ = 914;
    goto _1_OBF_FUNC_lab91;
  _1_OBF_FUNC_lab207:
    __RANDVAR__29226577853266481396__ += 10;
    goto _1_OBF_FUNC_lab2;
  _1_OBF_FUNC_lab17:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[0UL] - localStaticState[(unsigned long)_index2_9 % 2UL];
    goto _1_OBF_FUNC_lab28;
  _1_OBF_FUNC_lab157:
    __RANDVAR__8031520469538810918__ -= 458;
    goto _1_OBF_FUNC_lab16;
  _1_OBF_FUNC_lab32:
    __RANDVAR__29226577853266481396__ += 207;
    goto _1_OBF_FUNC_lab70;
  _1_OBF_FUNC_lab205:;
    if (tmp___0 % 10 >= 5) {
      goto _1_OBF_FUNC_lab162;
    } else {
      goto _1_OBF_FUNC_lab126;
    }
  _1_OBF_FUNC_lab35:;
    if (!((localStaticState[0UL] >> 4U) & 1U)) {
      goto _1_OBF_FUNC_lab62;
    } else {
      goto _1_OBF_FUNC_lab46;
    }
  _1_OBF_FUNC_lab252:
    __RANDVAR__60741584203479995232__ += 568;
    goto _1_OBF_FUNC_lab195;
  _1_OBF_FUNC_lab153:;
    if (!((localStaticState[0UL] >> 4U) & 1U)) {
      goto _1_OBF_FUNC_lab154;
    } else {
      goto _1_OBF_FUNC_lab92;
    }
  _1_OBF_FUNC_lab155:
    __RANDVAR__42748445059285856887__ -= 495;
    goto _1_OBF_FUNC_lab59;
  _1_OBF_FUNC_lab247:
    tmp___6 = rand();
    goto _1_OBF_FUNC_lab4;
  _1_OBF_FUNC_lab168:
    _index0_0++;
    goto _1_OBF_FUNC_lab160;
  _1_OBF_FUNC_lab253:;
    if (__RANDVAR__36117935578945731636__ < __RANDVAR__88377353497487231283__) {
      goto _1_OBF_FUNC_lab142;
    } else {
      goto _1_OBF_FUNC_lab255;
    }
  _1_OBF_FUNC_lab1:;
    if (tmp___5 % 10 >= 5) {
      goto _1_OBF_FUNC_lab254;
    } else {
      goto _1_OBF_FUNC_lab24;
    }
  _1_OBF_FUNC_lab95:
    __RANDVAR__29226577853266481396__ = __RANDVAR__42748445059285856887__;
    goto _1_OBF_FUNC_lab225;
  _1_OBF_FUNC_lab120:
    __RANDVAR__88377353497487231283__ = __RANDVAR__42748445059285856887__;
    goto _1_OBF_FUNC_lab60;
  _1_OBF_FUNC_lab244:
    _index4_3++;
    goto _1_OBF_FUNC_lab5;
  _1_OBF_FUNC_lab42:
    __RANDVAR__31184616379951158352__ = 860;
    goto _1_OBF_FUNC_lab244;
  _1_OBF_FUNC_lab192:
    __RANDVAR__42748445059285856887__ -= 352;
    goto _1_OBF_FUNC_lab195;
  _1_OBF_FUNC_lab15:;
    if (__RANDVAR__4790461565210995910__ < 439) {
      goto _1_OBF_FUNC_lab7;
    } else {
      goto _1_OBF_FUNC_lab260;
    }
  _1_OBF_FUNC_lab231:
    __RANDVAR__8031520469538810918__ -= 25;
    goto _1_OBF_FUNC_lab35;
  _1_OBF_FUNC_lab9:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab242;
  _1_OBF_FUNC_lab132:
    __RANDVAR__42748445059285856887__ -= 742;
    goto _1_OBF_FUNC_lab31;
  _1_OBF_FUNC_lab54:;
    if (__RANDVAR__60741584203479995232__ < 901) {
      goto _1_OBF_FUNC_lab23;
    } else {
      goto _1_OBF_FUNC_lab63;
    }
  _1_OBF_FUNC_lab80:
    __RANDVAR__41617778862803776002__ = __RANDVAR__60741584203479995232__ + (__RANDVAR__42748445059285856887__ + 863);
    goto _1_OBF_FUNC_lab123;
  _1_OBF_FUNC_lab249:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[0UL] - localStaticState[(unsigned long)_index2_9 % 2UL];
    goto _1_OBF_FUNC_lab72;
  _1_OBF_FUNC_lab97:
    localStaticState[_index0_0] = localStaticState[1UL] + localStaticState[0UL];
    goto _1_OBF_FUNC_lab109;
  _1_OBF_FUNC_lab111:;
    if (tmp___4 % 10 >= 5) {
      goto _1_OBF_FUNC_lab241;
    } else {
      goto _1_OBF_FUNC_lab27;
    }
  _1_OBF_FUNC_lab233:
    __RANDVAR__56607255466525641566__ += __RANDVAR__56607255466525641566__;
    goto _1_OBF_FUNC_lab125;
  _1_OBF_FUNC_lab163:
    __RANDVAR__29226577853266481396__ += 900;
    goto _1_OBF_FUNC_lab85;
  _1_OBF_FUNC_lab154:
    localStaticState[1UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[1UL];
    goto _1_OBF_FUNC_lab190;
  _1_OBF_FUNC_lab152:
    __RANDVAR__29226577853266481396__ -= 61;
    goto _1_OBF_FUNC_lab240;
  _1_OBF_FUNC_lab106:
    __RANDVAR__8031520469538810918__ += 755;
    goto _1_OBF_FUNC_lab160;
  _1_OBF_FUNC_lab28:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab124;
  _1_OBF_FUNC_lab148:
    __RANDVAR__81354712444520477708__ += 261;
    goto _1_OBF_FUNC_lab88;
  _1_OBF_FUNC_lab30:
    __RANDVAR__8031520469538810918__ += 25;
    goto _1_OBF_FUNC_lab231;
  _1_OBF_FUNC_lab212:;
    if (__RANDVAR__60741584203479995232__ < (__RANDVAR__83982222079286754025__ - __RANDVAR__60741584203479995232__) + (__RANDVAR__83982222079286754025__ + __RANDVAR__83982222079286754025__)) {
      goto _1_OBF_FUNC_lab223;
    } else {
      goto _1_OBF_FUNC_lab74;
    }
  _1_OBF_FUNC_lab90:
    __RANDVAR__55884391336903599784__ = 545;
    goto _1_OBF_FUNC_lab77;
  _1_OBF_FUNC_lab118:
    __RANDVAR__8031520469538810918__ -= 755;
    goto _1_OBF_FUNC_lab106;
  _1_OBF_FUNC_lab81:
    __RANDVAR__23280519072788231856__ = 747;
    goto _1_OBF_FUNC_lab202;
  _1_OBF_FUNC_lab60:
    tmp___3 = rand();
    goto _1_OBF_FUNC_lab25;
  _1_OBF_FUNC_lab186:
    localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] = localStaticState[0UL] - localStaticState[(unsigned long)_index2_9 % 2UL];
    goto _1_OBF_FUNC_lab92;
  _1_OBF_FUNC_lab33:
    _index2_9 = 0U;
    goto _1_OBF_FUNC_lab230;
  _1_OBF_FUNC_lab37:
    __RANDVAR__8031520469538810918__ += 61;
    goto _1_OBF_FUNC_lab131;
  _1_OBF_FUNC_lab162:;
    if ((unsigned long)_index0_0 < 0UL) {
      goto _1_OBF_FUNC_lab250;
    } else {
      goto _1_OBF_FUNC_lab214;
    }
  _1_OBF_FUNC_lab131:
    localStaticState[(unsigned long)((int)localStaticState[0UL]) % 2UL] *= localStaticState[1UL];
    goto _1_OBF_FUNC_lab246;
  _1_OBF_FUNC_lab46:
    _induction3_2_2 = (unsigned int)(((unsigned long)_induction3_2_2 + 1UL) % 2UL);
    goto _1_OBF_FUNC_lab173;
  _1_OBF_FUNC_lab58:
    __RANDVAR__42748445059285856887__ += 367;
    goto _1_OBF_FUNC_lab91;
  _1_OBF_FUNC_lab245:
    localStaticState[_index0_0] = localStaticState[1UL] + localStaticState[0UL];
    goto _1_OBF_FUNC_lab105;
  _1_OBF_FUNC_lab88:
    __RANDVAR__81354712444520477708__ -= 261;
    goto _1_OBF_FUNC_lab186;
  _1_OBF_FUNC_lab191:
    __RANDVAR__88377353497487231283__ -= 239;
    goto _1_OBF_FUNC_lab186;
  _1_OBF_FUNC_lab241:;
    if ((unsigned long)_index2_9 < 9UL) {
      goto _1_OBF_FUNC_lab228;
    } else {
      goto _1_OBF_FUNC_lab147;
    }
  _1_OBF_FUNC_lab250:
    tmp___1 = rand();
    goto _1_OBF_FUNC_lab44;
  _1_OBF_FUNC_lab47:
    __RANDVAR__8031520469538810918__ -= 510;
    goto _1_OBF_FUNC_lab160;
  _1_OBF_FUNC_lab172:;
    if ((unsigned long)_index2_9 < 9UL) {
      goto _1_OBF_FUNC_lab64;
    } else {
      goto _1_OBF_FUNC_lab95;
    }
  _1_OBF_FUNC_lab203:
    localStaticState[_induction5_4_2] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL];
    goto _1_OBF_FUNC_lab14;
  _1_OBF_FUNC_lab176:
    _induction5_4_2 = 0U;
    goto _1_OBF_FUNC_lab237;
  _1_OBF_FUNC_lab165:;
    if (__RANDVAR__85623698597509032015__ < __RANDVAR__60741584203479995232__) {
      goto _1_OBF_FUNC_lab188;
    } else {
      goto _1_OBF_FUNC_lab54;
    }
  _1_OBF_FUNC_lab137:
    __RANDVAR__8031520469538810918__ -= 864;
    goto _1_OBF_FUNC_lab127;
  _1_OBF_FUNC_lab43:
    localStaticState[_index0_0] = localStaticState[1UL] + localStaticState[0UL];
    goto _1_OBF_FUNC_lab234;
  _1_OBF_FUNC_lab104:;
    if (__RANDVAR__88111602244818669202__ < __RANDVAR__60741584203479995232__) {
      goto _1_OBF_FUNC_lab227;
    } else {
      goto _1_OBF_FUNC_lab90;
    }
  _1_OBF_FUNC_lab179:
    __RANDVAR__29226577853266481396__ += 305;
    goto _1_OBF_FUNC_lab115;
  _1_OBF_FUNC_lab140:;
    if (__RANDVAR__88111602244818669202__ < __RANDVAR__5947330628796151522__ * (__RANDVAR__88111602244818669202__ + 283)) {
      goto _1_OBF_FUNC_lab138;
    } else {
      goto _1_OBF_FUNC_lab42;
    }
  _1_OBF_FUNC_lab69:;
    if (__RANDVAR__82990725920570288223__ < 356) {
      goto _1_OBF_FUNC_lab139;
    } else {
      goto _1_OBF_FUNC_lab144;
    }
  _1_OBF_FUNC_lab123:
    localStaticState[1UL] = localStaticState[(unsigned long)((int)localStaticState[1UL]) % 2UL] + localStaticState[1UL];
    goto _1_OBF_FUNC_lab201;
  _1_OBF_FUNC_lab248:
    __RANDVAR__85623698597509032015__ = 135;
    goto _1_OBF_FUNC_lab165;
  _1_OBF_FUNC_lab50:
    __RANDVAR__75632417493315499390__ = (256 - __RANDVAR__75632417493315499390__) * __RANDVAR__60741584203479995232__;
    goto _1_OBF_FUNC_lab135;
  _1_OBF_FUNC_lab230:
    __RANDVAR__42748445059285856887__ = __RANDVAR__60741584203479995232__;
    goto _1_OBF_FUNC_lab172;
  _1_OBF_FUNC_lab82:
    __RANDVAR__893168347820407448__ = 865;
    goto _1_OBF_FUNC_lab19;
  _1_OBF_FUNC_lab134:
    __RANDVAR__60741584203479995232__ -= 568;
    goto _1_OBF_FUNC_lab252;
  _1_OBF_FUNC_lab85:
    __RANDVAR__29226577853266481396__ -= 900;
    goto _1_OBF_FUNC_lab203;
  _1_OBF_FUNC_lab91:;
    return ((localStaticState[0UL] + localStaticState[1UL]) + 70288U);
  _1_OBF_FUNC_lab243:;
    if (__RANDVAR__42748445059285856887__ < __RANDVAR__42748445059285856887__ * __RANDVAR__8031520469538810918__ + 719) {
      goto _1_OBF_FUNC_lab210;
    } else {
      goto _1_OBF_FUNC_lab179;
    }
  _1_OBF_FUNC_lab141:
    __RANDVAR__60741584203479995232__ -= 426;
    goto _1_OBF_FUNC_lab199;
  }
}
int main(int argc, char **argv, char **_formal_envp) {
  unsigned int a;
  int tmp;
  unsigned int tmp___0;
  int _BARRIER_0;
  {
    {
      {
        {
          { goto _global_envp_i$nit_INLINE__global_envp_i$nit; }
        _global_envp_i$nit_INLINE__global_envp_i$nit:;
        }
        {
          { goto _global_argv_i$nit_INLINE__global_argv_i$nit; }
        _global_argv_i$nit_INLINE__global_argv_i$nit:;
        }
        {
          { goto _global_argc_i$nit_INLINE__global_argc_i$nit; }
        _global_argc_i$nit_INLINE__global_argc_i$nit:;
        }
        goto megaInit_INLINE_megaInit;
      }
    megaInit_INLINE_megaInit:;
    }
    _global_argc = argc;
    _global_argv = argv;
    _global_envp = _formal_envp;
    _BARRIER_0 = 1;
    tmp = strtol(*(argv + 1), 0L, 10);
    a = (unsigned int)tmp;
    tmp___0 = OBF_FUNC(a);
    return ((int)tmp___0);
  }
}
// variants: loop-fission, irrelevant-code, flatten
// expanded variants: loop-fission, irrelevant-code, flatten:goto
