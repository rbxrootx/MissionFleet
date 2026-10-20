// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10071040 .. +0x39D bytes.
extern "C" __declspec(naked) void FUN_10071040_10071040() {
    __asm {
        push -1
        push 1016f6b8h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 210h
        push edi
        mov edi, ecx
        push 98h
        ; Exact mapped bytes E8 38 B7 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xb7
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        test eax, eax
        mov dword ptr [esp + 21ch], 0
        ; Exact mapped bytes 74 11: je 0x1007108f
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [esp + 224h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 C3 75 09 00: call 0x10108650
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x75
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10071091
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push ebx
        push esi
        push 0
        mov ecx, eax
        mov dword ptr [esp + 228h], 0ffffffffh
        mov dword ptr [edi + 104dch], eax
        ; Exact mapped bytes E8 E3 7E 09 00: call 0x10108f90
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x7e
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, eax
        test esi, esi
        mov dword ptr [esp + 1ch], esi
        ; Exact mapped bytes 0F 84 EE 02 00 00: je 0x100713a9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xee
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 104dch]
        xor ebx, ebx
        lea edx, [esp + 2ch]
        push ebx
        push edx
        mov byte ptr [esp + 14h], 1
        mov byte ptr [esp + 15h], 2
        mov byte ptr [esp + 16h], 3
        mov byte ptr [esp + 17h], 4
        mov byte ptr [esp + 18h], 5
        mov byte ptr [esp + 19h], 6
        mov dword ptr [esp + 1ch], ebx
        ; Exact mapped bytes E8 50 7E 09 00: call 0x10108f40
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x7e
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 0F 8E AE 02 00 00: jle 0x100713a9
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xae
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 230h]
        push ebp
        mov dword ptr [esp + 1ch], eax
        xor ebp, ebp
        lea ecx, [esp + 0ach]
        push ebp
        push ecx
        mov ecx, dword ptr [edi + 104dch]
        mov dword ptr [esp + 30h], ebp
        ; Exact mapped bytes E8 1F 7E 09 00: call 0x10108f40
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x7e
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 38h]
        test ecx, ecx
        ; Exact mapped bytes 0F 8E 51 02 00 00: jle 0x1007137d
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 24h], ebx
        mov ebx, dword ptr [esi]
        cmp ebx, -1
        ; Exact mapped bytes 0F 84 01 02 00 00: je 0x1007133c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 104dch]
        lea edx, [esp + 128h]
        push 0
        push edx
        ; Exact mapped bytes E8 F0 7D 09 00: call 0x10108f40
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x7d
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, dword ptr [eax + 40h]
        mov ecx, dword ptr [edi + 104dch]
        lea eax, [esp + 1a4h]
        push 0
        push eax
        imul esi, ebp
        ; Exact mapped bytes E8 D5 7D 09 00: call 0x10108f40
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x7d
        __asm _emit 0x09
        __asm _emit 0x00
        mov ebp, dword ptr [eax + 44h]
        imul ebp, dword ptr [esp + 18h]
        cmp ebx, 8
        ; Exact mapped bytes 0F 8C CC 00 00 00: jl 0x10071248
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, 10h
        ; Exact mapped bytes 0F 8D C8 00 00 00: jge 0x1007124d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0e8h
        ; Exact mapped bytes E8 11 B6 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xb6
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov dword ptr [esp + 228h], 1
        ; Exact mapped bytes 74 1A: je 0x100711bf
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [edi + 104e0h]
        push 40h
        push 0
        push 0
        push ebp
        push esi
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 75 57 FA FF: call 0x10016930
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x57
        __asm _emit 0xfa
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes EB 02: jmp 0x100711c1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov edx, dword ptr [esi]
        xor eax, eax
        mov dword ptr [esi + 84h], eax
        mov dword ptr [esi + 8ch], eax
        lea eax, [esp + 10h]
        mov ecx, esi
        push eax
        mov dword ptr [esp + 22ch], 0ffffffffh
        ; Exact mapped bytes FF 52 1C: call dword ptr [edx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x1c
        cmp ebx, 0fh
        push 0b4h
        ; Exact mapped bytes 75 27: jne 0x10071217
        __asm _emit 0x75
        __asm _emit 0x27
        mov ecx, dword ptr [esp + 20h]
        mov edx, dword ptr [esp + 2ch]
        lea eax, [ecx + edx]
        xor edx, edx
        ; Exact mapped bytes F7 35 5C 45 1C 10: div dword ptr [0x101c455c]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x5c
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes A1 64 45 1C 10: mov eax, dword ptr [0x101c4564]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, 3
        mov eax, dword ptr [eax + edx*4]
        xor edx, edx
        div ecx
        push edx
        ; Exact mapped bytes EB 02: jmp 0x10071219
        __asm _emit 0xeb
        __asm _emit 0x02
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 F0 5C FA FF: call 0x10016f10
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x5c
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [esp + 24h]
        xor edx, edx
        ; Exact mapped bytes F7 35 5C 45 1C 10: div dword ptr [0x101c455c]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x5c
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes A1 64 45 1C 10: mov eax, dword ptr [0x101c4564]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, 0c8h
        mov eax, dword ptr [eax + edx*4]
        xor edx, edx
        div ecx
        mov dword ptr [esi + 0d4h], edx
        ; Exact mapped bytes E9 E8 00 00 00: jmp 0x10071330
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, 10h
        ; Exact mapped bytes 7C 70: jl 0x100712bd
        __asm _emit 0x7c
        __asm _emit 0x70
        cmp ebx, 18h
        ; Exact mapped bytes 7D 70: jge 0x100712c2
        __asm _emit 0x7d
        __asm _emit 0x70
        push 0e0h
        ; Exact mapped bytes E8 44 B5 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xb5
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        xor ebx, ebx
        mov dword ptr [esp + 228h], 2
        cmp eax, ebx
        ; Exact mapped bytes 74 18: je 0x1007128c
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [edi + 104e0h]
        push 40h
        push ebx
        push ebx
        push ebp
        push esi
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 38 99 FB FF: call 0x1002abc0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x99
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes EB 02: jmp 0x1007128e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov eax, dword ptr [esi]
        lea ecx, [esp + 10h]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 22ch], 0ffffffffh
        mov dword ptr [esi + 84h], ebx
        mov dword ptr [esi + 8ch], ebx
        ; Exact mapped bytes FF 50 1C: call dword ptr [eax + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x1c
        push ebx
        push 64h
        mov ecx, esi
        ; Exact mapped bytes E8 C5 9D FB FF: call 0x1002b080
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x9d
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 73: jmp 0x10071330
        __asm _emit 0xeb
        __asm _emit 0x73
        cmp ebx, 18h
        ; Exact mapped bytes 7C 7A: jl 0x1007133c
        __asm _emit 0x7c
        __asm _emit 0x7a
        cmp ebx, 20h
        ; Exact mapped bytes 7D 75: jge 0x1007133c
        __asm _emit 0x7d
        __asm _emit 0x75
        push 238h
        ; Exact mapped bytes E8 CF B4 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xb4
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        xor ebx, ebx
        mov dword ptr [esp + 228h], 3
        cmp eax, ebx
        ; Exact mapped bytes 74 18: je 0x10071301
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [edi + 104e0h]
        push 40h
        push ebx
        push ebx
        push ebp
        push esi
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 93 B7 08 00: call 0x100fca90
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xb7
        __asm _emit 0x08
        __asm _emit 0x00
        mov esi, eax
        ; Exact mapped bytes EB 02: jmp 0x10071303
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov eax, dword ptr [esi]
        lea ecx, [esp + 10h]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 22ch], 0ffffffffh
        mov dword ptr [esi + 84h], ebx
        mov dword ptr [esi + 8ch], ebx
        ; Exact mapped bytes FF 50 1C: call dword ptr [eax + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x1c
        push ebx
        push 64h
        mov ecx, esi
        ; Exact mapped bytes E8 70 B9 08 00: call 0x100fcca0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xb9
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 104e0h]
        push esi
        ; Exact mapped bytes E8 64 D9 FD FF: call 0x1004eca0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xd9
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 24h]
        mov esi, dword ptr [esp + 20h]
        mov ebp, dword ptr [esp + 28h]
        add ecx, 14h
        add esi, 14h
        lea edx, [esp + 0ach]
        inc ebp
        mov dword ptr [esp + 24h], ecx
        mov ecx, dword ptr [edi + 104dch]
        push 0
        push edx
        mov dword ptr [esp + 28h], esi
        mov dword ptr [esp + 30h], ebp
        ; Exact mapped bytes E8 D0 7B 09 00: call 0x10108f40
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x7b
        __asm _emit 0x09
        __asm _emit 0x00
        cmp ebp, dword ptr [eax + 38h]
        ; Exact mapped bytes 0F 8C B7 FD FF FF: jl 0x10071130
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xb7
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [esp + 18h]
        mov eax, dword ptr [esp + 1ch]
        mov ecx, dword ptr [edi + 104dch]
        add eax, 64h
        inc ebx
        mov dword ptr [esp + 1ch], eax
        lea eax, [esp + 30h]
        push 0
        push eax
        mov dword ptr [esp + 20h], ebx
        ; Exact mapped bytes E8 A1 7B 09 00: call 0x10108f40
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x7b
        __asm _emit 0x09
        __asm _emit 0x00
        cmp ebx, dword ptr [eax + 3ch]
        ; Exact mapped bytes 0F 8C 5F FD FF FF: jl 0x10071107
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x5f
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebp
        mov ecx, dword ptr [edi + 104dch]
        pop esi
        test ecx, ecx
        pop ebx
        ; Exact mapped bytes 74 10: je 0x100713c5
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 104dch], 0
        mov ecx, dword ptr [esp + 214h]
        pop edi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 21ch
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
