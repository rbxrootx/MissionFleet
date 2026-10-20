// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10015BF0 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_10015bf0_10015BF0() {
    __asm {
        mov edx, dword ptr [esp + 4]
        mov eax, dword ptr [ecx + 164h]
        cmp eax, edx
        ; Exact mapped bytes 7E 14: jle 0x10015c12
        __asm _emit 0x7e
        __asm _emit 0x14
        test edx, edx
        ; Exact mapped bytes 7C 10: jl 0x10015c12
        __asm _emit 0x7c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x10015c12
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [eax + edx*4]
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
