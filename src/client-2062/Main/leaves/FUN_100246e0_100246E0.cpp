// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100246E0 .. +0x174 bytes.
extern "C" __declspec(naked) void FUN_100246e0_100246E0() {
    __asm {
        sub esp, 8
        mov ecx, dword ptr [esp + 0ch]
        push ebx
        push ebp
        push esi
        xor esi, esi
        push edi
        push esi
        lea eax, [esp + 18h]
        push esi
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D E0 58 1C 10: mov ecx, dword ptr [0x101c58e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [esp + 20h], esi
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes E8 78 1B FF FF: call 0x10016280
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x1b
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, eax
        cmp edx, esi
        mov dword ptr [esp + 1ch], edx
        ; Exact mapped bytes 0F 84 08 01 00 00: je 0x1002481e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 28h]
        mov ecx, 30h
        mov esi, edx
        mov edi, ebp
        mov ebx, 1
        xor eax, eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        xor ecx, ecx
        mov esi, dword ptr [esp + 10h]
        mov cl, byte ptr [eax + ebp]
        imul ecx, ebx
        add esi, ecx
        inc ebx
        inc eax
        mov dword ptr [esp + 10h], esi
        cmp eax, 0c0h
        ; Exact mapped bytes 72 E5: jb 0x1002472c
        __asm _emit 0x72
        __asm _emit 0xe5
        mov ebp, dword ptr [esp + 30h]
        mov esi, dword ptr [edx + 0c0h]
        xor eax, eax
        mov dword ptr [ebp], esi
        xor edx, edx
        mov ecx, dword ptr [esp + 10h]
        mov dl, byte ptr [eax + ebp]
        imul edx, ebx
        add ecx, edx
        inc ebx
        inc eax
        mov dword ptr [esp + 10h], ecx
        cmp eax, 4
        ; Exact mapped bytes 72 E7: jb 0x10024756
        __asm _emit 0x72
        __asm _emit 0xe7
        test esi, esi
        ; Exact mapped bytes 0F 8E 99 00 00 00: jle 0x10024810
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esp + 2ch]
        mov eax, dword ptr [esi]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x1002478a
        __asm _emit 0x74
        __asm _emit 0x09
        push eax
        ; Exact mapped bytes E8 FD 7F 14 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x7f
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp]
        mov edi, dword ptr [esp + 34h]
        imul eax, edi
        push eax
        ; Exact mapped bytes E8 06 80 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x80
        __asm _emit 0x14
        __asm _emit 0x00
        mov dword ptr [esi], eax
        mov ecx, dword ptr [ebp]
        mov edx, dword ptr [esp + 18h]
        imul ecx, edi
        add edx, 0ffffff3ch
        add esp, 4
        cmp edx, ecx
        ; Exact mapped bytes 74 0A: je 0x100247bd
        __asm _emit 0x74
        __asm _emit 0x0a
        push -1
        ; Exact mapped bytes FF 15 90 51 17 10: call dword ptr [0x10175190]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes EB 1E: jmp 0x100247db
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov edx, dword ptr [esp + 1ch]
        mov edi, eax
        mov eax, ecx
        lea esi, [edx + 0c4h]
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, eax
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        mov esi, dword ptr [esp + 2ch]
        mov eax, dword ptr [ebp]
        mov edi, dword ptr [esi]
        imul eax, dword ptr [esp + 34h]
        xor esi, esi
        test eax, eax
        ; Exact mapped bytes 7E 18: jle 0x10024803
        __asm _emit 0x7e
        __asm _emit 0x18
        xor ecx, ecx
        mov edx, dword ptr [esp + 10h]
        mov cl, byte ptr [esi + edi]
        imul ecx, ebx
        add edx, ecx
        inc ebx
        inc esi
        mov dword ptr [esp + 10h], edx
        cmp esi, eax
        ; Exact mapped bytes 7C E8: jl 0x100247eb
        __asm _emit 0x7c
        __asm _emit 0xe8
        mov edx, dword ptr [esp + 1ch]
        push edx
        ; Exact mapped bytes E8 77 7F 14 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x7f
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [esp + 10h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
        ; Exact mapped bytes A1 DC 92 1C 10: mov eax, dword ptr [0x101c92dc]
        __asm _emit 0xa1
        __asm _emit 0xdc
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push 1017f3bch
        push 1018147ch
        push eax
        ; Exact mapped bytes FF 15 8C 51 17 10: call dword ptr [0x1017518c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 30 79 14 00: call 0x1016c170
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x79
        __asm _emit 0x14
        __asm _emit 0x00
        push -1
        ; Exact mapped bytes FF 15 90 51 17 10: call dword ptr [0x10175190]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
