// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00438594 .. +0x23E bytes.
extern "C" __declspec(naked) void FUN_00438594_00438594() {
    __asm {
        mov eax, 43b158h
        ; Exact mapped bytes E8 6A 70 FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x70
        __asm _emit 0xfe
        __asm _emit 0xff
        sub esp, 2ch
        and byte ptr [ebp - 11h], 0
        push ebx
        mov ebx, dword ptr [ebp + 8]
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebx + 8]
        mov dword ptr [ebp - 10h], esp
        test eax, eax
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes 75 06: jne 0x4385c1
        __asm _emit 0x75
        __asm _emit 0x06
        lea eax, [ebp - 11h]
        mov dword ptr [ebp + 8], eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 60 C2 43 00: call dword ptr [0x43c260]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        test byte ptr [ebp + 0ch], 0ch
        mov esi, eax
        mov eax, dword ptr [ebx + 10h]
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes 66 8B 43 0C: mov ax, word ptr [ebx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 45 E8: mov word ptr [ebp - 0x18], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 74 43: je 0x438623
        __asm _emit 0x74
        __asm _emit 0x43
        lea eax, [esi + 3]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 13 69 FE FF: call 0x41ef00
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x69
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edi, esp
        push esi
        push dword ptr [ebp + 8]
        push edi
        ; Exact mapped bytes E8 C7 65 FE FF: call 0x41ebc0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x65
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 43 0C: mov ax, word ptr [ebx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x0c
        add esp, 0ch
        ; Exact mapped bytes 66 3D 08 00: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp + 8], edi
        ; Exact mapped bytes 75 03: jne 0x43860c
        __asm _emit 0x75
        __asm _emit 0x03
        push 0eh
        pop eax
        or byte ptr [edi + esi], 0ffh
        inc esi
        mov byte ptr [edi + esi], al
        and byte ptr [edi + esi + 1], 0
        mov eax, dword ptr [ebx + 14h]
        and dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp + 14h]
        mov esi, dword ptr [eax + 8]
        shl esi, 4
        mov eax, esi
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 C8 68 FE FF: call 0x41ef00
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ebx, esp
        test ebx, ebx
        mov dword ptr [ebp + 0ch], ebx
        ; Exact mapped bytes 74 2C: je 0x43866d
        __asm _emit 0x74
        __asm _emit 0x2c
        push esi
        push 0
        push ebx
        ; Exact mapped bytes E8 96 64 FE FF: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x64
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        push dword ptr [ebp - 18h]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7A FC FF FF: call 0x4382d2
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        lea eax, [esi + 10h]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 99 68 FE FF: call 0x41ef00
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edi, esp
        test edi, edi
        ; Exact mapped bytes 75 0A: jne 0x438677
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 8007000eh
        ; Exact mapped bytes E9 6D 01 00 00: jmp 0x4387e4
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        mov ecx, dword ptr [ebp - 20h]
        push dword ptr [ebp + 18h]
        lea eax, [ebp - 34h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp - 18h]
        push eax
        push dword ptr [ebp + 8]
        push edi
        ; Exact mapped bytes E8 84 FC FF FF: call 0x438315
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        xor ebx, ebx
        mov dword ptr [ebp + 18h], eax
        test eax, eax
        ; Exact mapped bytes 75 54: jne 0x4386ee
        __asm _emit 0x75
        __asm _emit 0x54
        movzx eax, word ptr [ebp - 18h]
        and dword ptr [ebp - 4], ebx
        sub eax, 4
        ; Exact mapped bytes 74 31: je 0x4386d7
        __asm _emit 0x74
        __asm _emit 0x31
        dec eax
        ; Exact mapped bytes 74 1F: je 0x4386c8
        __asm _emit 0x74
        __asm _emit 0x1f
        dec eax
        push esi
        push edi
        dec eax
        push dword ptr [ebp - 1ch]
        ; Exact mapped bytes 74 09: je 0x4386bb
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes E8 3F 0A 00 00: call 0x4390f6
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, eax
        ; Exact mapped bytes EB 2F: jmp 0x4386ea
        __asm _emit 0xeb
        __asm _emit 0x2f
        ; Exact mapped bytes E8 36 0A 00 00: call 0x4390f6
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DD 55 DC: fst qword ptr [ebp - 0x24]
        __asm _emit 0xdd
        __asm _emit 0x55
        __asm _emit 0xdc
        ; Exact mapped bytes DD 5D CC: fstp qword ptr [ebp - 0x34]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xcc
        ; Exact mapped bytes EB 22: jmp 0x4386ea
        __asm _emit 0xeb
        __asm _emit 0x22
        push esi
        push edi
        push dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 24 0A 00 00: call 0x4390f6
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DD 55 DC: fst qword ptr [ebp - 0x24]
        __asm _emit 0xdd
        __asm _emit 0x55
        __asm _emit 0xdc
        ; Exact mapped bytes EB EC: jmp 0x4386c3
        __asm _emit 0xeb
        __asm _emit 0xec
        push esi
        push edi
        push dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 15 0A 00 00: call 0x4390f6
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D9 5D 08: fstp dword ptr [ebp + 8]
        __asm _emit 0xd9
        __asm _emit 0x5d
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 34h], eax
        or dword ptr [ebp - 4], 0ffffffffh
        mov esi, dword ptr [ebp + 14h]
        xor edi, edi
        cmp dword ptr [esi + 8], edi
        ; Exact mapped bytes 76 19: jbe 0x438711
        __asm _emit 0x76
        __asm _emit 0x19
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp + 0ch], eax
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes FF 15 48 C3 43 00: call dword ptr [0x43c348]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        add dword ptr [ebp + 0ch], 10h
        inc edi
        cmp edi, dword ptr [esi + 8]
        ; Exact mapped bytes 72 ED: jb 0x4386fe
        __asm _emit 0x72
        __asm _emit 0xed
        mov eax, dword ptr [ebp + 18h]
        test eax, eax
        ; Exact mapped bytes 0F 85 C8 00 00 00: jne 0x4387e4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        test eax, eax
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x4387a9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        movzx ecx, cx
        add ecx, -2
        cmp ecx, 10h
        ; Exact mapped bytes 0F 87 A6 00 00 00: ja 0x4387e2
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 8D F8 87 43 00: jmp dword ptr [ecx*4 + 0x4387f8]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xf8
        __asm _emit 0x87
        __asm _emit 0x43
        __asm _emit 0x00
        mov byte ptr [eax + 8], bl
        ; Exact mapped bytes E9 97 00 00 00: jmp 0x4387e2
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 14h]
        xor edi, edi
        cmp dword ptr [esi + 8], edi
        ; Exact mapped bytes 76 13: jbe 0x438768
        __asm _emit 0x76
        __asm _emit 0x13
        mov ebx, dword ptr [ebp + 0ch]
        push ebx
        ; Exact mapped bytes FF 15 48 C3 43 00: call dword ptr [0x43c348]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        inc edi
        add ebx, 10h
        cmp edi, dword ptr [esi + 8]
        ; Exact mapped bytes 72 F0: jb 0x438758
        __asm _emit 0x72
        __asm _emit 0xf0
        push 0
        push 0
        ; Exact mapped bytes E8 B6 6E FE FF: call 0x41f627
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x6e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax + 8], ebx
        ; Exact mapped bytes EB 6C: jmp 0x4387e2
        __asm _emit 0xeb
        __asm _emit 0x6c
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [eax + 8], ecx
        ; Exact mapped bytes EB 64: jmp 0x4387e2
        __asm _emit 0xeb
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [eax + 8], ecx
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [eax + 0ch], ecx
        ; Exact mapped bytes EB 56: jmp 0x4387e2
        __asm _emit 0xeb
        __asm _emit 0x56
        ; Exact mapped bytes DD 45 CC: fld qword ptr [ebp - 0x34]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xcc
        ; Exact mapped bytes DD 58 08: fstp qword ptr [eax + 8]
        __asm _emit 0xdd
        __asm _emit 0x58
        __asm _emit 0x08
        ; Exact mapped bytes EB 4E: jmp 0x4387e2
        __asm _emit 0xeb
        __asm _emit 0x4e
        neg ebx
        sbb ebx, ebx
        ; Exact mapped bytes 66 89 58 08: mov word ptr [eax + 8], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x08
        ; Exact mapped bytes EB 44: jmp 0x4387e2
        __asm _emit 0xeb
        __asm _emit 0x44
        lea esi, [ebp - 34h]
        mov edi, eax
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes EB 39: jmp 0x4387e2
        __asm _emit 0xeb
        __asm _emit 0x39
        movzx eax, word ptr [ebp - 18h]
        sub eax, 8
        ; Exact mapped bytes 74 25: je 0x4387d7
        __asm _emit 0x74
        __asm _emit 0x25
        dec eax
        ; Exact mapped bytes 74 16: je 0x4387cb
        __asm _emit 0x74
        __asm _emit 0x16
        sub eax, 3
        ; Exact mapped bytes 74 05: je 0x4387bf
        __asm _emit 0x74
        __asm _emit 0x05
        dec eax
        ; Exact mapped bytes 74 0E: je 0x4387cb
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes EB 23: jmp 0x4387e2
        __asm _emit 0xeb
        __asm _emit 0x23
        lea eax, [ebp - 34h]
        push eax
        ; Exact mapped bytes FF 15 48 C3 43 00: call dword ptr [0x43c348]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x4387e2
        __asm _emit 0xeb
        __asm _emit 0x17
        test ebx, ebx
        ; Exact mapped bytes 74 13: je 0x4387e2
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebx]
        push ebx
    }
}
