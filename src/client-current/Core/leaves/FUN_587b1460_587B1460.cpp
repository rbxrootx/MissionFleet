// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B1460 .. +0xF2 bytes.
extern "C" __declspec(naked) void FUN_587b1460_587B1460() {
    __asm {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 18h]
        xor ecx, ecx
        mov dword ptr [esp + 8], 0ffffffffh
        push esi
        mov esi, dword ptr [esp + 18h]
        movzx eax, word ptr [esi + 2]
        mov edx, eax
        mov ebx, eax
        mov dword ptr [esp + 18h], edx
        mov eax, 0ffffh
        ; Exact mapped bytes 66 89 44 AE 06: mov word ptr [esi + ebp*4 + 6], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0xae
        __asm _emit 0x06
        test ebp, ebp
        ; Exact mapped bytes 0F 88 B9 00 00 00: js 0x587b154d
        __asm _emit 0x0f
        __asm _emit 0x88
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        mov eax, 7
        push edi
        mov edi, 8ah
        cmovne edi, eax
        xor edx, edx
        ; Exact mapped bytes 66 3B D9: cmp bx, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd9
        lea eax, [esi + 6]
        mov dword ptr [esp + 1ch], eax
        mov eax, dword ptr [esp + 18h]
        setne dl
        add edx, 3
        inc ebp
        mov dword ptr [esp + 20h], ebp
        mov ebp, ebx
        mov esi, ebx
        mov ebx, dword ptr [esp + 1ch]
        inc ecx
        movzx ebx, word ptr [ebx]
        cmp ecx, edi
        ; Exact mapped bytes 7D 04: jge 0x587b14d4
        __asm _emit 0x7d
        __asm _emit 0x04
        cmp ebp, ebx
        ; Exact mapped bytes 74 68: je 0x587b153c
        __asm _emit 0x74
        __asm _emit 0x68
        cmp ecx, edx
        ; Exact mapped bytes 7D 0A: jge 0x587b14e2
        __asm _emit 0x7d
        __asm _emit 0x0a
        ; Exact mapped bytes 66 01 8C B0 7C 0A 00 00: add word ptr [eax + esi*4 + 0xa7c], cx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x8c
        __asm _emit 0xb0
        __asm _emit 0x7c
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 30: jmp 0x587b1512
        __asm _emit 0xeb
        __asm _emit 0x30
        test ebp, ebp
        ; Exact mapped bytes 74 17: je 0x587b14fd
        __asm _emit 0x74
        __asm _emit 0x17
        cmp esi, dword ptr [esp + 10h]
        ; Exact mapped bytes 74 08: je 0x587b14f4
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 66 FF 84 B0 7C 0A 00 00: inc word ptr [eax + esi*4 + 0xa7c]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x7c
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 FF 80 BC 0A 00 00: inc word ptr [eax + 0xabc]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x80
        __asm _emit 0xbc
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 15: jmp 0x587b1512
        __asm _emit 0xeb
        __asm _emit 0x15
        cmp ecx, 0ah
        ; Exact mapped bytes 7F 09: jg 0x587b150b
        __asm _emit 0x7f
        __asm _emit 0x09
        ; Exact mapped bytes 66 FF 80 C0 0A 00 00: inc word ptr [eax + 0xac0]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x80
        __asm _emit 0xc0
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x587b1512
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes 66 FF 80 C4 0A 00 00: inc word ptr [eax + 0xac4]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x80
        __asm _emit 0xc4
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov dword ptr [esp + 10h], esi
        test ebx, ebx
        ; Exact mapped bytes 75 0A: jne 0x587b1526
        __asm _emit 0x75
        __asm _emit 0x0a
        mov edi, 8ah
        lea edx, [ecx + 3]
        ; Exact mapped bytes EB 16: jmp 0x587b153c
        __asm _emit 0xeb
        __asm _emit 0x16
        cmp ebp, ebx
        ; Exact mapped bytes 75 0A: jne 0x587b1534
        __asm _emit 0x75
        __asm _emit 0x0a
        mov edi, 6
        lea edx, [edi - 3]
        ; Exact mapped bytes EB 08: jmp 0x587b153c
        __asm _emit 0xeb
        __asm _emit 0x08
        mov edi, 7
        lea edx, [edi - 3]
        add dword ptr [esp + 1ch], 4
        sub dword ptr [esp + 20h], 1
        ; Exact mapped bytes 0F 85 74 FF FF FF: jne 0x587b14c0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}
