// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EA396 .. +0x33F bytes.
extern "C" __declspec(naked) void FUN_004ea396_004EA396() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 23fh
        push 674180h
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes E8 A8 FE FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 05: jne 0x4ea3c3
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 09 03 00 00: jmp 0x4ea6cc
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4ea3dd
        __asm _emit 0x75
        __asm _emit 0x14
        push 244h
        push 674180h
        ; Exact mapped bytes E8 68 E9 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ea3dd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4ea3c3
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 74 90 FB FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4ea40a
        __asm _emit 0x75
        __asm _emit 0x14
        push 245h
        push 674180h
        ; Exact mapped bytes E8 3B E9 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ea40a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D3: jne 0x4ea3e3
        __asm _emit 0x75
        __asm _emit 0xd3
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 1D: jne 0x4ea436
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 2ch], 0
        ; Exact mapped bytes 75 14: jne 0x4ea436
        __asm _emit 0x75
        __asm _emit 0x14
        push 246h
        push 674180h
        ; Exact mapped bytes E8 0F E9 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ea436
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D4: jne 0x4ea410
        __asm _emit 0x75
        __asm _emit 0xd4
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 1D: jne 0x4ea462
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 24h], 0
        ; Exact mapped bytes 75 14: jne 0x4ea462
        __asm _emit 0x75
        __asm _emit 0x14
        push 247h
        push 674180h
        ; Exact mapped bytes E8 E3 E8 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ea462
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D4: jne 0x4ea43c
        __asm _emit 0x75
        __asm _emit 0xd4
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 74 33: je 0x4ea4a4
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
        ; Exact mapped bytes E8 DA 8F FB FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x8f
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4ea4a4
        __asm _emit 0x75
        __asm _emit 0x14
        push 249h
        push 674180h
        ; Exact mapped bytes E8 A1 E8 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ea4a4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 BE: jne 0x4ea468
        __asm _emit 0x75
        __asm _emit 0xbe
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 24h], 0
        ; Exact mapped bytes 74 33: je 0x4ea4e6
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
        ; Exact mapped bytes E8 98 8F FB FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x8f
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4ea4e6
        __asm _emit 0x75
        __asm _emit 0x14
        push 24bh
        push 674180h
        ; Exact mapped bytes E8 5F E8 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ea4e6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 BE: jne 0x4ea4aa
        __asm _emit 0x75
        __asm _emit 0xbe
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 EB B1 03 00: call 0x5256df
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xb1
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4ea50c
        __asm _emit 0x75
        __asm _emit 0x14
        push 24ch
        push 674180h
        ; Exact mapped bytes E8 39 E8 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ea50c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x4ea4ec
        __asm _emit 0x75
        __asm _emit 0xda
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 28h]
        sub edx, dword ptr [ecx + 24h]
        cmp dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes 73 08: jae 0x4ea52b
        __asm _emit 0x73
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 0F: jmp 0x4ea53a
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
        ; Exact mapped bytes E8 AC AD F7 FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xad
        __asm _emit 0xf7
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
        ; Exact mapped bytes 0F 86 4A 01 00 00: jbe 0x4ea6cc
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 4B 01 00 00: call 0x4ea6d5
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
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x4ea659
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
        ; Exact mapped bytes 74 14: je 0x4ea619
        __asm _emit 0x74
        __asm _emit 0x14
        push 263h
        push 674180h
        ; Exact mapped bytes E8 2C E7 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xe7
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ea619
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 B6: jne 0x4ea5d5
        __asm _emit 0x75
        __asm _emit 0xb6
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 28h]
        sub edx, dword ptr [ecx + 2ch]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 1ch], edx
        ; Exact mapped bytes 74 14: je 0x4ea647
        __asm _emit 0x74
        __asm _emit 0x14
        push 264h
        push 674180h
        ; Exact mapped bytes E8 FE E6 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xe6
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ea647
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D2: jne 0x4ea61f
        __asm _emit 0x75
        __asm _emit 0xd2
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 2ch]
        mov dword ptr [edx + 24h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [edx + 1ch]
        ; Exact mapped bytes 72 14: jb 0x4ea678
        __asm _emit 0x72
        __asm _emit 0x14
        push 269h
        push 674180h
        ; Exact mapped bytes E8 CD E6 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xe6
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ea678
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DB: jne 0x4ea659
        __asm _emit 0x75
        __asm _emit 0xdb
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 24h]
        cmp ecx, dword ptr [eax + 2ch]
        ; Exact mapped bytes 74 14: je 0x4ea6a0
        __asm _emit 0x74
        __asm _emit 0x14
        push 26ah
        push 674180h
        ; Exact mapped bytes E8 A5 E6 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xe6
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ea6a0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x4ea67e
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 24h]
        push eax
        ; Exact mapped bytes E8 46 AC F7 FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xac
        __asm _emit 0xf7
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
