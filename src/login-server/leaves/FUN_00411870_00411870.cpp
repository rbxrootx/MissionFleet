// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00411870 .. +0x15 bytes.
extern "C" __declspec(naked) void FUN_00411870_00411870() {
    __asm {
        ; Exact mapped bytes C7 01 7C D4 43 00: mov dword ptr [ecx], 0x43d47c
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x7c
        __asm _emit 0xd4
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 8B 49 0C: mov ecx, dword ptr [ecx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x0c
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 07: je 0x411884
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 92 C0 01 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
