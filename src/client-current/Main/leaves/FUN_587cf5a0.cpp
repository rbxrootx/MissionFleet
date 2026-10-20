// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587CF5A0 .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_587cf5a0() {
    __asm {
        ; Exact mapped bytes 66 8B 44 24 08: mov ax, word ptr [esp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 F8 0C: cmp ax, 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0c
        ; Exact mapped bytes 74 60: je 0x587cf60b
        __asm _emit 0x74
        __asm _emit 0x60
        ; Exact mapped bytes 66 83 F8 0E: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0e
        ; Exact mapped bytes 74 5A: je 0x587cf60b
        __asm _emit 0x74
        __asm _emit 0x5a
        ; Exact mapped bytes 66 83 F8 13: cmp ax, 0x13
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x13
        ; Exact mapped bytes 74 54: je 0x587cf60b
        __asm _emit 0x74
        __asm _emit 0x54
        ; Exact mapped bytes 66 83 F8 18: cmp ax, 0x18
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x18
        ; Exact mapped bytes 74 4E: je 0x587cf60b
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes 66 83 F8 19: cmp ax, 0x19
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x19
        ; Exact mapped bytes 74 48: je 0x587cf60b
        __asm _emit 0x74
        __asm _emit 0x48
        mov cl, byte ptr [esp + 4]
        cmp cl, 2
        ; Exact mapped bytes 74 0A: je 0x587cf5d6
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp cl, 3
        ; Exact mapped bytes 74 05: je 0x587cf5d6
        __asm _emit 0x74
        __asm _emit 0x05
        cmp cl, 4
        ; Exact mapped bytes 75 30: jne 0x587cf606
        __asm _emit 0x75
        __asm _emit 0x30
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 74 2F: je 0x587cf60b
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes 66 83 F8 02: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 74 29: je 0x587cf60b
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes 66 83 F8 03: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes 74 23: je 0x587cf60b
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 66 83 F8 05: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 74 1D: je 0x587cf60b
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes 66 83 F8 0A: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0a
        ; Exact mapped bytes 74 17: je 0x587cf60b
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 66 83 F8 0F: cmp ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0f
        ; Exact mapped bytes 74 11: je 0x587cf60b
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 66 83 F8 10: cmp ax, 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x10
        ; Exact mapped bytes 74 0B: je 0x587cf60b
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 66 83 F8 16: cmp ax, 0x16
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x16
        ; Exact mapped bytes 74 05: je 0x587cf60b
        __asm _emit 0x74
        __asm _emit 0x05
        xor al, al
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov al, 1
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
