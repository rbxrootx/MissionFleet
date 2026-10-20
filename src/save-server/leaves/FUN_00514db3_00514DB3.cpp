// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00514DB3 .. +0x3AB bytes.
extern "C" __declspec(naked) void FUN_00514db3_00514DB3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 28h], ecx
        mov eax, dword ptr [ebp - 28h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 92 C8 00 00 00: call dword ptr [edx + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 713h
        push 673dc0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 7D 54 FC FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x54
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 1C: je 0x514e05
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 68h], 0
        ; Exact mapped bytes 74 13: je 0x514e05
        __asm _emit 0x74
        __asm _emit 0x13
        push 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 68h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 68h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 64: call dword ptr [eax + 0x64]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x64
        mov dword ptr [ebp - 0ch], 0
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 6ch
        ; Exact mapped bytes E8 40 1C 01 00: call 0x526a57
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 B4 00 00 00: je 0x514ed8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 6ch
        ; Exact mapped bytes E8 46 1C 01 00: call 0x526a79
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 14h], edx
        push 71eh
        push 673dc0h
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 15 54 FC FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 08 BF 68 00: call dword ptr [0x68bf08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 0ffffh
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0e800h
        ; Exact mapped bytes 72 6A: jb 0x514ed3
        __asm _emit 0x72
        __asm _emit 0x6a
        cmp dword ptr [ebp - 10h], 0e81fh
        ; Exact mapped bytes 77 61: ja 0x514ed3
        __asm _emit 0x77
        __asm _emit 0x61
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, 0e800h
        mov eax, 1
        shl eax, cl
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 92 D0 00 00 00: call dword ptr [edx + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x514ea0
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        or eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 92 D8 00 00 00: call dword ptr [edx + 0xd8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x514ebb
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp - 10h], 0e81fh
        ; Exact mapped bytes 74 18: je 0x514ed3
        __asm _emit 0x74
        __asm _emit 0x18
        push 1
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        and ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 97 ED FF FF: call 0x513c6a
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 42 FF FF FF: jmp 0x514e1a
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 4F 01 00 00: je 0x51503a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        cmp dword ptr [edx + 9ch], 0
        ; Exact mapped bytes 74 14: je 0x514f0b
        __asm _emit 0x74
        __asm _emit 0x14
        push 72eh
        push 673dc0h
        ; Exact mapped bytes E8 3A 3E 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x514f0b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x514eeb
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 10h]
        mov dword ptr [ecx + 9ch], eax
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 DE D2 FF FF: call 0x512208
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        push edx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 88 BF 68 00: call dword ptr [0x68bf88]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x514f5a
        __asm _emit 0x75
        __asm _emit 0x14
        push 736h
        push 673dc0h
        ; Exact mapped bytes E8 EB 3D 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x514f5a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x514f40
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes FF 15 44 BE 68 00: call dword ptr [0x68be44]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 40 BE 68 00: call dword ptr [0x68be40]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 74 29: je 0x514fb1
        __asm _emit 0x74
        __asm _emit 0x29
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 1D 70 01 00: call 0x52bfaf
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 3A 68 01 00: call 0x52b7d6
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 0b8h]
        and ecx, 0fffffffeh
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 0b8h], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 48h]
        mov dword ptr [eax + 14h], edx
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + 48h], 0
        push 7915h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 84 C9 FF FF: call 0x511958
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx], 0e900h
        ; Exact mapped bytes 74 15: je 0x514ff4
        __asm _emit 0x74
        __asm _emit 0x15
        push 0e900h
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 88 BF 68 00: call dword ptr [0x68bf88]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 11: je 0x51500b
        __asm _emit 0x74
        __asm _emit 0x11
        push 0ea21h
        push -0ch
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes FF 15 50 BF 68 00: call dword ptr [0x68bf50]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push -10h
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 A0 BF 68 00: call dword ptr [0x68bfa0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 300000h
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x515035
        __asm _emit 0x74
        __asm _emit 0x12
        push 673fdch
        push 674020h
        ; Exact mapped bytes E8 E3 B5 F8 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xb5
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E9 1B 01 00 00: jmp 0x515155
        __asm _emit 0xe9
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 9ch], 0
        push 0ea21h
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 88 BF 68 00: call dword ptr [0x68bf88]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 3D: je 0x51509f
        __asm _emit 0x74
        __asm _emit 0x3d
        push 0e900h
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 88 BF 68 00: call dword ptr [0x68bf88]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 11: je 0x51508e
        __asm _emit 0x74
        __asm _emit 0x11
        push 0ea21h
        push -0ch
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes FF 15 50 BF 68 00: call dword ptr [0x68bf50]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push 0e900h
        push -0ch
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes FF 15 50 BF 68 00: call dword ptr [0x68bf50]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 74 1E: je 0x5150c6
        __asm _emit 0x74
        __asm _emit 0x1e
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 FD 6E 01 00: call 0x52bfaf
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 3C BE 68 00: call dword ptr [0x68be3c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 68h], 0
        ; Exact mapped bytes 74 13: je 0x5150e2
        __asm _emit 0x74
        __asm _emit 0x13
        push 1
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 68h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 68h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 64: call dword ptr [eax + 0x64]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x64
        push 1
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 92 D0 00 00 00: call dword ptr [edx + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax], 0e900h
        ; Exact mapped bytes 74 16: je 0x515113
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        push edx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 88 BF 68 00: call dword ptr [0x68bf88]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 14: jne 0x51512d
        __asm _emit 0x75
        __asm _emit 0x14
        push 777h
        push 673dc0h
        ; Exact mapped bytes E8 18 3C 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51512d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x515113
        __asm _emit 0x75
        __asm _emit 0xe0
        push 5
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes FF 15 44 BE 68 00: call dword ptr [0x68be44]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 14h]
        mov dword ptr [ecx + 48h], eax
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 B3 D0 FF FF: call 0x512208
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
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
