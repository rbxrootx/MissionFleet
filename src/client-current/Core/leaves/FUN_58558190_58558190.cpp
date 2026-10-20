// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58558190 .. +0x96 bytes.
extern "C" __declspec(naked) void FUN_58558190_58558190() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3C 3D F3 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x3d
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0B: jmp 0x585581b4
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7F 3F F3 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x3f
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 66: je 0x58558220
        __asm _emit 0x74
        __asm _emit 0x66
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EE 4D F3 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x4d
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx ecx, byte ptr [ebp + 8]
        cmp eax, ecx
        ; Exact mapped bytes 75 54: jne 0x5855821e
        __asm _emit 0x75
        __asm _emit 0x54
        imul edx, dword ptr [ebp + 0ch], 64h
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 89 FF FF FF: call 0x58558160
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DD E7 F2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xe7
        __asm _emit 0xf2
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 75 36: jne 0x5855821e
        __asm _emit 0x75
        __asm _emit 0x36
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax + 10dach]
        mov dword ptr [ebp - 10h], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FB 33 00 00: call 0x5855b600
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov ecx, 64h
        div ecx
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A3 56 F5 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x56
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 89: jmp 0x585581a9
        __asm _emit 0xeb
        __asm _emit 0x89
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
