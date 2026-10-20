// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585C8460 .. +0xD6F bytes.
extern "C" __declspec(naked) void FUN_585c8460_585C8460() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 70h
        push esi
        push edi
        mov dword ptr [ebp - 6ch], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4A E5 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xe5
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 0F 84 46 0D 00 00: je 0x585c91c9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x46
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        mov eax, 4
        imul ecx, eax, 0
        cmp dword ptr [ecx + 589475a0h], 0
        ; Exact mapped bytes 74 0C: je 0x585c84a7
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 1
        ; Exact mapped bytes E9 A9 01 00 00: jmp 0x585c8650
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        cmp dword ptr [edx + 589475a0h], 0ah
        ; Exact mapped bytes 74 0C: je 0x585c84c4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 2
        ; Exact mapped bytes E9 8C 01 00 00: jmp 0x585c8650
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 1
        cmp dword ptr [eax + 589475a0h], 28h
        ; Exact mapped bytes 74 0C: je 0x585c84e0
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 3
        ; Exact mapped bytes E9 70 01 00 00: jmp 0x585c8650
        __asm _emit 0xe9
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        cmp dword ptr [edx + 589475ach], 1770h
        ; Exact mapped bytes 74 0C: je 0x585c8500
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 4
        ; Exact mapped bytes E9 50 01 00 00: jmp 0x585c8650
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        cmp dword ptr [eax + 589475ach], 12c0h
        ; Exact mapped bytes 74 0C: je 0x585c8520
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 5
        ; Exact mapped bytes E9 30 01 00 00: jmp 0x585c8650
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 1
        cmp dword ptr [ecx + 589475ach], 12c0h
        ; Exact mapped bytes 74 0C: je 0x585c853f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 6
        ; Exact mapped bytes E9 11 01 00 00: jmp 0x585c8650
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        cmp dword ptr [eax + 589475b8h], 24h
        ; Exact mapped bytes 74 0C: je 0x585c855c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 7
        ; Exact mapped bytes E9 F4 00 00 00: jmp 0x585c8650
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        cmp dword ptr [ecx + 589475b8h], 20h
        ; Exact mapped bytes 74 0C: je 0x585c8579
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 8
        ; Exact mapped bytes E9 D7 00 00 00: jmp 0x585c8650
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        cmp dword ptr [edx + 589475b8h], 20h
        ; Exact mapped bytes 74 0C: je 0x585c8595
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 9
        ; Exact mapped bytes E9 BB 00 00 00: jmp 0x585c8650
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0ch
        imul ecx, eax, 0
        mov edx, 4
        imul eax, edx, 0
        cmp dword ptr [ecx + eax + 589475c4h], 0
        ; Exact mapped bytes 74 0C: je 0x585c85bb
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 0ah
        ; Exact mapped bytes E9 95 00 00 00: jmp 0x585c8650
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 0ch
        imul edx, ecx, 0
        mov eax, 4
        shl eax, 0
        cmp dword ptr [edx + eax + 589475c4h], 4e20h
        ; Exact mapped bytes 74 09: je 0x585c85e1
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 0bh
        ; Exact mapped bytes EB 6F: jmp 0x585c8650
        __asm _emit 0xeb
        __asm _emit 0x6f
        mov ecx, 0ch
        imul edx, ecx, 0
        mov eax, 4
        shl eax, 1
        cmp dword ptr [edx + eax + 589475c4h], 4e20h
        ; Exact mapped bytes 74 09: je 0x585c8606
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 0ch
        ; Exact mapped bytes EB 4A: jmp 0x585c8650
        __asm _emit 0xeb
        __asm _emit 0x4a
        mov ecx, 0ch
        shl ecx, 0
        mov edx, 4
        imul eax, edx, 0
        cmp dword ptr [ecx + eax + 589475c4h], 7530h
        ; Exact mapped bytes 74 09: je 0x585c862c
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 0dh
        ; Exact mapped bytes EB 24: jmp 0x585c8650
        __asm _emit 0xeb
        __asm _emit 0x24
        mov ecx, 0ch
        shl ecx, 0
        mov edx, 4
        shl edx, 0
        cmp dword ptr [ecx + edx + 589475c4h], 186a0h
        ; Exact mapped bytes 74 07: je 0x585c8650
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0eh
        mov eax, 0ch
        shl eax, 0
        mov ecx, 4
        shl ecx, 1
        cmp dword ptr [eax + ecx + 589475c4h], 5dc0h
        ; Exact mapped bytes 74 0C: je 0x585c8678
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 0fh
        ; Exact mapped bytes E9 5F 05 00 00: jmp 0x585c8bd7
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 0ch
        shl edx, 1
        mov eax, 4
        imul ecx, eax, 0
        cmp dword ptr [edx + ecx + 589475c4h], 13880h
        ; Exact mapped bytes 74 0C: je 0x585c86a0
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 10h
        ; Exact mapped bytes E9 37 05 00 00: jmp 0x585c8bd7
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 0ch
        shl edx, 1
        mov eax, 4
        shl eax, 0
        cmp dword ptr [edx + eax + 589475c4h], 4e20h
        ; Exact mapped bytes 74 0C: je 0x585c86c8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 11h
        ; Exact mapped bytes E9 0F 05 00 00: jmp 0x585c8bd7
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 0ch
        shl ecx, 1
        mov edx, 4
        shl edx, 1
        cmp dword ptr [ecx + edx + 589475c4h], 0
        ; Exact mapped bytes 74 0C: je 0x585c86ec
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 12h
        ; Exact mapped bytes E9 EB 04 00 00: jmp 0x585c8bd7
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0ch
        imul ecx, eax, 3
        mov edx, 4
        imul eax, edx, 0
        cmp dword ptr [ecx + eax + 589475c4h], 8ca0h
        ; Exact mapped bytes 74 0C: je 0x585c8715
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 13h
        ; Exact mapped bytes E9 C2 04 00 00: jmp 0x585c8bd7
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 0ch
        imul edx, ecx, 3
        mov eax, 4
        shl eax, 0
        cmp dword ptr [edx + eax + 589475c4h], 8ca0h
        ; Exact mapped bytes 74 0C: je 0x585c873e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 14h
        ; Exact mapped bytes E9 99 04 00 00: jmp 0x585c8bd7
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 0ch
        imul edx, ecx, 3
        mov eax, 4
        shl eax, 1
        cmp dword ptr [edx + eax + 589475c4h], 2ee0h
        ; Exact mapped bytes 74 0C: je 0x585c8766
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 15h
        ; Exact mapped bytes E9 71 04 00 00: jmp 0x585c8bd7
        __asm _emit 0xe9
        __asm _emit 0x71
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 0ch
        shl ecx, 2
        mov edx, 4
        imul eax, edx, 0
        cmp dword ptr [ecx + eax + 589475c4h], 7530h
        ; Exact mapped bytes 74 0C: je 0x585c878f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 16h
        ; Exact mapped bytes E9 48 04 00 00: jmp 0x585c8bd7
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 0ch
        shl ecx, 2
        mov edx, 4
        shl edx, 0
        cmp dword ptr [ecx + edx + 589475c4h], 7530h
        ; Exact mapped bytes 74 0C: je 0x585c87b8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 17h
        ; Exact mapped bytes E9 1F 04 00 00: jmp 0x585c8bd7
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0ch
        shl eax, 2
        mov ecx, 4
        shl ecx, 1
        cmp dword ptr [eax + ecx + 589475c4h], 7530h
        ; Exact mapped bytes 74 0C: je 0x585c87e0
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 18h
        ; Exact mapped bytes E9 F7 03 00 00: jmp 0x585c8bd7
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 0ch
        imul eax, edx, 5
        mov ecx, 4
        imul edx, ecx, 0
        cmp dword ptr [eax + edx + 589475c4h], 5dc0h
        ; Exact mapped bytes 74 0C: je 0x585c8809
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 19h
        ; Exact mapped bytes E9 CE 03 00 00: jmp 0x585c8bd7
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0ch
        imul ecx, eax, 5
        mov edx, 4
        shl edx, 0
        cmp dword ptr [ecx + edx + 589475c4h], 5dc0h
        ; Exact mapped bytes 74 0C: je 0x585c8832
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 1ah
        ; Exact mapped bytes E9 A5 03 00 00: jmp 0x585c8bd7
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0ch
        imul ecx, eax, 5
        mov edx, 4
        shl edx, 1
        cmp dword ptr [ecx + edx + 589475c4h], 5dc0h
        ; Exact mapped bytes 74 0C: je 0x585c885a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 1bh
        ; Exact mapped bytes E9 7D 03 00 00: jmp 0x585c8bd7
        __asm _emit 0xe9
        __asm _emit 0x7d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0ch
        imul ecx, eax, 6
        mov edx, 4
        imul eax, edx, 0
        cmp dword ptr [ecx + eax + 589475c4h], 5dc0h
        ; Exact mapped bytes 74 0C: je 0x585c8883
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 1ch
        ; Exact mapped bytes E9 54 03 00 00: jmp 0x585c8bd7
        __asm _emit 0xe9
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 0ch
        imul edx, ecx, 6
        mov eax, 4
        shl eax, 0
        cmp dword ptr [edx + eax + 589475c4h], 5dc0h
        ; Exact mapped bytes 74 0C: je 0x585c88ac
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 1dh
        ; Exact mapped bytes E9 2B 03 00 00: jmp 0x585c8bd7
        __asm _emit 0xe9
        __asm _emit 0x2b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 0ch
        imul edx, ecx, 6
        mov eax, 4
        shl eax, 1
        cmp dword ptr [edx + eax + 589475c4h], 5dc0h
        ; Exact mapped bytes 74 0C: je 0x585c88d4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 1eh
        ; Exact mapped bytes E9 03 03 00 00: jmp 0x585c8bd7
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 0ch
        imul edx, ecx, 9
        mov eax, 4
        imul ecx, eax, 0
        cmp dword ptr [edx + ecx + 589475c4h], 5dc0h
        ; Exact mapped bytes 74 0C: je 0x585c88fd
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 1fh
        ; Exact mapped bytes E9 DA 02 00 00: jmp 0x585c8bd7
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 0ch
        imul eax, edx, 9
        mov ecx, 4
        shl ecx, 0
        cmp dword ptr [eax + ecx + 589475c4h], 5dc0h
        ; Exact mapped bytes 74 0C: je 0x585c8926
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 20h
        ; Exact mapped bytes E9 B1 02 00 00: jmp 0x585c8bd7
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 0ch
        imul eax, edx, 9
        mov ecx, 4
        shl ecx, 1
        cmp dword ptr [eax + ecx + 589475c4h], 5dc0h
        ; Exact mapped bytes 74 0C: je 0x585c894e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 21h
        ; Exact mapped bytes E9 89 02 00 00: jmp 0x585c8bd7
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 0ch
        imul eax, edx, 0ah
        mov ecx, 4
        imul edx, ecx, 0
        cmp dword ptr [eax + edx + 589475c4h], 5dc0h
        ; Exact mapped bytes 74 0C: je 0x585c8977
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 22h
        ; Exact mapped bytes E9 60 02 00 00: jmp 0x585c8bd7
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0ch
        imul ecx, eax, 0ah
        mov edx, 4
        shl edx, 0
        cmp dword ptr [ecx + edx + 589475c4h], 5dc0h
        ; Exact mapped bytes 74 0C: je 0x585c89a0
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 23h
        ; Exact mapped bytes E9 37 02 00 00: jmp 0x585c8bd7
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0ch
        imul ecx, eax, 0ah
        mov edx, 4
        shl edx, 1
        cmp dword ptr [ecx + edx + 589475c4h], 5dc0h
        ; Exact mapped bytes 74 0C: je 0x585c89c8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 24h
        ; Exact mapped bytes E9 0F 02 00 00: jmp 0x585c8bd7
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0ch
        imul ecx, eax, 0bh
        mov edx, 4
        imul eax, edx, 0
        cmp dword ptr [ecx + eax + 589475c4h], 7d00h
        ; Exact mapped bytes 74 0C: je 0x585c89f1
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 25h
        ; Exact mapped bytes E9 E6 01 00 00: jmp 0x585c8bd7
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 0ch
        imul edx, ecx, 0bh
        mov eax, 4
        shl eax, 0
        cmp dword ptr [edx + eax + 589475c4h], 7d00h
        ; Exact mapped bytes 74 0C: je 0x585c8a1a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 26h
        ; Exact mapped bytes E9 BD 01 00 00: jmp 0x585c8bd7
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 0ch
        imul edx, ecx, 0bh
        mov eax, 4
        shl eax, 1
        cmp dword ptr [edx + eax + 589475c4h], 7d00h
        ; Exact mapped bytes 74 0C: je 0x585c8a42
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 27h
        ; Exact mapped bytes E9 95 01 00 00: jmp 0x585c8bd7
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 0ch
        imul edx, ecx, 0ch
        mov eax, 4
        imul ecx, eax, 0
        cmp dword ptr [edx + ecx + 589475c4h], 4e20h
        ; Exact mapped bytes 74 0C: je 0x585c8a6b
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 36h
        ; Exact mapped bytes E9 6C 01 00 00: jmp 0x585c8bd7
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 0ch
        imul eax, edx, 0ch
        mov ecx, 4
        shl ecx, 0
        cmp dword ptr [eax + ecx + 589475c4h], 4e20h
        ; Exact mapped bytes 74 0C: je 0x585c8a94
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 37h
        ; Exact mapped bytes E9 43 01 00 00: jmp 0x585c8bd7
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 0ch
        imul eax, edx, 0ch
        mov ecx, 4
        shl ecx, 1
        cmp dword ptr [eax + ecx + 589475c4h], 4e20h
        ; Exact mapped bytes 74 0C: je 0x585c8abc
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 38h
        ; Exact mapped bytes E9 1B 01 00 00: jmp 0x585c8bd7
        __asm _emit 0xe9
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 44 77 94 58 00: cmp dword ptr [0x58947744], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 0C: je 0x585c8ad1
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 28h
        ; Exact mapped bytes E9 06 01 00 00: jmp 0x585c8bd7
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 48 77 94 58 00: cmp dword ptr [0x58947748], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x48
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 0C: je 0x585c8ae6
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 29h
        ; Exact mapped bytes E9 F1 00 00 00: jmp 0x585c8bd7
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 4C 77 94 58 00: cmp dword ptr [0x5894774c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x4c
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 0C: je 0x585c8afb
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 2ah
        ; Exact mapped bytes E9 DC 00 00 00: jmp 0x585c8bd7
        __asm _emit 0xe9
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 50 77 94 58 00: cmp dword ptr [0x58947750], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x50
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 0C: je 0x585c8b10
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 2bh
        ; Exact mapped bytes E9 C7 00 00 00: jmp 0x585c8bd7
        __asm _emit 0xe9
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 54 77 94 58 00: cmp dword ptr [0x58947754], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x54
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 0C: je 0x585c8b25
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 2ch
        ; Exact mapped bytes E9 B2 00 00 00: jmp 0x585c8bd7
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 58 77 94 58 00: cmp dword ptr [0x58947758], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x58
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 0C: je 0x585c8b3a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 2dh
        ; Exact mapped bytes E9 9D 00 00 00: jmp 0x585c8bd7
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 5C 77 94 58 00: cmp dword ptr [0x5894775c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 0C: je 0x585c8b4f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 2eh
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x585c8bd7
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 60 77 94 58 00: cmp dword ptr [0x58947760], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x60
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x585c8b61
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 2fh
        ; Exact mapped bytes EB 76: jmp 0x585c8bd7
        __asm _emit 0xeb
        __asm _emit 0x76
        ; Exact mapped bytes 81 3D 64 77 94 58 18 01 00 00: cmp dword ptr [0x58947764], 0x118
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x64
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x585c8b76
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 30h
        ; Exact mapped bytes EB 61: jmp 0x585c8bd7
        __asm _emit 0xeb
        __asm _emit 0x61
        ; Exact mapped bytes 81 3D 68 77 94 58 4C FF FF FF: cmp dword ptr [0x58947768], 0xffffff4c
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 74 09: je 0x585c8b8b
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 31h
        ; Exact mapped bytes EB 4C: jmp 0x585c8bd7
        __asm _emit 0xeb
        __asm _emit 0x4c
        ; Exact mapped bytes 83 3D 6C 77 94 58 0A: cmp dword ptr [0x5894776c], 0xa
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x6c
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x0a
        ; Exact mapped bytes 74 09: je 0x585c8b9d
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 32h
        ; Exact mapped bytes EB 3A: jmp 0x585c8bd7
        __asm _emit 0xeb
        __asm _emit 0x3a
        ; Exact mapped bytes 83 3D 70 77 94 58 32: cmp dword ptr [0x58947770], 0x32
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x70
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x32
        ; Exact mapped bytes 74 09: je 0x585c8baf
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 33h
        ; Exact mapped bytes EB 28: jmp 0x585c8bd7
        __asm _emit 0xeb
        __asm _emit 0x28
        ; Exact mapped bytes 81 3D 74 77 94 58 F0 00 00 00: cmp dword ptr [0x58947774], 0xf0
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x585c8bc4
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 34h
        ; Exact mapped bytes EB 13: jmp 0x585c8bd7
        __asm _emit 0xeb
        __asm _emit 0x13
        ; Exact mapped bytes 81 3D 78 77 94 58 E0 01 00 00: cmp dword ptr [0x58947778], 0x1e0
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x78
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 07: je 0x585c8bd7
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 35h
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 25: je 0x585c8c02
        __asm _emit 0x74
        __asm _emit 0x25
        movzx edx, word ptr [ebp - 18h]
        push edx
        push 0
        push 2
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CF 3D FB FF: call 0x5857c9c0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x3d
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 44 38 26 00: call 0x5882c440
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x38
        __asm _emit 0x26
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 C7 05 00 00: jmp 0x585c91c9
        __asm _emit 0xe9
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 36 38 EC FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x38
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 6ch]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 0ah
        ; Exact mapped bytes 75 20: jne 0x585c8c3c
        __asm _emit 0x75
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 CC CB EC FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xcb
        __asm _emit 0xec
        __asm _emit 0xff
        movzx edx, word ptr [eax + 9ch]
        imul eax, edx, 7
        cdq
        mov ecx, 0ah
        idiv ecx
        ; Exact mapped bytes 66 89 45 F0: mov word ptr [ebp - 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes EB 13: jmp 0x585c8c4f
        __asm _emit 0xeb
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 AC CB EC FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xcb
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 90 9C 00 00 00: mov dx, word ptr [eax + 0x9c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 55 F0: mov word ptr [ebp - 0x10], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf0
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 87 99 00 00: call 0x585d25e0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 FB 9E ED FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x9e
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, 2
        shl ecx, 2
        movzx edx, word ptr [eax + ecx + 8]
        imul esi, edx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 E1 9E ED FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x9e
        __asm _emit 0xed
        __asm _emit 0xff
        movzx eax, byte ptr [eax + 2]
        imul ecx, eax, 0ch
        mov edi, 4
        shl edi, 0
        mov eax, esi
        cdq
        idiv dword ptr [ecx + edi + 589475c4h]
        ; Exact mapped bytes 66 89 45 EC: mov word ptr [ebp - 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xec
        movzx edx, word ptr [ebp - 10h]
        movzx eax, word ptr [ebp - 14h]
        lea ecx, [edx + eax*2]
        mov dword ptr [ebp - 60h], ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 6E 32 EC FF: call 0x5848bf20
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x32
        __asm _emit 0xec
        __asm _emit 0xff
        cmp dword ptr [ebp - 60h], eax
        ; Exact mapped bytes 74 31: je 0x585c8ce8
        __asm _emit 0x74
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 61 32 EC FF: call 0x5848bf20
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x32
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        mov edx, dword ptr [ebp - 60h]
        push edx
        mov eax, dword ptr [ebp - 70h]
        push eax
        push 3
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 59 3C FB FF: call 0x5857c930
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x3c
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5E 37 26 00: call 0x5882c440
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x37
        __asm _emit 0x26
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 E1 04 00 00: jmp 0x585c91c9
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 00 CB EC FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xcb
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 E5 BC EB FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xbc
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        xor ecx, ecx
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        mov edx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 66 0F B6 02: movzx ax, byte ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        movzx ecx, word ptr [ebp - 4]
        shl ecx, 1
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        mov edx, dword ptr [ebp - 2ch]
        movzx eax, byte ptr [edx + 1]
        movzx ecx, word ptr [ebp - 4]
        or ecx, eax
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        movzx edx, word ptr [ebp - 4]
        shl edx, 0bh
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        mov eax, dword ptr [ebp - 2ch]
        movzx ecx, word ptr [eax + 2]
        movzx edx, word ptr [ebp - 4]
        or edx, ecx
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        mov eax, 2
        shl eax, 0
        mov ecx, dword ptr [ebp - 2ch]
        movzx edx, word ptr [ecx + eax + 0d6h]
        mov eax, dword ptr [ebp - 34h]
        movzx ecx, word ptr [eax + 1eh]
        cmp edx, ecx
        ; Exact mapped bytes 7D 70: jge 0x585c8dd4
        __asm _emit 0x7d
        __asm _emit 0x70
        xor edx, edx
        ; Exact mapped bytes 66 89 55 F8: mov word ptr [ebp - 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf8
        mov eax, dword ptr [ebp - 34h]
        ; Exact mapped bytes 66 0F B6 08: movzx cx, byte ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 4D F8: mov word ptr [ebp - 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf8
        movzx edx, word ptr [ebp - 8]
        shl edx, 1
        ; Exact mapped bytes 66 89 55 F8: mov word ptr [ebp - 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf8
        mov eax, dword ptr [ebp - 34h]
        movzx ecx, byte ptr [eax + 1]
        movzx edx, word ptr [ebp - 8]
        or edx, ecx
        ; Exact mapped bytes 66 89 55 F8: mov word ptr [ebp - 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf8
        movzx eax, word ptr [ebp - 8]
        shl eax, 0bh
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        mov ecx, dword ptr [ebp - 34h]
        movzx edx, word ptr [ecx + 2]
        movzx eax, word ptr [ebp - 8]
        or eax, edx
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        movzx ecx, word ptr [ebp - 8]
        push ecx
        movzx edx, word ptr [ebp - 4]
        push edx
        push 7
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FD 3B FB FF: call 0x5857c9c0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x3b
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 72 36 26 00: call 0x5882c440
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x36
        __asm _emit 0x26
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 F5 03 00 00: jmp 0x585c91c9
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 2
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 2ch]
        movzx esi, word ptr [edx + ecx + 0d6h]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 E1 C9 EC FF: call 0x584957d0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xc9
        __asm _emit 0xec
        __asm _emit 0xff
        movzx eax, word ptr [eax + 1eh]
        cmp esi, eax
        ; Exact mapped bytes 7D 7F: jge 0x585c8e76
        __asm _emit 0x7d
        __asm _emit 0x7f
        xor ecx, ecx
        ; Exact mapped bytes 66 89 4D F4: mov word ptr [ebp - 0xc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf4
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 CB C9 EC FF: call 0x584957d0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xc9
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F B6 10: movzx dx, byte ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 55 F4: mov word ptr [ebp - 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf4
        movzx eax, word ptr [ebp - 0ch]
        shl eax, 1
        ; Exact mapped bytes 66 89 45 F4: mov word ptr [ebp - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 B1 C9 EC FF: call 0x584957d0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xc9
        __asm _emit 0xec
        __asm _emit 0xff
        movzx ecx, byte ptr [eax + 1]
        movzx edx, word ptr [ebp - 0ch]
        or edx, ecx
        ; Exact mapped bytes 66 89 55 F4: mov word ptr [ebp - 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf4
        movzx eax, word ptr [ebp - 0ch]
        shl eax, 0bh
        ; Exact mapped bytes 66 89 45 F4: mov word ptr [ebp - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 90 C9 EC FF: call 0x584957d0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xc9
        __asm _emit 0xec
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 2]
        movzx edx, word ptr [ebp - 0ch]
        or edx, ecx
        ; Exact mapped bytes 66 89 55 F4: mov word ptr [ebp - 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf4
        movzx eax, word ptr [ebp - 0ch]
        push eax
        movzx ecx, word ptr [ebp - 4]
        push ecx
        push 8
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5B 3B FB FF: call 0x5857c9c0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x3b
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D0 35 26 00: call 0x5882c440
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x35
        __asm _emit 0x26
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 53 03 00 00: jmp 0x585c91c9
        __asm _emit 0xe9
        __asm _emit 0x53
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], 0
        ; Exact mapped bytes EB 09: jmp 0x585c8e88
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 38h]
        add edx, 1
        mov dword ptr [ebp - 38h], edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 D0 BB EB FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xbb
        __asm _emit 0xeb
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        shr eax, 1
        and eax, 1fh
        cmp dword ptr [ebp - 38h], eax
        ; Exact mapped bytes 0F 83 29 03 00 00: jae 0x585c91c9
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x29
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 08 A4 00 00: call 0x585d32b0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp - 38h], 18h
        add eax, ecx
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 24h], 0
        mov edx, dword ptr [ebp - 20h]
        mov al, byte ptr [edx]
        mov byte ptr [ebp - 3ch], al
        cmp byte ptr [ebp - 3ch], 5
        ; Exact mapped bytes 74 0E: je 0x585c8ed4
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp byte ptr [ebp - 3ch], 6
        ; Exact mapped bytes 74 1D: je 0x585c8ee9
        __asm _emit 0x74
        __asm _emit 0x1d
        cmp byte ptr [ebp - 3ch], 0dh
        ; Exact mapped bytes 74 2C: je 0x585c8efe
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes EB 3D: jmp 0x585c8f11
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 20h]
        movzx edx, byte ptr [ecx + 0eh]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 5C 41 EC FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x41
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 28: jmp 0x585c8f11
        __asm _emit 0xeb
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 20h]
        movzx ecx, byte ptr [eax + 0eh]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 47 41 EC FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x41
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 13: jmp 0x585c8f11
        __asm _emit 0xeb
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 20h]
        movzx eax, byte ptr [edx + 0eh]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 32 41 EC FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x41
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 0F 84 A9 02 00 00: je 0x585c91c4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 20h]
        mov cl, byte ptr [eax + edx + 4]
        mov byte ptr [ebp - 64h], cl
        cmp byte ptr [ebp - 64h], 0bh
        ; Exact mapped bytes 74 0F: je 0x585c8f42
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp byte ptr [ebp - 64h], 0ch
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x585c8fdc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 2F 01 00 00: jmp 0x585c9071
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov edx, dword ptr [ebp - 20h]
        movzx eax, byte ptr [edx + 0eh]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 BC 6D EE FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x6d
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 08 DE F2 FF: call 0x584f6d70
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xde
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B4 DE F2 FF: call 0x584f6e30
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xde
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 52: je 0x585c8fd7
        __asm _emit 0x74
        __asm _emit 0x52
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 4C: je 0x585c8fd7
        __asm _emit 0x74
        __asm _emit 0x4c
        mov edx, dword ptr [ebp - 44h]
        movzx eax, word ptr [edx + 0a2h]
        mov ecx, dword ptr [ebp - 40h]
        movzx edx, word ptr [ecx + 0a2h]
        cmp eax, edx
        ; Exact mapped bytes 74 34: je 0x585c8fd7
        __asm _emit 0x74
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 40h]
        movzx ecx, word ptr [eax + 0a2h]
        push ecx
        mov edx, dword ptr [ebp - 44h]
        movzx eax, word ptr [edx + 0a2h]
        push eax
        push 4
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA 39 FB FF: call 0x5857c9c0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x39
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6F 34 26 00: call 0x5882c440
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x34
        __asm _emit 0x26
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 F2 01 00 00: jmp 0x585c91c9
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 95 00 00 00: jmp 0x585c9071
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 20h]
        movzx edx, byte ptr [ecx + 0eh]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 22 6D EE FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x6d
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AE DF F2 FF: call 0x584f6fb0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xdf
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DA DE F2 FF: call 0x584f6ef0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xde
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 52: je 0x585c9071
        __asm _emit 0x74
        __asm _emit 0x52
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 4C: je 0x585c9071
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp - 4ch]
        movzx edx, word ptr [ecx + 0a4h]
        mov eax, dword ptr [ebp - 48h]
        movzx ecx, word ptr [eax + 0b0h]
        cmp edx, ecx
        ; Exact mapped bytes 74 34: je 0x585c9071
        __asm _emit 0x74
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 48h]
        movzx eax, word ptr [edx + 0b0h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        movzx edx, word ptr [ecx + 0a4h]
        push edx
        push 4
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 60 39 FB FF: call 0x5857c9c0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x39
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 33 26 00: call 0x5882c440
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x33
        __asm _emit 0x26
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 58 01 00 00: jmp 0x585c91c9
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 20h]
        mov dl, byte ptr [ecx + eax + 4]
        mov byte ptr [ebp - 68h], dl
        cmp byte ptr [ebp - 68h], 0bh
        ; Exact mapped bytes 74 0F: je 0x585c9098
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp byte ptr [ebp - 68h], 0ch
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x585c9132
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 2C 01 00 00: jmp 0x585c91c4
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov eax, dword ptr [ebp - 20h]
        movzx ecx, byte ptr [eax + 0eh]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 66 6C EE FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x6c
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B2 DC F2 FF: call 0x584f6d70
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xdc
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5E DD F2 FF: call 0x584f6e30
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xdd
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 52: je 0x585c912d
        __asm _emit 0x74
        __asm _emit 0x52
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 4C: je 0x585c912d
        __asm _emit 0x74
        __asm _emit 0x4c
        mov eax, dword ptr [ebp - 54h]
        movzx ecx, word ptr [eax + 0a2h]
        mov edx, dword ptr [ebp - 50h]
        movzx eax, word ptr [edx + 0a2h]
        cmp ecx, eax
        ; Exact mapped bytes 74 34: je 0x585c912d
        __asm _emit 0x74
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 50h]
        movzx edx, word ptr [ecx + 0a2h]
        push edx
        mov eax, dword ptr [ebp - 54h]
        movzx ecx, word ptr [eax + 0a2h]
        push ecx
        push 4
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A4 38 FB FF: call 0x5857c9c0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x38
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 19 33 26 00: call 0x5882c440
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x33
        __asm _emit 0x26
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 9C 00 00 00: jmp 0x585c91c9
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 92 00 00 00: jmp 0x585c91c4
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov edx, dword ptr [ebp - 20h]
        movzx eax, byte ptr [edx + 0eh]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 CC 6B EE FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x6b
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 58 DE F2 FF: call 0x584f6fb0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xde
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 84 DD F2 FF: call 0x584f6ef0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 4F: je 0x585c91c4
        __asm _emit 0x74
        __asm _emit 0x4f
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 49: je 0x585c91c4
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 5ch]
        movzx eax, word ptr [edx + 0a4h]
        mov ecx, dword ptr [ebp - 58h]
        movzx edx, word ptr [ecx + 0b0h]
        cmp eax, edx
        ; Exact mapped bytes 74 31: je 0x585c91c4
        __asm _emit 0x74
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 58h]
        movzx ecx, word ptr [eax + 0b0h]
        push ecx
        mov edx, dword ptr [ebp - 5ch]
        movzx eax, word ptr [edx + 0a4h]
        push eax
        push 4
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0A 38 FB FF: call 0x5857c9c0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x38
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7F 32 26 00: call 0x5882c440
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x32
        __asm _emit 0x26
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 05: jmp 0x585c91c9
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 B6 FC FF FF: jmp 0x585c8e7f
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
