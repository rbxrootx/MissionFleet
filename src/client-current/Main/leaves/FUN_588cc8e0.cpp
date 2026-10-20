// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588CC8E0 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_588cc8e0() {
    __asm {
        ; Exact mapped bytes A1 F4 47 A2 58: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 30h]
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x588cc92f
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [eax + 0cc0h]
        ; Exact mapped bytes 66 8B 41 04: mov ax, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
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
        ; Exact mapped bytes 74 18: je 0x588cc918
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 66 83 F8 07: cmp ax, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x07
        ; Exact mapped bytes 74 12: je 0x588cc918
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 66 83 F8 08: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x08
        ; Exact mapped bytes 74 0C: je 0x588cc918
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 66 83 F8 09: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x09
        ; Exact mapped bytes 74 06: je 0x588cc918
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, 1
        ret
        push 0
        push 0
        push 0
        push 7d0h
        ; Exact mapped bytes E8 C8 F1 E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xf1
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 01 84 E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0xff
        xor eax, eax
        ret
    }
}
