// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588AD8D0 .. +0x200 bytes.
extern "C" __declspec(naked) void FUN_588ad8d0() {
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
        mov edi, ecx
        mov dword ptr [esp + 14h], edi
        mov dword ptr [edi], 589a0828h
        mov ecx, dword ptr [edi + 74h]
        xor ebx, ebx
        mov dword ptr [esp + 20h], ebx
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x588ad919
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 74h], ebx
        mov ecx, dword ptr [edi + 78h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x588ad92b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 78h], ebx
        mov ecx, dword ptr [edi + 7ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x588ad93d
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 7ch], ebx
        mov ecx, dword ptr [edi + 80h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588ad955
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 80h], ebx
        mov ecx, dword ptr [edi + 84h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588ad96d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 84h], ebx
        mov ecx, dword ptr [edi + 2470h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588ad985
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 2470h], ebx
        lea esi, [edi + 2434h]
        mov ebp, 8
        mov ecx, dword ptr [esi - 4]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x588ad9a2
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi - 4], ebx
        mov ecx, dword ptr [esi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0A: je 0x588ad9b2
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi], ebx
        add esi, 8
        sub ebp, 1
        ; Exact mapped bytes 75 D6: jne 0x588ad990
        __asm _emit 0x75
        __asm _emit 0xd6
        mov ecx, dword ptr [edi + 60h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x588ad9cc
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 60h], ebx
        mov ecx, dword ptr [edi + 64h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x588ad9de
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 64h], ebx
        mov ecx, dword ptr [edi + 6ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x588ad9f0
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 6ch], ebx
        mov ecx, dword ptr [edi + 68h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x588ada02
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 68h], ebx
        mov ecx, dword ptr [edi + 88h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588ada1a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 88h], ebx
        lea esi, [edi + 20f8h]
        mov ebp, 64h
        mov ecx, dword ptr [esi + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x588ada3d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 190h], ebx
        mov ecx, dword ptr [esi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0A: je 0x588ada4d
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi], ebx
        add esi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 D0: jne 0x588ada25
        __asm _emit 0x75
        __asm _emit 0xd0
        lea esi, [edi + 8ch]
        mov ebp, 8
        mov ecx, dword ptr [esi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0A: je 0x588ada70
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi], ebx
        add esi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 E8: jne 0x588ada60
        __asm _emit 0x75
        __asm _emit 0xe8
        lea esi, [edi + 2418h]
        mov ebp, 3
        mov ecx, dword ptr [esi + 0ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x588ada95
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0ch], ebx
        mov ecx, dword ptr [esi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0A: je 0x588adaa5
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi], ebx
        add esi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 D6: jne 0x588ada83
        __asm _emit 0x75
        __asm _emit 0xd6
        mov ecx, edi
        mov dword ptr [esp + 20h], 0ffffffffh
        ; Exact mapped bytes E8 54 51 05 00: call 0x58902c10
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x51
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
