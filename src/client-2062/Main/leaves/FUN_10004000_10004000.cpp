// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10004000 .. +0xFF bytes.
extern "C" __declspec(naked) void FUN_10004000_10004000() {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 0d4h]
        test eax, eax
        ; Exact mapped bytes 0F 84 A5 00 00 00: je 0x100040ba
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 0F 84 9C 00 00 00: je 0x100040ba
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        or ebx, 0ffffffffh
        ; Exact mapped bytes 66 39 B7 E0 00 00 00: cmp word ptr [edi + 0xe0], si
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xb7
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, ebx
        mov dword ptr [esp + 10h], ebx
        ; Exact mapped bytes 0F 86 84 00 00 00: jbe 0x100040ba
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0d4h]
        mov ecx, dword ptr [eax + esi*4]
        test ecx, ecx
        ; Exact mapped bytes 74 5B: je 0x1000409e
        __asm _emit 0x74
        __asm _emit 0x5b
        ; Exact mapped bytes E8 88 A5 0E 00: call 0x100ee5d0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xa5
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 75 4F: jne 0x1000409e
        __asm _emit 0x75
        __asm _emit 0x4f
        mov ecx, dword ptr [edi + 0d4h]
        mov edx, dword ptr [esp + 18h]
        cmp dword ptr [ecx + esi*4], edx
        ; Exact mapped bytes 75 04: jne 0x10004062
        __asm _emit 0x75
        __asm _emit 0x04
        mov dword ptr [esp + 10h], esi
        cmp ebx, -1
        ; Exact mapped bytes 75 02: jne 0x10004069
        __asm _emit 0x75
        __asm _emit 0x02
        mov ebx, esi
        mov eax, dword ptr [edi + 0dch]
        cmp dword ptr [eax + esi*4], 0
        ; Exact mapped bytes 74 17: je 0x1000408c
        __asm _emit 0x74
        __asm _emit 0x17
        cmp ebp, -1
        ; Exact mapped bytes 74 10: je 0x1000408a
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [edi + 0d8h]
        mov ecx, dword ptr [eax + ebp*4]
        mov edx, dword ptr [eax + esi*4]
        cmp ecx, edx
        ; Exact mapped bytes 73 02: jae 0x1000408c
        __asm _emit 0x73
        __asm _emit 0x02
        mov ebp, esi
        mov eax, dword ptr [edi + 0d8h]
        mov edx, dword ptr [eax + ebx*4]
        mov ecx, dword ptr [eax + esi*4]
        cmp edx, ecx
        ; Exact mapped bytes 73 02: jae 0x1000409e
        __asm _emit 0x73
        __asm _emit 0x02
        mov ebx, esi
        xor eax, eax
        inc esi
        ; Exact mapped bytes 66 8B 87 E0 00 00 00: mov ax, word ptr [edi + 0xe0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, eax
        ; Exact mapped bytes 7C 8A: jl 0x10004036
        __asm _emit 0x7c
        __asm _emit 0x8a
        cmp ebx, -1
        ; Exact mapped bytes 74 09: je 0x100040ba
        __asm _emit 0x74
        __asm _emit 0x09
        cmp ebp, -1
        ; Exact mapped bytes 75 0E: jne 0x100040c4
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [esp + 18h]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp ebx, dword ptr [esp + 10h]
        ; Exact mapped bytes 74 F0: je 0x100040ba
        __asm _emit 0x74
        __asm _emit 0xf0
        mov eax, dword ptr [edi + 0d8h]
        mov ecx, dword ptr [eax + ebx*4]
        mov edx, dword ptr [eax + ebp*4]
        lea ecx, [ecx + ecx*4]
        cmp edx, ecx
        ; Exact mapped bytes 73 11: jae 0x100040ee
        __asm _emit 0x73
        __asm _emit 0x11
        mov edx, dword ptr [edi + 0d4h]
        pop edi
        pop esi
        pop ebp
        mov eax, dword ptr [edx + ebx*4]
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0d4h]
        pop edi
        pop esi
        mov eax, dword ptr [eax + ebp*4]
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
