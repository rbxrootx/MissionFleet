// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588CFA20 .. +0x14A bytes.
extern "C" __declspec(naked) void FUN_588cfa20() {
    __asm {
        push ebx
        push esi
        push edi
        mov esi, ecx
        mov eax, dword ptr [esi + 50h]
        push 0c4h
        push 0
        push eax
        ; Exact mapped bytes E8 13 D2 0A 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xd2
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 54h]
        push 50h
        push 0
        push ecx
        ; Exact mapped bytes E8 06 D2 0A 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xd2
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [esi + 54h]
        mov ebx, 1
        mov dword ptr [edx + 10h], ebx
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 0ch], ebx
        mov ecx, dword ptr [esi + 54h]
        mov dword ptr [ecx + 14h], ebx
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 18h], ebx
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 4], ebx
        mov ecx, dword ptr [esi + 54h]
        mov dword ptr [ecx + 28h], ebx
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 24h], ebx
        mov ecx, dword ptr [esi + 54h]
        mov eax, 2
        mov dword ptr [ecx + 30h], eax
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 34h], eax
        mov ecx, dword ptr [esi + 54h]
        mov dword ptr [ecx + 38h], 80h
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 3ch], eax
        mov eax, dword ptr [esi + 54h]
        mov ecx, 7dh
        mov dword ptr [eax + 40h], ecx
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 44h], ebx
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 48h], ecx
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 4ch], ebx
        mov eax, dword ptr [esi + 50h]
        xor edx, edx
        ; Exact mapped bytes 66 89 90 84 00 00 00: mov word ptr [eax + 0x84], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 50h]
        ; Exact mapped bytes 66 89 50 36: mov word ptr [eax + 0x36], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x36
        mov eax, dword ptr [esi + 50h]
        mov dl, byte ptr [eax + 32h]
        and dl, 0f2h
        or dl, 2
        mov byte ptr [eax + 32h], dl
        mov eax, dword ptr [esi + 50h]
        and byte ptr [eax + 31h], 80h
        mov eax, dword ptr [esi + 50h]
        mov byte ptr [eax + 47h], cl
        mov ecx, dword ptr [esi + 50h]
        mov byte ptr [ecx + 46h], bl
        mov eax, dword ptr [esi + 50h]
        and dword ptr [eax + 3ch], 0fffffffdh
        mov eax, dword ptr [esi + 50h]
        and dword ptr [eax + 3ch], 0fffffffeh
        mov eax, dword ptr [esi + 50h]
        or dword ptr [eax + 3ch], 4
        mov eax, dword ptr [esi + 50h]
        add esp, 18h
        cmp dword ptr [esp + 10h], 0
        ; Exact mapped bytes 74 06: je 0x588cfb0c
        __asm _emit 0x74
        __asm _emit 0x06
        and dword ptr [eax + 3ch], 0fffffff7h
        ; Exact mapped bytes EB 04: jmp 0x588cfb10
        __asm _emit 0xeb
        __asm _emit 0x04
        or dword ptr [eax + 3ch], 8
        push 5899a460h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 50h]
        add esp, 4
        mov edi, 30h
        lea edx, [edi + 7fffffceh]
        test edx, edx
        ; Exact mapped bytes 74 23: je 0x588cfb53
        __asm _emit 0x74
        __asm _emit 0x23
        mov dl, byte ptr [eax]
        test dl, dl
        ; Exact mapped bytes 74 1D: je 0x588cfb53
        __asm _emit 0x74
        __asm _emit 0x1d
        mov byte ptr [ecx], dl
        add ecx, ebx
        add eax, ebx
        sub edi, ebx
        ; Exact mapped bytes 75 E6: jne 0x588cfb26
        __asm _emit 0x75
        __asm _emit 0xe6
        sub ecx, ebx
        mov byte ptr [ecx], 0
        mov ecx, dword ptr [esi + 70h]
        ; Exact mapped bytes E8 D3 78 FC FF: call 0x58897420
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x78
        __asm _emit 0xfc
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 75 02: jne 0x588cfb59
        __asm _emit 0x75
        __asm _emit 0x02
        sub ecx, ebx
        mov byte ptr [ecx], 0
        mov ecx, dword ptr [esi + 70h]
        ; Exact mapped bytes E8 BC 78 FC FF: call 0x58897420
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x78
        __asm _emit 0xfc
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
