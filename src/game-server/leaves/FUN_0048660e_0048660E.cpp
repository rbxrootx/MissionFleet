// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048660E .. +0x128 bytes.
extern "C" __declspec(naked) void FUN_0048660e_0048660E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 16ch], -1
        ; Exact mapped bytes 0F 84 EA 00 00 00: je 0x486726
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 16ch]
        imul ecx, ecx, 370h
        lea edx, [edx + ecx + 16be0h]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 BE 00 00 00: je 0x486726
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 24h
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9F 0F FC FF: call 0x447616
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 A2 00 00 00: je 0x486726
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 C1 EA 04: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 01: and dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x01
        and edx, 0ffffh
        cmp edx, 1
        ; Exact mapped bytes 75 39: jne 0x4866d6
        __asm _emit 0x75
        __asm _emit 0x39
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 42 02: mov ax, word ptr [edx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x02
        ; Exact mapped bytes 66 25 1F 00: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x1f
        __asm _emit 0x00
        and eax, 0ffffh
        mov cl, byte ptr [ecx + eax + 66h]
        add cl, 1
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 42 02: mov ax, word ptr [edx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x02
        ; Exact mapped bytes 66 25 1F 00: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x1f
        __asm _emit 0x00
        and eax, 0ffffh
        mov edx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [edx + 4]
        mov byte ptr [edx + eax + 66h], cl
        ; Exact mapped bytes EB 50: jmp 0x486726
        __asm _emit 0xeb
        __asm _emit 0x50
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        and ecx, 0ffffh
        test ecx, ecx
        ; Exact mapped bytes 75 38: jne 0x486726
        __asm _emit 0x75
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 51 02: mov dx, word ptr [ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        and edx, 0ffffh
        mov al, byte ptr [eax + edx + 6ch]
        add al, 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 51 02: mov dx, word ptr [ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        and edx, 0ffffh
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 4]
        mov byte ptr [ecx + edx + 6ch], al
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 B0 20 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
