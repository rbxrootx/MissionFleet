// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5853B8E0 .. +0x1BD bytes.
extern "C" __declspec(naked) void FUN_5853b8e0_5853B8E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [eax + 50h]
        and cl, 1
        movzx edx, cl
        test edx, edx
        ; Exact mapped bytes 0F 84 9C 01 00 00: je 0x5853ba99
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [eax + 50h]
        shr cl, 1
        and cl, 1
        movzx edx, cl
        test edx, edx
        ; Exact mapped bytes 74 5B: je 0x5853b96a
        __asm _emit 0x74
        __asm _emit 0x5b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 7ch]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 5ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 7ch], ecx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 60h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 80h], edx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        sar eax, 0ah
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 78h]
        push eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
        sar eax, 0ah
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 74h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BC 9C 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x9c
        __asm _emit 0x27
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 2F 01 00 00: jmp 0x5853ba99
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 64h]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 75 12: jne 0x5853b98a
        __asm _emit 0x75
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 68h]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 0F 84 0F 01 00 00: je 0x5853ba99
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 5ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 7ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 60h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 80h], ecx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7ch]
        sar edx, 0ah
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 1ch], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        sar edx, 0ah
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 18h], edx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 5ch], 0
        ; Exact mapped bytes 7D 27: jge 0x5853ba0b
        __asm _emit 0x7d
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 1ch]
        sub eax, dword ptr [edx + 64h]
        ; Exact mapped bytes 79 0B: jns 0x5853b9fa
        __asm _emit 0x79
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 06: jmp 0x5853ba00
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 64h], edx
        ; Exact mapped bytes EB 27: jmp 0x5853ba32
        __asm _emit 0xeb
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 1ch]
        sub ecx, dword ptr [eax + 64h]
        test ecx, ecx
        ; Exact mapped bytes 7E 08: jle 0x5853ba20
        __asm _emit 0x7e
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 09: jmp 0x5853ba29
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 64h], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 60h], 0
        ; Exact mapped bytes 7D 27: jge 0x5853ba62
        __asm _emit 0x7d
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 18h]
        sub eax, dword ptr [edx + 68h]
        ; Exact mapped bytes 79 08: jns 0x5853ba4e
        __asm _emit 0x79
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 09: jmp 0x5853ba57
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 68h], edx
        ; Exact mapped bytes EB 27: jmp 0x5853ba89
        __asm _emit 0xeb
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 18h]
        sub ecx, dword ptr [eax + 68h]
        test ecx, ecx
        ; Exact mapped bytes 7E 0B: jle 0x5853ba7a
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 06: jmp 0x5853ba80
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + 68h], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 64h
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 98 39 F6 FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x39
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
