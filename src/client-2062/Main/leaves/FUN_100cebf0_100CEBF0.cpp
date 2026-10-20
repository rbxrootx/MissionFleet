// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100CEBF0 .. +0x254 bytes.
extern "C" __declspec(naked) void FUN_100cebf0_100CEBF0() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 14ch]
        push edi
        lea ebx, [esi + 14ch]
        mov eax, dword ptr [ecx + 84h]
        test eax, eax
        ; Exact mapped bytes 0F 84 13 02 00 00: je 0x100cee23
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 8]
        cmp eax, -1
        ; Exact mapped bytes 0F 84 07 02 00 00: je 0x100cee23
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 84h]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x100cec2b
        __asm _emit 0x74
        __asm _emit 0x05
        mov edi, dword ptr [ecx + 8]
        ; Exact mapped bytes EB 03: jmp 0x100cec2e
        __asm _emit 0xeb
        __asm _emit 0x03
        or edi, 0ffffffffh
        mov eax, dword ptr [edi + 28h]
        ; Exact mapped bytes 8B 0D F0 58 1C 10: mov ecx, dword ptr [0x101c58f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 A3 34 F7 FF: call 0x100420e0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x34
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ebp, eax
        test ebp, ebp
        ; Exact mapped bytes 0F 85 7B 01 00 00: jne 0x100cedc2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0ech]
        test eax, eax
        ; Exact mapped bytes 0F 84 EA 01 00 00: je 0x100cee3f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xea
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0ach]
        mov ebx, dword ptr [eax + 164h]
        mov edx, dword ptr [edi + 0a8h]
        cmp ebx, ecx
        ; Exact mapped bytes 7E 13: jle 0x100cec7e
        __asm _emit 0x7e
        __asm _emit 0x13
        test ecx, ecx
        ; Exact mapped bytes 7C 0F: jl 0x100cec7e
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100cec7e
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + ecx*4]
        ; Exact mapped bytes EB 02: jmp 0x100cec80
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 198h]
        lea ebx, [esi + 198h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100cecbb
        __asm _emit 0x74
        __asm _emit 0x28
        mov ebp, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], ebp
        mov ebp, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], ebp
        mov ebp, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], ebp
        mov ebp, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], ebp
        mov ebp, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], ebp
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [edi + 0ech]
        cmp dword ptr [eax + 164h], edx
        ; Exact mapped bytes 7E 13: jle 0x100cecdc
        __asm _emit 0x7e
        __asm _emit 0x13
        test edx, edx
        ; Exact mapped bytes 7C 0F: jl 0x100cecdc
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100cecdc
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + edx*4]
        ; Exact mapped bytes EB 02: jmp 0x100cecde
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 19ch]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100ced13
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebx]
        push 0fffffeffh
        ; Exact mapped bytes E8 41 04 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, ebx
        mov edx, 2
        mov ebx, 1
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x100ced2b
        __asm _emit 0x75
        __asm _emit 0xf4
        mov ecx, dword ptr [edi + 34h]
        push ecx
        mov ecx, dword ptr [esi + 0b0h]
        ; Exact mapped bytes E8 DA 09 03 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x09
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [edi + 34h]
        mov ecx, dword ptr [esi + 0b4h]
        imul edx, dword ptr [edi + 38h]
        push edx
        ; Exact mapped bytes E8 C7 09 03 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x09
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b0h]
        push ebx
        mov dword ptr [eax + 50h], ebx
        mov ecx, dword ptr [esi + 0b0h]
        mov edx, dword ptr [edi + 34h]
        mov dword ptr [ecx + 54h], edx
        mov eax, dword ptr [esi + 0b4h]
        mov dword ptr [eax + 50h], ebx
        mov ecx, dword ptr [edi + 34h]
        imul ecx, dword ptr [edi + 38h]
        mov edx, dword ptr [esi + 0b4h]
        mov dword ptr [edx + 54h], ecx
        mov ecx, dword ptr [esi + 0c0h]
        ; Exact mapped bytes E8 8D 09 03 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x09
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [edi + 30h]
        mov ecx, dword ptr [esi + 0c4h]
        push eax
        ; Exact mapped bytes E8 7E 09 03 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x09
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c4h]
        mov edx, dword ptr [edi + 30h]
        mov dword ptr [ecx + 54h], edx
        mov dword ptr [esi + 21ch], ebx
        mov eax, dword ptr [edi + 34h]
        pop edi
        mov dword ptr [esi + 220h], eax
        pop esi
        pop ebp
        pop ebx
        ret
        lea ecx, [esi + 198h]
        mov edx, 2
        mov edi, 0fffeh
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x100cedd2
        __asm _emit 0x75
        __asm _emit 0xf4
        mov edi, ebx
        mov ebx, 3
        mov ecx, dword ptr [edi]
        push -1
        ; Exact mapped bytes E8 62 59 03 00: call 0x10104750
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x59
        __asm _emit 0x03
        __asm _emit 0x00
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 F1: jne 0x100cede5
        __asm _emit 0x75
        __asm _emit 0xf1
        mov ecx, esi
        ; Exact mapped bytes E8 55 00 00 00: call 0x100cee50
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ebp
        sub eax, 2
        ; Exact mapped bytes 75 3D: jne 0x100cee3f
        __asm _emit 0x75
        __asm _emit 0x3d
        lea ecx, [esi + 1a0h]
        mov edx, 2
        mov ebx, 1
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x100cee12
        __asm _emit 0x75
        __asm _emit 0xf4
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
        lea ecx, [esi + 198h]
        mov edx, 2
        mov edi, 0fffeh
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x100cee33
        __asm _emit 0x75
        __asm _emit 0xf4
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
