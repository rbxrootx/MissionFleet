// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58770390 .. +0xCC bytes.
extern "C" __declspec(naked) void FUN_58770390_58770390() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 5f34h]
        ; Exact mapped bytes E8 19 66 D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x66
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 5f34h]
        ; Exact mapped bytes E8 F8 BC D1 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xbc
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        movzx edx, byte ptr [ebp + 8]
        test edx, edx
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x58770456
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes EB 0C: jmp 0x587703db
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
        movzx edx, word ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp edx, dword ptr [eax + 1284h]
        ; Exact mapped bytes 7D 40: jge 0x5877042a
        __asm _emit 0x7d
        __asm _emit 0x40
        movzx ecx, word ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx*4 + 17ch], 0
        ; Exact mapped bytes 74 2D: je 0x58770428
        __asm _emit 0x74
        __asm _emit 0x2d
        movzx eax, byte ptr [ebp + 8]
        and eax, 1
        ; Exact mapped bytes 74 24: je 0x58770428
        __asm _emit 0x74
        __asm _emit 0x24
        movzx ecx, word ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 17ch]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 5ebch]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E9 41 DF FF: call 0x58564610
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB A5: jmp 0x587703cf
        __asm _emit 0xeb
        __asm _emit 0xa5
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8B 65 D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x65
        __asm _emit 0xd1
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 1C: jne 0x58770456
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AB 07 DE FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x07
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        movzx ecx, byte ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7B 3F DE FF: call 0x585543d0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x3f
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
