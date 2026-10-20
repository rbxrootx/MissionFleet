// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437013 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_00437013_00437013() {
    __asm {
        ; Exact mapped bytes 83 3D 70 FB 44 00 00: cmp dword ptr [0x44fb70], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x70
        __asm _emit 0xfb
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 15: jne 0x437031
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [esp + 4]
        lea eax, [eax + eax*2]
        lea eax, [eax*8 + 44f9d8h]
        push eax
        ; Exact mapped bytes FF 15 B0 C1 43 00: call dword ptr [0x43c1b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
