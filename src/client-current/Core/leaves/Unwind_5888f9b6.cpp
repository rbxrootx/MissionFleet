// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888F9B6 .. +0x18 bytes.
extern "C" __declspec(naked) void Unwind_5888f9b6() {
    __asm {
        ; Exact mapped bytes 68 D0 C4 75 58: push 0x5875c4d0
        __asm _emit 0x68
        __asm _emit 0xd0
        __asm _emit 0xc4
        __asm _emit 0x75
        __asm _emit 0x58
        ; Exact mapped bytes 6A 08: push 8
        __asm _emit 0x6a
        __asm _emit 0x08
        ; Exact mapped bytes 6A 10: push 0x10
        __asm _emit 0x6a
        __asm _emit 0x10
        ; Exact mapped bytes 8B 45 BC: mov eax, dword ptr [ebp - 0x44]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xbc
        ; Exact mapped bytes 05 F4 11 00 00: add eax, 0x11f4
        __asm _emit 0x05
        __asm _emit 0xf4
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 2C 23 FA FF: call 0x58831cf9
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x23
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
