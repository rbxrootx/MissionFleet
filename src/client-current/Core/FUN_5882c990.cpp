// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882C990 .. +0x2AF bytes.
extern "C" __declspec(naked) void FUN_5882c990() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 80h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 54h], ecx
        mov eax, dword ptr [ebp - 54h]
        cmp dword ptr [eax + 4], -1
        ; Exact mapped bytes 0F 84 7A 02 00 00: je 0x5882cc2d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 54h]
        cmp dword ptr [ecx + 44h], 0
        ; Exact mapped bytes 0F 84 C6 01 00 00: je 0x5882cb86
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 58h], 0
        mov dword ptr [ebp - 3ch], 1020304h
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 2ch], edx
        lea eax, [ebp - 3ch]
        mov dword ptr [ebp - 68h], eax
        cmp dword ptr [ebp + 8], 8002000fh
        ; Exact mapped bytes 75 0C: jne 0x5882ca01
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 58h], 8002000fh
        ; Exact mapped bytes E9 AA 00 00 00: jmp 0x5882caab
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5882ca13
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 5ch]
        add ecx, 1
        mov dword ptr [ebp - 5ch], ecx
        cmp dword ptr [ebp - 5ch], 14h
        ; Exact mapped bytes 73 1B: jae 0x5882ca34
        __asm _emit 0x73
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 68h]
        add edx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        add eax, 0dh
        imul ecx, dword ptr [ebp - 5ch], 0bh
        imul eax, ecx
        add eax, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB D6: jmp 0x5882ca0a
        __asm _emit 0xeb
        __asm _emit 0xd6
        mov dword ptr [ebp - 60h], 0
        ; Exact mapped bytes EB 09: jmp 0x5882ca46
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 60h]
        add edx, 1
        mov dword ptr [ebp - 60h], edx
        mov eax, dword ptr [ebp - 60h]
        cmp eax, dword ptr [ebp + 18h]
        ; Exact mapped bytes 73 1B: jae 0x5882ca69
        __asm _emit 0x73
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp + 14h]
        add ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        add edx, 1dh
        imul eax, dword ptr [ebp - 60h], 7
        imul edx, eax
        add edx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 58h], edx
        ; Exact mapped bytes EB D4: jmp 0x5882ca3d
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov ecx, dword ptr [ebp - 54h]
        cmp dword ptr [ecx + 4ch], 0
        ; Exact mapped bytes 74 2D: je 0x5882ca9f
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [ebp - 58h]
        imul eax, dword ptr [edx + 58h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        mov ecx, dword ptr [ecx + 40h]
        ; Exact mapped bytes E8 28 F2 C5 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xf2
        __asm _emit 0xc5
        __asm _emit 0xff
        xor eax, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 58h], eax
        mov edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [edx + 58h]
        add eax, 11h
        mov ecx, dword ptr [ebp - 54h]
        mov dword ptr [ecx + 58h], eax
        ; Exact mapped bytes EB 0C: jmp 0x5882caab
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 58h]
        xor edx, 7c8ba106h
        mov dword ptr [ebp - 58h], edx
        mov dword ptr [ebp - 64h], 3
        mov eax, 8
        imul ecx, eax, 0
        lea edx, [ebp - 3ch]
        mov dword ptr [ebp + ecx - 18h], edx
        mov eax, 8
        imul ecx, eax, 0
        mov dword ptr [ebp + ecx - 1ch], 14h
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp + edx - 18h], eax
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [ebp + ecx - 1ch], edx
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 1F: je 0x5882cb14
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, 8
        shl eax, 1
        lea ecx, [ebp - 58h]
        mov dword ptr [ebp + eax - 18h], ecx
        mov edx, 8
        shl edx, 1
        mov dword ptr [ebp + edx - 1ch], 4
        ; Exact mapped bytes EB 26: jmp 0x5882cb3a
        __asm _emit 0xeb
        __asm _emit 0x26
        mov dword ptr [ebp - 64h], 2
        mov eax, 8
        shl eax, 0
        lea ecx, [ebp - 58h]
        mov dword ptr [ebp + eax - 18h], ecx
        mov edx, 8
        shl edx, 0
        mov dword ptr [ebp + edx - 1ch], 4
        push 0
        mov eax, dword ptr [ebp - 54h]
        add eax, 8
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        lea edx, [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 64h]
        push eax
        lea ecx, [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 30 45 89 58: call dword ptr [0x58894530]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, -1
        ; Exact mapped bytes 75 1C: jne 0x5882cb81
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes FF 15 3C 45 89 58: call dword ptr [0x5889453c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 3e5h
        ; Exact mapped bytes 74 0F: je 0x5882cb81
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 C6 F8 FF FF: call 0x5882c440
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 AE 00 00 00: jmp 0x5882cc2f
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 9E 00 00 00: jmp 0x5882cc24
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 50h], 1020304h
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 40h], ecx
        mov edx, 8
        imul eax, edx, 0
        lea ecx, [ebp - 50h]
        mov dword ptr [ebp + eax - 74h], ecx
        mov edx, 8
        imul eax, edx, 0
        mov dword ptr [ebp + eax - 78h], 14h
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ebp + ecx - 74h], edx
        mov eax, 8
        shl eax, 0
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [ebp + eax - 78h], ecx
        push 0
        mov edx, dword ptr [ebp - 54h]
        add edx, 8
        push edx
        mov eax, dword ptr [ebp + 1ch]
        push eax
        lea ecx, [ebp - 80h]
        push ecx
        push 2
        lea edx, [ebp - 78h]
        push edx
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 30 45 89 58: call dword ptr [0x58894530]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, -1
        ; Exact mapped bytes 75 19: jne 0x5882cc24
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes FF 15 3C 45 89 58: call dword ptr [0x5889453c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 3e5h
        ; Exact mapped bytes 74 0C: je 0x5882cc24
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 20 F8 FF FF: call 0x5882c440
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 0B: jmp 0x5882cc2f
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, 1
        ; Exact mapped bytes EB 04: jmp 0x5882cc2f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 02: jmp 0x5882cc2f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 17 44 00 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
