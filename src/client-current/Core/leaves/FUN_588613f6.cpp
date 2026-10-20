// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588613F6 .. +0x1C bytes.
extern "C" __declspec(naked) void FUN_588613f6() {
    __asm {
        ; Exact mapped bytes 83 79 08 00: cmp dword ptr [ecx + 8], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 75 13: jne 0x5886140f
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes E8 6E 10 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 00 16 00 00 00: mov dword ptr [eax], 0x16
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 9F FB FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xfb
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 32 C0: xor al, al
        __asm _emit 0x32
        __asm _emit 0xc0
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes B0 01: mov al, 1
        __asm _emit 0xb0
        __asm _emit 0x01
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
