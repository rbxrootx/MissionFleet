// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58702770 .. +0x132 bytes.
extern "C" __declspec(naked) void FUN_58702770_58702770() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3C 42 D8 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x42
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 25 A8 D8 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xa8
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 74 51: je 0x587027e1
        __asm _emit 0x74
        __asm _emit 0x51
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0a4h]
        cmp ecx, 10h
        ; Exact mapped bytes 75 22: jne 0x587027c1
        __asm _emit 0x75
        __asm _emit 0x22
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0bch]
        mov dword ptr [ebp - 8], ecx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 82 D0 D9 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xd0
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 20: jmp 0x587027e1
        __asm _emit 0xeb
        __asm _emit 0x20
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0bch]
        mov dword ptr [ebp - 0ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 60 D0 D9 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xd0
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 10h], ecx
        push 100h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 3D 2D 0B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x2d
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a4h]
        cmp eax, 10h
        ; Exact mapped bytes 74 20: je 0x58702833
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 1e8h]
        mov dword ptr [ebp - 14h], eax
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 AE 36 D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x36
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0a0h], 2
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 164h]
        mov dword ptr [ebp - 18h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 31 37 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x37
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 164h]
        mov dword ptr [ebp - 1ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 12 0A 00 00: call 0x58703290
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 20h], ecx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 43 36 D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x36
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
