// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041B93F .. +0x13C bytes.
extern "C" __declspec(naked) void FUN_0041b93f_0041B93F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        cmp dword ptr [ebp + 0ch], ebx
        push edi
        mov eax, dword ptr [esi]
        ; Exact mapped bytes 0F 84 D0 00 00 00: je 0x41ba26
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        cmp dword ptr [esi + 48h], ebx
        ; Exact mapped bytes 74 7D: je 0x41b9df
        __asm _emit 0x74
        __asm _emit 0x7d
        xor edi, edi
        cmp dword ptr [esi + 10h], ebx
        ; Exact mapped bytes 7E 67: jle 0x41b9d0
        __asm _emit 0x7e
        __asm _emit 0x67
        mov ebx, dword ptr [esi + 54h]
        lea eax, [edi + 1]
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp + 0ch], eax
        lea eax, [ebp + 0ch]
        mov ecx, ebx
        push eax
        ; Exact mapped bytes E8 FB 00 00 00: call 0x41ba7b
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 74 11: je 0x41b995
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebx + 10h]
        lea eax, [eax + eax*2]
        shl eax, 4
        mov eax, dword ptr [eax + ecx]
        ; Exact mapped bytes EB 02: jmp 0x41b997
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 CB 22 01 00: call 0x42dc6b
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 9ch]
        push eax
        ; Exact mapped bytes E8 23 2F 00 00: call 0x41e8d5
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, eax
        pop ecx
        neg ebx
        pop ecx
        sbb bl, bl
        lea ecx, [ebp - 4]
        inc bl
        ; Exact mapped bytes E8 E7 21 01 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        test bl, bl
        ; Exact mapped bytes 75 4A: jne 0x41ba12
        __asm _emit 0x75
        __asm _emit 0x4a
        mov edi, dword ptr [ebp - 8]
        cmp edi, dword ptr [esi + 10h]
        ; Exact mapped bytes 7C 99: jl 0x41b969
        __asm _emit 0x7c
        __asm _emit 0x99
        mov eax, dword ptr [ebp + 8]
        and dword ptr [eax + 90h], 0
        ; Exact mapped bytes E9 95 00 00 00: jmp 0x41ba74
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edi, edi
        cmp dword ptr [esi + 10h], ebx
        ; Exact mapped bytes 7E EA: jle 0x41b9d0
        __asm _emit 0x7e
        __asm _emit 0xea
        mov eax, dword ptr [esi + 14h]
        mov eax, dword ptr [ebx + eax + 1ch]
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x41ba07
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ecx + 9ch]
        push ecx
        ; Exact mapped bytes E8 D4 2E 00 00: call 0x41e8d5
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        test eax, eax
        pop ecx
        ; Exact mapped bytes 74 0B: je 0x41ba12
        __asm _emit 0x74
        __asm _emit 0x0b
        inc edi
        add ebx, 28h
        cmp edi, dword ptr [esi + 10h]
        ; Exact mapped bytes 7C D6: jl 0x41b9e6
        __asm _emit 0x7c
        __asm _emit 0xd6
        ; Exact mapped bytes EB BE: jmp 0x41b9d0
        __asm _emit 0xeb
        __asm _emit 0xbe
        mov ecx, dword ptr [esi + 14h]
        push dword ptr [ebp + 8]
        lea eax, [edi + edi*4]
        mov ecx, dword ptr [ecx + eax*8 + 24h]
        ; Exact mapped bytes E8 38 19 01 00: call 0x42d35c
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 4E: jmp 0x41ba74
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov ecx, esi
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        mov eax, dword ptr [esi + 10h]
        xor ecx, ecx
        cmp eax, ebx
        mov dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 7E 3D: jle 0x41ba74
        __asm _emit 0x7e
        __asm _emit 0x3d
        mov esi, dword ptr [esi + 14h]
        lea edi, [esi + 24h]
        ; Exact mapped bytes EB 02: jmp 0x41ba41
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [edi]
        mov eax, dword ptr [eax + 4]
        cmp eax, ebx
        ; Exact mapped bytes 74 12: je 0x41ba5c
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, eax
        mov ebx, eax
        mov eax, dword ptr [eax]
        mov edx, dword ptr [edx + 8]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 0F: je 0x41ba67
        __asm _emit 0x74
        __asm _emit 0x0f
        test eax, eax
        ; Exact mapped bytes 75 EE: jne 0x41ba4a
        __asm _emit 0x75
        __asm _emit 0xee
        inc ecx
        add edi, 28h
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7C DA: jl 0x41ba3f
        __asm _emit 0x7c
        __asm _emit 0xda
        ; Exact mapped bytes EB 0D: jmp 0x41ba74
        __asm _emit 0xeb
        __asm _emit 0x0d
        lea eax, [ecx + ecx*4]
        push ebx
        mov ecx, dword ptr [esi + eax*8 + 24h]
        ; Exact mapped bytes E8 35 19 01 00: call 0x42d3a9
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
