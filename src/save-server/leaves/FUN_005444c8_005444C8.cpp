// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005444C8 .. +0x18 bytes.
extern "C" __declspec(naked) void FUN_005444c8_005444C8() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 83 7D 14 00: cmp dword ptr [ebp + 0x14], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x14
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x5444da
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 8B 45 14: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x14
        ; Exact mapped bytes C7 00 01 00 00 00: mov dword ptr [eax], 1
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
