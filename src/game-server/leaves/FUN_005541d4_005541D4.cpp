// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005541D4 .. +0x1C9 bytes.
extern "C" __declspec(naked) void FUN_005541d4_005541D4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 34h], ecx
        mov dword ptr [ebp - 30h], 0
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 2ch], 0
        push 284h
        push 5cfa08h
        mov eax, dword ptr [ebp - 34h]
        push eax
        ; Exact mapped bytes E8 51 6F FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x6f
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 34h]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 74 14: je 0x55422c
        __asm _emit 0x74
        __asm _emit 0x14
        push 285h
        push 5cfa08h
        ; Exact mapped bytes E8 D9 07 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x07
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55422c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x55420f
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 34h]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x55424f
        __asm _emit 0x75
        __asm _emit 0x14
        push 286h
        push 5cfa08h
        ; Exact mapped bytes E8 B6 07 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x07
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55424f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x554232
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 25: je 0x554280
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 14h
        mov edx, dword ptr [ebp + 18h]
        push edx
        ; Exact mapped bytes E8 EE BB F7 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xbb
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x554280
        __asm _emit 0x75
        __asm _emit 0x14
        push 288h
        push 5cfa08h
        ; Exact mapped bytes E8 85 07 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x07
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x554280
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CF: jne 0x554255
        __asm _emit 0x75
        __asm _emit 0xcf
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 B4 ED FF FF: call 0x553042
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ecx + 28h], eax
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 90 D8 00 00 00: call dword ptr [eax + 0xd8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 34h]
        cmp dword ptr [ecx + 34h], 0
        ; Exact mapped bytes 75 14: jne 0x5542bf
        __asm _emit 0x75
        __asm _emit 0x14
        push 28dh
        push 5cfa08h
        ; Exact mapped bytes E8 46 07 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x07
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5542bf
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x5542a2
        __asm _emit 0x75
        __asm _emit 0xdd
        lea eax, [ebp - 24h]
        push eax
        ; Exact mapped bytes 66 8B 4D 14: mov cx, word ptr [ebp + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x14
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        ; Exact mapped bytes E8 A7 98 FF FF: call 0x54db7e
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp + 18h], eax
        mov eax, dword ptr [ebp - 34h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 92 C8 00 00 00: call dword ptr [edx + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 75 09: jne 0x554300
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 38h], 0
        ; Exact mapped bytes EB 36: jmp 0x554336
        __asm _emit 0xeb
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 30h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 A1 54 F5 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x54
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], esp
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        ; Exact mapped bytes E8 8D CC F3 FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xcc
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov edx, dword ptr [ebp - 34h]
        add edx, 20h
        push edx
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax + 34h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        push 58e540h
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 15 A8 29 5E 00: call dword ptr [0x5e29a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 90 CC 00 00 00: call dword ptr [eax + 0xcc]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        push 29ah
        push 5cfa08h
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        ; Exact mapped bytes E8 D2 6D FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x6d
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 28h]
        lea esp, [ebp - 48h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
