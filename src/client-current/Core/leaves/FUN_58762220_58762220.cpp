// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58762220 .. +0x13D bytes.
extern "C" __declspec(naked) void FUN_58762220_58762220() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov eax, 10h
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov edx, dword ptr [ebp - 4]
        add eax, dword ptr [edx + ecx + 8ch]
        mov dword ptr [ebp - 14h], eax
        mov eax, 10h
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov edx, dword ptr [ebp - 4]
        add eax, dword ptr [edx + ecx + 90h]
        mov dword ptr [ebp - 10h], eax
        mov eax, 10h
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 14h]
        add edx, dword ptr [ecx + eax + 94h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, 10h
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 10h]
        add edx, dword ptr [ecx + eax + 98h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        sub ecx, dword ptr [ebp + 0ch]
        imul eax, ecx, 0aah
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 8]
        sub ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 14h]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 8D A0 00 00 00: jge 0x5876235d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 8E 94 00 00 00: jle 0x5876235d
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F 8D 82 00 00 00: jge 0x58762357
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7E 7A: jle 0x58762357
        __asm _emit 0x7e
        __asm _emit 0x7a
        mov eax, dword ptr [ebp - 8]
        sub eax, dword ptr [ebp - 10h]
        cdq
        and edx, 3
        add eax, edx
        mov ecx, eax
        sar ecx, 2
        mov edx, dword ptr [ebp - 4]
        imul ecx, dword ptr [edx + 0b0h]
        mov eax, dword ptr [ebp + 8]
        sub eax, dword ptr [ebp - 14h]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        add ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 0b0h]
        imul edx, dword ptr [ecx + 0b0h]
        cmp dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes 7D 2D: jge 0x58762351
        __asm _emit 0x7d
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5eb8h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0b4h]
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, byte ptr [eax + ecx]
        test edx, edx
        ; Exact mapped bytes 74 09: je 0x5876234b
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, 1
        ; Exact mapped bytes EB 16: jmp 0x5876235f
        __asm _emit 0xeb
        __asm _emit 0x16
        ; Exact mapped bytes EB 04: jmp 0x5876234f
        __asm _emit 0xeb
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 10: jmp 0x5876235f
        __asm _emit 0xeb
        __asm _emit 0x10
        ; Exact mapped bytes EB 04: jmp 0x58762355
        __asm _emit 0xeb
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 0A: jmp 0x5876235f
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes EB 04: jmp 0x5876235b
        __asm _emit 0xeb
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 04: jmp 0x5876235f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 02: jmp 0x5876235f
        __asm _emit 0xeb
        __asm _emit 0x02
    }
}
