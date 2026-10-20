// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E77F0 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_587e77f0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        cmp eax, 5
        ; Exact mapped bytes 77 76: ja 0x587e786f
        __asm _emit 0x77
        __asm _emit 0x76
        ; Exact mapped bytes FF 24 85 74 78 7E 58: jmp dword ptr [eax*4 + 0x587e7874]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0x78
        __asm _emit 0x7e
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 21c90h]
        xor eax, dword ptr [esp + 8]
        mov dword ptr [ecx + 21c78h], eax
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 21c94h]
        xor edx, dword ptr [esp + 8]
        mov dword ptr [ecx + 21c7ch], edx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 21c98h]
        xor eax, dword ptr [esp + 8]
        mov dword ptr [ecx + 21c80h], eax
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 21c9ch]
        xor edx, dword ptr [esp + 8]
        mov dword ptr [ecx + 21c84h], edx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 21ca0h]
        xor eax, dword ptr [esp + 8]
        mov dword ptr [ecx + 21c88h], eax
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 21ca4h]
        xor edx, dword ptr [esp + 8]
        mov dword ptr [ecx + 21c8ch], edx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
