// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004275E0 .. +0x182 bytes.
extern "C" __declspec(naked) void FUN_004275e0_004275E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov eax, dword ptr [ebp + 8]
        and dword ptr [ebp - 4], 0
        dec eax
        push ebx
        push esi
        dec eax
        push edi
        ; Exact mapped bytes 74 67: je 0x42765b
        __asm _emit 0x74
        __asm _emit 0x67
        dec eax
        dec eax
        ; Exact mapped bytes 74 46: je 0x42763e
        __asm _emit 0x74
        __asm _emit 0x46
        sub eax, 4
        ; Exact mapped bytes 74 41: je 0x42763e
        __asm _emit 0x74
        __asm _emit 0x41
        sub eax, 3
        ; Exact mapped bytes 74 3C: je 0x42763e
        __asm _emit 0x74
        __asm _emit 0x3c
        sub eax, 4
        ; Exact mapped bytes 74 2A: je 0x427631
        __asm _emit 0x74
        __asm _emit 0x2a
        sub eax, 6
        ; Exact mapped bytes 74 18: je 0x427624
        __asm _emit 0x74
        __asm _emit 0x18
        dec eax
        ; Exact mapped bytes 74 08: je 0x427617
        __asm _emit 0x74
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 46 01 00 00: jmp 0x42775d
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D EC FF 44 00: mov ebx, dword ptr [0x44ffec]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        mov edi, 44ffech
        ; Exact mapped bytes EB 42: jmp 0x427666
        __asm _emit 0xeb
        __asm _emit 0x42
        ; Exact mapped bytes 8B 1D E8 FF 44 00: mov ebx, dword ptr [0x44ffe8]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        mov edi, 44ffe8h
        ; Exact mapped bytes EB 35: jmp 0x427666
        __asm _emit 0xeb
        __asm _emit 0x35
        ; Exact mapped bytes 8B 1D F0 FF 44 00: mov ebx, dword ptr [0x44fff0]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        mov edi, 44fff0h
        ; Exact mapped bytes EB 28: jmp 0x427666
        __asm _emit 0xeb
        __asm _emit 0x28
        ; Exact mapped bytes E8 80 AE FF FF: call 0x4224c3
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xae
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        push dword ptr [esi + 50h]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 12 01 00 00: call 0x427762
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        pop ecx
        add edi, 8
        pop ecx
        mov ebx, dword ptr [edi]
        ; Exact mapped bytes EB 1D: jmp 0x427678
        __asm _emit 0xeb
        __asm _emit 0x1d
        ; Exact mapped bytes 8B 1D E4 FF 44 00: mov ebx, dword ptr [0x44ffe4]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        mov edi, 44ffe4h
        push 1
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes E8 96 AF FF FF: call 0x42260a
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [ebp + 8]
        pop ecx
        cmp ebx, 1
        ; Exact mapped bytes 75 16: jne 0x427693
        __asm _emit 0x75
        __asm _emit 0x16
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 D4 00 00 00: je 0x42775b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        ; Exact mapped bytes E8 DE AF FF FF: call 0x42266b
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        ; Exact mapped bytes E9 C8 00 00 00: jmp 0x42775b
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        cmp ebx, ecx
        ; Exact mapped bytes 75 14: jne 0x4276ad
        __asm _emit 0x75
        __asm _emit 0x14
        cmp dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 74 08: je 0x4276a6
        __asm _emit 0x74
        __asm _emit 0x08
        push 1
        ; Exact mapped bytes E8 C6 AF FF FF: call 0x42266b
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push 3
        ; Exact mapped bytes E8 F8 9A FF FF: call 0x4211a5
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        cmp eax, 8
        ; Exact mapped bytes 74 0A: je 0x4276bf
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp eax, 0bh
        ; Exact mapped bytes 74 05: je 0x4276bf
        __asm _emit 0x74
        __asm _emit 0x05
        cmp eax, 4
        ; Exact mapped bytes 75 1B: jne 0x4276da
        __asm _emit 0x75
        __asm _emit 0x1b
        mov edx, dword ptr [esi + 54h]
        cmp eax, 8
        mov dword ptr [ebp - 8], edx
        mov dword ptr [esi + 54h], ecx
        ; Exact mapped bytes 75 49: jne 0x427716
        __asm _emit 0x75
        __asm _emit 0x49
        mov edx, dword ptr [esi + 58h]
        mov dword ptr [esi + 58h], 8ch
        mov dword ptr [ebp - 0ch], edx
        cmp eax, 8
        ; Exact mapped bytes 75 37: jne 0x427716
        __asm _emit 0x75
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D 50 AF 44 00: mov ecx, dword ptr [0x44af50]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0xaf
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes A1 54 AF 44 00: mov eax, dword ptr [0x44af54]
        __asm _emit 0xa1
        __asm _emit 0x54
        __asm _emit 0xaf
        __asm _emit 0x44
        __asm _emit 0x00
        add eax, ecx
        cmp ecx, eax
        ; Exact mapped bytes 7D 28: jge 0x427718
        __asm _emit 0x7d
        __asm _emit 0x28
        lea eax, [ecx + ecx*2]
        shl eax, 2
        mov edx, dword ptr [esi + 50h]
        add eax, 0ch
        and dword ptr [edx + eax - 4], 0
        ; Exact mapped bytes 8B 15 50 AF 44 00: mov edx, dword ptr [0x44af50]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xaf
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 54 AF 44 00: mov edi, dword ptr [0x44af54]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x54
        __asm _emit 0xaf
        __asm _emit 0x44
        __asm _emit 0x00
        inc ecx
        add edi, edx
        cmp ecx, edi
        ; Exact mapped bytes 7C E2: jl 0x4276f6
        __asm _emit 0x7c
        __asm _emit 0xe2
        ; Exact mapped bytes EB 02: jmp 0x427718
        __asm _emit 0xeb
        __asm _emit 0x02
        mov dword ptr [edi], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 08: je 0x427726
        __asm _emit 0x74
        __asm _emit 0x08
        push 1
        ; Exact mapped bytes E8 46 AF FF FF: call 0x42266b
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        cmp dword ptr [ebp + 8], 8
        ; Exact mapped bytes 75 0B: jne 0x427737
        __asm _emit 0x75
        __asm _emit 0x0b
        push dword ptr [esi + 58h]
        push 8
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        pop ecx
        pop ecx
        ; Exact mapped bytes EB 12: jmp 0x427749
        __asm _emit 0xeb
        __asm _emit 0x12
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        cmp dword ptr [ebp + 8], 0bh
        pop ecx
        ; Exact mapped bytes 74 06: je 0x427749
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 4
        ; Exact mapped bytes 75 12: jne 0x42775b
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [ebp + 8], 8
        mov dword ptr [esi + 54h], eax
        ; Exact mapped bytes 75 06: jne 0x42775b
        __asm _emit 0x75
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [esi + 58h], eax
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
