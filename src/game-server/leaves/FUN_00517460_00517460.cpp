// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00517460 .. +0x25F bytes.
extern "C" __declspec(naked) void FUN_00517460_00517460() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        push esi
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 BC 23 5E 00: call dword ptr [0x5e23bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 07: jne 0x517485
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 33 02 00 00: jmp 0x5176b8
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes FF 15 B4 23 5E 00: call dword ptr [0x5e23b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 75 07: jne 0x51749f
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 19 02 00 00: jmp 0x5176b8
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 10h
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax]
        add ecx, 40h
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 56 2D F9 FF: call 0x4aa210
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x2d
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x5174cd
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 EB 01 00 00: jmp 0x5176b8
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 42 1B F9 FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x1b
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [eax]
        mov dword ptr [ebp - 28h], ecx
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x5174fe
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        cmp dword ptr [ebp - 20h], 10h
        ; Exact mapped bytes 0F 8D C6 00 00 00: jge 0x5175ce
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes EB 09: jmp 0x51751a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 30h]
        add eax, 1
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 4
        ; Exact mapped bytes 0F 83 A5 00 00 00: jae 0x5175c9
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [edx + ecx*4]
        cmp ecx, dword ptr [eax*8 + 5858d0h]
        ; Exact mapped bytes 0F 85 87 00 00 00: jne 0x5175c4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 1C: je 0x51755f
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 30h]
        cmp dword ptr [edx*8 + 5858d4h], 12h
        ; Exact mapped bytes 74 0D: je 0x51755d
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + eax*4], 0ffffffh
        ; Exact mapped bytes EB 63: jmp 0x5175c2
        __asm _emit 0xeb
        __asm _emit 0x63
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx*8 + 5858d4h]
        push eax
        ; Exact mapped bytes FF 15 80 25 5E 00: call dword ptr [0x5e2580]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov esi, eax
        shr esi, 10h
        and esi, 0ffh
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx*8 + 5858d4h]
        push edx
        ; Exact mapped bytes FF 15 80 25 5E 00: call dword ptr [0x5e2580]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 0ffffh
        sar eax, 8
        and eax, 0ffh
        shl eax, 8
        or esi, eax
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax*8 + 5858d4h]
        push ecx
        ; Exact mapped bytes FF 15 80 25 5E 00: call dword ptr [0x5e2580]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 0ffh
        shl eax, 10h
        or esi, eax
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + edx*4], esi
        ; Exact mapped bytes EB 05: jmp 0x5175c9
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 48 FF FF FF: jmp 0x517511
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 27 FF FF FF: jmp 0x5174f5
        __asm _emit 0xe9
        __asm _emit 0x27
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 18h], ecx
        push 0
        ; Exact mapped bytes FF 15 6C 27 5E 00: call dword ptr [0x5e276c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 B4 21 5E 00: call dword ptr [0x5e21b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x517693
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 00 21 5E 00: call dword ptr [0x5e2100]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        ; Exact mapped bytes FF 15 D4 1E 5E 00: call dword ptr [0x5e1ed4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        mov edx, dword ptr [ebp - 2ch]
        add edx, 28h
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        mov edx, 1
        shl edx, cl
        mov eax, dword ptr [ebp - 34h]
        lea ecx, [eax + edx*4]
        mov dword ptr [ebp - 34h], ecx
        push 0cc0020h
        push 0
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        push 0
        push 0
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        push 0
        push 0
        mov edx, dword ptr [ebp - 3ch]
        push edx
        ; Exact mapped bytes FF 15 CC 21 5E 00: call dword ptr [0x5e21cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        ; Exact mapped bytes FF 15 D4 1E 5E 00: call dword ptr [0x5e1ed4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3ch]
        push edx
        ; Exact mapped bytes FF 15 60 20 5E 00: call dword ptr [0x5e2060]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x20
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        push eax
        push 0
        ; Exact mapped bytes FF 15 64 27 5E 00: call dword ptr [0x5e2764]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 D8 35 F9 FF: call 0x4aac80
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes FF 15 C0 23 5E 00: call dword ptr [0x5e23c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
