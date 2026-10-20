// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58522DB0 .. +0x29E bytes.
extern "C" __declspec(naked) void FUN_58522db0_58522DB0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58881a03h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 2ch
        push esi
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
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 6ch], 0
        ; Exact mapped bytes 75 74: jne 0x58522e56
        __asm _emit 0x75
        __asm _emit 0x74
        push 30h
        ; Exact mapped bytes E8 1B E2 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xe2
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 26: je 0x58522e22
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        movzx edx, byte ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 23 FE FF FF: call 0x58522c40
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x58522e29
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [edx + 70h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 6ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [eax + 68h], ecx
        ; Exact mapped bytes E9 AA 00 00 00: jmp 0x58522f00
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 30h], eax
        push 30h
        ; Exact mapped bytes E8 9E E1 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xe1
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 26: je 0x58522e9f
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        movzx edx, byte ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 A6 FD FF FF: call 0x58522c40
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x58522ea6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 2ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 11 FD FF FF: call 0x58522bd0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 65 4B F6 FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x4b
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 4D C6 F7 FF: call 0x5849f530
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xc6
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes E8 42 4B F6 FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x4b
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 6ch], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [eax + 70h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 58h]
        add ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 58h], ecx
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F6 2A F7 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x2a
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 50: je 0x58522f6e
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 97 3A F6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x3a
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 41: je 0x58522f6e
        __asm _emit 0x74
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 70h]
        ; Exact mapped bytes E8 98 28 F7 FF: call 0x584957d0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x28
        __asm _emit 0xf7
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7B 3A F6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x3a
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F4 94 F6 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x94
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AD 8F F6 FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x8f
        __asm _emit 0xf6
        __asm _emit 0xff
        movzx ecx, word ptr [eax]
        cmp esi, ecx
        ; Exact mapped bytes 74 12: je 0x58522f6c
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 6ch]
        push eax
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 05 01 00 00: call 0x58523070
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 12: jmp 0x58522f80
        __asm _emit 0xeb
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 6ch]
        push edx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F1 00 00 00: call 0x58523070
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        movzx eax, byte ptr [ebp + 20h]
        cmp eax, 9
        ; Exact mapped bytes 74 74: je 0x58522ffd
        __asm _emit 0x74
        __asm _emit 0x74
        movzx ecx, byte ptr [ebp + 20h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        sub edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 7
        ; Exact mapped bytes 77 5E: ja 0x58522ffd
        __asm _emit 0x77
        __asm _emit 0x5e
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 24 85 50 30 52 58: jmp dword ptr [eax*4 + 0x58523050]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x30
        __asm _emit 0x52
        __asm _emit 0x58
        movzx ecx, byte ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 10h]
        movzx eax, byte ptr [edx + ecx + 4]
        add eax, 1
        movzx ecx, byte ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + ecx + 4], al
        ; Exact mapped bytes EB 77: jmp 0x5852303c
        __asm _emit 0xeb
        __asm _emit 0x77
        movzx eax, byte ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, byte ptr [ecx + eax + 0eh]
        add edx, 1
        movzx eax, byte ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + eax + 0eh], dl
        ; Exact mapped bytes EB 5B: jmp 0x5852303c
        __asm _emit 0xeb
        __asm _emit 0x5b
        movzx edx, byte ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, byte ptr [eax + edx + 18h]
        add ecx, 1
        movzx edx, byte ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 10h]
        mov byte ptr [eax + edx + 18h], cl
        ; Exact mapped bytes EB 3F: jmp 0x5852303c
        __asm _emit 0xeb
        __asm _emit 0x3f
        movzx ecx, byte ptr [ebp + 0ch]
        cmp ecx, 10h
        ; Exact mapped bytes 7D 1C: jge 0x58523022
        __asm _emit 0x7d
        __asm _emit 0x1c
        movzx edx, byte ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, byte ptr [eax + edx + 4]
        add ecx, 1
        movzx edx, byte ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 10h]
        mov byte ptr [eax + edx + 4], cl
        ; Exact mapped bytes EB 1A: jmp 0x5852303c
        __asm _emit 0xeb
        __asm _emit 0x1a
        movzx ecx, byte ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 10h]
        movzx eax, byte ptr [edx + ecx - 2]
        add eax, 1
        movzx ecx, byte ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + ecx - 2], al
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
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
