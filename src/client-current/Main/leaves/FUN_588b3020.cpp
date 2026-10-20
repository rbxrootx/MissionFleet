// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588B3020 .. +0x132 bytes.
extern "C" __declspec(naked) void FUN_588b3020() {
    __asm {
        push -1
        push 58981b38h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 1ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, ecx
        mov dword ptr [esp + 18h], edi
        mov dword ptr [edi], 589a0920h
        mov ecx, dword ptr [edi + 64h]
        xor ebp, ebp
        mov dword ptr [esp + 24h], ebp
        cmp ecx, ebp
        ; Exact mapped bytes 74 0B: je 0x588b306b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 64h], ebp
        mov ecx, dword ptr [edi + 68h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0B: je 0x588b307d
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 68h], ebp
        mov ecx, dword ptr [edi + 6ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0B: je 0x588b308f
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 6ch], ebp
        mov ecx, dword ptr [edi + 70h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0B: je 0x588b30a1
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 70h], ebp
        lea esi, [edi + 74h]
        mov ebx, 2
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0A: je 0x588b30c0
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi], ebp
        add esi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 E8: jne 0x588b30b0
        __asm _emit 0x75
        __asm _emit 0xe8
        lea esi, [edi + 7ch]
        mov dword ptr [esp + 14h], 7
        mov ebx, 2
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0A: je 0x588b30e8
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi], ebp
        add esi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 E8: jne 0x588b30d8
        __asm _emit 0x75
        __asm _emit 0xe8
        sub dword ptr [esp + 14h], 1
        ; Exact mapped bytes 75 DC: jne 0x588b30d3
        __asm _emit 0x75
        __asm _emit 0xdc
        lea esi, [ebx + 7]
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0d0h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0E: je 0x588b3118
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 0d0h], ebp
        sub esi, 1
        ; Exact mapped bytes 75 E3: jne 0x588b3100
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [edi + 60h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0B: je 0x588b312f
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 60h], ebp
        mov ecx, edi
        mov dword ptr [esp + 24h], 0ffffffffh
        ; Exact mapped bytes E8 D2 FA 04 00: call 0x58902c10
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xfa
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 1ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 14h
        ret
    }
}
