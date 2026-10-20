// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588AA6F0 .. +0x242 bytes.
extern "C" __declspec(naked) void FUN_588aa6f0() {
    __asm {
        push -1
        push 58987f48h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
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
        lea eax, [esp + 18h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov dword ptr [esp + 14h], esi
        mov dword ptr [esi], 589a0784h
        xor ebx, ebx
        mov dword ptr [esp + 20h], ebx
        lea edi, [esi + 78h]
        lea ebp, [ebx + 5]
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov ecx, dword ptr [edi - 14h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x588aa742
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi - 14h], ebx
        mov ecx, dword ptr [edi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0A: je 0x588aa752
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi], ebx
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 D6: jne 0x588aa730
        __asm _emit 0x75
        __asm _emit 0xd6
        mov ecx, dword ptr [esi + 8ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588aa772
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 8ch], ebx
        mov ecx, dword ptr [esi + 90h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588aa78a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 90h], ebx
        mov ecx, dword ptr [esi + 94h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588aa7a2
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 94h], ebx
        mov ecx, dword ptr [esi + 98h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588aa7ba
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 98h], ebx
        mov ecx, dword ptr [esi + 0b8h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588aa7d2
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0b8h], ebx
        mov ecx, dword ptr [esi + 0bch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588aa7ea
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0bch], ebx
        mov ecx, dword ptr [esi + 0c0h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588aa802
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0c0h], ebx
        mov ecx, dword ptr [esi + 0c4h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588aa81a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0c4h], ebx
        mov ecx, dword ptr [esi + 0c8h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588aa832
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0c8h], ebx
        mov ecx, dword ptr [esi + 0cch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588aa84a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0cch], ebx
        mov ecx, dword ptr [esi + 0d0h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588aa862
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0d0h], ebx
        mov ecx, dword ptr [esi + 0d4h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588aa87a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0d4h], ebx
        mov ecx, dword ptr [esi + 0d8h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588aa892
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0d8h], ebx
        mov ecx, dword ptr [esi + 0dch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588aa8aa
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0dch], ebx
        lea edi, [esi + 0a8h]
        mov ebp, 3
        mov ecx, dword ptr [edi - 0ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x588aa8c7
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi - 0ch], ebx
        mov ecx, dword ptr [edi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0A: je 0x588aa8d7
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi], ebx
        mov ecx, dword ptr [edi + 80h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588aa8ef
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 80h], ebx
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 BE: jne 0x588aa8b5
        __asm _emit 0x75
        __asm _emit 0xbe
        mov ecx, dword ptr [esi + 0b4h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588aa90f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0b4h], ebx
        mov ecx, esi
        mov dword ptr [esp + 20h], 0ffffffffh
        ; Exact mapped bytes E8 F2 82 05 00: call 0x58902c10
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x82
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 18h]
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
        add esp, 10h
        ret
    }
}
