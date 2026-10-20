// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58989586 .. +0x18 bytes.
extern "C" __declspec(naked) void Unwind_58989586() {
    __asm {
        ; Exact mapped bytes 68 30 74 8D 58: push 0x588d7430
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x74
        __asm _emit 0x8d
        __asm _emit 0x58
        ; Exact mapped bytes 6A 08: push 8
        __asm _emit 0x6a
        __asm _emit 0x08
        ; Exact mapped bytes 6A 10: push 0x10
        __asm _emit 0x6a
        __asm _emit 0x10
        ; Exact mapped bytes 8B 45 EC: mov eax, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 05 8C 13 00 00: add eax, 0x138c
        __asm _emit 0x05
        __asm _emit 0x8c
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 BE 3A FF FF: call 0x5897d05b
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
