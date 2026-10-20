// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58784130 .. +0x1D3 bytes.
extern "C" __declspec(naked) void FUN_58784130() {
    __asm {
        sub esp, 0ch
        push ebx
        mov ebx, ecx
        ; Exact mapped bytes 66 8B 43 24: mov ax, word ptr [ebx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 BB 01 00 00: je 0x587842fd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 54h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        cmp dword ptr [ebx + 68h], 0
        push esi
        mov dword ptr [esp + 0ch], 0
        ; Exact mapped bytes 0F 84 2F 01 00 00: je 0x58784290
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov esi, dword ptr [edx + 0ch]
        mov dword ptr [esp + 8], esi
        test esi, esi
        ; Exact mapped bytes 0F 84 6A 01 00 00: je 0x587842e0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        push edi
        ; Exact mapped bytes EB 0A: jmp 0x58784184
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esp + 10h]
        mov ecx, esi
        ; Exact mapped bytes E8 55 25 15 00: call 0x588d66e0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x25
        __asm _emit 0x15
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 CF 00 00 00: jne 0x58784265
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esi + 4]
        mov edi, dword ptr [esi + 8]
        mov eax, ebp
        sub eax, dword ptr [ebx + 4]
        cdq
        mov ecx, eax
        xor ecx, edx
        sub ecx, edx
        mov eax, edi
        sub eax, dword ptr [ebx + 8]
        cdq
        mov esi, eax
        xor esi, edx
        sub esi, edx
        imul esi, esi, 75h
        mov eax, 51eb851fh
        imul esi
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, eax
        imul edx, eax
        mov eax, ecx
        imul eax, ecx
        add edx, eax
        mov dword ptr [esp + 18h], edx
        ; Exact mapped bytes DB 44 24 18: fild dword ptr [esp + 0x18]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes E8 AF 8A 1F 00: call 0x5897cc90
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x8a
        __asm _emit 0x1f
        __asm _emit 0x00
        ; Exact mapped bytes E8 BA 8A 1F 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x8a
        __asm _emit 0x1f
        __asm _emit 0x00
        mov esi, eax
        mov eax, edi
        shl eax, 4
        add eax, ebp
        add eax, edi
        xor edx, edx
        ; Exact mapped bytes F7 35 14 49 A2 58: div dword ptr [0x58a24914]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A1 1C 49 A2 58: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ebx + 64h]
        mov eax, dword ptr [eax + edx*4]
        xor edx, edx
        div ecx
        add ecx, ecx
        mov eax, 66666667h
        mov edi, edx
        imul ecx
        sar edx, 1
        shr edi, 1
        mov ecx, edx
        shr ecx, 1fh
        add edi, edx
        add ecx, edi
        cmp esi, ecx
        ; Exact mapped bytes 72 52: jb 0x58784276
        __asm _emit 0x72
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [esp + 10h]
        cmp eax, dword ptr [edx + 4]
        ; Exact mapped bytes 75 2E: jne 0x58784261
        __asm _emit 0x75
        __asm _emit 0x2e
        mov ecx, eax
        cmp byte ptr [ecx + 354h], 0
        ; Exact mapped bytes 75 23: jne 0x58784261
        __asm _emit 0x75
        __asm _emit 0x23
        mov edx, eax
        mov eax, dword ptr [edx + 100ch]
        mov cl, byte ptr [eax + 4]
        and cl, 1fh
        cmp cl, 1
        ; Exact mapped bytes 75 10: jne 0x58784261
        __asm _emit 0x75
        __asm _emit 0x10
        cmp esi, 190h
        ; Exact mapped bytes 7D 08: jge 0x58784261
        __asm _emit 0x7d
        __asm _emit 0x08
        mov dword ptr [esp + 14h], 1
        mov esi, dword ptr [esp + 10h]
        mov esi, dword ptr [esi + 78h]
        mov dword ptr [esp + 10h], esi
        test esi, esi
        ; Exact mapped bytes 0F 85 0C FF FF FF: jne 0x58784180
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 07: jmp 0x5878427d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov ecx, ebx
        ; Exact mapped bytes E8 E3 FC FF FF: call 0x58783f60
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esp + 14h], 0
        pop edi
        pop ebp
        ; Exact mapped bytes 74 5A: je 0x587842e0
        __asm _emit 0x74
        __asm _emit 0x5a
        mov eax, dword ptr [ebx + 54h]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes EB 50: jmp 0x587842e0
        __asm _emit 0xeb
        __asm _emit 0x50
        mov ecx, dword ptr [ebx + 58h]
        mov eax, dword ptr [ecx + 54h]
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x587842b8
        __asm _emit 0x74
        __asm _emit 0x1e
        movzx edx, word ptr [eax + 0ch]
        imul edx, dword ptr [eax + 8]
        dec edx
        xor eax, eax
        cmp dword ptr [ecx + 50h], edx
        setge al
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x587842b8
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, 0fffeh
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [ebx + 5ch]
        test ecx, ecx
        ; Exact mapped bytes 74 21: je 0x587842e0
        __asm _emit 0x74
        __asm _emit 0x21
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x587842e0
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebx + 5ch]
        test ecx, ecx
        ; Exact mapped bytes 74 0F: je 0x587842e0
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [ebx + 5ch], 0
        mov ecx, dword ptr [ebx + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 15: je 0x587842fc
        __asm _emit 0x74
        __asm _emit 0x15
        mov esi, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        cmp esi, dword ptr [ebx + 3ch]
        ; Exact mapped bytes 74 0E: je 0x58784302
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, esi
        test esi, esi
        ; Exact mapped bytes 75 EB: jne 0x587842e7
        __asm _emit 0x75
        __asm _emit 0xeb
        pop esi
        pop ebx
        add esp, 0ch
        ret
        pop esi
    }
}
