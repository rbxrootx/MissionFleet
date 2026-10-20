// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58842FD3 .. +0x115D bytes.
extern "C" __declspec(naked) void FUN_58842fd3_58842FD3() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, 10e8ch
        ; Exact mapped bytes E8 10 EB FE FF: call 0x58831af0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xeb
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        push edi
        mov dword ptr [ebp - 10e04h], ecx
        mov dword ptr [ebp - 10e0ch], 138h
        and dword ptr [ebp - 10e2ch], 0
        mov byte ptr [ebp - 310h], 0
        push 103h
        push 0
        lea eax, [ebp - 30fh]
        push eax
        ; Exact mapped bytes E8 F3 9D 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 108h], 0
        push 103h
        push 0
        lea eax, [ebp - 107h]
        push eax
        ; Exact mapped bytes E8 D6 9D 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 518h], 0
        push 103h
        push 0
        lea eax, [ebp - 517h]
        push eax
        ; Exact mapped bytes E8 B9 9D 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 414h], 0
        push 103h
        push 0
        lea eax, [ebp - 413h]
        push eax
        ; Exact mapped bytes E8 9C 9D 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        and dword ptr [ebp - 10e44h], 0
        mov dword ptr [ebp - 10e8ch], 800h
        and dword ptr [ebp - 10e08h], 0
        mov dword ptr [ebp - 10e28h], 5000h
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 2A: jne 0x588430c9
        __asm _emit 0x75
        __asm _emit 0x2a
        push dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 10e04h]
        ; Exact mapped bytes E8 CA 33 00 00: call 0x58846477
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10e0ch], eax
        cmp dword ptr [ebp - 10e0ch], 0
        ; Exact mapped bytes 74 0B: je 0x588430c7
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 10e0ch]
        ; Exact mapped bytes E9 57 10 00 00: jmp 0x5884411e
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 5A: jmp 0x58843123
        __asm _emit 0xeb
        __asm _emit 0x5a
        push 204h
        push 0
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 38 9D 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push 400h
        push 0
        mov eax, dword ptr [ebp + 8]
        add eax, 224h
        push eax
        ; Exact mapped bytes E8 20 9D 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push 800h
        push 0
        mov eax, dword ptr [ebp + 8]
        add eax, 624h
        push eax
        ; Exact mapped bytes E8 08 9D 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push 200h
        push 0
        mov eax, dword ptr [ebp + 8]
        add eax, 0f68h
        push eax
        ; Exact mapped bytes E8 F0 9C 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 10e0ch], 138h
        lea ecx, [ebp - 10e00h]
        ; Exact mapped bytes E8 5B C1 FF FF: call 0x5883f293
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        add eax, 0e24h
        push eax
        push 20h
        lea eax, [ebp - 10dd8h]
        push eax
        ; Exact mapped bytes E8 41 46 01 00: call 0x58857790
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 8]
        add eax, 204h
        push eax
        push 20h
        lea eax, [ebp - 10df8h]
        push eax
        ; Exact mapped bytes E8 27 46 01 00: call 0x58857790
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 1168h]
        mov dword ptr [ebp - 10dfch], eax
        movzx eax, byte ptr [ebp + 0ch]
        cmp eax, 1
        ; Exact mapped bytes 75 09: jne 0x5884318d
        __asm _emit 0x75
        __asm _emit 0x09
        and dword ptr [ebp - 10e2ch], 0
        ; Exact mapped bytes EB 26: jmp 0x588431b3
        __asm _emit 0xeb
        __asm _emit 0x26
        sub esp, 468h
        mov ecx, 11ah
        lea esi, [ebp - 10e00h]
        mov edi, esp
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp - 10e04h]
        ; Exact mapped bytes E8 7D E0 FF FF: call 0x5884122a
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10e2ch], eax
        cmp dword ptr [ebp - 10e2ch], 1
        ; Exact mapped bytes 0F 85 A5 01 00 00: jne 0x58843365
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10e04h]
        add eax, 8ch
        push eax
        ; Exact mapped bytes FF 15 48 42 89 58: call dword ptr [0x58894248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 10e04h]
        movzx eax, word ptr [eax + 9ah]
        push eax
        mov eax, dword ptr [ebp - 10e04h]
        movzx eax, word ptr [eax + 98h]
        push eax
        mov eax, dword ptr [ebp - 10e04h]
        movzx eax, word ptr [eax + 96h]
        push eax
        mov eax, dword ptr [ebp - 10e04h]
        movzx eax, word ptr [eax + 94h]
        push eax
        mov eax, dword ptr [ebp - 10e04h]
        movzx eax, word ptr [eax + 92h]
        push eax
        mov eax, dword ptr [ebp - 10e04h]
        movzx eax, word ptr [eax + 8eh]
        push eax
        mov eax, dword ptr [ebp - 10e04h]
        movzx eax, word ptr [eax + 8ch]
        push eax
        push 588f22d0h
        ; Exact mapped bytes E8 15 91 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x91
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        lea eax, [ebp - 518h]
        push eax
        ; Exact mapped bytes E8 14 99 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x99
        __asm _emit 0xcc
        __asm _emit 0xff
        add esp, 24h
        push 2
        pop eax
        imul eax, eax, 0
        mov ecx, dword ptr [ebp + 8]
        movzx eax, word ptr [ecx + eax + 624h]
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x5884327e
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp + 8]
        add eax, 624h
        push eax
        ; Exact mapped bytes E8 A0 90 FF FF: call 0x5883c312
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x90
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov dword ptr [ebp - 10e44h], eax
        ; Exact mapped bytes E9 9D 00 00 00: jmp 0x5884331b
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        inc eax
        imul eax, eax, 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 84 01 24 02 00 00: movsx eax, byte ptr [ecx + eax + 0x224]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x588432aa
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp + 8]
        add eax, 224h
        push eax
        ; Exact mapped bytes E8 56 90 FF FF: call 0x5883c2f7
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x90
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov dword ptr [ebp - 10e44h], eax
        ; Exact mapped bytes EB 71: jmp 0x5884331b
        __asm _emit 0xeb
        __asm _emit 0x71
        mov byte ptr [ebp - 20ch], 0
        push 103h
        push 0
        lea eax, [ebp - 20bh]
        push eax
        ; Exact mapped bytes E8 4C 9B 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        and dword ptr [ebp - 10e5ch], 0
        lea eax, [ebp - 10e5ch]
        push eax
        lea eax, [ebp - 20ch]
        push eax
        ; Exact mapped bytes FF 15 04 40 89 58: call dword ptr [0x58894004]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        xor eax, eax
        inc eax
        imul eax, eax, 0
        ; Exact mapped bytes 0F BE 84 05 F4 FD FF FF: movsx eax, byte ptr [ebp + eax - 0x20c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0xf4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x58843308
        __asm _emit 0x75
        __asm _emit 0x14
        lea eax, [ebp - 10e5ch]
        push eax
        lea eax, [ebp - 20ch]
        push eax
        ; Exact mapped bytes FF 15 08 44 89 58: call dword ptr [0x58894408]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        lea eax, [ebp - 20ch]
        push eax
        ; Exact mapped bytes E8 E3 8F FF FF: call 0x5883c2f7
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x8f
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov dword ptr [ebp - 10e44h], eax
        push dword ptr [ebp - 10e44h]
        lea eax, [ebp - 518h]
        push eax
        mov eax, dword ptr [ebp + 8]
        push dword ptr [eax + 1168h]
        push 588f22f8h
        ; Exact mapped bytes E8 18 90 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x90
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        lea eax, [ebp - 310h]
        push eax
        ; Exact mapped bytes E8 17 98 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x98
        __asm _emit 0xcc
        __asm _emit 0xff
        add esp, 14h
        lea eax, [ebp - 108h]
        push eax
        lea eax, [ebp - 310h]
        push eax
        mov ecx, dword ptr [ebp - 10e04h]
        ; Exact mapped bytes E8 F2 C1 FF FF: call 0x5883f557
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 D6 8E FF FF: call 0x5883c240
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 10998h], 0
        push 13ffh
        push 0
        lea eax, [ebp - 10997h]
        push eax
        ; Exact mapped bytes E8 8C 9A 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push 3bh
        push 7ch
        mov eax, dword ptr [ebp + 8]
        add eax, 224h
        push eax
        mov ecx, dword ptr [ebp - 10e04h]
        ; Exact mapped bytes E8 8A C0 FF FF: call 0x5883f429
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        push 3bh
        push 7ch
        mov eax, dword ptr [ebp + 8]
        add eax, 624h
        push eax
        mov ecx, dword ptr [ebp - 10e04h]
        ; Exact mapped bytes E8 E2 C0 FF FF: call 0x5883f499
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        push 3bh
        push 7ch
        mov eax, dword ptr [ebp + 8]
        add eax, 204h
        push eax
        mov ecx, dword ptr [ebp - 10e04h]
        ; Exact mapped bytes E8 5A C0 FF FF: call 0x5883f429
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        push 3bh
        push 7ch
        push dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 10e04h]
        ; Exact mapped bytes E8 48 C0 FF FF: call 0x5883f429
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        push 3bh
        push 7ch
        mov eax, dword ptr [ebp + 8]
        add eax, 0e24h
        push eax
        mov ecx, dword ptr [ebp - 10e04h]
        ; Exact mapped bytes E8 30 C0 FF FF: call 0x5883f429
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        push 3bh
        push 7ch
        mov eax, dword ptr [ebp + 8]
        add eax, 20h
        push eax
        mov ecx, dword ptr [ebp - 10e04h]
        ; Exact mapped bytes E8 1A C0 FF FF: call 0x5883f429
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        push 3bh
        push 7ch
        mov eax, dword ptr [ebp + 8]
        add eax, 0a0h
        push eax
        mov ecx, dword ptr [ebp - 10e04h]
        ; Exact mapped bytes E8 02 C0 FF FF: call 0x5883f429
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        push 3bh
        push 7ch
        mov eax, dword ptr [ebp + 8]
        add eax, 120h
        push eax
        mov ecx, dword ptr [ebp - 10e04h]
        ; Exact mapped bytes E8 EA BF FF FF: call 0x5883f429
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        push 3bh
        push 7ch
        mov eax, dword ptr [ebp + 8]
        add eax, 160h
        push eax
        mov ecx, dword ptr [ebp - 10e04h]
        ; Exact mapped bytes E8 D2 BF FF FF: call 0x5883f429
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        push 3bh
        push 7ch
        mov eax, dword ptr [ebp + 8]
        add eax, 0e68h
        push eax
        mov ecx, dword ptr [ebp - 10e04h]
        ; Exact mapped bytes E8 BA BF FF FF: call 0x5883f429
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        push 3bh
        push 7ch
        mov eax, dword ptr [ebp + 8]
        add eax, 0f68h
        push eax
        mov ecx, dword ptr [ebp - 10e04h]
        ; Exact mapped bytes E8 A2 BF FF FF: call 0x5883f429
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        push 3bh
        push 7ch
        mov eax, dword ptr [ebp + 8]
        add eax, 180h
        push eax
        mov ecx, dword ptr [ebp - 10e04h]
        ; Exact mapped bytes E8 8A BF FF FF: call 0x5883f429
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        push 3bh
        push 7ch
        mov eax, dword ptr [ebp + 8]
        add eax, 1a0h
        push eax
        mov ecx, dword ptr [ebp - 10e04h]
        ; Exact mapped bytes E8 72 BF FF FF: call 0x5883f429
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        push 3bh
        push 7ch
        mov eax, dword ptr [ebp + 8]
        add eax, 1c0h
        push eax
        mov ecx, dword ptr [ebp - 10e04h]
        ; Exact mapped bytes E8 5A BF FF FF: call 0x5883f429
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        push 3bh
        push 7ch
        mov eax, dword ptr [ebp + 8]
        add eax, 116ch
        push eax
        mov ecx, dword ptr [ebp - 10e04h]
        ; Exact mapped bytes E8 42 BF FF FF: call 0x5883f429
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        push 3bh
        push 7ch
        mov eax, dword ptr [ebp + 8]
        add eax, 11b0h
        push eax
        mov ecx, dword ptr [ebp - 10e04h]
        ; Exact mapped bytes E8 2A BF FF FF: call 0x5883f429
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes 66 89 85 E8 F2 FF FF: mov word ptr [ebp - 0xd18], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        push 7feh
        push 0
        lea eax, [ebp - 0d16h]
        push eax
        ; Exact mapped bytes E8 F5 98 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push 2
        pop eax
        imul eax, eax, 0
        mov ecx, dword ptr [ebp + 8]
        movzx eax, word ptr [ecx + eax + 624h]
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x5884355f
        __asm _emit 0x74
        __asm _emit 0x2c
        push 0
        push 0
        push 400h
        mov eax, dword ptr [ebp + 8]
        add eax, 224h
        push eax
        push -1
        mov eax, dword ptr [ebp + 8]
        add eax, 624h
        push eax
        push 0
        push 0fde9h
        ; Exact mapped bytes FF 15 90 43 89 58: call dword ptr [0x58894390]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes EB 6D: jmp 0x588435cc
        __asm _emit 0xeb
        __asm _emit 0x6d
        xor eax, eax
        inc eax
        imul eax, eax, 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 84 01 24 02 00 00: movsx eax, byte ptr [ecx + eax + 0x224]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 58: je 0x588435cc
        __asm _emit 0x74
        __asm _emit 0x58
        push 400h
        lea eax, [ebp - 0d18h]
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 224h
        push eax
        ; Exact mapped bytes E8 F2 DB 00 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        inc eax
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 224h
        push eax
        push 0
        push 0
        ; Exact mapped bytes FF 15 9C 42 89 58: call dword ptr [0x5889429c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        push 0
        push 400h
        mov eax, dword ptr [ebp + 8]
        add eax, 224h
        push eax
        push -1
        lea eax, [ebp - 0d18h]
        push eax
        push 0
        push 0fde9h
        ; Exact mapped bytes FF 15 90 43 89 58: call dword ptr [0x58894390]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 11f0h], 0fde9h
        ; Exact mapped bytes 0F 84 B3 01 00 00: je 0x58843792
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 100h
        lea eax, [ebp - 0d18h]
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 0e68h
        push eax
        ; Exact mapped bytes E8 87 DB 00 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        inc eax
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 0e68h
        push eax
        push 0
        push 0
        ; Exact mapped bytes FF 15 9C 42 89 58: call dword ptr [0x5889429c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        push 0
        push 100h
        mov eax, dword ptr [ebp + 8]
        add eax, 0e68h
        push eax
        push -1
        lea eax, [ebp - 0d18h]
        push eax
        push 0
        push 0fde9h
        ; Exact mapped bytes FF 15 90 43 89 58: call dword ptr [0x58894390]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push 200h
        lea eax, [ebp - 0d18h]
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 0f68h
        push eax
        ; Exact mapped bytes E8 2F DB 00 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        inc eax
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 0f68h
        push eax
        push 0
        push 0
        ; Exact mapped bytes FF 15 9C 42 89 58: call dword ptr [0x5889429c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        push 0
        push 200h
        mov eax, dword ptr [ebp + 8]
        add eax, 0f68h
        push eax
        push -1
        lea eax, [ebp - 0d18h]
        push eax
        push 0
        push 0fde9h
        ; Exact mapped bytes FF 15 90 43 89 58: call dword ptr [0x58894390]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push 20h
        lea eax, [ebp - 0d18h]
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 180h
        push eax
        ; Exact mapped bytes E8 DA DA 00 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        inc eax
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 180h
        push eax
        push 0
        push 0
        ; Exact mapped bytes FF 15 9C 42 89 58: call dword ptr [0x5889429c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        push 0
        push 20h
        mov eax, dword ptr [ebp + 8]
        add eax, 180h
        push eax
        push -1
        lea eax, [ebp - 0d18h]
        push eax
        push 0
        push 0fde9h
        ; Exact mapped bytes FF 15 90 43 89 58: call dword ptr [0x58894390]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push 20h
        lea eax, [ebp - 0d18h]
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 1a0h
        push eax
        ; Exact mapped bytes E8 88 DA 00 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        inc eax
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 1a0h
        push eax
        push 0
        push 0
        ; Exact mapped bytes FF 15 9C 42 89 58: call dword ptr [0x5889429c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        push 0
        push 20h
        mov eax, dword ptr [ebp + 8]
        add eax, 1a0h
        push eax
        push -1
        lea eax, [ebp - 0d18h]
        push eax
        push 0
        push 0fde9h
        ; Exact mapped bytes FF 15 90 43 89 58: call dword ptr [0x58894390]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push 20h
        lea eax, [ebp - 0d18h]
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 0e48h
        push eax
        ; Exact mapped bytes E8 36 DA 00 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        inc eax
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 0e48h
        push eax
        push 0
        push 0
        ; Exact mapped bytes FF 15 9C 42 89 58: call dword ptr [0x5889429c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        push 0
        push 20h
        mov eax, dword ptr [ebp + 8]
        add eax, 0e48h
        push eax
        push -1
        lea eax, [ebp - 0d18h]
        push eax
        push 0
        push 0fde9h
        ; Exact mapped bytes FF 15 90 43 89 58: call dword ptr [0x58894390]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 11f0h], 0fde9h
        mov eax, dword ptr [ebp + 8]
        add eax, 11b0h
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 1e0h
        push eax
        mov eax, dword ptr [ebp + 8]
        push dword ptr [eax + 11ach]
        mov eax, dword ptr [ebp + 8]
        add eax, 116ch
        push eax
        push dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 8]
        add eax, 1c0h
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 1a0h
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 180h
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 0f68h
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 0e68h
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 0e48h
        push eax
        mov eax, dword ptr [ebp + 8]
        push dword ptr [eax + 0e44h]
        mov eax, dword ptr [ebp + 8]
        add eax, 160h
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 120h
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 0a0h
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 20h
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 224h
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 204h
        push eax
        mov eax, dword ptr [ebp + 8]
        push dword ptr [eax + 1168h]
        mov eax, dword ptr [ebp + 8]
        add eax, 0e24h
        push eax
        push 588f28a8h
        ; Exact mapped bytes E8 0B 8B FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push 1400h
        lea eax, [ebp - 10998h]
        push eax
        ; Exact mapped bytes E8 1F 33 00 00: call 0x58846b7a
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 5ch
        mov eax, dword ptr [ebp - 10e04h]
        push dword ptr [eax + 84h]
        lea eax, [ebp - 10998h]
        push eax
        mov ecx, dword ptr [ebp - 10e04h]
        ; Exact mapped bytes E8 02 26 00 00: call 0x58845e7e
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 1118h], 0
        push 3ffh
        push 0
        lea eax, [ebp - 1117h]
        push eax
        ; Exact mapped bytes E8 7A 95 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 0f598h], 0
        push 0c7ffh
        push 0
        lea eax, [ebp - 0f597h]
        push eax
        ; Exact mapped bytes E8 5D 95 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 2598h], 0
        push 147fh
        push 0
        lea eax, [ebp - 2597h]
        push eax
        ; Exact mapped bytes E8 40 95 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        and dword ptr [ebp - 10e3ch], 0
        and dword ptr [ebp - 10e54h], 0
        and dword ptr [ebp - 10e10h], 0
        and dword ptr [ebp - 10e50h], 0
        and dword ptr [ebp - 10e30h], 0
        and dword ptr [ebp - 10e24h], 0
        and dword ptr [ebp - 10e14h], 0
        and dword ptr [ebp - 10e38h], 0
        push 588f28ech
        ; Exact mapped bytes E8 3E 8A FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x8a
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov dword ptr [ebp - 10e64h], eax
        push dword ptr [ebp - 10e64h]
        push 104h
        lea eax, [ebp - 414h]
        push eax
        ; Exact mapped bytes E8 5D 3E 01 00: call 0x58857790
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        push 588f2328h
        ; Exact mapped bytes E8 13 8A FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x8a
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        lea eax, [ebp - 1118h]
        push eax
        ; Exact mapped bytes E8 12 92 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x92
        __asm _emit 0xcc
        __asm _emit 0xff
        pop ecx
        pop ecx
        and dword ptr [ebp - 10e18h], 0
        push 0
        push 0
        push 0
        push 0
        push 0
        lea eax, [ebp - 414h]
        push eax
        push 588f21fch
        ; Exact mapped bytes E8 E1 89 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x89
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        mov eax, dword ptr [ebp - 10e04h]
        push dword ptr [eax + 78h]
        mov eax, dword ptr [ebp - 10e04h]
        ; Exact mapped bytes FF 50 58: call dword ptr [eax + 0x58]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x58
        mov dword ptr [ebp - 10e18h], eax
        cmp dword ptr [ebp - 10e18h], 0
        ; Exact mapped bytes 75 17: jne 0x588439ac
        __asm _emit 0x75
        __asm _emit 0x17
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes FF 15 04 43 89 58: call dword ptr [0x58894304]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, 0cah
        ; Exact mapped bytes E9 72 07 00 00: jmp 0x5884411e
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 10998h]
        push eax
        push 588f2908h
        ; Exact mapped bytes E8 96 89 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x89
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        lea eax, [ebp - 2598h]
        push eax
        ; Exact mapped bytes E8 1D B7 FF FF: call 0x5883f0e8
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        lea eax, [ebp - 2598h]
        push eax
        push 0c800h
        lea eax, [ebp - 0f598h]
        push eax
        ; Exact mapped bytes E8 8A 36 02 00: call 0x58867070
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x36
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        push 1480h
        push 0
        lea eax, [ebp - 2598h]
        push eax
        ; Exact mapped bytes E8 14 94 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 10e04h]
        push dword ptr [eax + 84h]
        push 588f2968h
        ; Exact mapped bytes E8 3E 89 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x89
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        lea eax, [ebp - 2598h]
        push eax
        ; Exact mapped bytes E8 C5 B6 FF FF: call 0x5883f0e8
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        lea eax, [ebp - 2598h]
        push eax
        push 0c800h
        lea eax, [ebp - 0f598h]
        push eax
        ; Exact mapped bytes E8 32 36 02 00: call 0x58867070
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x36
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        cmp dword ptr [ebp - 10e2ch], 0
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x58843ad3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1400h
        push 0
        lea eax, [ebp - 2598h]
        push eax
        ; Exact mapped bytes E8 AF 93 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 310h]
        push eax
        push 588f29d0h
        ; Exact mapped bytes E8 DE 88 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x88
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        lea eax, [ebp - 2598h]
        push eax
        ; Exact mapped bytes E8 65 B6 FF FF: call 0x5883f0e8
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        lea eax, [ebp - 2598h]
        push eax
        push 0c800h
        lea eax, [ebp - 0f598h]
        push eax
        ; Exact mapped bytes E8 D2 35 02 00: call 0x58867070
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x35
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        push 1400h
        push 0
        lea eax, [ebp - 2598h]
        push eax
        ; Exact mapped bytes E8 5C 93 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push 588f2a68h
        ; Exact mapped bytes E8 92 88 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x88
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        lea eax, [ebp - 2598h]
        push eax
        ; Exact mapped bytes E8 19 B6 FF FF: call 0x5883f0e8
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        ; Exact mapped bytes EB 30: jmp 0x58843b03
        __asm _emit 0xeb
        __asm _emit 0x30
        push 1400h
        push 0
        lea eax, [ebp - 2598h]
        push eax
        ; Exact mapped bytes E8 2A 93 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push 588f2a9ch
        ; Exact mapped bytes E8 60 88 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x88
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        lea eax, [ebp - 2598h]
        push eax
        ; Exact mapped bytes E8 E7 B5 FF FF: call 0x5883f0e8
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        lea eax, [ebp - 0f598h]
        push eax
        ; Exact mapped bytes E8 71 D6 00 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov dword ptr [ebp - 10e3ch], eax
        lea eax, [ebp - 2598h]
        push eax
        ; Exact mapped bytes E8 5E D6 00 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov dword ptr [ebp - 10e54h], eax
        cmp dword ptr [ebp - 10e2ch], 0
        ; Exact mapped bytes 0F 84 E2 00 00 00: je 0x58843c18
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 80h
        push 3
        push 0
        push 1
        push 80000000h
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes FF 15 00 42 89 58: call dword ptr [0x58894200]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 10e30h], eax
        cmp dword ptr [ebp - 10e30h], -1
        ; Exact mapped bytes 75 16: jne 0x58843b7a
        __asm _emit 0x75
        __asm _emit 0x16
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes FF 15 04 43 89 58: call dword ptr [0x58894304]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        and dword ptr [ebp - 10e10h], 0
        ; Exact mapped bytes EB 24: jmp 0x58843b9e
        __asm _emit 0xeb
        __asm _emit 0x24
        push 0
        push dword ptr [ebp - 10e30h]
        ; Exact mapped bytes FF 15 00 43 89 58: call dword ptr [0x58894300]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 10e10h], eax
        cmp dword ptr [ebp - 10e10h], -1
        ; Exact mapped bytes 75 07: jne 0x58843b9e
        __asm _emit 0x75
        __asm _emit 0x07
        and dword ptr [ebp - 10e10h], 0
        cmp dword ptr [ebp - 10e10h], 300000h
        ; Exact mapped bytes 76 07: jbe 0x58843bb1
        __asm _emit 0x76
        __asm _emit 0x07
        and dword ptr [ebp - 10e10h], 0
        cmp dword ptr [ebp - 10e10h], 0
        ; Exact mapped bytes 74 52: je 0x58843c0c
        __asm _emit 0x74
        __asm _emit 0x52
        and dword ptr [ebp - 10e40h], 0
        push 0
        push 0
        push 0
        push 2
        push 0
        push dword ptr [ebp - 10e30h]
        ; Exact mapped bytes FF 15 A8 42 89 58: call dword ptr [0x588942a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 10e40h], eax
        cmp dword ptr [ebp - 10e40h], 0
        ; Exact mapped bytes 74 26: je 0x58843c0c
        __asm _emit 0x74
        __asm _emit 0x26
        push 0
        push 0
        push 0
        push 4
        push dword ptr [ebp - 10e40h]
        ; Exact mapped bytes FF 15 B4 42 89 58: call dword ptr [0x588942b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 10e38h], eax
        push dword ptr [ebp - 10e40h]
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push dword ptr [ebp - 10e30h]
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        lea eax, [ebp - 108h]
        push eax
        push 1
        push 588f2acch
        ; Exact mapped bytes E8 28 87 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x87
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp - 10e04h]
        ; Exact mapped bytes E8 69 DD FF FF: call 0x588419a1
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov eax, dword ptr [ebp - 10e3ch]
        add eax, dword ptr [ebp - 10e10h]
        add eax, dword ptr [ebp - 10e54h]
        mov dword ptr [ebp - 10e50h], eax
        push dword ptr [ebp - 10e50h]
        ; Exact mapped bytes E8 E4 D3 FE FF: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xd3
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        mov dword ptr [ebp - 10e68h], eax
        mov eax, dword ptr [ebp - 10e68h]
        mov dword ptr [ebp - 10e14h], eax
        mov eax, dword ptr [ebp - 10e14h]
        mov dword ptr [ebp - 10e24h], eax
        cmp dword ptr [ebp - 10e24h], 0
        ; Exact mapped bytes 75 17: jne 0x58843c9d
        __asm _emit 0x75
        __asm _emit 0x17
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes FF 15 04 43 89 58: call dword ptr [0x58894304]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, 0cch
        ; Exact mapped bytes E9 81 04 00 00: jmp 0x5884411e
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp - 10e3ch]
        lea eax, [ebp - 0f598h]
        push eax
        push dword ptr [ebp - 10e24h]
        ; Exact mapped bytes E8 DB 8B 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 10e14h]
        add eax, dword ptr [ebp - 10e3ch]
        mov dword ptr [ebp - 10e14h], eax
        cmp dword ptr [ebp - 10e38h], 0
        ; Exact mapped bytes 74 38: je 0x58843d0b
        __asm _emit 0x74
        __asm _emit 0x38
        push dword ptr [ebp - 10e10h]
        push dword ptr [ebp - 10e38h]
        push dword ptr [ebp - 10e14h]
        ; Exact mapped bytes E8 A6 8B 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 10e14h]
        add eax, dword ptr [ebp - 10e10h]
        mov dword ptr [ebp - 10e14h], eax
        push dword ptr [ebp - 10e38h]
        ; Exact mapped bytes FF 15 B0 42 89 58: call dword ptr [0x588942b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push dword ptr [ebp - 10e54h]
        lea eax, [ebp - 2598h]
        push eax
        push dword ptr [ebp - 10e14h]
        ; Exact mapped bytes E8 6D 8B 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push dword ptr [ebp - 10e50h]
        push dword ptr [ebp - 10e24h]
        lea eax, [ebp - 1118h]
        push eax
        ; Exact mapped bytes E8 42 D4 00 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        lea eax, [ebp - 1118h]
        push eax
        push dword ptr [ebp - 10e18h]
        mov ecx, dword ptr [ebp - 10e04h]
        ; Exact mapped bytes E8 5B DB FF FF: call 0x588418b3
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 B7 01 00 00: je 0x58843f17
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 2d98h], 0
        push 7ffh
        push 0
        lea eax, [ebp - 2d97h]
        push eax
        ; Exact mapped bytes E8 96 90 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        and dword ptr [ebp - 10e1ch], 0
        and dword ptr [ebp - 10e20h], 0
        and dword ptr [ebp - 10e34h], 0
        push dword ptr [ebp - 10e28h]
        ; Exact mapped bytes E8 A5 D2 FE FF: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xd2
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        mov dword ptr [ebp - 10e6ch], eax
        mov eax, dword ptr [ebp - 10e6ch]
        mov dword ptr [ebp - 10e08h], eax
        cmp dword ptr [ebp - 10e08h], 0
        ; Exact mapped bytes 0F 84 58 01 00 00: je 0x58843f15
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        and dword ptr [ebp - 10e1ch], 0
        push 0
        push 0
        lea eax, [ebp - 10e34h]
        push eax
        push dword ptr [ebp - 10e18h]
        mov eax, dword ptr [ebp - 10e04h]
        ; Exact mapped bytes FF 50 60: call dword ptr [eax + 0x60]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x60
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x58843de7
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 18 01 00 00: jmp 0x58843eff
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 588f2ae0h
        ; Exact mapped bytes E8 62 85 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        cmp dword ptr [ebp - 10e34h], 800h
        ; Exact mapped bytes 76 0A: jbe 0x58843e08
        __asm _emit 0x76
        __asm _emit 0x0a
        mov dword ptr [ebp - 10e34h], 800h
        cmp dword ptr [ebp - 10e34h], 0
        ; Exact mapped bytes 0F 86 DD 00 00 00: jbe 0x58843ef2
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 10e1ch]
        push eax
        push dword ptr [ebp - 10e34h]
        lea eax, [ebp - 2d98h]
        push eax
        push dword ptr [ebp - 10e18h]
        mov eax, dword ptr [ebp - 10e04h]
        ; Exact mapped bytes FF 50 64: call dword ptr [eax + 0x64]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x64
        test eax, eax
        ; Exact mapped bytes 0F 84 B2 00 00 00: je 0x58843ef2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10e20h]
        add eax, dword ptr [ebp - 10e1ch]
        cmp eax, dword ptr [ebp - 10e28h]
        ; Exact mapped bytes 72 6A: jb 0x58843ebe
        __asm _emit 0x72
        __asm _emit 0x6a
        mov eax, dword ptr [ebp - 10e28h]
        shl eax, 1
        mov dword ptr [ebp - 10e28h], eax
        push dword ptr [ebp - 10e28h]
        ; Exact mapped bytes E8 D5 D1 FE FF: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xd1
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        mov dword ptr [ebp - 10e70h], eax
        mov eax, dword ptr [ebp - 10e70h]
        mov dword ptr [ebp - 10e58h], eax
        push dword ptr [ebp - 10e20h]
        push dword ptr [ebp - 10e08h]
        push dword ptr [ebp - 10e58h]
        ; Exact mapped bytes E8 F9 89 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 10e08h]
        mov dword ptr [ebp - 10e74h], eax
        push dword ptr [ebp - 10e74h]
        ; Exact mapped bytes E8 9A D1 FE FF: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xd1
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        mov eax, dword ptr [ebp - 10e58h]
        mov dword ptr [ebp - 10e08h], eax
        push dword ptr [ebp - 10e1ch]
        lea eax, [ebp - 2d98h]
        push eax
        mov eax, dword ptr [ebp - 10e08h]
        add eax, dword ptr [ebp - 10e20h]
        push eax
        ; Exact mapped bytes E8 B3 89 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 10e20h]
        add eax, dword ptr [ebp - 10e1ch]
        mov dword ptr [ebp - 10e20h], eax
        cmp dword ptr [ebp - 10e1ch], 0
        ; Exact mapped bytes 0F 85 BE FE FF FF: jne 0x58843dbd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbe
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10e08h]
        add eax, dword ptr [ebp - 10e20h]
        mov byte ptr [eax], 0
        and dword ptr [ebp - 10e0ch], 0
        ; Exact mapped bytes EB 0A: jmp 0x58843f21
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 10e0ch], 0cdh
        cmp dword ptr [ebp - 10e18h], 0
        ; Exact mapped bytes 74 0F: je 0x58843f39
        __asm _emit 0x74
        __asm _emit 0x0f
        push dword ptr [ebp - 10e18h]
        mov eax, dword ptr [ebp - 10e04h]
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        push dword ptr [ebp - 10e0ch]
        push 2
        push 588f2af4h
        ; Exact mapped bytes E8 08 84 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp - 10e04h]
        ; Exact mapped bytes E8 49 DA FF FF: call 0x588419a1
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        cmp dword ptr [ebp - 10e24h], 0
        ; Exact mapped bytes 74 18: je 0x58843f7c
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 10e24h]
        mov dword ptr [ebp - 10e78h], eax
        push dword ptr [ebp - 10e78h]
        ; Exact mapped bytes E8 D0 D0 FE FF: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xd0
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes FF 15 04 43 89 58: call dword ptr [0x58894304]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        mov ecx, dword ptr [ebp - 10e04h]
        ; Exact mapped bytes E8 76 B5 FF FF: call 0x5883f50c
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 10e08h], 0
        ; Exact mapped bytes 0F 84 70 01 00 00: je 0x58844113
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10e0ch], 0
        ; Exact mapped bytes 0F 85 44 01 00 00: jne 0x588440f4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10e0ch], 138h
        and dword ptr [ebp - 10e4ch], 0
        and dword ptr [ebp - 10e60h], 0
        push dword ptr [ebp - 10e28h]
        push dword ptr [ebp - 10e08h]
        mov ecx, dword ptr [ebp - 10e04h]
        ; Exact mapped bytes E8 1C 1D 00 00: call 0x58845cfb
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp - 10e08h]
        push 3
        push 588f2acch
        ; Exact mapped bytes E8 62 83 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp - 10e04h]
        ; Exact mapped bytes E8 A3 D9 FF FF: call 0x588419a1
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        lea eax, [ebp - 10e60h]
        push eax
        lea eax, [ebp - 10e4ch]
        push eax
        push 588f2b08h
        ; Exact mapped bytes E8 3A 83 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp - 10e08h]
        ; Exact mapped bytes E8 81 8B FF FF: call 0x5883cba7
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov eax, dword ptr [ebp + 8]
        add eax, 204h
        push eax
        ; Exact mapped bytes E8 C0 82 FF FF: call 0x5883c2f7
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov dword ptr [ebp - 10e84h], eax
        mov eax, dword ptr [ebp + 8]
        add eax, 0e24h
        push eax
        ; Exact mapped bytes E8 AB 82 FF FF: call 0x5883c2f7
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov dword ptr [ebp - 10e7ch], eax
        mov eax, dword ptr [ebp - 10e4ch]
        xor eax, 0fae9cdh
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 10e7ch]
        imul edx, dword ptr [ecx + 1168h]
        xor eax, edx
        mov dword ptr [ebp - 10e80h], eax
        mov eax, dword ptr [ebp - 10e80h]
        cmp eax, dword ptr [ebp - 10e60h]
        ; Exact mapped bytes 75 70: jne 0x588440f4
        __asm _emit 0x75
        __asm _emit 0x70
        mov eax, dword ptr [ebp - 10e04h]
        mov eax, dword ptr [eax + 84h]
        add eax, 5
        xor eax, dword ptr [ebp - 10e4ch]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 10e84h]
        imul edx, dword ptr [ecx + 0e44h]
        xor eax, edx
        mov dword ptr [ebp - 10e48h], eax
        cmp dword ptr [ebp - 10e48h], 13352bah
        ; Exact mapped bytes 75 0C: jne 0x588440c9
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 10e0ch], 12fh
        ; Exact mapped bytes EB 2B: jmp 0x588440f4
        __asm _emit 0xeb
        __asm _emit 0x2b
        cmp dword ptr [ebp - 10e48h], 1337aeeh
        ; Exact mapped bytes 75 0C: jne 0x588440e1
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 10e0ch], 130h
        ; Exact mapped bytes EB 13: jmp 0x588440f4
        __asm _emit 0xeb
        __asm _emit 0x13
        cmp dword ptr [ebp - 10e48h], 1241189h
        ; Exact mapped bytes 75 07: jne 0x588440f4
        __asm _emit 0x75
        __asm _emit 0x07
        and dword ptr [ebp - 10e0ch], 0
        mov eax, dword ptr [ebp - 10e08h]
        mov dword ptr [ebp - 10e88h], eax
        push dword ptr [ebp - 10e88h]
        ; Exact mapped bytes E8 40 CF FE FF: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xcf
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        and dword ptr [ebp - 10e08h], 0
        ; Exact mapped bytes E8 42 81 FF FF: call 0x5883c25a
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10e0ch]
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 26 CF FE FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xcf
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
