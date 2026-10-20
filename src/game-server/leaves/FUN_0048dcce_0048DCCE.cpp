// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048DCCE .. +0x243 bytes.
extern "C" __declspec(naked) void FUN_0048dcce_0048DCCE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 38h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 16 FC FF FF: call 0x48d8f9
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        sub ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 FB FC FF FF: call 0x48d9f9
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 65 FF FF FF: call 0x48dc72
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        xor edx, edx
        ; Exact mapped bytes 66 8B 10: mov dx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x10
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x48dd3d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        cmp eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 7D 5C: jge 0x48dda1
        __asm _emit 0x7d
        __asm _emit 0x5c
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 C0 FC FF FF: call 0x48da12
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0B: je 0x48dd66
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 14h]
        add eax, 18h
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 09: jmp 0x48dd6f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 12h
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        cmp ecx, 7bh
        ; Exact mapped bytes 75 09: jne 0x48dd8b
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes EB 0E: jmp 0x48dd99
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 8]
        sub edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 28h]
        add eax, edx
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes EB 93: jmp 0x48dd34
        __asm _emit 0xeb
        __asm _emit 0x93
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 10: jne 0x48ddb7
        __asm _emit 0x75
        __asm _emit 0x10
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx], 0ffffffffh
        xor eax, eax
        ; Exact mapped bytes E9 51 01 00 00: jmp 0x48df08
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        push eax
        push 0
        ; Exact mapped bytes FF 15 84 23 5E 00: call dword ptr [0x5e2384]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 43 B2 01 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 24h]
        add edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 1F 01 00 00: call 0x48df11
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes 66 C7 00 00 00: mov word ptr [eax], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 8], edx
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x48de18
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        cmp ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F 8D D4 00 00 00: jge 0x48def8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 E1 FB FF FF: call 0x48da12
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0B: je 0x48de45
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 18h
        mov dword ptr [ebp - 40h], ecx
        ; Exact mapped bytes EB 09: jmp 0x48de4e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 12h
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        cmp edx, 7bh
        ; Exact mapped bytes 75 0E: jne 0x48de6f
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + eax*4], edx
        ; Exact mapped bytes EB 7E: jmp 0x48deed
        __asm _emit 0xeb
        __asm _emit 0x7e
        mov eax, dword ptr [ebp - 8]
        sub eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 4]
        neg ecx
        sbb ecx, ecx
        and ecx, 6
        add ecx, 12h
        cmp dword ptr [ebp - 34h], ecx
        ; Exact mapped bytes 73 14: jae 0x48de9e
        __asm _emit 0x73
        __asm _emit 0x14
        push 11eh
        push 5c636ch
        ; Exact mapped bytes E8 67 6B 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x6b
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x48de9e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D4: jne 0x48de78
        __asm _emit 0x75
        __asm _emit 0xd4
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes E8 6B B1 01 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 24h]
        add eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        ; Exact mapped bytes E8 47 00 00 00: call 0x48df11
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov edx, dword ptr [ebp - 44h]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 05 01 00: add ax, 1
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes 66 89 01: mov word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax + edx*4], 0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes E9 17 FF FF FF: jmp 0x48de0f
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax + edx*4], 0ffffffffh
        mov eax, dword ptr [ebp - 2ch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
