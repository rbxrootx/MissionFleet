// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874B710 .. +0x9F bytes.
extern "C" __declspec(naked) void FUN_5874b710() {
    __asm {
        ; Exact mapped bytes A1 F4 47 A2 58: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 30h]
        test eax, eax
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x5874b7a7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0cc0h]
        test eax, eax
        ; Exact mapped bytes 74 7D: je 0x5874b7a7
        __asm _emit 0x74
        __asm _emit 0x7d
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 74 39: je 0x5874b771
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 66 83 F8 07: cmp ax, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x07
        ; Exact mapped bytes 74 33: je 0x5874b771
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes 66 83 F8 08: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x08
        ; Exact mapped bytes 75 63: jne 0x5874b7a7
        __asm _emit 0x75
        __asm _emit 0x63
        mov edx, dword ptr [esp + 8]
        imul edx, dword ptr [esp + 0ch]
        movzx ecx, byte ptr [ecx + 1a0h]
        cmp ecx, edx
        ; Exact mapped bytes 72 4F: jb 0x5874b7a7
        __asm _emit 0x72
        __asm _emit 0x4f
        push 0
        push 0
        push 0
        push 3eh
        ; Exact mapped bytes E8 8B 03 02 00: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 C4 95 01 00: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [esp + 4]
        imul edx, dword ptr [esp + 0ch]
        movzx eax, byte ptr [ecx + 19fh]
        movzx ecx, byte ptr [ecx + 19eh]
        add eax, ecx
        cmp eax, edx
        ; Exact mapped bytes 72 19: jb 0x5874b7a7
        __asm _emit 0x72
        __asm _emit 0x19
        push 0
        push 0
        push 0
        push 3dh
        ; Exact mapped bytes E8 55 03 02 00: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 8E 95 01 00: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
