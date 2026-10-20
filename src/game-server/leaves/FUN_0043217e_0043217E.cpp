// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043217E .. +0x214 bytes.
extern "C" __declspec(naked) void FUN_0043217e_0043217E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 07: jne 0x4321ab
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 D7 01 00 00: jmp 0x432382
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 35 79 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 2
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 23 79 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 42 06: mov ax, word ptr [edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x06
        ; Exact mapped bytes 66 89 45 F4: mov word ptr [ebp - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 51 08: mov dx, word ptr [ecx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        mov dword ptr [ebp - 8], 0
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 26 01 00 00: je 0x432319
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        and ecx, 0ffffh
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 42 02: mov ax, word ptr [edx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x02
        ; Exact mapped bytes 66 25 0F 00: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x00
        and eax, 0ffffh
        cmp ecx, eax
        ; Exact mapped bytes 0F 85 AA 00 00 00: jne 0x4322c5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 C1 EA 05: shr dx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 66 81 E2 FF 07: and dx, 0x7ff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0x07
        and edx, 0ffffh
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 48 02: mov cx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x02
        ; Exact mapped bytes 66 C1 E9 05: shr cx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x05
        ; Exact mapped bytes 66 81 E1 FF 07: and cx, 0x7ff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0x07
        and ecx, 0ffffh
        cmp edx, ecx
        ; Exact mapped bytes 75 7B: jne 0x4322c5
        __asm _emit 0x75
        __asm _emit 0x7b
        mov edx, dword ptr [ebp - 0ch]
        and edx, 0ffffh
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffffh
        cmp edx, eax
        ; Exact mapped bytes 7E 33: jle 0x432292
        __asm _emit 0x7e
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 0ch]
        and ecx, 0ffffh
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffffh
        sub ecx, edx
        mov eax, dword ptr [ebp + 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        imul ecx, edx
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + 74h]
        imul edx, ecx
        mov eax, dword ptr [ebp - 8]
        sub eax, edx
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 31: jmp 0x4322c3
        __asm _emit 0xeb
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 4]
        and ecx, 0ffffh
        mov edx, dword ptr [ebp - 0ch]
        and edx, 0ffffh
        sub ecx, edx
        mov eax, dword ptr [ebp + 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        imul ecx, edx
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + 74h]
        imul edx, ecx
        mov eax, dword ptr [ebp - 8]
        add eax, edx
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 52: jmp 0x432317
        __asm _emit 0xeb
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 0ch]
        and ecx, 0ffffh
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 04: mov ax, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        imul ecx, eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 74h]
        imul eax, ecx
        mov ecx, dword ptr [ebp - 8]
        sub ecx, eax
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 26: je 0x432317
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffffh
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        imul edx, ecx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 74h]
        imul ecx, edx
        mov edx, dword ptr [ebp - 8]
        add edx, ecx
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 66: jmp 0x43237f
        __asm _emit 0xeb
        __asm _emit 0x66
        mov eax, dword ptr [ebp - 0ch]
        and eax, 0ffffh
        test eax, eax
        ; Exact mapped bytes 74 2E: je 0x432353
        __asm _emit 0x74
        __asm _emit 0x2e
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 28: je 0x432353
        __asm _emit 0x74
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 0ch]
        and ecx, 0ffffh
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 04: mov ax, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        imul ecx, eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 74h]
        imul eax, ecx
        mov ecx, dword ptr [ebp - 8]
        sub ecx, eax
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 2C: jmp 0x43237f
        __asm _emit 0xeb
        __asm _emit 0x2c
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 26: je 0x43237f
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffffh
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        imul edx, ecx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 74h]
        imul ecx, edx
        mov edx, dword ptr [ebp - 8]
        add edx, ecx
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        add esp, 18h
        cmp ebp, esp
        ; Exact mapped bytes E8 54 64 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x64
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
