void FUN_14009efe0(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  
  _DAT_142e8c1d0 = "State3K_OpenPt2";
  iVar6 = *(int *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0xa8) = 1;
  if (iVar6 == (iVar6 / 3 + (iVar6 >> 0x1f) +
               (int)(((longlong)iVar6 / 3 + ((longlong)iVar6 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 3)
  {
    uVar1 = (**(code **)(DAT_142e70150 + 0x180))(0,0x100);
    iVar2 = (**(code **)(DAT_142e70150 + 0x180))(0xffffffe8,0x18);
    iVar6 = *(int *)(param_1 + 0xc);
    iVar3 = (**(code **)(DAT_142e70150 + 0x180))(0xffffffe8,0x18);
    uVar5 = 3;
    if (uVar1 < 0xc1) {
      uVar5 = 1;
    }
    lVar4 = (**(code **)(DAT_142e70150 + 0x70))
                      (*DAT_143db55d0,uVar5,*(int *)(param_1 + 8) + iVar3 * 0x10000,
                       iVar6 + iVar2 * 0x10000);
    *(undefined1 *)(lVar4 + 0x57) = *(undefined1 *)(DAT_143db5ce0 + 0x25f);
    (**(code **)(DAT_142e70150 + 0x4d0))(*(undefined2 *)(DAT_1428bdd28 + 6),0,0xff);
    iVar6 = *(int *)(param_1 + 0x74);
  }
  *(int *)(param_1 + 0x74) = iVar6 + 1;
  if (iVar6 + 1 == 0x14) {
    *(undefined4 *)(param_1 + 0x74) = 0;
    if (*(int *)(param_1 + 0x70) < 2) {
      FUN_1400ad920(param_1 + 0x60,&LAB_14009f990,0);
      return;
    }
    FUN_1400ad920(param_1 + 0x60,0,0);
    return;
  }
  return;
}
