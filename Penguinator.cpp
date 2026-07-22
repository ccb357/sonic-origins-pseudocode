void FUN_14021deb0(void)

{
  undefined2 uVar1;
  char *pcVar2;
  
  FUN_140a55ef8(&DAT_144000180,0x40,"LSelect" + (ulonglong)*(ushort *)(DAT_143db5ce0 + 0x894) * 0x6c
               );
  FUN_140a55f58(&DAT_144000180,0x40,&DAT_140ab1ae0);
  FUN_140a55f58(&DAT_144000180,0x40,"PenPen");
  FUN_140a55f58(&DAT_144000180,0x40,&DAT_140ab1af0);
  pcVar2 = "3K_ICZ/PenPenG.bin";
  if ((*(byte *)(DAT_144000210 + 0x4c33f0) & 0x40) == 0) {
    pcVar2 = &DAT_144000180;
  }
  uVar1 = (**(code **)(DAT_142e70150 + 0x378))(pcVar2,2);
  DAT_143db6480[2] = uVar1;
  uVar1 = (**(code **)(DAT_142e70150 + 0x4c8))("3K_ICZ/SnowSlide.wav");
  DAT_143db6480[3] = uVar1;
  *(undefined4 *)(DAT_143db6480 + 4) = 0;
  if (((*(byte *)(DAT_144000210 + 0x4c33f0) & 0x40) == 0) && (DAT_143db66e8 == 0)) {
    return;
  }
  FUN_1401c6c70(*DAT_143db6480,FUN_14021dc90,FUN_14021dce0);
  FUN_1401fd460(*DAT_143db6480,1,1,1);
  return;
}