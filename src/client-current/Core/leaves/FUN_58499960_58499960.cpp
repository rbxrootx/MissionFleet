// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58499960 .. +0x180 bytes.
extern "C" __declspec(naked) void FUN_58499960_58499960() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 74 4A: je 0x584999c3
        __asm _emit 0x74
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 7ch]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 6F 23 FF FF: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x23
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 20: je 0x584999ba
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 1E D0 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xd0
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x584999ba
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 12 D0 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xd0
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2B 25 FF FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 07: jmp 0x584999c1
        __asm _emit 0xeb
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 1B 01 00 00: jmp 0x58499adc
        __asm _emit 0xe9
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x584999ca
        __asm _emit 0xeb
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 12 01 00 00: jmp 0x58499adc
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 0D: je 0x584999e4
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 71 BC FF FF: call 0x58495650
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 07: jmp 0x584999eb
        __asm _emit 0xeb
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 F1 00 00 00: jmp 0x58499adc
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 324h]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 7E 5B: jle 0x58499a54
        __asm _emit 0x7e
        __asm _emit 0x5b
        mov ecx, dword ptr [ebp - 4]
        imul eax, dword ptr [ecx + 22ch], 69h
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 22ch], eax
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 2dah]
        imul eax, ecx, 0ch
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 22ch], eax
        ; Exact mapped bytes 7E 1E: jle 0x58499a52
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 2dah]
        imul eax, ecx, 0ch
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 22ch], eax
        ; Exact mapped bytes EB 67: jmp 0x58499abb
        __asm _emit 0xeb
        __asm _emit 0x67
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 324h]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7D 59: jge 0x58499abb
        __asm _emit 0x7d
        __asm _emit 0x59
        mov edx, dword ptr [ebp - 4]
        imul eax, dword ptr [edx + 22ch], 5fh
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 22ch], eax
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 2dah]
        imul eax, ecx, 7
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 22ch], eax
        ; Exact mapped bytes 7D 1E: jge 0x58499abb
        __asm _emit 0x7d
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 2dah]
        imul eax, ecx, 7
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 22ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 324h]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 09: jne 0x58499ad2
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 1
        ; Exact mapped bytes EB 07: jmp 0x58499ad9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 14h]
        mov esp, ebp
        pop ebp
        ret
    }
}
