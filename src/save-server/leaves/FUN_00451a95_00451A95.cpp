// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00451A95 .. +0x21E bytes.
extern "C" __declspec(naked) void FUN_00451a95_00451A95() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        mov dword ptr [ebp - 38h], ecx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 4]
        mov ecx, dword ptr [ecx + 24h]
        ; Exact mapped bytes E8 92 10 08 00: call 0x4d2b3e
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x10
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 94 A6 0D 00: call 0x52c14b
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xa6
        __asm _emit 0x0d
        __asm _emit 0x00
        neg eax
        sbb eax, eax
        inc eax
        mov dword ptr [ebp - 18h], eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 00 07 0E 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 54: je 0x451b21
        __asm _emit 0x74
        __asm _emit 0x54
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 F2 06 0E 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x06
        __asm _emit 0x0e
        __asm _emit 0x00
        lea edx, [ebp - 30h]
        push edx
        ; Exact mapped bytes E8 C6 AA 0D 00: call 0x52c5a4
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xaa
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 2A A0 0D 00: call 0x52bb0f
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xa0
        __asm _emit 0x0d
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 1E A0 0D 00: call 0x52bb0f
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xa0
        __asm _emit 0x0d
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 24h]
        sub eax, dword ptr [ebp - 2ch]
        cdq
        sub eax, edx
        sar eax, 1
        push eax
        mov eax, dword ptr [ebp - 28h]
        sub eax, dword ptr [ebp - 30h]
        cdq
        sub eax, edx
        sar eax, 1
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 77 4B 08 00: call 0x4d668e
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x4b
        __asm _emit 0x08
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 9E 4C 08 00: call 0x4d67bf
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 48h
        push ecx
        push 6392d0h
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 4ch]
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 4]
        mov edx, dword ptr [eax + 4ch]
        mov eax, dword ptr [edx]
        push ecx
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 7C 76: jl 0x451bc3
        __asm _emit 0x7c
        __asm _emit 0x76
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 4ch
        push ecx
        push 640340h
        push 0
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 48h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 0C: call dword ptr [ecx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x0c
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp - 38h]
        cmp dword ptr [edx + 4ch], 0
        ; Exact mapped bytes 75 07: jne 0x451b80
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 80004003h
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 7D 38: jge 0x451bbe
        __asm _emit 0x7d
        __asm _emit 0x38
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 2A: je 0x451bb6
        __asm _emit 0x74
        __asm _emit 0x2a
        push 0
        mov eax, dword ptr [ebp - 4]
        sub eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        sub ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E2 4A 08 00: call 0x4d668e
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x4a
        __asm _emit 0x08
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 09 4C 08 00: call 0x4d67bf
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes E9 F1 00 00 00: jmp 0x451caf
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 AE 00 00 00: jmp 0x451c71
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        push ecx
        push 6392e0h
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 4ch]
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 4]
        mov edx, dword ptr [eax + 4ch]
        mov eax, dword ptr [edx]
        push ecx
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 7D 08: jge 0x451bf4
        __asm _emit 0x7d
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes E9 BB 00 00 00: jmp 0x451caf
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 75 0A: jne 0x451c20
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 80004005h
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x451caf
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        add edx, 8
        push edx
        push 640d50h
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 34h]
        push edx
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 34h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 7D 05: jge 0x451c51
        __asm _emit 0x7d
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes EB 5E: jmp 0x451caf
        __asm _emit 0xeb
        __asm _emit 0x5e
        mov eax, dword ptr [ebp - 38h]
        add eax, 0ch
        push eax
        push 640d40h
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 8]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 3D 01 00 00: call 0x451db6
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 2A: je 0x451cac
        __asm _emit 0x74
        __asm _emit 0x2a
        push 0
        mov ecx, dword ptr [ebp - 4]
        sub ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 8]
        sub edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 EC 49 08 00: call 0x4d668e
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x49
        __asm _emit 0x08
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 13 4B 08 00: call 0x4d67bf
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x4b
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov esp, ebp
        pop ebp
        ret
    }
}
