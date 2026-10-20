// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10029360 .. +0x2CB bytes.
extern "C" __declspec(naked) void FUN_10029360_10029360() {
    __asm {
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push -1
        push 1016dab1h
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        mov ebx, ecx
        push esi
        push edi
        mov eax, dword ptr [ebx + 0a4h]
        and eax, 0fffffffeh
        ; Exact mapped bytes 0F 84 2E 01 00 00: je 0x100294b7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 0F 85 9B 00 00 00: jne 0x1002942d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, 0eh
        mov edi, 14h
        cmp dword ptr [esp + 1ch], 1
        ; Exact mapped bytes 75 34: jne 0x100293d7
        __asm _emit 0x75
        __asm _emit 0x34
        mov ecx, dword ptr [ebx + 3cch]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x100293bd
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 3cch], 0
        mov ecx, dword ptr [ebx + 3d0h]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x100293d7
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 3d0h], 0
        push 20h
        ; Exact mapped bytes E8 C2 33 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x33
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 1ch], eax
        test eax, eax
        mov dword ptr [esp + 14h], 1
        ; Exact mapped bytes 0F 84 91 01 00 00: je 0x10029586
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 58 1C 10: mov ecx, dword ptr [0x101c58f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 170h], esi
        ; Exact mapped bytes 0F 8E 73 01 00 00: jle 0x1002957a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 0F 8C 6B 01 00 00: jl 0x1002957a
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 194h]
        test edx, edx
        ; Exact mapped bytes 0F 84 5D 01 00 00: je 0x1002957a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edx + esi*4]
        mov ecx, eax
        push edx
        ; Exact mapped bytes E8 D8 F4 01 00: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 5B 01 00 00: jmp 0x10029588
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 6
        ; Exact mapped bytes 72 38: jb 0x1002946a
        __asm _emit 0x72
        __asm _emit 0x38
        cmp eax, 3ah
        ; Exact mapped bytes 77 33: ja 0x1002946a
        __asm _emit 0x77
        __asm _emit 0x33
        ; Exact mapped bytes 8B 3D 20 51 17 10: mov edi, dword ptr [0x10175120]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov esi, eax
        and esi, 80000001h
        ; Exact mapped bytes 79 05: jns 0x1002944e
        __asm _emit 0x79
        __asm _emit 0x05
        dec esi
        or esi, 0fffffffeh
        inc esi
        add esi, 0fh
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov edi, eax
        and edi, 80000001h
        ; Exact mapped bytes 79 05: jns 0x10029462
        __asm _emit 0x79
        __asm _emit 0x05
        dec edi
        or edi, 0fffffffeh
        inc edi
        add edi, 15h
        ; Exact mapped bytes E9 32 FF FF FF: jmp 0x1002939c
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 3ch
        ; Exact mapped bytes 72 2D: jb 0x1002949c
        __asm _emit 0x72
        __asm _emit 0x2d
        cmp eax, 70h
        ; Exact mapped bytes 77 28: ja 0x1002949c
        __asm _emit 0x77
        __asm _emit 0x28
        cmp eax, 3eh
        ; Exact mapped bytes 72 14: jb 0x1002948d
        __asm _emit 0x72
        __asm _emit 0x14
        cmp eax, 50h
        ; Exact mapped bytes 77 0F: ja 0x1002948d
        __asm _emit 0x77
        __asm _emit 0x0f
        mov esi, 12h
        mov edi, 18h
        ; Exact mapped bytes E9 0F FF FF FF: jmp 0x1002939c
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, 13h
        mov edi, 19h
        ; Exact mapped bytes E9 00 FF FF FF: jmp 0x1002939c
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 72h
        ; Exact mapped bytes 72 16: jb 0x100294b7
        __asm _emit 0x72
        __asm _emit 0x16
        cmp eax, 96h
        ; Exact mapped bytes 77 0F: ja 0x100294b7
        __asm _emit 0x77
        __asm _emit 0x0f
        mov esi, 11h
        mov edi, 17h
        ; Exact mapped bytes E9 E5 FE FF FF: jmp 0x1002939c
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 20h
        ; Exact mapped bytes E8 E2 32 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x32
        __asm _emit 0x14
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 1ch], esi
        xor edi, edi
        cmp esi, edi
        mov dword ptr [esp + 14h], edi
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x10029558
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 20 51 17 10: call dword ptr [0x10175120]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x100294e7
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        ; Exact mapped bytes 8B 0D F4 57 1C 10: mov ecx, dword ptr [0x101c57f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 170h], eax
        ; Exact mapped bytes 7E 39: jle 0x1002952e
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp eax, edi
        ; Exact mapped bytes 7C 35: jl 0x1002952e
        __asm _emit 0x7c
        __asm _emit 0x35
        mov ecx, dword ptr [ecx + 194h]
        cmp ecx, edi
        ; Exact mapped bytes 74 2B: je 0x1002952e
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [ecx + eax*4]
        mov ecx, esi
        push eax
        ; Exact mapped bytes E8 F2 F3 01 00: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xf3
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebx + 3cch], eax
        mov dword ptr [ebx + 3d0h], edi
        mov ecx, dword ptr [esp + 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 0ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor eax, eax
        mov ecx, esi
        push eax
        ; Exact mapped bytes E8 C8 F3 01 00: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xf3
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebx + 3cch], eax
        mov dword ptr [ebx + 3d0h], edi
        mov ecx, dword ptr [esp + 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 0ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [ebx + 3d0h], edi
        mov dword ptr [ebx + 3cch], eax
        mov ecx, dword ptr [esp + 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 0ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor edx, edx
        mov ecx, eax
        push edx
        ; Exact mapped bytes E8 7C F3 01 00: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xf3
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10029588
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        or esi, 0ffffffffh
        push 20h
        mov dword ptr [esp + 18h], esi
        mov dword ptr [ebx + 3cch], eax
        ; Exact mapped bytes E8 04 32 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x32
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 1ch], eax
        test eax, eax
        mov dword ptr [esp + 14h], 2
        ; Exact mapped bytes 74 35: je 0x100295e4
        __asm _emit 0x74
        __asm _emit 0x35
        ; Exact mapped bytes 8B 0D F4 58 1C 10: mov ecx, dword ptr [0x101c58f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 170h], edi
        ; Exact mapped bytes 7E 1B: jle 0x100295d8
        __asm _emit 0x7e
        __asm _emit 0x1b
        test edi, edi
        ; Exact mapped bytes 7C 17: jl 0x100295d8
        __asm _emit 0x7c
        __asm _emit 0x17
        mov ecx, dword ptr [ecx + 194h]
        test ecx, ecx
        ; Exact mapped bytes 74 0D: je 0x100295d8
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ecx + edi*4]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 2A F3 01 00: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xf3
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x100295e6
        __asm _emit 0xeb
        __asm _emit 0x0e
        xor ecx, ecx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 1E F3 01 00: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xf3
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100295e6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebx + 3d0h], eax
        mov eax, dword ptr [ebx + 0a4h]
        and al, 0feh
        mov dword ptr [esp + 14h], esi
        cmp eax, 2
        ; Exact mapped bytes 75 1A: jne 0x10029617
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [ebx + 3cch]
        push 0
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        mov ecx, dword ptr [ebx + 3d0h]
        push 0
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        mov ecx, dword ptr [esp + 0ch]
        pop edi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebx
        add esp, 0ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
