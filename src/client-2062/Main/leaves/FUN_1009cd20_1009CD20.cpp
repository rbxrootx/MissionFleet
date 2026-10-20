// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1009CD20 .. +0x1EA bytes.
extern "C" __declspec(naked) void FUN_1009cd20_1009CD20() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ebp, 4
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov dword ptr [esi + 2c0h], 0
        and eax, 0e1ffh
        lea edi, [esi + 80h]
        or eax, 105h
        lea ebx, [esi + 0e0h]
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 20h]
        mov edx, dword ptr [ecx + 18h]
        mov ecx, dword ptr [esi + 4]
        sub eax, edx
        sub eax, 0a0h
        mov dword ptr [esi + 50h], ecx
        mov dword ptr [esi + 54h], eax
        mov edx, dword ptr [esi + 8]
        mov ecx, dword ptr [edi - 4]
        add edx, 68h
        push edx
        ; Exact mapped bytes E8 42 20 06 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [edi]
        add eax, 9ah
        push eax
        ; Exact mapped bytes E8 32 20 06 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [edi + 40h]
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x1009cda5
        __asm _emit 0x74
        __asm _emit 0x10
        mov dword ptr [ebx], 1
        mov ecx, dword ptr [edi - 4]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes EB 33: jmp 0x1009cdd8
        __asm _emit 0xeb
        __asm _emit 0x33
        mov eax, dword ptr [edi + 44h]
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x1009cdd8
        __asm _emit 0x74
        __asm _emit 0x2c
        mov dword ptr [ebx], 2
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [edi]
        add eax, 68h
        push eax
        ; Exact mapped bytes E8 00 20 06 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [edi - 4]
        add eax, 9ah
        push eax
        ; Exact mapped bytes E8 E8 1F 06 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x06
        __asm _emit 0x00
        add ebx, 4
        add edi, 8
        dec ebp
        ; Exact mapped bytes 75 8E: jne 0x1009cd6f
        __asm _emit 0x75
        __asm _emit 0x8e
        mov eax, dword ptr [esi + 0ach]
        xor ebx, ebx
        mov dword ptr [eax + 50h], ebx
        mov dword ptr [eax + 54h], ebx
        mov ecx, dword ptr [esi + 0ach]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes A1 C0 58 1C 10: mov eax, dword ptr [0x101c58c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 30h]
        mov ecx, dword ptr [ecx + 83ch]
        cmp ecx, ebx
        mov dword ptr [esi + 2cch], ecx
        ; Exact mapped bytes 74 52: je 0x1009ce64
        __asm _emit 0x74
        __asm _emit 0x52
        ; Exact mapped bytes E8 F9 BC F8 FF: call 0x10028b10
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xbc
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 2cch]
        sub edx, 44h
        add eax, 3b6h
        push edx
        push eax
        ; Exact mapped bytes E8 9E 1E 06 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x1e
        __asm _emit 0x06
        __asm _emit 0x00
        mov edi, dword ptr [esi + 2cch]
        mov ecx, esi
        push edi
        ; Exact mapped bytes E8 C0 20 06 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x00
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 58 21 06 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x21
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 1C 57 1C 10: mov ecx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 10101h
        push ebx
        push 101abc3ch
        mov ecx, dword ptr [ecx + 2cch]
        ; Exact mapped bytes E8 CC C2 F8 FF: call 0x10029130
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xc2
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D D4 57 1C 10: mov ecx, dword ptr [0x101c57d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esi + 4]
        mov ebp, dword ptr [esi + 8]
        mov edx, 12ch
        mov edi, dword ptr [ecx + 170h]
        sub eax, 190h
        sub edx, ebp
        cmp edi, 0fh
        ; Exact mapped bytes 7E 0F: jle 0x1009ce96
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 194h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 05: je 0x1009ce96
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes EB 02: jmp 0x1009ce98
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push edx
        push eax
        ; Exact mapped bytes E8 F1 BA FA FF: call 0x10048990
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xba
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [esi + 0a0h]
        cmp dword ptr [edx + 4], 1aeh
        ; Exact mapped bytes 75 38: jne 0x1009cee6
        __asm _emit 0x75
        __asm _emit 0x38
        mov eax, dword ptr [esi + 0a4h]
        mov edi, 1
        mov dword ptr [eax + 50h], 5
        mov eax, dword ptr [esi + 0a4h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0a0h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov ecx, dword ptr [esi + 0a0h]
        ; Exact mapped bytes E8 A0 5D 00 00: call 0x100a2c80
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 0a8h], edi
        mov eax, dword ptr [esi + 9ch]
        mov ecx, 2
        mov dword ptr [esi + 2c0h], ebx
        pop edi
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov esi, dword ptr [esi + 0a4h]
        ; Exact mapped bytes 66 09 4E 24: or word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x4e
        __asm _emit 0x24
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
