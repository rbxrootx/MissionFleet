// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58550B30 .. +0xB2 bytes.
extern "C" __declspec(naked) void FUN_58550b30_58550B30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push esi
        mov dword ptr [ebp - 8], ecx
        xor eax, eax
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes EB 0C: jmp 0x58550b4e
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 4D FC: mov cx, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 66 83 C1 01: add cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        movzx esi, word ptr [ebp - 4]
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 63 5E F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x5e
        __asm _emit 0xf3
        __asm _emit 0xff
        cmp esi, dword ptr [eax + 1284h]
        ; Exact mapped bytes 7D 76: jge 0x58550bdb
        __asm _emit 0x7d
        __asm _emit 0x76
        movzx edx, word ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + edx*4 + 8], 0
        ; Exact mapped bytes 74 63: je 0x58550bd6
        __asm _emit 0x74
        __asm _emit 0x63
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 42 5E F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x5e
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 4]
        movzx edx, byte ptr [eax + ecx + 1fch]
        test edx, edx
        ; Exact mapped bytes 75 48: jne 0x58550bd6
        __asm _emit 0x75
        __asm _emit 0x48
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 27 5E F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A0 B8 F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xb8
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        movzx eax, word ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B0 C4 F3 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xc4
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx ecx, ax
        cmp ecx, 5
        ; Exact mapped bytes 75 1E: jne 0x58550bd6
        __asm _emit 0x75
        __asm _emit 0x1e
        movzx edx, word ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 8]
        ; Exact mapped bytes E8 88 30 01 00: call 0x58563c50
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 05: je 0x58550bd6
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes EB 07: jmp 0x58550bdd
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes E9 67 FF FF FF: jmp 0x58550b42
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
