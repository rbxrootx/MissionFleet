// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585986C0 .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_585986c0_585986C0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        movzx eax, word ptr [ebp + 0ch]
        cmp eax, 0ch
        ; Exact mapped bytes 74 2D: je 0x585986fd
        __asm _emit 0x74
        __asm _emit 0x2d
        movzx ecx, word ptr [ebp + 0ch]
        cmp ecx, 7
        ; Exact mapped bytes 74 24: je 0x585986fd
        __asm _emit 0x74
        __asm _emit 0x24
        movzx edx, word ptr [ebp + 0ch]
        cmp edx, 0eh
        ; Exact mapped bytes 74 1B: je 0x585986fd
        __asm _emit 0x74
        __asm _emit 0x1b
        movzx eax, word ptr [ebp + 0ch]
        cmp eax, 13h
        ; Exact mapped bytes 74 12: je 0x585986fd
        __asm _emit 0x74
        __asm _emit 0x12
        movzx ecx, word ptr [ebp + 0ch]
        cmp ecx, 18h
        ; Exact mapped bytes 74 09: je 0x585986fd
        __asm _emit 0x74
        __asm _emit 0x09
        movzx edx, word ptr [ebp + 0ch]
        cmp edx, 19h
        ; Exact mapped bytes 75 04: jne 0x58598701
        __asm _emit 0x75
        __asm _emit 0x04
        mov al, 1
        ; Exact mapped bytes EB 69: jmp 0x5859876a
        __asm _emit 0xeb
        __asm _emit 0x69
        movzx eax, byte ptr [ebp + 8]
        cmp eax, 2
        ; Exact mapped bytes 74 12: je 0x5859871c
        __asm _emit 0x74
        __asm _emit 0x12
        movzx ecx, byte ptr [ebp + 8]
        cmp ecx, 3
        ; Exact mapped bytes 74 09: je 0x5859871c
        __asm _emit 0x74
        __asm _emit 0x09
        movzx edx, byte ptr [ebp + 8]
        cmp edx, 4
        ; Exact mapped bytes 75 4C: jne 0x58598768
        __asm _emit 0x75
        __asm _emit 0x4c
        movzx eax, word ptr [ebp + 0ch]
        cmp eax, 1
        ; Exact mapped bytes 74 3F: je 0x58598764
        __asm _emit 0x74
        __asm _emit 0x3f
        movzx ecx, word ptr [ebp + 0ch]
        cmp ecx, 2
        ; Exact mapped bytes 74 36: je 0x58598764
        __asm _emit 0x74
        __asm _emit 0x36
        movzx edx, word ptr [ebp + 0ch]
        cmp edx, 3
        ; Exact mapped bytes 74 2D: je 0x58598764
        __asm _emit 0x74
        __asm _emit 0x2d
        movzx eax, word ptr [ebp + 0ch]
        cmp eax, 5
        ; Exact mapped bytes 74 24: je 0x58598764
        __asm _emit 0x74
        __asm _emit 0x24
        movzx ecx, word ptr [ebp + 0ch]
        cmp ecx, 0ah
        ; Exact mapped bytes 74 1B: je 0x58598764
        __asm _emit 0x74
        __asm _emit 0x1b
        movzx edx, word ptr [ebp + 0ch]
        cmp edx, 0fh
        ; Exact mapped bytes 74 12: je 0x58598764
        __asm _emit 0x74
        __asm _emit 0x12
        movzx eax, word ptr [ebp + 0ch]
        cmp eax, 10h
        ; Exact mapped bytes 74 09: je 0x58598764
        __asm _emit 0x74
        __asm _emit 0x09
        movzx ecx, word ptr [ebp + 0ch]
        cmp ecx, 16h
        ; Exact mapped bytes 75 04: jne 0x58598768
        __asm _emit 0x75
        __asm _emit 0x04
        mov al, 1
        ; Exact mapped bytes EB 02: jmp 0x5859876a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor al, al
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
