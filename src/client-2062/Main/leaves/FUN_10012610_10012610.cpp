// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10012610 .. +0x1F7 bytes.
extern "C" __declspec(naked) void FUN_10012610_10012610() {
    __asm {
        push -1
        push 1016d276h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 8
        mov al, byte ptr [esp + 18h]
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        xor esi, esi
        push edi
        mov dword ptr [esp + 14h], ebx
        mov byte ptr [ebx + 4], al
        mov dword ptr [ebx + 8], esi
        mov dword ptr [ebx + 0ch], esi
        mov dword ptr [ebx + 10h], esi
        mov cl, byte ptr [esp + 28h]
        mov dword ptr [esp + 20h], esi
        mov byte ptr [ebx + 14h], cl
        mov dword ptr [ebx + 18h], esi
        mov dword ptr [ebx + 1ch], esi
        mov dword ptr [ebx + 20h], esi
        mov dword ptr [ebx], 101753ach
        mov eax, dword ptr [ebx + 8]
        cmp eax, esi
        mov byte ptr [esp + 20h], 1
        ; Exact mapped bytes 75 04: jne 0x1001266e
        __asm _emit 0x75
        __asm _emit 0x04
        xor edx, edx
        ; Exact mapped bytes EB 16: jmp 0x10012684
        __asm _emit 0xeb
        __asm _emit 0x16
        mov ecx, dword ptr [ebx + 10h]
        sub ecx, eax
        mov eax, 38e38e39h
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov edi, dword ptr [esp + 28h]
        cmp edx, edi
        ; Exact mapped bytes 0F 83 92 00 00 00: jae 0x10012722
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, esi
        mov eax, edi
        ; Exact mapped bytes 7D 02: jge 0x10012698
        __asm _emit 0x7d
        __asm _emit 0x02
        xor eax, eax
        lea ecx, [eax + eax*8]
        shl ecx, 3
        push ecx
        ; Exact mapped bytes E8 FC A0 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xa0
        __asm _emit 0x15
        __asm _emit 0x00
        mov ebp, dword ptr [ebx + 0ch]
        mov esi, eax
        mov eax, dword ptr [ebx + 8]
        add esp, 4
        cmp eax, ebp
        mov dword ptr [esp + 10h], esi
        mov edx, esi
        ; Exact mapped bytes 74 21: je 0x100126da
        __asm _emit 0x74
        __asm _emit 0x21
        test edx, edx
        ; Exact mapped bytes 74 13: je 0x100126d0
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, 12h
        mov esi, eax
        mov edi, edx
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov esi, dword ptr [esp + 10h]
        mov edi, dword ptr [esp + 28h]
        add eax, 48h
        add edx, 48h
        cmp eax, ebp
        ; Exact mapped bytes 75 DF: jne 0x100126b9
        __asm _emit 0x75
        __asm _emit 0xdf
        mov eax, dword ptr [ebx + 8]
        push eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes E8 9D A0 15 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xa0
        __asm _emit 0x15
        __asm _emit 0x00
        lea edx, [edi + edi*8]
        add esp, 4
        lea eax, [esi + edx*8]
        mov dword ptr [ebx + 10h], eax
        mov eax, dword ptr [ebx + 8]
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x100126fe
        __asm _emit 0x75
        __asm _emit 0x04
        xor edx, edx
        ; Exact mapped bytes EB 16: jmp 0x10012714
        __asm _emit 0xeb
        __asm _emit 0x16
        mov ecx, dword ptr [ebx + 0ch]
        sub ecx, eax
        mov eax, 38e38e39h
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        lea edx, [edx + edx*8]
        mov dword ptr [ebx + 8], esi
        lea eax, [esi + edx*8]
        xor esi, esi
        mov dword ptr [ebx + 0ch], eax
        mov eax, dword ptr [ebx + 18h]
        cmp eax, esi
        ; Exact mapped bytes 75 04: jne 0x1001272d
        __asm _emit 0x75
        __asm _emit 0x04
        xor edx, edx
        ; Exact mapped bytes EB 16: jmp 0x10012743
        __asm _emit 0xeb
        __asm _emit 0x16
        mov ecx, dword ptr [ebx + 20h]
        sub ecx, eax
        mov eax, 7f807f81h
        imul ecx
        sar edx, 0ah
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov edi, dword ptr [esp + 2ch]
        cmp edx, edi
        ; Exact mapped bytes 0F 83 A1 00 00 00: jae 0x100127f0
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, esi
        mov eax, edi
        ; Exact mapped bytes 7D 02: jge 0x10012757
        __asm _emit 0x7d
        __asm _emit 0x02
        xor eax, eax
        mov edx, eax
        shl edx, 8
        add edx, eax
        shl edx, 3
        push edx
        ; Exact mapped bytes E8 39 A0 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xa0
        __asm _emit 0x15
        __asm _emit 0x00
        mov ebp, dword ptr [ebx + 1ch]
        mov esi, eax
        mov eax, dword ptr [ebx + 18h]
        add esp, 4
        cmp eax, ebp
        mov dword ptr [esp + 28h], esi
        mov edx, esi
        ; Exact mapped bytes 74 26: je 0x100127a2
        __asm _emit 0x74
        __asm _emit 0x26
        test edx, edx
        ; Exact mapped bytes 74 13: je 0x10012793
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, 202h
        mov esi, eax
        mov edi, edx
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov esi, dword ptr [esp + 28h]
        mov edi, dword ptr [esp + 2ch]
        add eax, 808h
        add edx, 808h
        cmp eax, ebp
        ; Exact mapped bytes 75 DA: jne 0x1001277c
        __asm _emit 0x75
        __asm _emit 0xda
        mov eax, dword ptr [ebx + 18h]
        push eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes E8 D5 9F 15 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x9f
        __asm _emit 0x15
        __asm _emit 0x00
        mov eax, edi
        add esp, 4
        shl eax, 8
        add eax, edi
        lea ecx, [esi + eax*8]
        mov eax, dword ptr [ebx + 18h]
        test eax, eax
        mov dword ptr [ebx + 20h], ecx
        ; Exact mapped bytes 75 04: jne 0x100127ca
        __asm _emit 0x75
        __asm _emit 0x04
        xor edx, edx
        ; Exact mapped bytes EB 16: jmp 0x100127e0
        __asm _emit 0xeb
        __asm _emit 0x16
        mov ecx, dword ptr [ebx + 1ch]
        sub ecx, eax
        mov eax, 7f807f81h
        imul ecx
        sar edx, 0ah
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov ecx, edx
        mov dword ptr [ebx + 18h], esi
        shl ecx, 8
        add ecx, edx
        lea edx, [esi + ecx*8]
        mov dword ptr [ebx + 1ch], edx
        mov ecx, dword ptr [esp + 18h]
        pop edi
        pop esi
        mov eax, ebx
        pop ebp
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
