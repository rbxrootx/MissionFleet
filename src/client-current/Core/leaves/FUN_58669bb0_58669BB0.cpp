// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58669BB0 .. +0x29B bytes.
extern "C" __declspec(naked) void FUN_58669bb0_58669BB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 0ch], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 3A: je 0x58669c00
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 88 DE 00 00 00: movsx ecx, word ptr [eax + 0xde]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 75 11: jne 0x58669be5
        __asm _emit 0x75
        __asm _emit 0x11
        mov edx, 1
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 90 DE 00 00 00: mov word ptr [eax + 0xde], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1B: jmp 0x58669c00
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 91 DE 00 00 00: movsx edx, word ptr [ecx + 0xde]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 1
        ; Exact mapped bytes 75 0C: jne 0x58669c00
        __asm _emit 0x75
        __asm _emit 0x0c
        xor eax, eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 81 DE 00 00 00: mov word ptr [ecx + 0xde], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 82 DE 00 00 00: movsx eax, word ptr [edx + 0xde]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 5A: jne 0x58669c68
        __asm _emit 0x75
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 88 E2 00 00 00: mov cx, word ptr [eax + 0xe2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 82 DA 00 00 00: mov ax, word ptr [edx + 0xda]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 2D: je 0x58669c66
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 98h]
        mov dword ptr [ebp - 1ch], edx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 41 C3 E1 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xc3
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 20h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 2B C3 E1 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xc3
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 67: jmp 0x58669ccf
        __asm _emit 0xeb
        __asm _emit 0x67
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 82 DE 00 00 00: movsx eax, word ptr [edx + 0xde]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 58: jne 0x58669ccf
        __asm _emit 0x75
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 88 E0 00 00 00: mov cx, word ptr [eax + 0xe0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 82 D8 00 00 00: mov ax, word ptr [edx + 0xd8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 2D: je 0x58669ccf
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 94h]
        mov dword ptr [ebp - 24h], edx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 D8 C2 E1 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xc2
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 98h]
        mov dword ptr [ebp - 28h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 C2 C2 E1 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xc2
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 05: jne 0x58669cda
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 6B 01 00 00: jmp 0x58669e45
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 55 FC: movsx edx, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 0F BF 45 F8: movsx eax, word ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xf8
        cmp edx, eax
        ; Exact mapped bytes 7C 06: jl 0x58669cec
        __asm _emit 0x7c
        __asm _emit 0x06
        xor ecx, ecx
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 0F BF 55 FC: movsx edx, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 0F BF 45 F8: movsx eax, word ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xf8
        sub eax, 5
        cmp edx, eax
        ; Exact mapped bytes 7E 0B: jle 0x58669d06
        __asm _emit 0x7e
        __asm _emit 0x0b
        ; Exact mapped bytes 0F BF 4D F8: movsx ecx, word ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xf8
        sub ecx, 5
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 0F BF 55 FC: movsx edx, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xfc
        test edx, edx
        ; Exact mapped bytes 7D 06: jge 0x58669d14
        __asm _emit 0x7d
        __asm _emit 0x06
        xor eax, eax
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x58669d26
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes 0F BF 55 FC: movsx edx, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xfc
        cmp dword ptr [ebp - 18h], edx
        ; Exact mapped bytes 7D 42: jge 0x58669d71
        __asm _emit 0x7d
        __asm _emit 0x42
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A7 C1 E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 88 DE 00 00 00: movsx ecx, word ptr [eax + 0xde]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 75 0D: jne 0x58669d55
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E0 B9 E2 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xb9
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 1A: jmp 0x58669d6f
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 82 DE 00 00 00: movsx eax, word ptr [edx + 0xde]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 0B: jne 0x58669d6f
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C4 B9 E2 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xb9
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB AC: jmp 0x58669d1d
        __asm _emit 0xeb
        __asm _emit 0xac
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58669d83
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 5
        ; Exact mapped bytes 7D 6C: jge 0x58669df5
        __asm _emit 0x7d
        __asm _emit 0x6c
        imul edx, dword ptr [ebp - 14h], 1ch
        mov eax, dword ptr [ebp - 10h]
        add edx, dword ptr [eax + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 7D B8 14 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xb8
        __asm _emit 0x14
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 33 C1 E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 88 DE 00 00 00: movsx ecx, word ptr [eax + 0xde]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 75 15: jne 0x58669dd1
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 6C B9 E2 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xb9
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 02: jne 0x58669dcf
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 26: jmp 0x58669df5
        __asm _emit 0xeb
        __asm _emit 0x26
        ; Exact mapped bytes EB 22: jmp 0x58669df3
        __asm _emit 0xeb
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 82 DE 00 00 00: movsx eax, word ptr [edx + 0xde]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 13: jne 0x58669df3
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 48 B9 E2 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xb9
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 02: jne 0x58669df3
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x58669df5
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 85: jmp 0x58669d7a
        __asm _emit 0xeb
        __asm _emit 0x85
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 91 DE 00 00 00: movsx edx, word ptr [ecx + 0xde]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edx, edx
        ; Exact mapped bytes 75 22: jne 0x58669e25
        __asm _emit 0x75
        __asm _emit 0x22
        ; Exact mapped bytes EB 0B: jmp 0x58669e10
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 23 B9 E2 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xb9
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0D: je 0x58669e23
        __asm _emit 0x74
        __asm _emit 0x0d
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C0 C0 E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xc0
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB E2: jmp 0x58669e05
        __asm _emit 0xeb
        __asm _emit 0xe2
        ; Exact mapped bytes EB 20: jmp 0x58669e45
        __asm _emit 0xeb
        __asm _emit 0x20
        ; Exact mapped bytes EB 0B: jmp 0x58669e32
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 01 B9 E2 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xb9
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0D: je 0x58669e45
        __asm _emit 0x74
        __asm _emit 0x0d
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 9E C0 E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xc0
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB E2: jmp 0x58669e27
        __asm _emit 0xeb
        __asm _emit 0xe2
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
