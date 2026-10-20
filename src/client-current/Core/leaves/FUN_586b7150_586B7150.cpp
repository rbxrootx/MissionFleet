// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586B7150 .. +0x31E bytes.
extern "C" __declspec(naked) void FUN_586b7150_586B7150() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888b883h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 54h
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
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B7 06 E3 FF: call 0x584e7850
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x06
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b0d88h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 84h], 7
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [edx + 180h], eax
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586b71d4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        cmp eax, dword ptr [edx + 84h]
        ; Exact mapped bytes 0F 8D 64 02 00 00: jge 0x586b744a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 14 9E 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x9e
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 35: je 0x586b7235
        __asm _emit 0x74
        __asm _emit 0x35
        push 0
        ; Exact mapped bytes 8B 0D 88 07 96 58: mov ecx, dword ptr [0x58960788]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C3 D8 DC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xd8
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 14h]
        shl ecx, 4
        add ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        push 3
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 40 37 10 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x37
        __asm _emit 0x10
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586b723c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 34h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 104h]
        mov eax, 4
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [edx + ecx], eax
        push 0fch
        ; Exact mapped bytes E8 99 9D 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x9d
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 38: je 0x586b72b3
        __asm _emit 0x74
        __asm _emit 0x38
        push 0
        ; Exact mapped bytes 8B 0D 88 07 96 58: mov ecx, dword ptr [0x58960788]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 48 D8 DC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xd8
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 14h]
        shl ecx, 4
        add ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        add edx, 0ah
        push edx
        push 5
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 C2 36 10 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x36
        __asm _emit 0x10
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x586b72ba
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 3ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 104h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [edx + eax], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx*8 + 104h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 40h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 A9 E2 0F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xe2
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx*8 + 104h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 44h], eax
        push 101h
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 81 E2 0F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 104h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 48h], eax
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 EC EA DC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xea
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 104h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 4ch], edx
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 C7 EA DC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xea
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 80 9C 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x9c
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 35: je 0x586b73c9
        __asm _emit 0x74
        __asm _emit 0x35
        push 0
        ; Exact mapped bytes 8B 0D 88 07 96 58: mov ecx, dword ptr [0x58960788]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2F D7 DC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xd7
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        mov eax, dword ptr [ebp - 14h]
        shl eax, 4
        add eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        push 4
        mov edx, dword ptr [ebp - 50h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 AC 35 10 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x35
        __asm _emit 0x10
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586b73d0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 54h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 54h]
        mov dword ptr [eax + edx*4 + 0e4h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0e4h]
        mov dword ptr [ebp - 58h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 A9 E1 0F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xe1
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0e4h]
        mov dword ptr [ebp - 5ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 1F EA DC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xea
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0e4h]
        mov dword ptr [ebp - 60h], ecx
        push 0
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 A5 EA DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xea
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + 100h], 0
        ; Exact mapped bytes E9 81 FD FF FF: jmp 0x586b71cb
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 0E 02 00 00: call 0x586b7660
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
