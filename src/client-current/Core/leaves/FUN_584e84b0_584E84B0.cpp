// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E84B0 .. +0x1B9 bytes.
extern "C" __declspec(naked) void FUN_584e84b0_584E84B0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887f759h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 2ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 70h], 0
        ; Exact mapped bytes 75 17: jne 0x584e84f8
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 74h], 0
        ; Exact mapped bytes 75 09: jne 0x584e84f3
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 3E 0C 00 00: call 0x584e9130
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 62 01 00 00: jmp 0x584e865a
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 40 FE FF FF: call 0x584e8340
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 0dh], al
        movzx edx, byte ptr [ebp - 0dh]
        cmp edx, 1
        ; Exact mapped bytes 0F 8C 4A 01 00 00: jl 0x584e865a
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ebp - 0dh]
        cmp eax, 3
        ; Exact mapped bytes 0F 8F 3D 01 00 00: jg 0x584e865a
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 50h], 0
        ; Exact mapped bytes 75 50: jne 0x584e8576
        __asm _emit 0x75
        __asm _emit 0x50
        push 198h
        ; Exact mapped bytes E8 D4 8A 34 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x8a
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 16: je 0x584e8559
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 588a1b5ch
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 5C 7E 29 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x7e
        __asm _emit 0x29
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x584e8560
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 28h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [eax + 50h], ecx
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 54h], 0
        ; Exact mapped bytes 0F 85 A5 00 00 00: jne 0x584e8628
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 8ch
        ; Exact mapped bytes E8 77 8A 34 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x8a
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 44: je 0x584e85e4
        __asm _emit 0x74
        __asm _emit 0x44
        push 7d00h
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 8]
        add ecx, 0aah
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4]
        add eax, 1aeh
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 50h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 31 42 00 00: call 0x584ec810
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x584e85eb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 2ch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [eax + 54h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [ebp - 30h], eax
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 2C D8 F9 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xd8
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [ebp - 34h], edx
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 79 D7 F9 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xd7
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ebp - 38h], ecx
        movzx edx, byte ptr [ebp - 0dh]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 82 50 00 00: call 0x584ed6c0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 54h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 54h]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 14h]
        mov cl, byte ptr [ebp - 0dh]
        mov byte ptr [eax + 7ah], cl
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
