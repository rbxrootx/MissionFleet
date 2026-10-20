// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588C6300 .. +0x146 bytes.
extern "C" __declspec(naked) void FUN_588c6300() {
    __asm {
        push -1
        push 5897f948h
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
        mov dword ptr [esi], 589a0bf4h
        xor ebx, ebx
        mov dword ptr [esp + 20h], ebx
        lea edi, [esi + 0e4h]
        lea ebp, [ebx + 4]
        mov ecx, dword ptr [edi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0A: je 0x588c6350
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
        ; Exact mapped bytes 75 E8: jne 0x588c6340
        __asm _emit 0x75
        __asm _emit 0xe8
        lea edi, [esi + 0cch]
        mov ebp, 4
        mov ecx, dword ptr [edi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0A: je 0x588c6373
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
        ; Exact mapped bytes 75 E8: jne 0x588c6363
        __asm _emit 0x75
        __asm _emit 0xe8
        mov ecx, dword ptr [esi + 0bch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588c6393
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
        ; Exact mapped bytes 74 0E: je 0x588c63ab
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
        ; Exact mapped bytes 74 0E: je 0x588c63c3
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
        ; Exact mapped bytes 74 0E: je 0x588c63db
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0c8h], ebx
        mov ecx, dword ptr [esi + 0dch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588c63f3
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0dch], ebx
        mov ecx, dword ptr [esi + 0e0h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588c640b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0e0h], ebx
        mov ecx, dword ptr [esi + 0b8h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588c6423
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0b8h], ebx
        mov ecx, esi
        mov dword ptr [esp + 20h], 0ffffffffh
        ; Exact mapped bytes E8 2E C9 03 00: call 0x58902d60
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xc9
        __asm _emit 0x03
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
