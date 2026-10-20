// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CFD90 .. +0x50B bytes.
extern "C" __declspec(naked) void FUN_584cfd90_584CFD90() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887e12bh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 38h
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
        mov eax, dword ptr [ebp + 2ch]
        push eax
        mov ecx, dword ptr [ebp + 28h]
        push ecx
        mov edx, dword ptr [ebp + 24h]
        push edx
        mov eax, dword ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 8C 26 FB FF: call 0x58482470
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x26
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 58898a10h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0a0h], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 24h]
        mov dword ptr [edx + 70h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 28h]
        mov dword ptr [ecx + 74h], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 90h], 100h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 88h], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 3B: jne 0x584cfe6e
        __asm _emit 0x75
        __asm _emit 0x3b
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        add eax, 1
        push eax
        ; Exact mapped bytes E8 FD 11 36 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x11
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + 80h], edx
        mov eax, 1
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 80h]
        mov byte ptr [ecx + eax], 0
        ; Exact mapped bytes EB 0C: jmp 0x584cfe7a
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 80h], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 84h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 8ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 6ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 94h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 98h], 0
        xor edx, edx
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 90 9C 00 00 00: mov word ptr [eax + 0x9c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0e8h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0ech], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0f0h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0f4h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0f8h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0fch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        add edx, 1
        push edx
        ; Exact mapped bytes E8 1E 11 36 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x11
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [eax + 100h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        add eax, 1
        push eax
        ; Exact mapped bytes E8 FA 10 36 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x10
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ecx + 104h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        add ecx, 1
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 100h]
        push eax
        ; Exact mapped bytes E8 98 CE 37 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xce
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        add edx, 1
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 104h]
        push ecx
        ; Exact mapped bytes E8 77 CE 37 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xce
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 0ch
        push 58h
        ; Exact mapped bytes E8 61 10 36 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x10
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 1D: je 0x584cffd0
        __asm _emit 0x74
        __asm _emit 0x1d
        push 40h
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 45 68 FB FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x68
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x584cffd7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 38h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [eax + 0ach], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0ach]
        mov dword ptr [ebp - 3ch], eax
        push 0ffffff38h
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 AA 55 2E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x55
        __asm _emit 0x2e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0ach]
        mov dword ptr [ebp - 40h], edx
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 C4 5D FB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x5d
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov byte ptr [eax + 0a8h], 0
        ; Exact mapped bytes FF 15 10 43 89 58: call dword ptr [0x58894310]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 66 A3 80 BF 90 58: mov word ptr [0x5890bf80], ax
        __asm _emit 0x66
        __asm _emit 0xa3
        __asm _emit 0x80
        __asm _emit 0xbf
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F B7 0D 80 BF 90 58: movzx ecx, word ptr [0x5890bf80]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0xbf
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 412h
        ; Exact mapped bytes 7F 30: jg 0x584d007c
        __asm _emit 0x7f
        __asm _emit 0x30
        cmp dword ptr [ebp - 14h], 412h
        ; Exact mapped bytes 74 6A: je 0x584d00bf
        __asm _emit 0x74
        __asm _emit 0x6a
        mov edx, dword ptr [ebp - 14h]
        sub edx, 404h
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 0dh
        ; Exact mapped bytes 0F 87 66 01 00 00: ja 0x584d01d1
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        movzx ecx, byte ptr [eax + 584d02ach]
        ; Exact mapped bytes FF 24 8D 9C 02 4D 58: jmp dword ptr [ecx*4 + 0x584d029c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x9c
        __asm _emit 0x02
        __asm _emit 0x4d
        __asm _emit 0x58
        cmp dword ptr [ebp - 14h], 1004h
        ; Exact mapped bytes 7F 28: jg 0x584d00ad
        __asm _emit 0x7f
        __asm _emit 0x28
        cmp dword ptr [ebp - 14h], 1004h
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x584d011f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 804h
        ; Exact mapped bytes 0F 84 B0 00 00 00: je 0x584d014f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0c04h
        ; Exact mapped bytes 74 77: je 0x584d011f
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes E9 24 01 00 00: jmp 0x584d01d1
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 1042h
        ; Exact mapped bytes 0F 84 EC 00 00 00: je 0x584d01a6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 12 01 00 00: jmp 0x584d01d1
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 2
        push 2
        push 0
        push 4
        push 81h
        push 0
        push 0
        push 0
        push 190h
        push 0
        push 0
        push 0
        push 10h
        ; Exact mapped bytes FF 15 D4 40 89 58: call dword ptr [0x588940d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes E9 E2 00 00 00: jmp 0x584d01d1
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 2
        push 2
        push 0
        push 4
        push 80h
        push 0
        push 0
        push 0
        push 190h
        push 0
        push 0
        push 0
        push 10h
        ; Exact mapped bytes FF 15 D4 40 89 58: call dword ptr [0x588940d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes E9 B2 00 00 00: jmp 0x584d01d1
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 2
        push 2
        push 0
        push 4
        push 88h
        push 0
        push 0
        push 0
        push 190h
        push 0
        push 0
        push 0
        push 10h
        ; Exact mapped bytes FF 15 D4 40 89 58: call dword ptr [0x588940d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes E9 82 00 00 00: jmp 0x584d01d1
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 2
        push 2
        push 0
        push 4
        push 86h
        push 0
        push 0
        push 0
        push 190h
        push 0
        push 0
        push 0
        push 10h
        ; Exact mapped bytes FF 15 D4 40 89 58: call dword ptr [0x588940d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 55: jmp 0x584d01d1
        __asm _emit 0xeb
        __asm _emit 0x55
        push 0
        push 2
        push 2
        push 0
        push 4
        push 0
        push 0
        push 0
        push 0
        push 190h
        push 0
        push 0
        push 0
        push 10h
        ; Exact mapped bytes FF 15 D4 40 89 58: call dword ptr [0x588940d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 2B: jmp 0x584d01d1
        __asm _emit 0xeb
        __asm _emit 0x2b
        push 0
        push 2
        push 2
        push 0
        push 4
        push 0cch
        push 0
        push 0
        push 0
        push 190h
        push 0
        push 0
        push 0
        push 10h
        ; Exact mapped bytes FF 15 D4 40 89 58: call dword ptr [0x588940d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0a4h], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 45: je 0x584d0229
        __asm _emit 0x74
        __asm _emit 0x45
        push 10h
        ; Exact mapped bytes E8 19 0E 36 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x0e
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 11: je 0x584d020c
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 E9 5E 2E 00: call 0x587b60f0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0x2e
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x584d0213
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 44h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [edx + 0a0h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0b0h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0b4h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0b8h], 0
        push 28h
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0bch
        push ecx
        ; Exact mapped bytes E8 AD CB 37 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xcb
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0e4h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 108h], 0
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
        ; Exact mapped bytes C2 28 00: ret 0x28
        __asm _emit 0xc2
        __asm _emit 0x28
        __asm _emit 0x00
    }
}
