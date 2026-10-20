// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58B1EF4F .. +0x1C bytes.
extern "C" __declspec(naked) void FUN_58b1ef4f() {
    __asm {
        ; Exact mapped bytes C7 45 08 00 00 00 00: mov dword ptr [ebp + 8], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F6 C7 CC: test bh, 0xcc
        __asm _emit 0xf6
        __asm _emit 0xc7
        __asm _emit 0xcc
        ; Exact mapped bytes 89 55 F4: mov dword ptr [ebp - 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf4
        ; Exact mapped bytes 3B DC: cmp ebx, esp
        __asm _emit 0x3b
        __asm _emit 0xdc
        ; Exact mapped bytes 66 81 FE 7D 38: cmp si, 0x387d
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0x7d
        __asm _emit 0x38
        ; Exact mapped bytes F9: stc
        __asm _emit 0xf9
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes E9 D2 1D 04 00: jmp 0x58b60d3d
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x1d
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
