// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004ED20 .. +0xA1 bytes.
extern "C" __declspec(naked) void FUN_1004ed20_1004ED20() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov eax, dword ptr [esi + 8]
        push 14h
        cmp eax, edi
        ; Exact mapped bytes 75 48: jne 0x1004ed77
        __asm _emit 0x75
        __asm _emit 0x48
        ; Exact mapped bytes E8 6C DA 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xda
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        cmp eax, edi
        ; Exact mapped bytes 74 28: je 0x1004ed63
        __asm _emit 0x74
        __asm _emit 0x28
        mov ecx, dword ptr [esp + 0ch]
        mov dword ptr [eax], 10175b9ch
        mov dword ptr [eax + 10h], edi
        mov dword ptr [eax + 0ch], ecx
        mov dword ptr [eax + 8], edi
        mov dword ptr [eax + 4], edi
        mov dword ptr [esi + 8], eax
        mov dword ptr [esi + 4], eax
        mov eax, dword ptr [esi + 0ch]
        pop edi
        inc eax
        mov dword ptr [esi + 0ch], eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor eax, eax
        pop edi
        mov dword ptr [esi + 8], eax
        mov dword ptr [esi + 4], eax
        mov eax, dword ptr [esi + 0ch]
        inc eax
        mov dword ptr [esi + 0ch], eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E8 24 DA 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xda
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        cmp eax, edi
        ; Exact mapped bytes 74 18: je 0x1004ed9b
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [esp + 0ch]
        mov dword ptr [eax], 10175b9ch
        mov dword ptr [eax + 10h], edi
        mov dword ptr [eax + 0ch], edx
        mov dword ptr [eax + 8], edi
        mov dword ptr [eax + 4], edi
        ; Exact mapped bytes EB 02: jmp 0x1004ed9d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 8]
        pop edi
        mov dword ptr [ecx + 8], eax
        mov eax, dword ptr [esi + 8]
        mov edx, dword ptr [eax + 8]
        mov dword ptr [edx + 4], eax
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [eax + 8]
        mov eax, dword ptr [esi + 0ch]
        inc eax
        mov dword ptr [esi + 8], ecx
        mov dword ptr [esi + 0ch], eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
