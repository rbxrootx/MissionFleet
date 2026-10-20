// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10032930 .. +0x18E bytes.
extern "C" __declspec(naked) void FUN_10032930_10032930() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 2
        ; Exact mapped bytes 0F 84 76 01 00 00: je 0x10032ab5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 10h]
        xor ebx, ebx
        cmp eax, ebx
        ; Exact mapped bytes 74 21: je 0x1003296d
        __asm _emit 0x74
        __asm _emit 0x21
        mov eax, dword ptr [eax + 34h]
        cmp eax, ebx
        ; Exact mapped bytes 74 12: je 0x10032965
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [eax]
        push edi
        mov ecx, eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0A: je 0x1003296d
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes EB EA: jmp 0x1003294f
        __asm _emit 0xeb
        __asm _emit 0xea
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [edi + 4], 201h
        ; Exact mapped bytes 0F 85 3B 01 00 00: jne 0x10032ab5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 7ch]
        cmp eax, 1
        ; Exact mapped bytes 0F 85 96 00 00 00: jne 0x10032a1c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 6ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10032993
        __asm _emit 0x74
        __asm _emit 0x06
        mov edx, dword ptr [ecx]
        push ebx
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov eax, dword ptr [esi + 0c0h]
        mov dword ptr [esi + 7ch], 20h
        cmp eax, ebx
        ; Exact mapped bytes 74 52: je 0x100329f6
        __asm _emit 0x74
        __asm _emit 0x52
        cmp dword ptr [esi + 60h], ebx
        ; Exact mapped bytes 75 4D: jne 0x100329f6
        __asm _emit 0x75
        __asm _emit 0x4d
        mov dword ptr [esi + 54h], eax
        mov eax, dword ptr [esi + 8ch]
        cmp eax, ebx
        mov dword ptr [esi + 50h], ebx
        ; Exact mapped bytes 74 3D: je 0x100329f6
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [esi + 0b4h]
        mov dword ptr [ecx + 54h], eax
        mov edx, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ecx + 10h], edx
        add ecx, 14h
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 0b4h]
        mov edx, dword ptr [esi + 50h]
        mov dword ptr [ecx + 50h], edx
        cmp dword ptr [esi + 60h], ebx
        ; Exact mapped bytes 0F 85 B6 00 00 00: jne 0x10032ab5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x10032ab5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx]
        push ebx
        push 2
        push esi
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 10h
        ; Exact mapped bytes 0F 85 90 00 00 00: jne 0x10032ab5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 60h]
        mov edi, 40000000h
        cmp eax, edi
        ; Exact mapped bytes 0F 85 80 00 00 00: jne 0x10032ab5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 09: je 0x10032a45
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push ebx
        push 2
        push esi
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov eax, dword ptr [esi + 0c4h]
        mov dword ptr [esi + 7ch], ebx
        cmp eax, ebx
        mov dword ptr [esi + 80h], ebx
        ; Exact mapped bytes 74 5D: je 0x10032ab5
        __asm _emit 0x74
        __asm _emit 0x5d
        mov eax, dword ptr [esi + 0b4h]
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [eax + 50h], ebx
        mov eax, dword ptr [esi + 60h]
        cmp eax, edi
        mov dword ptr [esi + 64h], edi
        ; Exact mapped bytes 75 03: jne 0x10032a71
        __asm _emit 0x75
        __asm _emit 0x03
        mov dword ptr [esi + 60h], ebx
        mov eax, dword ptr [esi + 88h]
        mov ecx, dword ptr [esi + 0c4h]
        cmp eax, ebx
        mov dword ptr [esi + 54h], ecx
        ; Exact mapped bytes 74 31: je 0x10032ab5
        __asm _emit 0x74
        __asm _emit 0x31
        mov ecx, dword ptr [esi + 0b4h]
        mov dword ptr [ecx + 54h], eax
        mov edx, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ecx + 10h], edx
        add ecx, 14h
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
