// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00486989 .. +0x12B bytes.
extern "C" __declspec(naked) void FUN_00486989_00486989() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 17 45 FC FF: call 0x44aec7
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp eax, -1
        ; Exact mapped bytes 0F 84 EA 00 00 00: je 0x486aa3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov esi, dword ptr [eax + 168h]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FD 44 FC FF: call 0x44aec7
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x44
        __asm _emit 0xfc
        __asm _emit 0xff
        imul eax, eax, 370h
        lea ecx, [esi + eax + 16be0h]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 BF 00 00 00: je 0x486aa3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 24h
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 23 0C FC FF: call 0x447616
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x0c
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 A3 00 00 00: je 0x486aa3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        cmp ecx, 1
        ; Exact mapped bytes 75 3A: jne 0x486a53
        __asm _emit 0x75
        __asm _emit 0x3a
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
        mov al, byte ptr [eax + edx + 66h]
        sub al, 1
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
        mov byte ptr [ecx + edx + 66h], al
        ; Exact mapped bytes EB 50: jmp 0x486aa3
        __asm _emit 0xeb
        __asm _emit 0x50
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        ; Exact mapped bytes 66 25 01 00: and ax, 1
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        and eax, 0ffffh
        test eax, eax
        ; Exact mapped bytes 75 39: jne 0x486aa3
        __asm _emit 0x75
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 48 02: mov cx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        and ecx, 0ffffh
        mov dl, byte ptr [edx + ecx + 6ch]
        sub dl, 1
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 48 02: mov cx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        and ecx, 0ffffh
        mov eax, dword ptr [ebp - 0ch]
        mov eax, dword ptr [eax + 4]
        mov byte ptr [eax + ecx + 6ch], dl
        pop esi
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 32 1D 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x1d
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
