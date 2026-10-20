// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005053E0 .. +0x33F bytes.
extern "C" __declspec(naked) void FUN_005053e0_005053E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 23fh
        push 5c7650h
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes E8 5E 5D FF FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 05: jne 0x50540d
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 09 03 00 00: jmp 0x505716
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x505427
        __asm _emit 0x75
        __asm _emit 0x14
        push 244h
        push 5c7650h
        ; Exact mapped bytes E8 DE F5 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xf5
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x505427
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x50540d
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 1A AA FC FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xaa
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x505454
        __asm _emit 0x75
        __asm _emit 0x14
        push 245h
        push 5c7650h
        ; Exact mapped bytes E8 B1 F5 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xf5
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x505454
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D3: jne 0x50542d
        __asm _emit 0x75
        __asm _emit 0xd3
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 1D: jne 0x505480
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 2ch], 0
        ; Exact mapped bytes 75 14: jne 0x505480
        __asm _emit 0x75
        __asm _emit 0x14
        push 246h
        push 5c7650h
        ; Exact mapped bytes E8 85 F5 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xf5
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x505480
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D4: jne 0x50545a
        __asm _emit 0x75
        __asm _emit 0xd4
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 1D: jne 0x5054ac
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 24h], 0
        ; Exact mapped bytes 75 14: jne 0x5054ac
        __asm _emit 0x75
        __asm _emit 0x14
        push 247h
        push 5c7650h
        ; Exact mapped bytes E8 59 F5 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xf5
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5054ac
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D4: jne 0x505486
        __asm _emit 0x75
        __asm _emit 0xd4
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 74 33: je 0x5054ee
        __asm _emit 0x74
        __asm _emit 0x33
        push 1
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + 28h]
        sub eax, dword ptr [edx + 2ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 2ch]
        push edx
        ; Exact mapped bytes E8 80 A9 FC FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xa9
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5054ee
        __asm _emit 0x75
        __asm _emit 0x14
        push 249h
        push 5c7650h
        ; Exact mapped bytes E8 17 F5 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xf5
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5054ee
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 BE: jne 0x5054b2
        __asm _emit 0x75
        __asm _emit 0xbe
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 24h], 0
        ; Exact mapped bytes 74 33: je 0x505530
        __asm _emit 0x74
        __asm _emit 0x33
        push 1
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 28h]
        sub ecx, dword ptr [eax + 24h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 24h]
        push eax
        ; Exact mapped bytes E8 3E A9 FC FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xa9
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x505530
        __asm _emit 0x75
        __asm _emit 0x14
        push 24bh
        push 5c7650h
        ; Exact mapped bytes E8 D5 F4 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xf4
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x505530
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 BE: jne 0x5054f4
        __asm _emit 0x75
        __asm _emit 0xbe
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D8 C3 02 00: call 0x531916
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xc3
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x505556
        __asm _emit 0x75
        __asm _emit 0x14
        push 24ch
        push 5c7650h
        ; Exact mapped bytes E8 AF F4 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xf4
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x505556
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x505536
        __asm _emit 0x75
        __asm _emit 0xda
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 28h]
        sub edx, dword ptr [ecx + 24h]
        cmp dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes 73 08: jae 0x505575
        __asm _emit 0x73
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 0F: jmp 0x505584
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + 28h]
        sub eax, dword ptr [edx + 24h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 24h]
        push edx
        ; Exact mapped bytes E8 82 3A FA FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x3a
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 24h]
        add ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 24h], ecx
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 4]
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp + 0ch], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 86 4A 01 00 00: jbe 0x505716
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 4B 01 00 00: call 0x50571f
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 0ch]
        xor edx, edx
        div dword ptr [ecx + 1ch]
        mov eax, dword ptr [ebp + 0ch]
        sub eax, edx
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 20h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 40: call dword ptr [edx + 0x40]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x40
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 4]
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp + 0ch], ecx
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x5056a3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        add eax, 28h
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 2ch
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 1ch]
        push eax
        push 1
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 20h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 58: call dword ptr [edx + 0x58]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 8]
        cmp eax, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 74 14: je 0x505663
        __asm _emit 0x74
        __asm _emit 0x14
        push 263h
        push 5c7650h
        ; Exact mapped bytes E8 A2 F3 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xf3
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x505663
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 B6: jne 0x50561f
        __asm _emit 0x75
        __asm _emit 0xb6
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 28h]
        sub edx, dword ptr [ecx + 2ch]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 1ch], edx
        ; Exact mapped bytes 74 14: je 0x505691
        __asm _emit 0x74
        __asm _emit 0x14
        push 264h
        push 5c7650h
        ; Exact mapped bytes E8 74 F3 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xf3
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x505691
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D2: jne 0x505669
        __asm _emit 0x75
        __asm _emit 0xd2
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 2ch]
        mov dword ptr [edx + 24h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [edx + 1ch]
        ; Exact mapped bytes 72 14: jb 0x5056c2
        __asm _emit 0x72
        __asm _emit 0x14
        push 269h
        push 5c7650h
        ; Exact mapped bytes E8 43 F3 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xf3
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5056c2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DB: jne 0x5056a3
        __asm _emit 0x75
        __asm _emit 0xdb
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 24h]
        cmp ecx, dword ptr [eax + 2ch]
        ; Exact mapped bytes 74 14: je 0x5056ea
        __asm _emit 0x74
        __asm _emit 0x14
        push 26ah
        push 5c7650h
        ; Exact mapped bytes E8 1B F3 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xf3
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5056ea
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x5056c8
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 24h]
        push eax
        ; Exact mapped bytes E8 1C 39 FA FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x39
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 24h]
        add edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 24h], edx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
