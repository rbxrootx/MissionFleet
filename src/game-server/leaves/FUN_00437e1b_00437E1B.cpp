// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437E1B .. +0x1F6 bytes.
extern "C" __declspec(naked) void FUN_00437e1b_00437E1B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 35f8h], 0
        ; Exact mapped bytes 0F 84 B6 01 00 00: je 0x438002
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3588h]
        ; Exact mapped bytes 66 8B 72 02: mov si, word ptr [edx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x72
        __asm _emit 0x02
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 35f8h]
        ; Exact mapped bytes E8 B9 94 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x94
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 02 BB FC FF: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xbb
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes 66 03 75 F8: add si, word ptr [ebp - 8]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x75
        __asm _emit 0xf8
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3588h]
        ; Exact mapped bytes 66 8B 42 02: mov ax, word ptr [edx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x02
        ; Exact mapped bytes 66 25 00 00: and ax, 0
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0B C6: or ax, si
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc6
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3588h]
        ; Exact mapped bytes 66 89 42 02: mov word ptr [edx + 2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x02
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 35f8h]
        cmp dword ptr [ecx + 40cc8h], 0
        ; Exact mapped bytes 74 49: je 0x437ef1
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3588h]
        ; Exact mapped bytes 66 8B 70 02: mov si, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0x02
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 35f8h]
        mov ecx, dword ptr [edx + 40cc8h]
        ; Exact mapped bytes E8 A7 BA FC FF: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xba
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 66 03 75 F4: add si, word ptr [ebp - 0xc]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x75
        __asm _emit 0xf4
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3588h]
        ; Exact mapped bytes 66 8B 51 02: mov dx, word ptr [ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E2 00: and dx, 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x00
        ; Exact mapped bytes 66 0B D6: or dx, si
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd6
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3588h]
        ; Exact mapped bytes 66 89 51 02: mov word ptr [ecx + 2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x02
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 35f8h]
        cmp dword ptr [eax + 40ccch], 0
        ; Exact mapped bytes 74 49: je 0x437f4c
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3588h]
        ; Exact mapped bytes 66 8B 72 02: mov si, word ptr [edx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x72
        __asm _emit 0x02
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 35f8h]
        mov ecx, dword ptr [ecx + 40ccch]
        ; Exact mapped bytes E8 4C BA FC FF: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xba
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 66 03 75 F0: add si, word ptr [ebp - 0x10]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x75
        __asm _emit 0xf0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3588h]
        ; Exact mapped bytes 66 8B 48 02: mov cx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 00: and cx, 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x00
        ; Exact mapped bytes 66 0B CE: or cx, si
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xce
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3588h]
        ; Exact mapped bytes 66 89 48 02: mov word ptr [eax + 2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x02
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 35f8h]
        cmp dword ptr [edx + 40cd0h], 0
        ; Exact mapped bytes 74 49: je 0x437fa7
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3588h]
        ; Exact mapped bytes 66 8B 71 02: mov si, word ptr [ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x71
        __asm _emit 0x02
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 35f8h]
        mov ecx, dword ptr [eax + 40cd0h]
        ; Exact mapped bytes E8 F1 B9 FC FF: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xb9
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 66 03 75 EC: add si, word ptr [ebp - 0x14]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x75
        __asm _emit 0xec
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3588h]
        ; Exact mapped bytes 66 8B 42 02: mov ax, word ptr [edx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x02
        ; Exact mapped bytes 66 25 00 00: and ax, 0
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0B C6: or ax, si
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc6
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3588h]
        ; Exact mapped bytes 66 89 42 02: mov word ptr [edx + 2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x02
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 35f8h]
        cmp dword ptr [ecx + 40cd4h], 0
        ; Exact mapped bytes 74 49: je 0x438002
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3588h]
        ; Exact mapped bytes 66 8B 70 02: mov si, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0x02
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 35f8h]
        mov ecx, dword ptr [edx + 40cd4h]
        ; Exact mapped bytes E8 96 B9 FC FF: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xb9
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes 66 03 75 E8: add si, word ptr [ebp - 0x18]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x75
        __asm _emit 0xe8
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3588h]
        ; Exact mapped bytes 66 8B 51 02: mov dx, word ptr [ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E2 00: and dx, 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x00
        ; Exact mapped bytes 66 0B D6: or dx, si
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd6
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3588h]
        ; Exact mapped bytes 66 89 51 02: mov word ptr [ecx + 2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x02
        pop esi
        add esp, 18h
        cmp ebp, esp
        ; Exact mapped bytes E8 D3 07 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x07
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
