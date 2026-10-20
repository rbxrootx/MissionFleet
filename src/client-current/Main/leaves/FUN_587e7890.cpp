// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E7890 .. +0x6F bytes.
extern "C" __declspec(naked) void FUN_587e7890() {
    __asm {
        mov eax, dword ptr [esp + 4]
        cmp eax, 5
        ; Exact mapped bytes 77 61: ja 0x587e78fa
        __asm _emit 0x77
        __asm _emit 0x61
        ; Exact mapped bytes FF 24 85 00 79 7E 58: jmp dword ptr [eax*4 + 0x587e7900]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x79
        __asm _emit 0x7e
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 21c90h]
        xor eax, dword ptr [ecx + 21c78h]
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 21c94h]
        xor eax, dword ptr [ecx + 21c7ch]
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 21c98h]
        xor eax, dword ptr [ecx + 21c80h]
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 21c9ch]
        xor eax, dword ptr [ecx + 21c84h]
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 21ca0h]
        xor eax, dword ptr [ecx + 21c88h]
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 21ca4h]
        xor eax, dword ptr [ecx + 21c8ch]
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
