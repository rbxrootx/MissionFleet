// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877FE20 .. +0xF8 bytes.
extern "C" __declspec(naked) void FUN_5877fe20() {
    __asm {
        push -1
        push 5897f5d8h
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
        mov dword ptr [edi], 58996a4ch
        mov ecx, dword ptr [edi + 0b0h]
        xor ebp, ebp
        mov dword ptr [esp + 24h], ebp
        cmp ecx, ebp
        ; Exact mapped bytes 74 0E: je 0x5877fe71
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 0b0h], ebp
        mov ecx, dword ptr [edi + 0b4h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0E: je 0x5877fe89
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 0b4h], ebp
        mov eax, dword ptr [edi + 0bch]
        cmp eax, ebp
        ; Exact mapped bytes 74 0F: je 0x5877fea2
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes E8 8D CF 1F 00: call 0x5897ce26
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xcf
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [edi + 0bch], ebp
        mov ecx, dword ptr [edi + 58h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0B: je 0x5877feb4
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 58h], ebp
        mov ecx, dword ptr [edi + 54h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0B: je 0x5877fec6
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 54h], ebp
        lea esi, [edi + 68h]
        mov dword ptr [esp + 14h], 8
        mov ebx, 2
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0A: je 0x5877fee6
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
        ; Exact mapped bytes 75 E8: jne 0x5877fed6
        __asm _emit 0x75
        __asm _emit 0xe8
        sub dword ptr [esp + 14h], 1
        ; Exact mapped bytes 75 DC: jne 0x5877fed1
        __asm _emit 0x75
        __asm _emit 0xdc
        mov ecx, edi
        mov dword ptr [esp + 24h], 0ffffffffh
        ; Exact mapped bytes E8 5C 2E 18 00: call 0x58902d60
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x2e
        __asm _emit 0x18
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
