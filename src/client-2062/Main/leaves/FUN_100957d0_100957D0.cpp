// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100957D0 .. +0x1E7 bytes.
extern "C" __declspec(naked) void FUN_100957d0_100957D0() {
    __asm {
        sub esp, 14h
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor ecx, ecx
        push edi
        mov ebx, dword ptr [esi + 88h]
        mov edx, dword ptr [esi + 8ch]
        mov eax, ebx
        mov dword ptr [esp + 10h], ecx
        cmp eax, edx
        ; Exact mapped bytes 74 1C: je 0x1009580d
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edi, dword ptr [eax]
        mov ebp, dword ptr [edi + 60h]
        test ebp, ebp
        ; Exact mapped bytes 75 09: jne 0x10095803
        __asm _emit 0x75
        __asm _emit 0x09
        add eax, 4
        cmp eax, edx
        ; Exact mapped bytes 75 F0: jne 0x100957f1
        __asm _emit 0x75
        __asm _emit 0xf0
        ; Exact mapped bytes EB 0A: jmp 0x1009580d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [eax]
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 10h], ecx
        mov edi, dword ptr [esp + 28h]
        cmp ecx, edi
        ; Exact mapped bytes 0F 85 A9 00 00 00: jne 0x100958c2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 0F 84 A1 00 00 00: je 0x100958c2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 0F 84 99 00 00 00: je 0x100958c2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, edi
        ; Exact mapped bytes E8 5E CA FE FF: call 0x10082290
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xca
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [esp + 18h]
        mov ecx, dword ptr [esi + 8ch]
        lea edi, [esi + 84h]
        lea eax, [edx + 4]
        cmp eax, ecx
        ; Exact mapped bytes 74 0E: je 0x10095857
        __asm _emit 0x74
        __asm _emit 0x0e
        sub edx, eax
        mov ebx, dword ptr [eax]
        mov dword ptr [edx + eax], ebx
        add eax, 4
        cmp eax, ecx
        ; Exact mapped bytes 75 F4: jne 0x1009584b
        __asm _emit 0x75
        __asm _emit 0xf4
        mov eax, dword ptr [edi + 8]
        mov ecx, edi
        push eax
        add eax, -4
        push eax
        ; Exact mapped bytes E8 6A 93 00 00: call 0x1009ebd0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 8]
        add eax, -4
        mov dword ptr [edi + 8], eax
        mov ecx, dword ptr [edi + 8]
        lea eax, [esp + 28h]
        push eax
        push 1
        push ecx
        mov ecx, edi
        ; Exact mapped bytes E8 8F 03 00 00: call 0x10095c10
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 88h]
        mov esi, dword ptr [esi + 8ch]
        cmp eax, esi
        ; Exact mapped bytes 0F 84 18 01 00 00: je 0x100959ad
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [edx + 60h]
        test ecx, ecx
        ; Exact mapped bytes 75 11: jne 0x100958af
        __asm _emit 0x75
        __asm _emit 0x11
        add eax, 4
        cmp eax, esi
        ; Exact mapped bytes 75 F0: jne 0x10095895
        __asm _emit 0x75
        __asm _emit 0xf0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 14h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        push 1
        ; Exact mapped bytes E8 D8 C9 FE FF: call 0x10082290
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xc9
        __asm _emit 0xfe
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 14h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp ebx, edx
        mov dword ptr [esp + 1ch], 0
        ; Exact mapped bytes 0F 84 DB 00 00 00: je 0x100959ad
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebp, [ebx + 4]
        mov dword ptr [esp + 14h], ebp
        mov eax, dword ptr [ebx]
        cmp eax, edi
        ; Exact mapped bytes 0F 85 B2 00 00 00: jne 0x10095995
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes 74 4D: je 0x10095938
        __asm _emit 0x74
        __asm _emit 0x4d
        push 0
        ; Exact mapped bytes E8 9E C9 FE FF: call 0x10082290
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xc9
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edi, dword ptr [esp + 18h]
        mov edx, dword ptr [esi + 8ch]
        lea ecx, [esi + 84h]
        lea eax, [edi + 4]
        cmp eax, edx
        ; Exact mapped bytes 74 12: je 0x1009591b
        __asm _emit 0x74
        __asm _emit 0x12
        sub edi, eax
        mov ebp, dword ptr [eax]
        mov dword ptr [edi + eax], ebp
        add eax, 4
        cmp eax, edx
        ; Exact mapped bytes 75 F4: jne 0x1009590b
        __asm _emit 0x75
        __asm _emit 0xf4
        mov ebp, dword ptr [esp + 14h]
        mov eax, dword ptr [ecx + 8]
        add eax, -4
        mov dword ptr [esp + 20h], eax
        mov dword ptr [ecx + 8], eax
        mov edx, dword ptr [ecx + 8]
        lea eax, [esp + 10h]
        push eax
        push 1
        push edx
        ; Exact mapped bytes E8 D8 02 00 00: call 0x10095c10
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8ch]
        lea ecx, [esi + 84h]
        cmp ebp, edx
        mov eax, ebp
        ; Exact mapped bytes 74 14: je 0x1009595e
        __asm _emit 0x74
        __asm _emit 0x14
        mov edi, ebx
        sub edi, ebp
        mov ebp, dword ptr [eax]
        mov dword ptr [edi + eax], ebp
        add eax, 4
        cmp eax, edx
        ; Exact mapped bytes 75 F4: jne 0x1009594e
        __asm _emit 0x75
        __asm _emit 0xf4
        mov ebp, dword ptr [esp + 14h]
        mov eax, dword ptr [ecx + 8]
        add eax, -4
        mov dword ptr [esp + 20h], eax
        mov dword ptr [ecx + 8], eax
        mov edx, dword ptr [esi + 88h]
        lea eax, [esp + 1ch]
        push eax
        push 1
        push edx
        ; Exact mapped bytes E8 92 02 00 00: call 0x10095c10
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 88h]
        push 1
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 03 C9 FE FF: call 0x10082290
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xc9
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edi, dword ptr [esp + 28h]
        mov ecx, dword ptr [esp + 10h]
        mov eax, dword ptr [esi + 8ch]
        add ebx, 4
        add ebp, 4
        cmp ebx, eax
        mov dword ptr [esp + 14h], ebp
        ; Exact mapped bytes 0F 85 2C FF FF FF: jne 0x100958d9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 14h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
