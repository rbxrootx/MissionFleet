// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10095C10 .. +0x209 bytes.
extern "C" __declspec(naked) void FUN_10095c10_10095C10() {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, dword ptr [esp + 20h]
        mov edi, ecx
        mov dword ptr [esp + 10h], edi
        mov eax, dword ptr [edi + 8]
        mov ecx, dword ptr [edi + 0ch]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, ebp
        ; Exact mapped bytes 0F 83 06 01 00 00: jae 0x10095d3a
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi + 4]
        test edx, edx
        ; Exact mapped bytes 74 0B: je 0x10095c46
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ebp, ecx
        ; Exact mapped bytes 72 02: jb 0x10095c48
        __asm _emit 0x72
        __asm _emit 0x02
        mov ecx, ebp
        test edx, edx
        ; Exact mapped bytes 75 04: jne 0x10095c50
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x10095c55
        __asm _emit 0xeb
        __asm _emit 0x05
        sub eax, edx
        sar eax, 2
        add eax, ecx
        test eax, eax
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 7D 02: jge 0x10095c61
        __asm _emit 0x7d
        __asm _emit 0x02
        xor eax, eax
        lea edx, [eax*4]
        push edx
        ; Exact mapped bytes E8 32 6B 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x6b
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 20h]
        mov dword ptr [esp + 24h], eax
        mov ecx, eax
        mov eax, dword ptr [edi + 4]
        add esp, 4
        cmp eax, ebx
        ; Exact mapped bytes 74 12: je 0x10095c94
        __asm _emit 0x74
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x10095c8a
        __asm _emit 0x74
        __asm _emit 0x04
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        add eax, 4
        add ecx, 4
        cmp eax, ebx
        ; Exact mapped bytes 75 EE: jne 0x10095c82
        __asm _emit 0x75
        __asm _emit 0xee
        test ebp, ebp
        mov eax, ecx
        ; Exact mapped bytes 76 18: jbe 0x10095cb2
        __asm _emit 0x76
        __asm _emit 0x18
        mov esi, dword ptr [esp + 24h]
        mov edx, ebp
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10095cac
        __asm _emit 0x74
        __asm _emit 0x08
        mov edi, dword ptr [esi]
        mov dword ptr [eax], edi
        mov edi, dword ptr [esp + 10h]
        add eax, 4
        dec edx
        ; Exact mapped bytes 75 EE: jne 0x10095ca0
        __asm _emit 0x75
        __asm _emit 0xee
        mov edi, dword ptr [edi + 8]
        lea esi, [ebp*4]
        cmp ebx, edi
        lea edx, [esi + ecx]
        ; Exact mapped bytes 74 1A: je 0x10095cdd
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, edx
        sub eax, esi
        sub eax, ecx
        add eax, ebx
        test edx, edx
        ; Exact mapped bytes 74 04: je 0x10095cd3
        __asm _emit 0x74
        __asm _emit 0x04
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        add eax, 4
        add edx, 4
        cmp eax, edi
        ; Exact mapped bytes 75 EE: jne 0x10095ccb
        __asm _emit 0x75
        __asm _emit 0xee
        mov esi, dword ptr [esp + 10h]
        mov eax, dword ptr [esi + 4]
        push eax
        mov dword ptr [esp + 28h], eax
        ; Exact mapped bytes E8 96 6A 0D 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x6a
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edx, dword ptr [esp + 24h]
        mov eax, dword ptr [esp + 18h]
        add esp, 4
        lea ecx, [edx + eax*4]
        mov dword ptr [esi + 0ch], ecx
        mov ecx, dword ptr [esi + 4]
        test ecx, ecx
        ; Exact mapped bytes 75 17: jne 0x10095d1d
        __asm _emit 0x75
        __asm _emit 0x17
        xor eax, eax
        mov dword ptr [esi + 4], edx
        mov eax, ebp
        pop edi
        lea eax, [edx + eax*4]
        mov dword ptr [esi + 8], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        mov dword ptr [esi + 4], edx
        sub eax, ecx
        pop edi
        sar eax, 2
        add eax, ebp
        lea eax, [edx + eax*4]
        mov dword ptr [esi + 8], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [esp + 1ch]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, ebp
        ; Exact mapped bytes 73 6E: jae 0x10095db7
        __asm _emit 0x73
        __asm _emit 0x6e
        lea ebx, [ebp*4]
        cmp edx, eax
        lea esi, [ebx + edx]
        ; Exact mapped bytes 74 1A: je 0x10095d71
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, esi
        sub ecx, ebx
        test esi, esi
        ; Exact mapped bytes 74 08: je 0x10095d67
        __asm _emit 0x74
        __asm _emit 0x08
        mov edi, dword ptr [ecx]
        mov dword ptr [esi], edi
        mov edi, dword ptr [esp + 10h]
        add ecx, 4
        add esi, 4
        cmp ecx, eax
        ; Exact mapped bytes 75 EA: jne 0x10095d5b
        __asm _emit 0x75
        __asm _emit 0xea
        mov eax, dword ptr [edi + 8]
        mov esi, dword ptr [esp + 24h]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        sub ebp, ecx
        ; Exact mapped bytes 74 0E: je 0x10095d91
        __asm _emit 0x74
        __asm _emit 0x0e
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x10095d8b
        __asm _emit 0x74
        __asm _emit 0x04
        mov ecx, dword ptr [esi]
        mov dword ptr [eax], ecx
        add eax, 4
        dec ebp
        ; Exact mapped bytes 75 F2: jne 0x10095d83
        __asm _emit 0x75
        __asm _emit 0xf2
        mov ecx, dword ptr [edi + 8]
        mov eax, edx
        cmp edx, ecx
        ; Exact mapped bytes 74 0B: je 0x10095da5
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [esi]
        mov dword ptr [eax], edx
        add eax, 4
        cmp eax, ecx
        ; Exact mapped bytes 75 F5: jne 0x10095d9a
        __asm _emit 0x75
        __asm _emit 0xf5
        mov eax, dword ptr [edi + 8]
        add eax, ebx
        mov dword ptr [edi + 8], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        test ebp, ebp
        ; Exact mapped bytes 76 54: jbe 0x10095e0f
        __asm _emit 0x76
        __asm _emit 0x54
        shl ebp, 2
        mov ecx, eax
        mov esi, eax
        sub ecx, ebp
        cmp ecx, eax
        ; Exact mapped bytes 74 12: je 0x10095dda
        __asm _emit 0x74
        __asm _emit 0x12
        test esi, esi
        ; Exact mapped bytes 74 04: je 0x10095dd0
        __asm _emit 0x74
        __asm _emit 0x04
        mov ebx, dword ptr [ecx]
        mov dword ptr [esi], ebx
        add ecx, 4
        add esi, 4
        cmp ecx, eax
        ; Exact mapped bytes 75 EE: jne 0x10095dc8
        __asm _emit 0x75
        __asm _emit 0xee
        mov ecx, dword ptr [edi + 8]
        mov eax, ecx
        sub eax, ebp
        cmp edx, eax
        ; Exact mapped bytes 74 0F: je 0x10095df4
        __asm _emit 0x74
        __asm _emit 0x0f
        mov esi, dword ptr [eax - 4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edx
        mov dword ptr [ecx], esi
        ; Exact mapped bytes 75 F1: jne 0x10095de5
        __asm _emit 0x75
        __asm _emit 0xf1
        lea ecx, [edx + ebp]
        mov eax, edx
        cmp edx, ecx
        ; Exact mapped bytes 74 0F: je 0x10095e0c
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [esp + 24h]
        mov esi, dword ptr [edx]
        mov dword ptr [eax], esi
        add eax, 4
        cmp eax, ecx
        ; Exact mapped bytes 75 F5: jne 0x10095e01
        __asm _emit 0x75
        __asm _emit 0xf5
        add dword ptr [edi + 8], ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
