// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B0BF0 .. +0x12 bytes.
extern "C" __declspec(naked) void FUN_587b0bf0() {
    __asm {
        ; Exact mapped bytes 8B 89 68 01 00 00: mov ecx, dword ptr [ecx + 0x168]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 05: je 0x587b0bff
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 C1 87 FD FF: jmp 0x587893c0
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x87
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
