// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B4AF0 .. +0xB7 bytes.
extern "C" __declspec(naked) void FUN_584b4af0_584B4AF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 8], ecx
        push 2
        push 4
        push 8
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A9 A5 FF FF: call 0x584af0b0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xa5
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x584b4b1b
        __asm _emit 0x74
        __asm _emit 0x10
        push 2
        push 4
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 09 A8 FF FF: call 0x584af320
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xa8
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x584b4b22
        __asm _emit 0x75
        __asm _emit 0x07
        xor al, al
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x584b4ba3
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 63 B1 FF FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D6 AF FF FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 4B: je 0x584b4b8e
        __asm _emit 0x74
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 25 B1 FF FF: call 0x584afc70
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, al
        xor eax, 55h
        mov byte ptr [ebp - 1], al
        movzx ecx, byte ptr [ebp - 1]
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 17ah]
        cmp ecx, eax
        ; Exact mapped bytes 7C 09: jl 0x584b4b6f
        __asm _emit 0x7c
        __asm _emit 0x09
        movzx ecx, byte ptr [ebp - 1]
        cmp ecx, 53h
        ; Exact mapped bytes 7E 1F: jle 0x584b4b8e
        __asm _emit 0x7e
        __asm _emit 0x1f
        ; Exact mapped bytes E8 7C 26 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        push 0
        push 0
        push 0
        push 3bbh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E6 41 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes EB 15: jmp 0x584b4ba3
        __asm _emit 0xeb
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 6A C3 FF FF: call 0x584b0f00
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 75 04: jne 0x584b4ba1
        __asm _emit 0x75
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 02: jmp 0x584b4ba3
        __asm _emit 0xeb
        __asm _emit 0x02
        mov al, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
