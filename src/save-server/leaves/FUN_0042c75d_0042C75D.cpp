// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042C75D .. +0x462 bytes.
extern "C" __declspec(naked) void FUN_0042c75d_0042C75D() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58b87eh
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
        sub esp, 24h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 28h], ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 D3 2A 0A 00: call 0x4cf277
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x2a
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 0bach
        ; Exact mapped bytes E8 9F 8C 0F 00: call 0x525458
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x8c
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 0c30h
        ; Exact mapped bytes E8 09 1A 00 00: call 0x42e1d0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        push 8000h
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 40c30h
        ; Exact mapped bytes E8 72 1B 00 00: call 0x42e350
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        push 10000h
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 40c58h
        ; Exact mapped bytes E8 FB 1C 00 00: call 0x42e4f0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax], 634430h
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 0c28h], 0
        push 5ah
        push 670878h
        push 1ch
        ; Exact mapped bytes E8 B6 F8 09 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xf8
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 12: je 0x42c83f
        __asm _emit 0x74
        __asm _emit 0x12
        push 10000h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 B6 1C 00 00: call 0x42e4f0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x42c846
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 14h], edx
        mov byte ptr [ebp - 4], 3
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax + 40c50h], ecx
        push 5bh
        push 670878h
        push 1ch
        ; Exact mapped bytes E8 69 F8 09 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xf8
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 12: je 0x42c88c
        __asm _emit 0x74
        __asm _emit 0x12
        push 10000h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 69 1C 00 00: call 0x42e4f0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x42c893
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 1ch], edx
        mov byte ptr [ebp - 4], 3
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [eax + 40c54h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 40h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 58h], 0ffffffffh
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 5ch], eax
        lea ecx, [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 E9 5C 07 00: call 0x4a25b7
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0x07
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 0bach
        ; Exact mapped bytes E8 BB 8B 0F 00: call 0x525498
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x8b
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 54h], 1
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + 68h], 0
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x42c903
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0b4h
        ; Exact mapped bytes 7D 46: jge 0x42c952
        __asm _emit 0x7d
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 10h]
        shl edx, 4
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + edx + 6ch], 0
        mov ecx, dword ptr [ebp - 10h]
        shl ecx, 4
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + ecx + 70h], 0
        mov eax, dword ptr [ebp - 10h]
        shl eax, 4
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + eax + 74h], 0
        mov edx, dword ptr [ebp - 10h]
        shl edx, 4
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + edx + 78h], 0
        ; Exact mapped bytes EB A8: jmp 0x42c8fa
        __asm _emit 0xeb
        __asm _emit 0xa8
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 0bb0h], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 0bb4h], 0
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + 0bb8h], 0
        mov dword ptr [eax + 0bbch], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 0bc0h], 0
        mov dword ptr [ecx + 0bc4h], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 0bc8h], 0
        mov dword ptr [edx + 0bcch], 0
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + 0bd0h], 0
        mov dword ptr [eax + 0bd4h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 0bd8h], 0
        mov dword ptr [ecx + 0bdch], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 0be0h], 0
        mov dword ptr [edx + 0be4h], 0
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + 0be8h], 0
        mov dword ptr [eax + 0bech], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 0bf0h], 0
        mov dword ptr [ecx + 0bf4h], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 0bf8h], 0
        mov dword ptr [edx + 0bfch], 0
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + 0c00h], 0
        mov dword ptr [eax + 0c04h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 0c08h], 0
        mov dword ptr [ecx + 0c0ch], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 0c10h], 0
        mov dword ptr [edx + 0c14h], 0
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + 0c18h], 0
        mov dword ptr [eax + 0c1ch], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 0c20h], 0
        mov dword ptr [ecx + 0c24h], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 48h], 0
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + 4ch], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 3ch], 0
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        push 670900h
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 1A 4C 0A 00: call 0x4d1708
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x4c
        __asm _emit 0x0a
        __asm _emit 0x00
        push eax
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 13 39 0A 00: call 0x4d040c
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x39
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 3A: je 0x42cb37
        __asm _emit 0x74
        __asm _emit 0x3a
        mov esi, esp
        push 1
        push 0
        push 0
        push 0
        push 1
        push 2
        ; Exact mapped bytes FF 15 58 C1 68 00: call dword ptr [0x68c158]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D8 82 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x82
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 58h], eax
        mov eax, dword ptr [ebp - 28h]
        cmp dword ptr [eax + 58h], -1
        ; Exact mapped bytes 75 0E: jne 0x42cb35
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        push 0
        push 67091ch
        ; Exact mapped bytes E8 AC 9F 0C 00: call 0x4f6ae1
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x9f
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x42cb45
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 0
        push 0
        push 670930h
        ; Exact mapped bytes E8 9C 9F 0C 00: call 0x4f6ae1
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x9f
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 50h], edx
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + 44h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 40c4ch], 0
        mov edx, dword ptr [ebp - 28h]
        add edx, 4ch
        mov esi, esp
        push edx
        push 1
        mov eax, dword ptr [ebp - 28h]
        push eax
        push 42c603h
        push 0
        push 0
        ; Exact mapped bytes FF 15 30 BA 68 00: call dword ptr [0x68ba30]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 66 82 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x82
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 48h], eax
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 64h], 3e8h
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        add esp, 30h
        cmp ebp, esp
        ; Exact mapped bytes E8 37 82 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x82
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
