// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585D5030 .. +0x239 bytes.
extern "C" __declspec(naked) void FUN_585d5030_585D5030() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 10h], 0
        movzx eax, byte ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 0F 84 17 02 00 00: je 0x585d5263
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 1
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + edx + 10de8h]
        mov edx, dword ptr [ebp - 4]
        or ecx, dword ptr [edx + 10690h]
        mov eax, 1
        imul edx, eax, 0
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + edx + 10de8h], cl
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20de8h]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 10de8h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20de8h]
        add eax, 2
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 20de8h], eax
        ; Exact mapped bytes 66 0F B6 55 08: movzx dx, byte ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 3F: and dx, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x3f
        mov eax, 0ffc0h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 23 01: and ax, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x01
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 89 02: mov word ptr [edx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x02
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 3F: and cx, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x3f
        movzx edx, cx
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0ch
        ; Exact mapped bytes 0F 84 E8 00 00 00: je 0x585d51c4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 0fh
        ; Exact mapped bytes 74 0B: je 0x585d50ed
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp dword ptr [ebp - 0ch], 16h
        ; Exact mapped bytes 74 6C: je 0x585d5154
        __asm _emit 0x74
        __asm _emit 0x6c
        ; Exact mapped bytes E9 66 01 00 00: jmp 0x585d5253
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 3F: and cx, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x3f
        mov edx, 100h
        ; Exact mapped bytes 66 0B CA: or cx, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xca
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20e70h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20de8h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + ecx + 10de8h], edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 C1 EA 06: shr dx, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x06
        mov eax, 3ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        movzx ecx, dx
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 20de8h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 20de8h], ecx
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes E9 0F 01 00 00: jmp 0x585d5263
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 83 E2 3F: and dx, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x3f
        mov eax, 100h
        ; Exact mapped bytes 66 0B D0: or dx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 89 11: mov word ptr [ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x11
        mov edx, 1
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 20dech]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20de8h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + ecx + 10de8h], edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 C1 EA 06: shr dx, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x06
        mov eax, 3ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        movzx ecx, dx
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 20de8h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 20de8h], ecx
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes E9 9F 00 00 00: jmp 0x585d5263
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 3ffh
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 23 8A 6C 0E 02 00: and cx, word ptr [edx + 0x20e6c]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x8a
        __asm _emit 0x6c
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E1 06: shl cx, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 10: mov dx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 66 83 E2 3F: and dx, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x3f
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20e6ch]
        push edx
        mov eax, 1
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 20dech]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20de8h]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 10de8h]
        push ecx
        ; Exact mapped bytes E8 70 76 27 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x76
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 C1 E8 06: shr ax, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x06
        mov ecx, 3ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        movzx edx, ax
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 20de8h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 20de8h], edx
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 10: jmp 0x585d5263
        __asm _emit 0xeb
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E0 3F: and ax, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 89 01: mov word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x01
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
