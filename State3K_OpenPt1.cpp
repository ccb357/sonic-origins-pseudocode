/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14009e440(longlong param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  byte bVar10;
  ulonglong uVar11;
  bool bVar12;
  int iStackX_8;
  int iStackX_c;
  int iStackX_10;
  int iStackX_14;
  
  _DAT_142e8c1d0 = "State3K_OpenPt1";
  if (*(code **)(DAT_142e70150 + 0x608) != (code *)0x0) {
    (**(code **)(DAT_142e70150 + 0x608))(0x84,1,0);
  }
  *(undefined4 *)(param_1 + 0x80) = 1;
  FUN_1400ad920(param_1 + 0x60,FUN_14009efe0,0);
  iVar8 = *(int *)(param_1 + 0x70);
  uVar9 = 0;
  if (iVar8 == 1) {
    iVar8 = 8;
    uVar11 = uVar9;
    do {
      uVar4 = (**(code **)(DAT_142e70150 + 0x180))(0,0x30);
      iStackX_10 = *(int *)(param_1 + 8) + -0x180000 + (uVar4 & 0xfffffffc) * 0x10000;
      iStackX_14 = *(int *)(param_1 + 0xc) + 0x40000;
      iStackX_8 = *(int *)(DAT_143db5308 + (ulonglong)((uint)uVar9 & 1) * 2 + 4) + 1;
      lVar6 = (**(code **)(DAT_142e70150 + 0x70))(*DAT_143db5308,&iStackX_8,iStackX_10,iStackX_14 );
      FUN_1400ad920(lVar6 + 0x60,FUN_1401bec70,0);
      *(undefined4 *)(lVar6 + 0x78) = 4;
      *(int *)(lVar6 + 0x70) = iVar8;
      *(byte *)(lVar6 + 0x56) = ((byte)((int)uVar11 >> 1) ^ (byte)uVar11) & 1;
      *(char *)(lVar6 + 0x57) = *(char *)(DAT_143db5ce0 + 0x25e) + -1;
      (**(code **)(DAT_142e70150 + 0x388))
                (DAT_143db5308[2],*(short *)(lVar6 + 0x74) * 2,lVar6 + 0x80,1,0);
      *(undefined8 *)(lVar6 + 0x18) = 0;
      uVar3 = (**(code **)(DAT_142e70150 + 0x40))(param_1);
      uVar11 = (ulonglong)((int)uVar11 + 1);
      *(uint *)(lVar6 + 0x38) = (uint)uVar3;
      uVar9 = uVar9 + 1;
      iVar8 = iVar8 + 4;
      iVar5 = *(int *)(param_1 + 0xc);
      *(int *)(lVar6 + 0xa8) = *(int *)(lVar6 + 8) - *(int *)(param_1 + 8);
      *(int *)(lVar6 + 0xac) = *(int *)(lVar6 + 0xc) - iVar5;
      *(undefined1 *)(lVar6 + 0x57) = *(undefined1 *)(DAT_143db5ce0 + 0x25e);
    } while (iVar8 < 0x30);
  }
  else if (iVar8 == 2) {
    lVar6 = 0x24;
    do {
      iStackX_8 = *(int *)(lVar6 + DAT_143db5418);
      iStackX_14 = *(int *)(param_1 + 0xc);
      iStackX_10 = (*(uint *)(lVar6 + -0x18 + DAT_143db5418) & 0xfffffffc) * 0x10000 +
                   *(int *)(param_1 + 8);
      lVar7 = (**(code **)(DAT_142e70150 + 0x70))(*DAT_143db5308,&iStackX_8,iStackX_10,iStackX_14 );
      FUN_1400ad920(lVar7 + 0x60,&LAB_1401bee80,0);
      *(undefined4 *)(lVar7 + 0x78) = 0;
      *(undefined4 *)(lVar7 + 0x70) = *(undefined4 *)(lVar6 + 0x18 + DAT_143db5418);
      *(bool *)(lVar7 + 0x56) = (int)uVar9 < 3;
      (**(code **)(DAT_142e70150 + 0x388))
                (DAT_143db5308[2],*(short *)(lVar7 + 0x74) * 2 + 1,lVar7 + 0x80,1,0);
      *(char *)(lVar7 + 0x57) = *(char *)(DAT_143db5ce0 + 0x25e) + -1;
      FUN_1401bddc0(lVar7);
      uVar9 = (ulonglong)((int)uVar9 + 1);
      lVar6 = lVar6 + 4;
      *(undefined4 *)(lVar7 + 0x1c) =
           *(undefined4 *)(DAT_143db5308 + (longlong)*(int *)(param_1 + 0x70) * 2 + 0x3c);
    } while (lVar6 < 0x3c);
  }
  else if (iVar8 == 3) {
    iVar8 = 0x90;
    lVar6 = 6;
    do {
      uVar4 = (**(code **)(DAT_142e70150 + 0x180))(0,0x30);
      iStackX_8 = *(int *)(param_1 + 8) + -0x180000 + (uVar4 & 0xfffffffc) * 0x10000;
      iStackX_c = *(undefined4 *)(param_1 + 0xc);
      lVar7 = (**(code **)(DAT_142e70150 + 0x70))(*DAT_143db59b8,param_1 + 8,iStackX_8,iStackX_c) ;
      iVar5 = (**(code **)(DAT_142e70150 + 0x160))(iVar8);
      *(int *)(lVar7 + 0x18) = iVar5 << 9;
      iVar5 = (**(code **)(DAT_142e70150 + 0x158))(iVar8);
      *(int *)(lVar7 + 0x1c) = iVar5 << 9;
      *(undefined2 *)(lVar7 + 200) = 0x200;
      *(undefined1 *)(lVar7 + 0x59) = 0;
      *(undefined1 *)(lVar7 + 0x5c) = 2;
      *(undefined4 *)(lVar7 + 0x2c) = 0x100;
      FUN_1400ad920(lVar7 + 0x60,FUN_1401efcc0,0);
      FUN_1400ad920(lVar7 + 0x70,&LAB_1401ee350,0);
      bVar12 = iVar8 == 0xb0;
      iVar8 = iVar8 + 0x10;
      if (bVar12) {
        iVar8 = 0xd0;
      }
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  else if (iVar8 == 4) {
    iStackX_c = *(undefined4 *)(param_1 + 0xc);
    iStackX_8 = *(int *)(param_1 + 8) + -0x80000;
    lVar6 = (**(code **)(DAT_142e70150 + 0x70))(*DAT_143db2898,0,iStackX_8,iStackX_c);
    *(undefined4 *)(lVar6 + 0x18) = 0xfffd0000;
    *(undefined4 *)(lVar6 + 0x1c) = 0xfffc0000;
    *(undefined1 *)(lVar6 + 0x54) = 2;
    FUN_1400ad920(lVar6 + 0x60,FUN_1401234d0,0);
    iStackX_c = *(undefined4 *)(param_1 + 0xc);
    iStackX_8 = *(int *)(param_1 + 8) + 0x80000;
    lVar6 = (**(code **)(DAT_142e70150 + 0x70))(*DAT_143db2898,0,iStackX_8,iStackX_c);
    *(undefined4 *)(lVar6 + 0x18) = 0x30000;
    *(undefined4 *)(lVar6 + 0x1c) = 0xfffc0000;
    *(undefined1 *)(lVar6 + 0x54) = 2;
    *(undefined1 *)(lVar6 + 0x56) = 1;
    FUN_1400ad920(lVar6 + 0x60,FUN_1401234d0,0);
    iStackX_c = *(undefined4 *)(param_1 + 0xc);
    iStackX_8 = *(int *)(param_1 + 8) + -0x180000;
    lVar6 = (**(code **)(DAT_142e70150 + 0x70))(*DAT_143db2c60,0,iStackX_8,iStackX_c);
    *(undefined4 *)(lVar6 + 0x18) = 0xfffd0000;
    *(undefined4 *)(lVar6 + 0x1c) = 0xfffd0000;
    *(undefined1 *)(lVar6 + 0x54) = 2;
    FUN_1400ad920(lVar6 + 0x60,FUN_14012c620,0);
    iStackX_c = *(undefined4 *)(param_1 + 0xc);
    iStackX_8 = *(int *)(param_1 + 8) + 0x180000;
    lVar6 = (**(code **)(DAT_142e70150 + 0x70))(*DAT_143db2c60,0,iStackX_8,iStackX_c);
    *(undefined4 *)(lVar6 + 0x18) = 0x30000;
    *(undefined4 *)(lVar6 + 0x1c) = 0xfffd0000;
    *(undefined1 *)(lVar6 + 0x54) = 2;
    *(undefined1 *)(lVar6 + 0x56) = 1;
    FUN_1400ad920(lVar6 + 0x60,FUN_14012c620,0);
  }
  else if (iVar8 == 6) {
    do {
      lVar6 = (**(code **)(DAT_142e70150 + 0x70))
                        (*DAT_143db7c50,2,*(ulonglong *)(param_1 + 8) & 0xffffffff,
                         *(ulonglong *)(param_1 + 8) >> 0x20);
      puVar1 = DAT_143db7c50;
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + *(int *)((longlong)DAT_143db7c50 + uVar9 + 0x70 );
      *(int *)(lVar6 + 0xc) = *(int *)(lVar6 + 0xc) + *(int *)((longlong)puVar1 + uVar9 + 0x74);
      iVar8 = *(int *)(uVar9 + 0x68 + (longlong)DAT_143db7c50);
      *(int *)(lVar6 + 0x18) = iVar8;
      *(undefined4 *)(lVar6 + 0x88) = *(undefined4 *)(uVar9 + 0x6c + (longlong)DAT_143db7c50);
      bVar10 = *(byte *)(lVar6 + 0x56) | 1;
      if (iVar8 < 1) {
        bVar10 = *(byte *)(lVar6 + 0x56) & 0xfe;
      }
      uVar9 = uVar9 + 0x10;
      *(byte *)(lVar6 + 0x56) = bVar10;
    } while ((longlong)uVar9 < 0x60);
    uVar2 = (**(code **)(DAT_142e70150 + 0x40))(param_1);
    *(undefined2 *)(DAT_143db5c28 + 0x34) = uVar2;
    lVar6 = DAT_143db5c28;
    *(undefined4 *)(DAT_143db5c28 + 0x10) = 0x1400000;
    *(undefined4 *)(lVar6 + 0x14) = 0x3ac0000;
    lVar6 = (**(code **)(DAT_142e70150 + 0x38))(*(undefined2 *)(DAT_143db8908 + 0x1bc));
    *(undefined2 *)(lVar6 + 0x80) = 100;
  }
  else {
    iVar8 = 8;
    uVar11 = uVar9;
    do {
      uVar4 = (**(code **)(DAT_142e70150 + 0x180))(0,0x30);
      iStackX_10 = *(int *)(param_1 + 8) + -0x180000 + (uVar4 & 0xfffffffc) * 0x10000;
      iStackX_14 = *(int *)(param_1 + 0xc) + 0x40000;
      iStackX_8 = *(int *)(DAT_143db5308 + (ulonglong)((uint)uVar9 & 1) * 2 + 4) + 1;
      lVar6 = (**(code **)(DAT_142e70150 + 0x70))(*DAT_143db5308,&iStackX_8,iStackX_10,iStackX_14 );
      FUN_1400ad920(lVar6 + 0x60,FUN_1401bed50,0);
      iVar5 = (int)uVar11;
      *(int *)(lVar6 + 0x70) = iVar8;
      uVar9 = uVar9 + 1;
      bVar10 = (byte)uVar11;
      *(undefined4 *)(lVar6 + 0x78) = 1;
      uVar11 = (ulonglong)(iVar5 + 1);
      *(byte *)(lVar6 + 0x56) = ((byte)(iVar5 >> 1) ^ bVar10) & 1;
      iVar8 = iVar8 + 4;
      *(char *)(lVar6 + 0x57) = *(char *)(DAT_143db5ce0 + 0x25e) + -1;
    } while (iVar8 < 0x30);
  }
  iStackX_c = *(int *)(param_1 + 0xc) + -0x70000;
  iStackX_8 = *(int *)(param_1 + 8) + -0x1c0000;
  lVar6 = (**(code **)(DAT_142e70150 + 0x70))(*DAT_143db5470,2,iStackX_8,iStackX_c);
  (**(code **)(DAT_142e70150 + 0x388))(*(undefined2 *)(DAT_1428bdd28 + 4),2,lVar6 + 0x70,1,0);
  *(undefined4 *)(lVar6 + 0x18) = 0xfffd0000;
  *(undefined4 *)(lVar6 + 0x1c) = 0xffff0000;
  *(undefined4 *)(lVar6 + 0xf4) = 0x3800;
  *(undefined4 *)(lVar6 + 0xf8) = 1;
  *(undefined4 *)(lVar6 + 0x110) = 2;
  if (*(int *)(DAT_144000210 + 0x4c3404) == 3) {
    *(undefined1 *)(lVar6 + 0x100) = 0xfe;
  }
  *(undefined1 *)(lVar6 + 0x5b) = 2;
  *(undefined1 *)(lVar6 + 0x57) = *(undefined1 *)(DAT_143db5ce0 + 0x25f);
  *(undefined4 *)(lVar6 + 0x20) = 0x800000;
  *(undefined4 *)(lVar6 + 0x24) = 0x800000;
  iStackX_c = *(int *)(param_1 + 0xc) + -0x70000;
  iStackX_8 = *(int *)(param_1 + 8) + -0x120000;
  lVar6 = (**(code **)(DAT_142e70150 + 0x70))(*DAT_143db5470,2,iStackX_8,iStackX_c);
  (**(code **)(DAT_142e70150 + 0x388))(*(undefined2 *)(DAT_1428bdd28 + 4),2,lVar6 + 0x70,1,1);
  *(undefined4 *)(lVar6 + 0x18) = 0xfffe0000;
  *(undefined4 *)(lVar6 + 0x1c) = 0xfffe0000;
  *(undefined4 *)(lVar6 + 0xf4) = 0x3800;
  *(undefined4 *)(lVar6 + 0xf8) = 1;
  *(undefined4 *)(lVar6 + 0x110) = 2;
  if (*(int *)(DAT_144000210 + 0x4c3404) == 3) {
    *(undefined1 *)(lVar6 + 0x100) = 0xfc;
  }
  *(undefined1 *)(lVar6 + 0x5b) = 2;
  *(undefined1 *)(lVar6 + 0x57) = *(undefined1 *)(DAT_143db5ce0 + 0x25f);
  *(undefined4 *)(lVar6 + 0x20) = 0x800000;
  *(undefined4 *)(lVar6 + 0x24) = 0x800000;
  iStackX_8 = *(int *)(param_1 + 8);
  iStackX_c = *(int *)(param_1 + 0xc) + -0x70000;
  lVar6 = (**(code **)(DAT_142e70150 + 0x70))(*DAT_143db5470,2,iStackX_8,iStackX_c);
  (**(code **)(DAT_142e70150 + 0x388))(*(undefined2 *)(DAT_1428bdd28 + 4),2,lVar6 + 0x70,1,2);
  *(undefined4 *)(lVar6 + 0x18) = 0;
  *(undefined4 *)(lVar6 + 0x1c) = 0xfffd0000;
  *(undefined4 *)(lVar6 + 0xf4) = 0x3800;
  *(undefined4 *)(lVar6 + 0xf8) = 1;
  *(undefined4 *)(lVar6 + 0x110) = 2;
  if (*(int *)(DAT_144000210 + 0x4c3404) == 3) {
    *(undefined1 *)(lVar6 + 0x100) = 8;
  }
  *(undefined1 *)(lVar6 + 0x5b) = 2;
  *(undefined1 *)(lVar6 + 0x57) = *(undefined1 *)(DAT_143db5ce0 + 0x25f);
  *(undefined4 *)(lVar6 + 0x20) = 0x800000;
  *(undefined4 *)(lVar6 + 0x24) = 0x800000;
  iStackX_c = *(int *)(param_1 + 0xc) + -0x70000;
  iStackX_8 = *(int *)(param_1 + 8) + 0x120000;
  lVar6 = (**(code **)(DAT_142e70150 + 0x70))(*DAT_143db5470,2,iStackX_8,iStackX_c);
  (**(code **)(DAT_142e70150 + 0x388))(*(undefined2 *)(DAT_1428bdd28 + 4),2,lVar6 + 0x70,1,3);
  *(undefined4 *)(lVar6 + 0x18) = 0x20000;
  *(undefined4 *)(lVar6 + 0x1c) = 0xfffe0000;
  *(undefined4 *)(lVar6 + 0xf4) = 0x3800;
  *(undefined4 *)(lVar6 + 0xf8) = 1;
  *(undefined4 *)(lVar6 + 0x110) = 2;
  if (*(int *)(DAT_144000210 + 0x4c3404) == 3) {
    *(undefined1 *)(lVar6 + 0x100) = 4;
  }
  *(undefined1 *)(lVar6 + 0x5b) = 2;
  *(undefined1 *)(lVar6 + 0x57) = *(undefined1 *)(DAT_143db5ce0 + 0x25f);
  *(undefined4 *)(lVar6 + 0x20) = 0x800000;
  *(undefined4 *)(lVar6 + 0x24) = 0x800000;
  iStackX_c = *(int *)(param_1 + 0xc) + -0x70000;
  iStackX_8 = *(int *)(param_1 + 8) + 0x1c0000;
  lVar6 = (**(code **)(DAT_142e70150 + 0x70))(*DAT_143db5470,2,iStackX_8,iStackX_c);
  (**(code **)(DAT_142e70150 + 0x388))(*(undefined2 *)(DAT_1428bdd28 + 4),2,lVar6 + 0x70,1,4);
  *(undefined4 *)(lVar6 + 0x18) = 0x30000;
  *(undefined4 *)(lVar6 + 0x1c) = 0xffff0000;
  *(undefined4 *)(lVar6 + 0xf4) = 0x3800;
  *(undefined4 *)(lVar6 + 0xf8) = 1;
  *(undefined4 *)(lVar6 + 0x110) = 2;
  if (*(int *)(DAT_144000210 + 0x4c3404) == 3) {
    *(undefined1 *)(lVar6 + 0x100) = 2;
  }
  *(undefined1 *)(lVar6 + 0x5b) = 2;
  *(undefined1 *)(lVar6 + 0x57) = *(undefined1 *)(DAT_143db5ce0 + 0x25f);
  *(undefined4 *)(lVar6 + 0x20) = 0x800000;
  *(undefined4 *)(lVar6 + 0x24) = 0x800000;
  *(undefined1 *)(DAT_1428bdd28 + 10) = 2;
  return;
}