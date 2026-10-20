// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10009DF0 .. +0x306 bytes.
extern "C" __declspec(naked) void FUN_10009df0_10009DF0() {
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0fffffff8h
        sub esp, 18h
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push ebp
        push esi
        mov eax, dword ptr [eax + 104cch]
        mov esi, ecx
        cdq
        mov ecx, 19h
        push edi
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 0F 85 D4 02 00 00: jne 0x1000a0ee
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4bch]
        xor ebp, ebp
        cmp eax, ebp
        ; Exact mapped bytes 0F 85 D3 01 00 00: jne 0x10009ffd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 4b8h], 4
        ; Exact mapped bytes 75 0E: jne 0x10009e41
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 BE C0 02 00 00 03: cmp word ptr [esi + 0x2c0], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 0F 83 AD 02 00 00: jae 0x1000a0ee
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xad
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 86 C0 02 00 00: mov ax, word ptr [esi + 0x2c0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 01 00: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 74 06: je 0x10009e54
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 3D 02 00: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 75 10: jne 0x10009e64
        __asm _emit 0x75
        __asm _emit 0x10
        mov dword ptr [esi + 4cch], 0ffffffffh
        mov dword ptr [esi + 4c8h], ebp
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor ebx, ebx
        ; Exact mapped bytes 66 8B 9E D6 02 00 00: mov bx, word ptr [esi + 0x2d6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x9e
        __asm _emit 0xd6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [edx + 0ch]
        shr ebx, 1
        test ebp, ebp
        mov dword ptr [esp + 14h], ebp
        ; Exact mapped bytes 0F 84 6A 02 00 00: je 0x1000a0ee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, ebp
        ; Exact mapped bytes E8 45 47 0E 00: call 0x100ee5d0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x47
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 50 01 00 00: jne 0x10009fe6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 74h]
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x10009eb1
        __asm _emit 0x74
        __asm _emit 0x14
        mov cl, byte ptr [ebp + 330h]
        mov dl, byte ptr [eax + 330h]
        cmp cl, dl
        ; Exact mapped bytes 0F 84 35 01 00 00: je 0x10009fe6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp + 0f7ch]
        mov dword ptr [esp + 1ch], 8
        mov dword ptr [esp + 18h], ecx
        mov eax, dword ptr [ecx + 8]
        test eax, eax
        ; Exact mapped bytes 0F 84 02 01 00 00: je 0x10009fd0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx]
        test eax, eax
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 0F 84 F4 00 00 00: je 0x10009fd0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [eax + 0ch]
        mov ecx, dword ptr [edi + 454h]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 D0 00 00 00: jne 0x10009fbd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        mov edx, dword ptr [edi + 4]
        sub ecx, edx
        mov edx, dword ptr [edi + 4a0h]
        mov eax, 57619f1h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 57619f1h
        mov ebp, edx
        mov edx, dword ptr [esi + 4a0h]
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        sub edx, ebp
        lea eax, [edx + edx*4]
        lea edx, [eax + eax*4]
        mov eax, 51eb851fh
        shl edx, 3
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, edx
        imul eax, edx
        mov edx, ecx
        imul edx, ecx
        add eax, edx
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes DB 44 24 20: fild dword ptr [esp + 0x20]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes DD 5C 24 20: fstp qword ptr [esp + 0x20]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x20
        mov eax, dword ptr [esp + 24h]
        mov ecx, dword ptr [esp + 20h]
        push eax
        push ecx
        ; Exact mapped bytes E8 44 28 16 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x28
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 36 28 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x28
        __asm _emit 0x16
        __asm _emit 0x00
        cmp eax, ebx
        ; Exact mapped bytes 7D 41: jge 0x10009fb5
        __asm _emit 0x7d
        __asm _emit 0x41
        mov ebp, dword ptr [esp + 14h]
        mov ebx, eax
        mov dword ptr [esi + 4c8h], ebp
        mov edx, dword ptr [edi + 7ch]
        mov eax, dword ptr [edi + 78h]
        mov dword ptr [esi + 4b8h], 2
        shl edx, 10h
        or edx, eax
        mov eax, dword ptr [esp + 10h]
        mov dword ptr [esi + 4cch], edx
        mov dword ptr [esi + 4bch], 1
        mov dword ptr [esi + 310h], 0
        ; Exact mapped bytes EB 08: jmp 0x10009fbd
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [esp + 10h]
        mov ebp, dword ptr [esp + 14h]
        mov eax, dword ptr [eax + 8]
        test eax, eax
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 0F 85 10 FF FF FF: jne 0x10009edc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 18h]
        mov eax, dword ptr [esp + 1ch]
        add ecx, 10h
        dec eax
        mov dword ptr [esp + 18h], ecx
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes 0F 85 DD FE FF FF: jne 0x10009ec3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebp, dword ptr [ebp + 78h]
        test ebp, ebp
        mov dword ptr [esp + 14h], ebp
        ; Exact mapped bytes 0F 85 8F FE FF FF: jne 0x10009e84
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        mov ecx, esi
        ; Exact mapped bytes E8 FC 00 00 00: call 0x1000a100
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, eax
        cmp ebx, ebp
        ; Exact mapped bytes 0F 84 BB 00 00 00: je 0x1000a0c9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        mov edx, dword ptr [ebx + 4]
        sub ecx, edx
        mov edx, dword ptr [esi + 4a0h]
        mov eax, 57619f1h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 57619f1h
        mov edi, edx
        mov edx, dword ptr [ebx + 4a0h]
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 51eb851fh
        sub edi, edx
        lea edi, [edi + edi*4]
        lea edx, [edi + edi*4]
        shl edx, 3
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, edx
        imul eax, edx
        mov edx, ecx
        imul edx, ecx
        add eax, edx
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes DB 44 24 20: fild dword ptr [esp + 0x20]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes DD 5C 24 20: fstp qword ptr [esp + 0x20]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x20
        mov eax, dword ptr [esp + 24h]
        mov ecx, dword ptr [esp + 20h]
        push eax
        push ecx
        ; Exact mapped bytes E8 23 27 16 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x27
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 15 27 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x27
        __asm _emit 0x16
        __asm _emit 0x00
        xor edx, edx
        ; Exact mapped bytes 66 8B 96 D6 02 00 00: mov dx, word ptr [esi + 0x2d6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xd6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, edx
        ; Exact mapped bytes 7E 50: jle 0x1000a0ee
        __asm _emit 0x7e
        __asm _emit 0x50
        mov ecx, dword ptr [ebx + 4]
        mov ebx, dword ptr [ebx + 4a0h]
        mov eax, 57619f1h
        imul ebx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 3B 4B 06 00: call 0x1006ec00
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x4b
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 25: jne 0x1000a0ee
        __asm _emit 0x75
        __asm _emit 0x25
        cmp dword ptr [esi + 4b8h], 4
        ; Exact mapped bytes 74 1C: je 0x1000a0ee
        __asm _emit 0x74
        __asm _emit 0x1c
        mov dword ptr [esi + 4c8h], ebp
        mov dword ptr [esi + 4cch], 0ffffffffh
        mov dword ptr [esi + 4b8h], ebp
        mov dword ptr [esi + 4bch], ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
