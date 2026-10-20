// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882EB30 .. +0x1CE bytes.
extern "C" __declspec(naked) void FUN_5882eb30_5882EB30() {
    __asm {
        push ebx
        mov ebx, esp
        sub esp, 8
        and esp, 0ffffffe0h
        add esp, 4
        push ebp
        mov ebp, dword ptr [ebx + 4]
        mov dword ptr [esp + 4], ebp
        mov ebp, esp
        sub esp, 138h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebx + 8]
        ; Exact mapped bytes 8B 0D B8 60 90 58: mov ecx, dword ptr [0x589060b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [ebp - 124h], eax
        mov eax, ecx
        push esi
        shr eax, 2
        push edi
        mov edi, dword ptr [ebx + 10h]
        test al, 1
        ; Exact mapped bytes 0F 84 DE 00 00 00: je 0x5882ec55
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebx + 14h]
        shr ecx, 5
        and cl, 1
        movzx eax, cl
        push eax
        push esi
        push dword ptr [ebx + 0ch]
        ; Exact mapped bytes E8 D3 0A 00 00: call 0x5882f660
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        cmp eax, 2
        ; Exact mapped bytes 75 39: jne 0x5882ebce
        __asm _emit 0x75
        __asm _emit 0x39
        push esi
        push edi
        ; Exact mapped bytes E8 B4 FC FF FF: call 0x5882e850
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test al, al
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x5882ec2e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 0ch]
        push esi
        push edi
        push eax
        push dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 98 05 00 00: call 0x5882f150
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 89 24 00 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        mov esp, ebx
        pop ebx
        ret
        cmp eax, 1
        ; Exact mapped bytes 75 5B: jne 0x5882ec2e
        __asm _emit 0x75
        __asm _emit 0x5b
        push esi
        push edi
        ; Exact mapped bytes E8 76 FC FF FF: call 0x5882e850
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test al, al
        ; Exact mapped bytes 74 4D: je 0x5882ec2e
        __asm _emit 0x74
        __asm _emit 0x4d
        push 100h
        lea eax, [ebp - 120h]
        push 0
        push eax
        ; Exact mapped bytes E8 1C E2 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xe2
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [ebp - 120h]
        push eax
        push esi
        push edi
        ; Exact mapped bytes E8 1E FC FF FF: call 0x5882e820
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 120h]
        push eax
        mov eax, dword ptr [ebx + 0ch]
        push eax
        push dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 78 06 00 00: call 0x5882f290
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 24h
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 29 24 00 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        mov esp, ebx
        pop ebx
        ret
        mov eax, dword ptr [ebx + 0ch]
        push esi
        push edi
        push eax
        push dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 E1 02 00 00: call 0x5882ef20
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 02 24 00 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        mov esp, ebx
        pop ebx
        ret
        push 100h
        lea eax, [ebp - 120h]
        push 0
        push eax
        ; Exact mapped bytes E8 A8 E1 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xe1
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 14h]
        add esp, 0ch
        mov ecx, edi
        mov edx, 100h
        lea esi, [edi + eax*2]
        cmp edi, esi
        ; Exact mapped bytes 74 1B: je 0x5882ec97
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes 0F 1F 40 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x40
        __asm _emit 0x00
        movzx eax, word ptr [ecx]
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 73 4E: jae 0x5882ecd6
        __asm _emit 0x73
        __asm _emit 0x4e
        add ecx, 2
        mov byte ptr [ebp + eax - 120h], 1
        cmp ecx, esi
        ; Exact mapped bytes 75 E9: jne 0x5882ec80
        __asm _emit 0x75
        __asm _emit 0xe9
        mov ecx, dword ptr [ebx + 0ch]
        test ecx, ecx
        ; Exact mapped bytes 74 20: je 0x5882ecbe
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes 66 90: nop
        __asm _emit 0x66
        __asm _emit 0x90
        mov eax, dword ptr [ebp - 124h]
        dec ecx
        movzx eax, word ptr [eax + ecx*2]
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 73 0A: jae 0x5882ecba
        __asm _emit 0x73
        __asm _emit 0x0a
        cmp byte ptr [ebp + eax - 120h], 0
        ; Exact mapped bytes 75 07: jne 0x5882ecc1
        __asm _emit 0x75
        __asm _emit 0x07
        test ecx, ecx
        ; Exact mapped bytes 75 E2: jne 0x5882eca0
        __asm _emit 0x75
        __asm _emit 0xe2
        or ecx, 0ffffffffh
        mov eax, ecx
        mov ecx, dword ptr [ebp - 4]
        pop edi
        xor ecx, ebp
        pop esi
        ; Exact mapped bytes E8 81 23 00 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        mov esp, ebx
        pop ebx
        ret
        mov ecx, dword ptr [ebx + 0ch]
        test ecx, ecx
        ; Exact mapped bytes 74 E1: je 0x5882ecbe
        __asm _emit 0x74
        __asm _emit 0xe1
        mov edx, dword ptr [ebp - 124h]
        dec ecx
        mov eax, edi
        movzx edx, word ptr [edx + ecx*2]
        ; Exact mapped bytes 66 0F 1F 44 00 00: nop word ptr [eax + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B 10: cmp dx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x10
        ; Exact mapped bytes 74 CC: je 0x5882ecc1
        __asm _emit 0x74
        __asm _emit 0xcc
        add eax, 2
        cmp eax, esi
        ; Exact mapped bytes 75 F4: jne 0x5882ecf0
        __asm _emit 0x75
        __asm _emit 0xf4
        ; Exact mapped bytes EB DB: jmp 0x5882ecd9
        __asm _emit 0xeb
        __asm _emit 0xdb
    }
}
