// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042D5EF .. +0x16 bytes.
extern "C" __declspec(naked) void FUN_0042d5ef_0042D5EF() {
    __asm {
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x42d604
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B 31: mov esi, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x31
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 19 03 00 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 75 F1: jne 0x42d5f4
        __asm _emit 0x75
        __asm _emit 0xf1
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
