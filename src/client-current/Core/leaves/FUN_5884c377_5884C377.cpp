// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884C377 .. +0xE1 bytes.
extern "C" __declspec(naked) void FUN_5884c377_5884C377() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, 0ffffh
        or dword ptr [ebp - 4], 0ffffffffh
        mov edx, 8ah
        push ebx
        push esi
        mov esi, dword ptr [ebp + 10h]
        movzx ebx, word ptr [eax + 2]
        push edi
        xor edi, edi
        test ebx, ebx
        ; Exact mapped bytes 66 89 4C B0 06: mov word ptr [eax + esi*4 + 6], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0xb0
        __asm _emit 0x06
        push 7
        pop ecx
        cmovne edx, ecx
        xor ecx, ecx
        test ebx, ebx
        setne cl
        add ecx, 3
        test esi, esi
        ; Exact mapped bytes 0F 88 98 00 00 00: js 0x5884c451
        __asm _emit 0x0f
        __asm _emit 0x88
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 6
        mov dword ptr [ebp + 0ch], eax
        lea eax, [esi + 1]
        mov dword ptr [ebp + 10h], eax
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], ebx
        mov esi, ebx
        mov dword ptr [ebp - 0ch], ebx
        inc edi
        mov dword ptr [ebp - 8], ebx
        mov ebx, dword ptr [ebp + 0ch]
        movzx ebx, word ptr [ebx]
        cmp edi, edx
        ; Exact mapped bytes 7D 04: jge 0x5884c3e2
        __asm _emit 0x7d
        __asm _emit 0x04
        cmp esi, ebx
        ; Exact mapped bytes 74 61: je 0x5884c443
        __asm _emit 0x74
        __asm _emit 0x61
        cmp edi, ecx
        ; Exact mapped bytes 7D 0A: jge 0x5884c3f0
        __asm _emit 0x7d
        __asm _emit 0x0a
        ; Exact mapped bytes 66 01 BC B0 F4 0E 00 00: add word ptr [eax + esi*4 + 0xef4], di
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0xbc
        __asm _emit 0xb0
        __asm _emit 0xf4
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 31: jmp 0x5884c421
        __asm _emit 0xeb
        __asm _emit 0x31
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 16: je 0x5884c40c
        __asm _emit 0x74
        __asm _emit 0x16
        cmp esi, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 08: je 0x5884c403
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 66 FF 84 B0 F4 0E 00 00: inc word ptr [eax + esi*4 + 0xef4]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0xf4
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 FF 80 34 0F 00 00: inc word ptr [eax + 0xf34]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x80
        __asm _emit 0x34
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 15: jmp 0x5884c421
        __asm _emit 0xeb
        __asm _emit 0x15
        cmp edi, 0ah
        ; Exact mapped bytes 7F 09: jg 0x5884c41a
        __asm _emit 0x7f
        __asm _emit 0x09
        ; Exact mapped bytes 66 FF 80 38 0F 00 00: inc word ptr [eax + 0xf38]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x80
        __asm _emit 0x38
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x5884c421
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes 66 FF 80 3C 0F 00 00: inc word ptr [eax + 0xf3c]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x80
        __asm _emit 0x3c
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        xor edi, edi
        mov dword ptr [ebp - 4], esi
        test ebx, ebx
        ; Exact mapped bytes 75 09: jne 0x5884c433
        __asm _emit 0x75
        __asm _emit 0x09
        mov edx, 8ah
        push 3
        ; Exact mapped bytes EB 0F: jmp 0x5884c442
        __asm _emit 0xeb
        __asm _emit 0x0f
        cmp dword ptr [ebp - 10h], ebx
        ; Exact mapped bytes 75 05: jne 0x5884c43d
        __asm _emit 0x75
        __asm _emit 0x05
        push 6
        pop edx
        ; Exact mapped bytes EB F2: jmp 0x5884c42f
        __asm _emit 0xeb
        __asm _emit 0xf2
        push 7
        pop edx
        push 4
        pop ecx
        add dword ptr [ebp + 0ch], 4
        sub dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 0F 85 77 FF FF FF: jne 0x5884c3c8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
