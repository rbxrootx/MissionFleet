// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851BFD0 .. +0x10A bytes.
extern "C" __declspec(naked) void FUN_5851bfd0_5851BFD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 6ch], 0
        ; Exact mapped bytes 0F 84 F0 00 00 00: je 0x5851c0d6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes 66 8B 82 98 00 00 00: mov ax, word ptr [edx + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        mov ecx, 0ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov byte ptr [ebp - 1], al
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 68h]
        movzx eax, word ptr [eax + 0a0h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 68h]
        movzx ecx, word ptr [edx + 0a0h]
        imul eax, ecx
        cdq
        ; Exact mapped bytes F7 3D 70 77 94 58: idiv dword ptr [0x58947770]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0x70
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 6ch]
        movzx ecx, word ptr [ecx + 9eh]
        add ecx, 5
        cdq
        idiv ecx
        ; Exact mapped bytes 0F BE 55 FF: movsx edx, byte ptr [ebp - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xff
        mov ecx, 64h
        sub ecx, edx
        imul eax, ecx
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, 2710h
        sub edx, eax
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 84h], edx
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 80h], 0
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5851c07e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 8]
        movzx ecx, word ptr [eax + 7ch]
        cmp dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes 7D 4C: jge 0x5851c0d6
        __asm _emit 0x7d
        __asm _emit 0x4c
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CA F1 FF FF: call 0x5851b260
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 78h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ecx + edx*4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 78h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [eax + 80h]
        cmp eax, dword ptr [edx + ecx*4]
        ; Exact mapped bytes 77 15: ja 0x5851c0d4
        __asm _emit 0x77
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 78h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [edx + ecx*4]
        mov dword ptr [eax + 80h], edx
        ; Exact mapped bytes EB 9F: jmp 0x5851c075
        __asm _emit 0xeb
        __asm _emit 0x9f
        mov esp, ebp
        pop ebp
        ret
    }
}
