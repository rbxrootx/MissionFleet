// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585D0820 .. +0x1F5 bytes.
extern "C" __declspec(naked) void FUN_585d0820_585D0820() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 21a9ch], 0
        ; Exact mapped bytes 75 0D: jne 0x585d0843
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F2 50 EC FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x50
        __asm _emit 0xec
        __asm _emit 0xff
        cmp eax, 0fh
        ; Exact mapped bytes 75 0F: jne 0x585d0852
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 21e24h]
        ; Exact mapped bytes E8 0F F1 F3 FF: call 0x5850f960
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xf1
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 40 61 EB FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x61
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 21a7ch], 0
        ; Exact mapped bytes 0F 84 A9 00 00 00: je 0x585d091a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585d0883
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [eax + 21974h]
        ; Exact mapped bytes 7D 5F: jge 0x585d08f0
        __asm _emit 0x7d
        __asm _emit 0x5f
        imul edx, dword ptr [ebp - 8], 0d4h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 21a7ch]
        cmp dword ptr [ecx + edx + 0cch], 0
        ; Exact mapped bytes 74 43: je 0x585d08ee
        __asm _emit 0x74
        __asm _emit 0x43
        imul edx, dword ptr [ebp - 8], 0d4h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 21a7ch]
        mov edx, dword ptr [ecx + edx + 0cch]
        mov dword ptr [ebp - 18h], edx
        push 1
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 64 07 26 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x07
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 8
        imul ecx, dword ptr [ebp - 8], 0d4h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 21a7ch]
        mov dword ptr [eax + ecx + 0cch], 0
        ; Exact mapped bytes EB 8A: jmp 0x585d087a
        __asm _emit 0xeb
        __asm _emit 0x8a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 21a7ch]
        mov dword ptr [ebp - 1ch], edx
        push 0d4h
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 2A 07 26 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x07
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 21a7ch], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 21a80h], 0
        ; Exact mapped bytes 74 27: je 0x585d094d
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 21a80h]
        mov dword ptr [ebp - 20h], ecx
        push 4
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes E8 F7 06 26 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x06
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 21a80h], 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 106e8h]
        ; Exact mapped bytes E8 D5 3B FB FF: call 0x58584530
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x3b
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x585d09f8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 9E 4C EC FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x4c
        __asm _emit 0xec
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 106e8h]
        ; Exact mapped bytes E8 AE 3B FB FF: call 0x58584530
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x3b
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esi]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 75 2E: jne 0x585d09b6
        __asm _emit 0x75
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 17: je 0x585d09ab
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 24h], edx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 DC: call dword ptr [ebp - 0x24]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xdc
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x585d09b2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 44: jmp 0x585d09f8
        __asm _emit 0xeb
        __asm _emit 0x44
        ; Exact mapped bytes EB 3D: jmp 0x585d09f3
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 52 4C EC FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x4c
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 17: je 0x585d09e6
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 2ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 D4: call dword ptr [ebp - 0x2c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd4
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x585d09ed
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes E9 68 FF FF FF: jmp 0x585d0960
        __asm _emit 0xe9
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 1A 39 FB FF: call 0x58584320
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x39
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 74 06 96 58: mov ecx, dword ptr [0x58960674]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DF 10 F9 FF: call 0x58561af0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x10
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
    }
}
