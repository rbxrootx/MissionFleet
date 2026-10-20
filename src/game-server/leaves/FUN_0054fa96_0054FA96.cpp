// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054FA96 .. +0x184 bytes.
extern "C" __declspec(naked) void FUN_0054fa96_0054FA96() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 70h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 68h], ecx
        mov dword ptr [ebp - 58h], 0
        mov dword ptr [ebp - 50h], 0
        mov dword ptr [ebp - 4ch], 0
        mov dword ptr [ebp - 54h], 0
        push 0a6h
        push 5cf710h
        mov eax, dword ptr [ebp - 68h]
        push eax
        ; Exact mapped bytes E8 8F B6 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xb6
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 68h]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x54faee
        __asm _emit 0x75
        __asm _emit 0x14
        push 0a7h
        push 5cf710h
        ; Exact mapped bytes E8 17 4F FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x4f
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54faee
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x54fad1
        __asm _emit 0x75
        __asm _emit 0xdd
        push 0
        lea eax, [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        mov edx, dword ptr [ecx + 10h]
        mov eax, dword ptr [ebp - 68h]
        mov ecx, dword ptr [eax + 10h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 30: call dword ptr [eax + 0x30]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x30
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x54fb17
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 F7 00 00 00: jmp 0x54fc0e
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push -1
        lea ecx, [ebp - 38h]
        push ecx
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 0A F8 F7 FF: call 0x4cf32f
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xf8
        __asm _emit 0xf7
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 4
        ; Exact mapped bytes E8 7D 1B FE FF: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x1b
        __asm _emit 0xfe
        __asm _emit 0xff
        push -1
        lea edx, [ebp - 30h]
        push edx
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 F0 F7 F7 FF: call 0x4cf32f
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xf7
        __asm _emit 0xf7
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 66 1B FE FF: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x1b
        __asm _emit 0xfe
        __asm _emit 0xff
        push -1
        lea eax, [ebp - 28h]
        push eax
        lea ecx, [ebp - 64h]
        ; Exact mapped bytes E8 D9 F7 F7 FF: call 0x4cf32f
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xf7
        __asm _emit 0xf7
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 8
        ; Exact mapped bytes E8 4C 1B FE FF: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x1b
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 14: je 0x54fb7c
        __asm _emit 0x74
        __asm _emit 0x14
        push 0b2h
        push 5cf710h
        ; Exact mapped bytes E8 89 4E FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54fb7c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x54fb62
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [edx + 0ch], eax
        mov ecx, dword ptr [ebp + 8]
        mov byte ptr [ecx + 10h], 0
        mov edx, dword ptr [ebp + 8]
        mov byte ptr [edx + 12h], 0
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 6A: je 0x54fc09
        __asm _emit 0x74
        __asm _emit 0x6a
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 4ch], eax
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 75 09: jne 0x54fbb4
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes EB 35: jmp 0x54fbe9
        __asm _emit 0xeb
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        ; Exact mapped bytes FF 15 D8 22 5E 00: call dword ptr [0x5e22d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        lea edx, [eax + eax + 2]
        mov dword ptr [ebp - 58h], edx
        mov eax, dword ptr [ebp - 58h]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 EE 9B F5 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x9b
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], esp
        mov eax, dword ptr [ebp - 58h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        mov edx, dword ptr [ebp - 70h]
        push edx
        ; Exact mapped bytes E8 CA CB F4 FF: call 0x49c7b0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xcb
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        push 104h
        mov eax, dword ptr [ebp - 6ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 12h
        push ecx
        ; Exact mapped bytes FF 15 68 23 5E 00: call dword ptr [0x5e2368]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 48h]
        push edx
        ; Exact mapped bytes FF 15 84 2A 5E 00: call dword ptr [0x5e2a84]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, 1
        lea esp, [ebp - 7ch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
