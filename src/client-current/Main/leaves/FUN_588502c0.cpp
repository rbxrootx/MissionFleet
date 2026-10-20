// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588502C0 .. +0x1D7 bytes.
extern "C" __declspec(naked) void FUN_588502c0() {
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
        mov dword ptr [esp + 14h], ecx
        mov dword ptr [ecx], 5899e8e0h
        xor ebp, ebp
        mov dword ptr [esp + 20h], ebp
        lea esi, [ecx + 244h]
        lea ebx, [ebp + 6]
        mov edi, edi
        mov edi, 2
        mov ecx, dword ptr [esi - 30h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0B: je 0x58850317
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi - 30h], ebp
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0A: je 0x58850327
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
        sub edi, 1
        ; Exact mapped bytes 75 D6: jne 0x58850305
        __asm _emit 0x75
        __asm _emit 0xd6
        sub ebx, 1
        ; Exact mapped bytes 75 CC: jne 0x58850300
        __asm _emit 0x75
        __asm _emit 0xcc
        mov esi, dword ptr [esp + 14h]
        add esi, 19ch
        lea ebx, [edi + 0fh]
        mov edi, 2
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0A: je 0x58850356
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
        sub edi, 1
        ; Exact mapped bytes 75 E8: jne 0x58850346
        __asm _emit 0x75
        __asm _emit 0xe8
        sub ebx, 1
        ; Exact mapped bytes 75 DE: jne 0x58850341
        __asm _emit 0x75
        __asm _emit 0xde
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [eax + 184h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 12: je 0x58850383
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [ecx + 184h], ebp
        mov esi, dword ptr [esp + 14h]
        add esi, 64h
        mov ebx, 0fh
        nop
        mov edi, 3
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0A: je 0x588503a5
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [esi], ebp
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 E8: jne 0x58850395
        __asm _emit 0x75
        __asm _emit 0xe8
        sub ebx, 1
        ; Exact mapped bytes 75 DE: jne 0x58850390
        __asm _emit 0x75
        __asm _emit 0xde
        mov esi, dword ptr [esp + 14h]
        add esi, 118h
        lea edi, [ebx + 0fh]
        nop
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0A: je 0x588503d0
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [esi], ebp
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 E8: jne 0x588503c0
        __asm _emit 0x75
        __asm _emit 0xe8
        mov esi, dword ptr [esp + 14h]
        add esi, 154h
        lea ebx, [edi + 6]
        mov edi, 2
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0A: je 0x58850400
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [esi], ebp
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 E8: jne 0x588503f0
        __asm _emit 0x75
        __asm _emit 0xe8
        sub ebx, 1
        ; Exact mapped bytes 75 D8: jne 0x588503e5
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [esp + 14h]
        mov ecx, dword ptr [ecx + 188h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 12: je 0x5885042d
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [ecx + 188h], ebp
        mov esi, dword ptr [esp + 14h]
        add esi, 18ch
        mov edi, 2
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0A: je 0x58850450
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [esi], ebp
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 E8: jne 0x58850440
        __asm _emit 0x75
        __asm _emit 0xe8
        mov ecx, dword ptr [esp + 14h]
        mov ecx, dword ptr [ecx + 60h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0F: je 0x58850472
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [ecx + 60h], ebp
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [esp + 20h], 0ffffffffh
        ; Exact mapped bytes E8 8D 27 0B 00: call 0x58902c10
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x27
        __asm _emit 0x0b
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
