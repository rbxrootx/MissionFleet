// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58746220 .. +0x2E3 bytes.
extern "C" __declspec(naked) void FUN_58746220_58746220() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + ecx + 70h]
        ; Exact mapped bytes 74 27: je 0x5874626b
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + ecx + 70h]
        ; Exact mapped bytes 74 13: je 0x5874626b
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + ecx + 70h]
        ; Exact mapped bytes 75 78: jne 0x587462e3
        __asm _emit 0x75
        __asm _emit 0x78
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5874627d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 3
        ; Exact mapped bytes 7D 5B: jge 0x587462de
        __asm _emit 0x7d
        __asm _emit 0x5b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + edx*4 + 70h]
        ; Exact mapped bytes 74 1A: je 0x587462ac
        __asm _emit 0x74
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 70h]
        mov dword ptr [ebp - 0ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 97 95 D5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x95
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 30: jmp 0x587462dc
        __asm _emit 0xeb
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 70h]
        mov dword ptr [ebp - 10h], ecx
        push 5
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7D 95 D5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x95
        __asm _emit 0xd5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + edx + 10h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 50h]
        mov ecx, 1
        imul ecx, ecx, 0
        mov byte ptr [edx + ecx + 56h], al
        ; Exact mapped bytes EB 96: jmp 0x58746274
        __asm _emit 0xeb
        __asm _emit 0x96
        ; Exact mapped bytes E9 1A 02 00 00: jmp 0x587464fd
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + eax + 7ch]
        ; Exact mapped bytes 74 27: je 0x5874631e
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + eax + 7ch]
        ; Exact mapped bytes 74 13: je 0x5874631e
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + eax + 7ch]
        ; Exact mapped bytes 75 78: jne 0x58746396
        __asm _emit 0x75
        __asm _emit 0x78
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58746330
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 3
        ; Exact mapped bytes 7D 5B: jge 0x58746391
        __asm _emit 0x7d
        __asm _emit 0x5b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + ecx*4 + 7ch]
        ; Exact mapped bytes 74 1A: je 0x5874635f
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 7ch]
        mov dword ptr [ebp - 14h], eax
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E4 94 D5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x94
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 30: jmp 0x5874638f
        __asm _emit 0xeb
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 7ch]
        mov dword ptr [ebp - 18h], eax
        push 5
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 CA 94 D5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x94
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + ecx + 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 50h]
        mov eax, 1
        shl eax, 0
        mov byte ptr [ecx + eax + 56h], dl
        ; Exact mapped bytes EB 96: jmp 0x58746327
        __asm _emit 0xeb
        __asm _emit 0x96
        ; Exact mapped bytes E9 67 01 00 00: jmp 0x587464fd
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + edx + 88h]
        ; Exact mapped bytes 74 31: je 0x587463de
        __asm _emit 0x74
        __asm _emit 0x31
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + edx + 88h]
        ; Exact mapped bytes 74 1A: je 0x587463de
        __asm _emit 0x74
        __asm _emit 0x1a
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + edx + 88h]
        ; Exact mapped bytes 0F 85 80 00 00 00: jne 0x5874645e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x587463f0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 3
        ; Exact mapped bytes 7D 63: jge 0x58746459
        __asm _emit 0x7d
        __asm _emit 0x63
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + eax*4 + 88h]
        ; Exact mapped bytes 74 1D: je 0x58746425
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 88h]
        mov dword ptr [ebp - 1ch], edx
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 1E 94 D5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x94
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 32: jmp 0x58746457
        __asm _emit 0xeb
        __asm _emit 0x32
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 88h]
        mov dword ptr [ebp - 20h], edx
        push 5
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 01 94 D5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x94
        __asm _emit 0xd5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + eax + 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 50h]
        mov edx, 1
        shl edx, 1
        mov byte ptr [eax + edx + 56h], cl
        ; Exact mapped bytes EB 8E: jmp 0x587463e7
        __asm _emit 0xeb
        __asm _emit 0x8e
        ; Exact mapped bytes E9 9F 00 00 00: jmp 0x587464fd
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + ecx + 94h]
        ; Exact mapped bytes 74 17: je 0x5874648c
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + ecx + 94h]
        ; Exact mapped bytes 75 71: jne 0x587464fd
        __asm _emit 0x75
        __asm _emit 0x71
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5874649e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 59: jge 0x587464fd
        __asm _emit 0x7d
        __asm _emit 0x59
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + edx*4 + 94h]
        ; Exact mapped bytes 74 1D: je 0x587464d3
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 94h]
        mov dword ptr [ebp - 24h], ecx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 70 93 D5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x93
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 28: jmp 0x587464fb
        __asm _emit 0xeb
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 94h]
        mov dword ptr [ebp - 28h], ecx
        push 5
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 53 93 D5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x93
        __asm _emit 0xd5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 50h]
        ; Exact mapped bytes 66 8B 4D FC: mov cx, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 66 89 48 38: mov word ptr [eax + 0x38], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x38
        ; Exact mapped bytes EB 98: jmp 0x58746495
        __asm _emit 0xeb
        __asm _emit 0x98
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
