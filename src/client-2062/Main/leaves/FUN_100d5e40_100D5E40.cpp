// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100D5E40 .. +0x166 bytes.
extern "C" __declspec(naked) void FUN_100d5e40_100D5E40() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push ebx
        push ebp
        mov ebp, ecx
        xor ecx, ecx
        push edi
        mov cl, byte ptr [eax + 330h]
        mov edx, dword ptr [ebp + 0c4h]
        cmp ecx, edx
        ; Exact mapped bytes 0F 85 41 01 00 00: jne 0x100d5fa0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        cmp eax, ebx
        ; Exact mapped bytes 0F 84 37 01 00 00: je 0x100d5fa0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 0e74h]
        mov al, byte ptr [edx + 2]
        and eax, 1fh
        cmp eax, 6
        ; Exact mapped bytes 74 3A: je 0x100d5eb4
        __asm _emit 0x74
        __asm _emit 0x3a
        cmp eax, 7
        ; Exact mapped bytes 74 35: je 0x100d5eb4
        __asm _emit 0x74
        __asm _emit 0x35
        cmp eax, 8
        ; Exact mapped bytes 75 07: jne 0x100d5e8b
        __asm _emit 0x75
        __asm _emit 0x07
        mov edi, 1
        ; Exact mapped bytes EB 2B: jmp 0x100d5eb6
        __asm _emit 0xeb
        __asm _emit 0x2b
        cmp eax, 4
        ; Exact mapped bytes 74 1D: je 0x100d5ead
        __asm _emit 0x74
        __asm _emit 0x1d
        cmp eax, 5
        ; Exact mapped bytes 74 18: je 0x100d5ead
        __asm _emit 0x74
        __asm _emit 0x18
        cmp eax, 3
        ; Exact mapped bytes 75 04: jne 0x100d5e9e
        __asm _emit 0x75
        __asm _emit 0x04
        mov edi, eax
        ; Exact mapped bytes EB 18: jmp 0x100d5eb6
        __asm _emit 0xeb
        __asm _emit 0x18
        xor ecx, ecx
        cmp eax, 2
        setne cl
        add ecx, 4
        mov edi, ecx
        ; Exact mapped bytes EB 09: jmp 0x100d5eb6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edi, 2
        ; Exact mapped bytes EB 02: jmp 0x100d5eb6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        mov dword ptr [esp + 14h], ebx
        mov esi, dword ptr [ecx + 0ch]
        ; Exact mapped bytes E8 F7 62 F5 FF: call 0x1002c1c0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x62
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 8E 98 00 00 00: jle 0x100d5f69
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0c4h]
        xor edx, edx
        mov dl, byte ptr [esi + 330h]
        cmp edx, eax
        ; Exact mapped bytes 75 65: jne 0x100d5f48
        __asm _emit 0x75
        __asm _emit 0x65
        mov eax, dword ptr [esi + 0e74h]
        mov al, byte ptr [eax + 2]
        and eax, 1fh
        cmp eax, 6
        ; Exact mapped bytes 74 38: je 0x100d5f2c
        __asm _emit 0x74
        __asm _emit 0x38
        cmp eax, 7
        ; Exact mapped bytes 74 33: je 0x100d5f2c
        __asm _emit 0x74
        __asm _emit 0x33
        cmp eax, 8
        ; Exact mapped bytes 75 07: jne 0x100d5f05
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 29: jmp 0x100d5f2e
        __asm _emit 0xeb
        __asm _emit 0x29
        cmp eax, 4
        ; Exact mapped bytes 74 1B: je 0x100d5f25
        __asm _emit 0x74
        __asm _emit 0x1b
        cmp eax, 5
        ; Exact mapped bytes 74 16: je 0x100d5f25
        __asm _emit 0x74
        __asm _emit 0x16
        cmp eax, 3
        ; Exact mapped bytes 75 02: jne 0x100d5f16
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 18: jmp 0x100d5f2e
        __asm _emit 0xeb
        __asm _emit 0x18
        xor ecx, ecx
        cmp eax, 2
        setne cl
        add ecx, 4
        mov eax, ecx
        ; Exact mapped bytes EB 09: jmp 0x100d5f2e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, 2
        ; Exact mapped bytes EB 02: jmp 0x100d5f2e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        cmp eax, edi
        ; Exact mapped bytes 75 16: jne 0x100d5f48
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, esi
        ; Exact mapped bytes E8 97 86 01 00: call 0x100ee5d0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x100d5f48
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [esi + 3c8h]
        test eax, eax
        ; Exact mapped bytes 75 01: jne 0x100d5f48
        __asm _emit 0x75
        __asm _emit 0x01
        inc ebx
        mov edx, dword ptr [esp + 14h]
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov esi, dword ptr [esi + 78h]
        inc edx
        mov dword ptr [esp + 14h], edx
        ; Exact mapped bytes E8 61 62 F5 FF: call 0x1002c1c0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x62
        __asm _emit 0xf5
        __asm _emit 0xff
        cmp dword ptr [esp + 14h], eax
        ; Exact mapped bytes 0F 8C 68 FF FF FF: jl 0x100d5ed1
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + edi*8 + 7ch]
        pop esi
        cmp ebx, dword ptr [ecx + 64h]
        ; Exact mapped bytes 74 2D: je 0x100d5fa0
        __asm _emit 0x74
        __asm _emit 0x2d
        push ebx
        ; Exact mapped bytes E8 A7 97 02 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x97
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + edi*4 + 0ach]
        push ebx
        ; Exact mapped bytes E8 9A 97 02 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x97
        __asm _emit 0x02
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [ebp + edi*4 + 0dch], 1
        mov dword ptr [ebp + edi*4 + 0f4h], eax
        mov dword ptr [ebp + 10ch], eax
        pop edi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
