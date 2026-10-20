// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58481000 .. +0x1C bytes.
extern "C" __declspec(naked) void FUN_58481000() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes B9 F0 BE 90 58: mov ecx, 0x5890bef0
        __asm _emit 0xb9
        __asm _emit 0xf0
        __asm _emit 0xbe
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes E8 33 63 04 00: call 0x584c7340
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x63
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 68 30 2E 89 58: push 0x58892e30
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x2e
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes E8 D2 09 3B 00: call 0x588319e9
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x09
        __asm _emit 0x3b
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
