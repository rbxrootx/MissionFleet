// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58756F80 .. +0x353 bytes.
extern "C" __declspec(naked) void FUN_58756f80_58756F80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 74h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 301ch], 0
        ; Exact mapped bytes 0F 84 F2 01 00 00: je 0x5875718b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3020h]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 8], 0
        ; Exact mapped bytes 0F 84 D6 00 00 00: je 0x58757086
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        imul edx, dword ptr [ecx + 3020h], 0ch
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 1814h]
        mov dword ptr [ebp - 18h], ecx
        lea edx, [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 AD 10 D3 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x10
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x58756fe5
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea eax, [ebp - 5ch]
        push eax
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 9C 0A D3 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x0a
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        imul edx, dword ptr [ecx + 3020h], 0ch
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 1814h]
        mov dword ptr [ebp - 1ch], ecx
        lea edx, [ebp - 60h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 88 11 D3 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x11
        __asm _emit 0xd3
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 BF 09 D3 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x09
        __asm _emit 0xd3
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 4F: je 0x58757067
        __asm _emit 0x74
        __asm _emit 0x4f
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 20 0A D3 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x0a
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3020h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 1008h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3020h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 808h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 6F 76 01 00: call 0x5876e6d0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 6F FF FF FF: jmp 0x58756fd6
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        imul ecx, dword ptr [eax + 3020h], 0ch
        mov edx, dword ptr [ebp - 4]
        lea ecx, [edx + ecx + 1814h]
        ; Exact mapped bytes E8 70 10 D3 FF: call 0x584880f0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x10
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 CE 00 00 00: jmp 0x58757154
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3020h]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 808h], 0
        ; Exact mapped bytes 74 51: je 0x587570ed
        __asm _emit 0x74
        __asm _emit 0x51
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3020h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 808h]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 17: je 0x587570cf
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 2ch], eax
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 D4: call dword ptr [ebp - 0x2c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd4
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x587570d6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3020h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 808h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3020h]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 1008h], 0
        ; Exact mapped bytes 74 51: je 0x58757154
        __asm _emit 0x74
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3020h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1008h]
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 17: je 0x58757136
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 34h], ecx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 CC: call dword ptr [ebp - 0x34]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xcc
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x5875713d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3020h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 1008h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3014h]
        push eax
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3014h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 301ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 3020h], 0ffffffffh
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 3020h], -1
        ; Exact mapped bytes 0F 85 34 01 00 00: jne 0x587572cf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1808h
        ; Exact mapped bytes E8 97 10 D3 FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x10
        __asm _emit 0xd3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 1E 01 00 00: je 0x587572cf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 1808h
        mov dword ptr [ebp - 3ch], edx
        lea eax, [ebp - 64h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 B7 0E D3 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x0e
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 70 08 D3 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x08
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 808h], 0
        ; Exact mapped bytes 74 14: je 0x587571f9
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 1008h], 0
        ; Exact mapped bytes 0F 85 9C 00 00 00: jne 0x58757295
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 8], 0
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x58757295
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 3020h], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1808h
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 1808h
        mov dword ptr [ebp - 40h], edx
        lea eax, [ebp - 68h]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 46 0E D3 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x0e
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp - 44h]
        push edx
        lea eax, [ebp - 6ch]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 61 2D D6 FF: call 0x584b9fb0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x2d
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3018h
        push ecx
        push 0
        mov edx, dword ptr [ebp - 4]
        push edx
        push 58756cb0h
        push 0
        push 0
        ; Exact mapped bytes E8 01 0D 10 00: call 0x58857f6f
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 18h
        mov dword ptr [ebp - 4ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [eax + 3014h], ecx
        push 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3014h]
        push eax
        ; Exact mapped bytes FF 15 24 41 89 58: call dword ptr [0x58894124]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB 3A: jmp 0x587572cf
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1808h
        mov dword ptr [ebp - 58h], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 1808h
        mov dword ptr [ebp - 50h], edx
        lea eax, [ebp - 70h]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 C7 0D D3 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x0d
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 54h], ecx
        mov edx, dword ptr [ebp - 54h]
        push edx
        lea eax, [ebp - 74h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 E2 2C D6 FF: call 0x584b9fb0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x2c
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
