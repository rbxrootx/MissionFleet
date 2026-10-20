// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00431090 .. +0x1B5 bytes.
extern "C" __declspec(naked) void FUN_00431090_00431090() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 60h
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [ebp - 8], esi
        ; Exact mapped bytes E8 4F D1 FF FF: call 0x42e1f2
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x4310b2
        __asm _emit 0x74
        __asm _emit 0x05
        mov edi, dword ptr [eax + 1ch]
        ; Exact mapped bytes EB 38: jmp 0x4310ea
        __asm _emit 0xeb
        __asm _emit 0x38
        test byte ptr [ebp - 1], 40h
        ; Exact mapped bytes 74 0B: je 0x4310c3
        __asm _emit 0x74
        __asm _emit 0x0b
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes FF 15 08 C5 43 00: call dword ptr [0x43c508]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes EB 0B: jmp 0x4310ce
        __asm _emit 0xeb
        __asm _emit 0x0b
        push 4
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes FF 15 78 C4 43 00: call dword ptr [0x43c478]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 74 16: je 0x4310ea
        __asm _emit 0x74
        __asm _emit 0x16
        push 0
        push 0
        push 36bh
        push edi
        ; Exact mapped bytes FF 15 4C C5 43 00: call dword ptr [0x43c54c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x4310ea
        __asm _emit 0x74
        __asm _emit 0x02
        mov edi, eax
        ; Exact mapped bytes 8B 1D 90 C4 43 00: mov ebx, dword ptr [0x43c490]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x90
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        lea eax, [ebp - 28h]
        push eax
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test byte ptr [ebp - 1], 40h
        ; Exact mapped bytes 0F 85 8B 00 00 00: jne 0x43118e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 74 19: je 0x431120
        __asm _emit 0x74
        __asm _emit 0x19
        push -10h
        push edi
        ; Exact mapped bytes FF 15 14 C5 43 00: call dword ptr [0x43c514]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, 10000000h
        ; Exact mapped bytes 74 07: je 0x43111e
        __asm _emit 0x74
        __asm _emit 0x07
        test eax, 20000000h
        ; Exact mapped bytes 74 02: je 0x431120
        __asm _emit 0x74
        __asm _emit 0x02
        xor edi, edi
        test edi, edi
        mov dword ptr [ebp - 60h], 28h
        ; Exact mapped bytes 75 3A: jne 0x431165
        __asm _emit 0x75
        __asm _emit 0x3a
        ; Exact mapped bytes E8 2B 43 FE FF: call 0x41545b
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x43
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 03: je 0x431137
        __asm _emit 0x74
        __asm _emit 0x03
        mov eax, dword ptr [eax + 1ch]
        lea ecx, [ebp - 60h]
        push ecx
        push 1
        push eax
        ; Exact mapped bytes E8 C9 58 FE FF: call 0x416a0c
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x58
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 2E 59 FE FF: call 0x416a77
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x59
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 8B 35 18 C4 43 00: mov esi, dword ptr [0x43c418]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x18
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        lea eax, [ebp - 4ch]
        push eax
        lea eax, [ebp - 38h]
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        lea eax, [ebp - 4ch]
        push eax
        lea eax, [ebp - 18h]
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes EB 56: jmp 0x4311bb
        __asm _emit 0xeb
        __asm _emit 0x56
        lea eax, [ebp - 38h]
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        lea eax, [ebp - 60h]
        push eax
        push 2
        push edi
        ; Exact mapped bytes E8 94 58 FE FF: call 0x416a0c
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 F9 58 FE FF: call 0x416a77
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x58
        __asm _emit 0xfe
        __asm _emit 0xff
        lea eax, [ebp - 4ch]
        push eax
        lea eax, [ebp - 18h]
        push eax
        ; Exact mapped bytes FF 15 18 C4 43 00: call dword ptr [0x43c418]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes EB 2D: jmp 0x4311bb
        __asm _emit 0xeb
        __asm _emit 0x2d
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes FF 15 08 C5 43 00: call dword ptr [0x43c508]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 2C C5 43 00: mov esi, dword ptr [0x43c52c]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x2c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov ebx, eax
        lea eax, [ebp - 18h]
        push eax
        push ebx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        lea eax, [ebp - 38h]
        push eax
        push edi
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        lea eax, [ebp - 38h]
        push 2
        push eax
        push ebx
        push edi
        ; Exact mapped bytes FF 15 04 C4 43 00: call dword ptr [0x43c404]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ebp - 30h]
        mov edi, dword ptr [ebp - 20h]
        add eax, ecx
        sub edi, dword ptr [ebp - 28h]
        mov ebx, dword ptr [ebp - 1ch]
        cdq
        sub eax, edx
        sub ebx, dword ptr [ebp - 24h]
        mov ecx, eax
        mov eax, edi
        cdq
        sub eax, edx
        mov edx, dword ptr [ebp - 2ch]
        sar ecx, 1
        sar eax, 1
        sub ecx, eax
        mov eax, dword ptr [ebp - 34h]
        add eax, edx
        cdq
        sub eax, edx
        mov esi, eax
        mov eax, ebx
        cdq
        sub eax, edx
        sar esi, 1
        sar eax, 1
        sub esi, eax
        cmp ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 7D 05: jge 0x431201
        __asm _emit 0x7d
        __asm _emit 0x05
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes EB 11: jmp 0x431212
        __asm _emit 0xeb
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 10h]
        add edi, ecx
        cmp edi, eax
        ; Exact mapped bytes 7E 08: jle 0x431212
        __asm _emit 0x7e
        __asm _emit 0x08
        sub eax, dword ptr [ebp - 20h]
        add eax, dword ptr [ebp - 28h]
        mov ecx, eax
        cmp esi, dword ptr [ebp - 14h]
        ; Exact mapped bytes 7D 05: jge 0x43121c
        __asm _emit 0x7d
        __asm _emit 0x05
        mov esi, dword ptr [ebp - 14h]
        ; Exact mapped bytes EB 10: jmp 0x43122c
        __asm _emit 0xeb
        __asm _emit 0x10
        add ebx, esi
        cmp ebx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 7E 09: jle 0x43122c
        __asm _emit 0x7e
        __asm _emit 0x09
        mov esi, dword ptr [ebp - 24h]
        sub esi, dword ptr [ebp - 1ch]
        add esi, dword ptr [ebp - 0ch]
        push 15h
        push -1
        push -1
        push esi
        push ecx
        mov ecx, dword ptr [ebp - 8]
        push 0
        ; Exact mapped bytes E8 9A D0 FF FF: call 0x42e2d8
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
