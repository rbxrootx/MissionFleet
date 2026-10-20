// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AFD50 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_587afd50() {
    __asm {
        mov edx, dword ptr [esp + 4]
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x587afd77
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [eax + 0ch]
        cmp byte ptr [ecx + 4], dl
        ; Exact mapped bytes 75 05: jne 0x587afd70
        __asm _emit 0x75
        __asm _emit 0x05
        cmp byte ptr [ecx + 5], bl
        ; Exact mapped bytes 74 28: je 0x587afd98
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [eax + 8]
        test eax, eax
        ; Exact mapped bytes 75 EC: jne 0x587afd63
        __asm _emit 0x75
        __asm _emit 0xec
        push esi
        push ebx
        push edx
        mov ecx, edi
        ; Exact mapped bytes E8 BF FC FF FF: call 0x587afa40
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 74 1A: je 0x587afda1
        __asm _emit 0x74
        __asm _emit 0x1a
        push esi
        lea ecx, [edi + 8]
        ; Exact mapped bytes E8 00 FE FF FF: call 0x587afb90
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        pop esi
        pop edi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, ecx
        mov eax, dword ptr [eax]
        pop edi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        pop esi
        pop edi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
