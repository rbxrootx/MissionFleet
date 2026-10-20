// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1005D850 .. +0x22F bytes.
extern "C" __declspec(naked) void FUN_1005d850_1005D850() {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        test byte ptr [edi + 24h], 1
        ; Exact mapped bytes 0F 84 18 02 00 00: je 0x1005da78
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [edi + 4ch]
        test esi, esi
        ; Exact mapped bytes 74 3F: je 0x1005d8a6
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ebx, dword ptr [esp + 1ch]
        mov ebp, dword ptr [esp + 18h]
        ; Exact mapped bytes 66 83 7E 26 00: cmp word ptr [esi + 0x26], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x26
        __asm _emit 0x00
        ; Exact mapped bytes 7D 17: jge 0x1005d88d
        __asm _emit 0x7d
        __asm _emit 0x17
        mov ecx, dword ptr [esp + 14h]
        mov eax, dword ptr [esi]
        push ebx
        push ebp
        push ecx
        mov ecx, esi
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        mov esi, dword ptr [esi + 48h]
        test esi, esi
        ; Exact mapped bytes 75 E4: jne 0x1005d86f
        __asm _emit 0x75
        __asm _emit 0xe4
        ; Exact mapped bytes EB 19: jmp 0x1005d8a6
        __asm _emit 0xeb
        __asm _emit 0x19
        test esi, esi
        ; Exact mapped bytes 74 15: je 0x1005d8a6
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [esp + 14h]
        mov edx, dword ptr [esi]
        push ebx
        push ebp
        push eax
        mov ecx, esi
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        mov esi, dword ptr [esi + 48h]
        test esi, esi
        ; Exact mapped bytes 75 EB: jne 0x1005d891
        __asm _emit 0x75
        __asm _emit 0xeb
        mov ecx, dword ptr [edi + 0d44h]
        xor edx, edx
        or eax, 0ffffffffh
        mov dl, byte ptr [ecx + 25h]
        and dl, 1fh
        cmp dl, 5
        ; Exact mapped bytes 74 06: je 0x1005d8c2
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [edi + 0ca8h], eax
        mov ecx, dword ptr [edi + 0d4ch]
        mov edx, dword ptr [ecx + 9ch]
        mov cl, byte ptr [edx + 24h]
        shr cl, 1
        test cl, 1
        ; Exact mapped bytes 0F 85 9C 01 00 00: jne 0x1005da78
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 0ca8h], eax
        ; Exact mapped bytes 0F 84 90 01 00 00: je 0x1005da78
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 14h]
        mov eax, dword ptr [ebx + 50h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x1005d8f8
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 4]
        ; Exact mapped bytes EB 02: jmp 0x1005d8fa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [eax]
        lea ecx, [esp + 14h]
        push ecx
        push eax
        ; Exact mapped bytes FF 52 44: call dword ptr [edx + 0x44]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x44
        test eax, eax
        ; Exact mapped bytes 0F 85 6B 01 00 00: jne 0x1005da78
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi + 594h]
        mov eax, dword ptr [esp + 14h]
        ; Exact mapped bytes 8B 35 4C 50 17 10: mov esi, dword ptr [0x1017504c]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x4c
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push edx
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov ecx, dword ptr [edi + 590h]
        mov edx, dword ptr [esp + 14h]
        push ecx
        push edx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [edi + 0ca8h]
        mov ecx, dword ptr [edi + eax*4 + 0c28h]
        cmp ecx, 3
        ; Exact mapped bytes 7D 59: jge 0x1005d99a
        __asm _emit 0x7d
        __asm _emit 0x59
        mov ecx, eax
        mov edx, eax
        shl ecx, 5
        add ecx, edi
        add eax, 5bh
        shl edx, 4
        mov esi, dword ptr [ecx + 7b4h]
        add edx, edi
        push esi
        mov esi, dword ptr [ecx + 7b0h]
        push esi
        mov esi, dword ptr [ecx + 7ach]
        mov ecx, dword ptr [ecx + 7a8h]
        push esi
        push ecx
        mov ecx, dword ptr [edx + 5b4h]
        shl eax, 4
        push ecx
        mov ecx, dword ptr [edx + 5ach]
        mov eax, dword ptr [eax + edi]
        mov edx, dword ptr [edx + 5a8h]
        push eax
        mov eax, dword ptr [esp + 2ch]
        push ecx
        push edx
        push eax
        ; Exact mapped bytes FF 15 44 50 17 10: call dword ptr [0x10175044]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E9 B5 00 00 00: jmp 0x1005da4f
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 AF 00 00 00: jne 0x1005da4f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        mov edx, eax
        shl ecx, 5
        add ecx, edi
        add eax, 5bh
        shl edx, 4
        mov esi, dword ptr [ecx + 7b4h]
        add edx, edi
        push esi
        mov esi, dword ptr [ecx + 7b0h]
        push esi
        mov esi, dword ptr [ecx + 7ach]
        mov ecx, dword ptr [ecx + 7a8h]
        push esi
        push ecx
        mov ecx, dword ptr [edx + 5b4h]
        shl eax, 4
        ; Exact mapped bytes 8B 35 44 50 17 10: mov esi, dword ptr [0x10175044]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x44
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push ecx
        mov eax, dword ptr [eax + edi]
        mov ecx, dword ptr [edx + 5ach]
        mov edx, dword ptr [edx + 5a8h]
        push eax
        mov eax, dword ptr [esp + 2ch]
        push ecx
        push edx
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [edi + 0ca8h]
        mov ecx, eax
        mov edx, eax
        shl ecx, 5
        add ecx, edi
        shl edx, 4
        mov ebp, dword ptr [ecx + 7c4h]
        add edx, edi
        push ebp
        lea ebp, [eax + 3eh]
        shl ebp, 5
        add eax, 5bh
        mov ebp, dword ptr [edi + ebp]
        push ebp
        mov ebp, dword ptr [ecx + 7bch]
        mov ecx, dword ptr [ecx + 7b8h]
        push ebp
        push ecx
        mov ecx, dword ptr [edx + 5b4h]
        shl eax, 4
        push ecx
        mov ecx, dword ptr [edx + 5ach]
        mov eax, dword ptr [eax + edi]
        mov edx, dword ptr [edx + 5a8h]
        push eax
        mov eax, dword ptr [esp + 2ch]
        push ecx
        push edx
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [ebx + 50h]
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x1005da6b
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [eax + 4]
        mov edx, dword ptr [esp + 14h]
        push edx
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 68: call dword ptr [ecx + 0x68]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x68
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [esp + 14h]
        xor eax, eax
        push edx
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 68: call dword ptr [ecx + 0x68]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x68
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
