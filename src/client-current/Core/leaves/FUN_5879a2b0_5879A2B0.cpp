// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879A2B0 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_5879a2b0_5879A2B0() {
    __asm {
        mov eax, dword ptr [ecx + 8]
        and eax, 0ffh
        ; Exact mapped bytes 74 0D: je 0x5879a2c7
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp eax, 6
        ; Exact mapped bytes 74 08: je 0x5879a2c7
        __asm _emit 0x74
        __asm _emit 0x08
        cmp eax, 7
        ; Exact mapped bytes 74 03: je 0x5879a2c7
        __asm _emit 0x74
        __asm _emit 0x03
        xor al, al
        ret
        ; Exact mapped bytes E8 04 09 00 00: call 0x5879abd0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        sete al
        ret
    }
}
