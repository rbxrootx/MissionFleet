// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58481220 .. +0x1C bytes.
extern "C" __declspec(naked) void FUN_58481220() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes B9 80 5F 96 58: mov ecx, 0x58965f80
        __asm _emit 0xb9
        __asm _emit 0x80
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A3 62 00 00: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 E0 2F 89 58: push 0x58892fe0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0x2f
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes E8 B2 07 3B 00: call 0x588319e9
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x07
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
