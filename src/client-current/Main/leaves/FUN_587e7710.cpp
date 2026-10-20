// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E7710 .. +0xC2 bytes.
extern "C" __declspec(naked) void FUN_587e7710() {
    __asm {
        mov eax, dword ptr [esp + 4]
        cmp eax, 5
        ; Exact mapped bytes 0F 87 B2 00 00 00: ja 0x587e77cf
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 D4 77 7E 58: jmp dword ptr [eax*4 + 0x587e77d4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x77
        __asm _emit 0x7e
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 21c90h]
        mov edx, dword ptr [ecx + 21c78h]
        xor edx, eax
        sub edx, dword ptr [esp + 8]
        xor edx, eax
        mov dword ptr [ecx + 21c78h], edx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 21c94h]
        mov edx, dword ptr [ecx + 21c7ch]
        xor edx, eax
        sub edx, dword ptr [esp + 8]
        xor edx, eax
        mov dword ptr [ecx + 21c7ch], edx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 21c98h]
        mov edx, dword ptr [ecx + 21c80h]
        xor edx, eax
        add edx, dword ptr [esp + 8]
        xor edx, eax
        mov dword ptr [ecx + 21c80h], edx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 21c9ch]
        mov edx, dword ptr [ecx + 21c84h]
        xor edx, eax
        add edx, dword ptr [esp + 8]
        xor edx, eax
        mov dword ptr [ecx + 21c84h], edx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 21ca0h]
        mov edx, dword ptr [ecx + 21c88h]
        xor edx, eax
        add edx, dword ptr [esp + 8]
        xor edx, eax
        mov dword ptr [ecx + 21c88h], edx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 21ca4h]
        mov edx, dword ptr [ecx + 21c8ch]
        xor edx, eax
        add edx, dword ptr [esp + 8]
        xor edx, eax
        mov dword ptr [ecx + 21c8ch], edx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
