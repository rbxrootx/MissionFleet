// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043389A .. +0x1F6 bytes.
extern "C" __declspec(naked) void FUN_0043389a_0043389A() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, 10bh
        cmp eax, ecx
        ; Exact mapped bytes 0F 87 BD 01 00 00: ja 0x433a68
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x433950
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 3eh
        ; Exact mapped bytes 0F 87 9E 00 00 00: ja 0x433958
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x433954
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 19h
        ; Exact mapped bytes 77 27: ja 0x4338ec
        __asm _emit 0x77
        __asm _emit 0x27
        ; Exact mapped bytes 74 52: je 0x433919
        __asm _emit 0x74
        __asm _emit 0x52
        cmp eax, 18h
        ; Exact mapped bytes 0F 87 B9 01 00 00: ja 0x433a89
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 90 3A 43 00: jmp dword ptr [eax*4 + 0x433a90]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x3a
        __asm _emit 0x43
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 BE 00 00 00: jmp 0x43399c
        __asm _emit 0xe9
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        ; Exact mapped bytes E9 B6 00 00 00: jmp 0x43399b
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 2
        ; Exact mapped bytes E9 AF 00 00 00: jmp 0x43399b
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 27h
        ; Exact mapped bytes 77 4C: ja 0x43393d
        __asm _emit 0x77
        __asm _emit 0x4c
        ; Exact mapped bytes 0F 84 DD 00 00 00: je 0x4339d4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 20h
        ; Exact mapped bytes 77 25: ja 0x433921
        __asm _emit 0x77
        __asm _emit 0x25
        ; Exact mapped bytes 74 1F: je 0x43391d
        __asm _emit 0x74
        __asm _emit 0x1f
        sub eax, 1ah
        ; Exact mapped bytes 0F 84 C9 00 00 00: je 0x4339d0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 74 0F: je 0x433919
        __asm _emit 0x74
        __asm _emit 0x0f
        dec eax
        dec eax
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x43399f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 0F 85 70 01 00 00: jne 0x433a89
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 9
        ; Exact mapped bytes EB 7E: jmp 0x43399b
        __asm _emit 0xeb
        __asm _emit 0x7e
        push 0bh
        ; Exact mapped bytes EB 7A: jmp 0x43399b
        __asm _emit 0xeb
        __asm _emit 0x7a
        sub eax, 21h
        ; Exact mapped bytes 0F 84 06 01 00 00: je 0x433a30
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 74 23: je 0x433950
        __asm _emit 0x74
        __asm _emit 0x23
        dec eax
        dec eax
        ; Exact mapped bytes 74 AD: je 0x4338de
        __asm _emit 0x74
        __asm _emit 0xad
        dec eax
        dec eax
        ; Exact mapped bytes 0F 85 50 01 00 00: jne 0x433a89
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0eh
        ; Exact mapped bytes EB 5E: jmp 0x43399b
        __asm _emit 0xeb
        __asm _emit 0x5e
        add eax, -34h
        cmp eax, 8
        ; Exact mapped bytes 0F 87 40 01 00 00: ja 0x433a89
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 F4 3A 43 00: jmp dword ptr [eax*4 + 0x433af4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0x3a
        __asm _emit 0x43
        __asm _emit 0x00
        push 3
        ; Exact mapped bytes EB 47: jmp 0x43399b
        __asm _emit 0xeb
        __asm _emit 0x47
        push 8
        ; Exact mapped bytes EB 43: jmp 0x43399b
        __asm _emit 0xeb
        __asm _emit 0x43
        cmp eax, 6bh
        ; Exact mapped bytes 77 46: ja 0x4339a3
        __asm _emit 0x77
        __asm _emit 0x46
        ; Exact mapped bytes 74 86: je 0x4338e5
        __asm _emit 0x74
        __asm _emit 0x86
        cmp eax, 47h
        ; Exact mapped bytes 77 1C: ja 0x433980
        __asm _emit 0x77
        __asm _emit 0x1c
        ; Exact mapped bytes 74 39: je 0x43399f
        __asm _emit 0x74
        __asm _emit 0x39
        sub eax, 40h
        ; Exact mapped bytes 74 34: je 0x43399f
        __asm _emit 0x74
        __asm _emit 0x34
        dec eax
        ; Exact mapped bytes 74 31: je 0x43399f
        __asm _emit 0x74
        __asm _emit 0x31
        dec eax
        ; Exact mapped bytes 74 5F: je 0x4339d0
        __asm _emit 0x74
        __asm _emit 0x5f
        dec eax
        ; Exact mapped bytes 74 DC: je 0x433950
        __asm _emit 0x74
        __asm _emit 0xdc
        dec eax
        ; Exact mapped bytes 0F 84 63 FF FF FF: je 0x4338de
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 DF 00 00 00: jmp 0x433a5f
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 50h
        ; Exact mapped bytes 74 1A: je 0x43399f
        __asm _emit 0x74
        __asm _emit 0x1a
        dec eax
        dec eax
        ; Exact mapped bytes 74 16: je 0x43399f
        __asm _emit 0x74
        __asm _emit 0x16
        sub eax, 3
        ; Exact mapped bytes 74 C2: je 0x433950
        __asm _emit 0x74
        __asm _emit 0xc2
        dec eax
        ; Exact mapped bytes 74 0E: je 0x43399f
        __asm _emit 0x74
        __asm _emit 0x0e
        dec eax
        dec eax
        ; Exact mapped bytes 0F 85 F0 00 00 00: jne 0x433a89
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ah
        pop eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 5
        ; Exact mapped bytes EB F8: jmp 0x43399b
        __asm _emit 0xeb
        __asm _emit 0xf8
        mov ecx, 90h
        cmp eax, ecx
        ; Exact mapped bytes 77 51: ja 0x4339fd
        __asm _emit 0x77
        __asm _emit 0x51
        ; Exact mapped bytes 74 A2: je 0x433950
        __asm _emit 0x74
        __asm _emit 0xa2
        cmp eax, 75h
        ; Exact mapped bytes 77 25: ja 0x4339d8
        __asm _emit 0x77
        __asm _emit 0x25
        ; Exact mapped bytes 74 E4: je 0x433999
        __asm _emit 0x74
        __asm _emit 0xe4
        sub eax, 6ch
        ; Exact mapped bytes 74 76: je 0x433a30
        __asm _emit 0x74
        __asm _emit 0x76
        sub eax, 3
        ; Exact mapped bytes 74 91: je 0x433950
        __asm _emit 0x74
        __asm _emit 0x91
        dec eax
        ; Exact mapped bytes 74 12: je 0x4339d4
        __asm _emit 0x74
        __asm _emit 0x12
        dec eax
        ; Exact mapped bytes 0F 84 15 FF FF FF: je 0x4338de
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        dec eax
        ; Exact mapped bytes 0F 85 B9 00 00 00: jne 0x433a89
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 6
        ; Exact mapped bytes EB C7: jmp 0x43399b
        __asm _emit 0xeb
        __asm _emit 0xc7
        push 0dh
        ; Exact mapped bytes EB C3: jmp 0x43399b
        __asm _emit 0xeb
        __asm _emit 0xc3
        sub eax, 7bh
        ; Exact mapped bytes 0F 84 6F FF FF FF: je 0x433950
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        dec eax
        ; Exact mapped bytes 0F 84 68 FF FF FF: je 0x433950
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        dec eax
        ; Exact mapped bytes 0F 84 61 FF FF FF: je 0x433950
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        sub eax, 6
        ; Exact mapped bytes 0F 84 21 FF FF FF: je 0x433919
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x21
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 15 FF FF FF: jmp 0x433912
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 0b6h
        cmp eax, ecx
        ; Exact mapped bytes 77 38: ja 0x433a3e
        __asm _emit 0x77
        __asm _emit 0x38
        ; Exact mapped bytes 74 C8: je 0x4339d0
        __asm _emit 0x74
        __asm _emit 0xc8
        sub eax, 91h
        ; Exact mapped bytes 74 28: je 0x433a37
        __asm _emit 0x74
        __asm _emit 0x28
        sub eax, 9
        ; Exact mapped bytes 0F 84 38 FF FF FF: je 0x433950
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        sub eax, 7
        ; Exact mapped bytes 0F 84 2F FF FF FF: je 0x433950
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        sub eax, 6
        ; Exact mapped bytes 74 0A: je 0x433a30
        __asm _emit 0x74
        __asm _emit 0x0a
        sub eax, 3
        ; Exact mapped bytes 75 5E: jne 0x433a89
        __asm _emit 0x75
        __asm _emit 0x5e
        ; Exact mapped bytes E9 6F FF FF FF: jmp 0x43399f
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ch
        ; Exact mapped bytes E9 64 FF FF FF: jmp 0x43399b
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 7
        ; Exact mapped bytes E9 5D FF FF FF: jmp 0x43399b
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        sub eax, 0b7h
        ; Exact mapped bytes 0F 84 56 FF FF FF: je 0x43399f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        sub eax, 8
        ; Exact mapped bytes 74 82: je 0x4339d0
        __asm _emit 0x74
        __asm _emit 0x82
        dec eax
        dec eax
        ; Exact mapped bytes 0F 84 7A FF FF FF: je 0x4339d0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        sub eax, 0dh
        ; Exact mapped bytes 0F 84 F1 FE FF FF: je 0x433950
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        dec eax
        dec eax
        ; Exact mapped bytes 75 26: jne 0x433a89
        __asm _emit 0x75
        __asm _emit 0x26
        ; Exact mapped bytes E9 E8 FE FF FF: jmp 0x433950
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        sub eax, 3e3h
        ; Exact mapped bytes 0F 84 26 FF FF FF: je 0x433999
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        dec eax
        ; Exact mapped bytes 0F 84 1F FF FF FF: je 0x433999
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        dec eax
        ; Exact mapped bytes 0F 84 18 FF FF FF: je 0x433999
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        dec eax
        dec eax
        ; Exact mapped bytes 0F 84 16 FF FF FF: je 0x43399f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        ; Exact mapped bytes E9 0B FF FF FF: jmp 0x43399b
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
