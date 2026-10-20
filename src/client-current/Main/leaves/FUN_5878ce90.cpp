// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878CE90 .. +0x201 bytes.
extern "C" __declspec(naked) void FUN_5878ce90() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0ach]
        push edi
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x5878cea7
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [eax + 54h], 0
        mov eax, dword ptr [esi + 74h]
        mov ebp, 1
        cmp dword ptr [eax + 164h], ebp
        ; Exact mapped bytes 7E 0F: jle 0x5878cec6
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x5878cec6
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 4]
        ; Exact mapped bytes EB 02: jmp 0x5878cec8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0b0h]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5878cefd
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
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
        mov ecx, dword ptr [esi + 0b0h]
        push 0
        ; Exact mapped bytes E8 D6 5D 17 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x5d
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [esi + 74h]
        mov ebx, 2
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 0F: jle 0x5878cf29
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x5878cf29
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 8]
        ; Exact mapped bytes EB 02: jmp 0x5878cf2b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0b4h]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5878cf60
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
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
        mov ecx, dword ptr [esi + 0b4h]
        push 0
        ; Exact mapped bytes E8 73 5D 17 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x5d
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 2C C4 98 58: call dword ptr [0x5898c42c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xc4
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 C3 FC 1E 00: call 0x5897cc3c
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xfc
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes E8 B5 FC 1E 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xfc
        __asm _emit 0x1e
        __asm _emit 0x00
        and eax, 80000003h
        ; Exact mapped bytes 79 05: jns 0x5878cf8d
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffch
        inc eax
        mov edx, dword ptr [esi + 74h]
        lea ecx, [eax + 19h]
        cmp dword ptr [edx + 164h], ecx
        ; Exact mapped bytes 7E 13: jle 0x5878cfae
        __asm _emit 0x7e
        __asm _emit 0x13
        test ecx, ecx
        ; Exact mapped bytes 7C 0F: jl 0x5878cfae
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov edx, dword ptr [edx + 18ch]
        test edx, edx
        ; Exact mapped bytes 74 05: je 0x5878cfae
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [edx + ecx*4]
        ; Exact mapped bytes EB 02: jmp 0x5878cfb0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi + 0c0h]
        lea edi, [esi + 0c0h]
        mov dword ptr [edx + 50h], ecx
        test ecx, ecx
        ; Exact mapped bytes 74 2F: je 0x5878cff2
        __asm _emit 0x74
        __asm _emit 0x2f
        mov ebp, dword ptr [ecx + 10h]
        mov dword ptr [edx + 0ch], ebp
        mov ebp, dword ptr [ecx + 14h]
        mov dword ptr [edx + 10h], ebp
        mov ebp, dword ptr [ecx + 18h]
        add ecx, 18h
        mov dword ptr [edx + 14h], ebp
        mov ebp, dword ptr [ecx + 4]
        add edx, 14h
        mov dword ptr [edx + 4], ebp
        mov ebp, dword ptr [ecx + 8]
        mov dword ptr [edx + 8], ebp
        mov ecx, dword ptr [ecx + 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov ebp, 1
        mov ecx, dword ptr [esi + 74h]
        add eax, 0b4h
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 13: jle 0x5878d015
        __asm _emit 0x7e
        __asm _emit 0x13
        test eax, eax
        ; Exact mapped bytes 7C 0F: jl 0x5878d015
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x5878d015
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x5878d017
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0c4h]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x5878d050
        __asm _emit 0x74
        __asm _emit 0x2c
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
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
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        push 0
        ; Exact mapped bytes E8 87 5C 17 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x5c
        __asm _emit 0x17
        __asm _emit 0x00
        add edi, 4
        sub ebx, ebp
        ; Exact mapped bytes 75 F0: jne 0x5878d050
        __asm _emit 0x75
        __asm _emit 0xf0
        mov eax, dword ptr [esi + 121a8h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 121ach]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 121a8h]
        push ebx
        ; Exact mapped bytes E8 60 5C 17 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x5c
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 121ach]
        push ebx
        ; Exact mapped bytes E8 54 5C 17 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x5c
        __asm _emit 0x17
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
