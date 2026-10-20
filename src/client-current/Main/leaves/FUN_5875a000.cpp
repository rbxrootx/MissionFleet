// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875A000 .. +0xFE bytes.
extern "C" __declspec(naked) void FUN_5875a000() {
    __asm {
        push -1
        push 5897f2a8h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
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
        lea eax, [esp + 10h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov dword ptr [esp + 0ch], esi
        mov dword ptr [esi], 5898d7c0h
        mov ecx, dword ptr [esi + 58h]
        xor edi, edi
        mov dword ptr [esp + 18h], edi
        cmp ecx, edi
        ; Exact mapped bytes 74 0B: je 0x5875a047
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 58h], edi
        mov ecx, dword ptr [esi + 5ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0B: je 0x5875a059
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 5ch], edi
        mov ecx, dword ptr [esi + 60h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0B: je 0x5875a06b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 60h], edi
        mov ecx, dword ptr [esi + 64h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0B: je 0x5875a07d
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 64h], edi
        mov ecx, dword ptr [esi + 68h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0B: je 0x5875a08f
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 68h], edi
        mov ecx, dword ptr [esi + 0b0h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5875a0a7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0b0h], edi
        mov ecx, dword ptr [esi + 6ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0B: je 0x5875a0b9
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 6ch], edi
        mov ecx, dword ptr [esi + 70h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0B: je 0x5875a0cb
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 70h], edi
        mov ecx, dword ptr [esi + 74h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0B: je 0x5875a0dd
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 74h], edi
        mov ecx, esi
        mov dword ptr [esp + 18h], 0ffffffffh
        ; Exact mapped bytes E8 F4 92 1A 00: call 0x589033e0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x92
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
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
        add esp, 10h
        ret
    }
}
