// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1006F630 .. +0x144 bytes.
extern "C" __declspec(naked) void FUN_1006f630_1006F630() {
    __asm {
        ; Exact mapped bytes A1 40 56 1C 10: mov eax, dword ptr [0x101c5640]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edx, edx
        push esi
        cmp eax, edx
        mov esi, ecx
        ; Exact mapped bytes 0F 84 2E 01 00 00: je 0x1006f770
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [ecx + 0e74h]
        mov al, byte ptr [eax + 2]
        and al, 1fh
        cmp al, 1
        ; Exact mapped bytes 0F 85 13 01 00 00: jne 0x1006f770
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 8], edx
        ; Exact mapped bytes 0F 84 E6 00 00 00: je 0x1006f74d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 10514h]
        cmp eax, edx
        ; Exact mapped bytes 0F 84 FB 00 00 00: je 0x1006f770
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, ecx
        ; Exact mapped bytes 0F 84 F3 00 00 00: je 0x1006f770
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        push edi
        mov edi, 8
        mov ebp, 40000000h
        mov ecx, dword ptr [esi + 20b00h]
        cmp dword ptr [ecx + edi], 0
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x1006f738
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 10514h]
        mov eax, dword ptr [edx + 4]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov ecx, dword ptr [ecx + 4]
        mov edx, dword ptr [eax + 8]
        mov eax, dword ptr [eax + 4]
        push ecx
        push edx
        push eax
        ; Exact mapped bytes E8 83 28 FB FF: call 0x10021f40
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x28
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 20b00h]
        lea eax, [eax + eax*4]
        add esp, 10h
        mov ecx, dword ptr [ecx + edi]
        shl eax, 1
        push eax
        ; Exact mapped bytes E8 AC 3C FD FF: call 0x10043380
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x3c
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 E6 2A FB FF: call 0x100221c0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x2a
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        add esp, 8
        cdq
        xor eax, edx
        sub eax, edx
        cmp eax, 3
        ; Exact mapped bytes 7E 3C: jle 0x1006f725
        __asm _emit 0x7e
        __asm _emit 0x3c
        test ecx, ecx
        ; Exact mapped bytes 7E 1B: jle 0x1006f708
        __asm _emit 0x7e
        __asm _emit 0x1b
        mov edx, dword ptr [esi + 20b00h]
        mov eax, dword ptr [edx + edi]
        mov dword ptr [eax + 124h], 1
        mov dword ptr [eax + 108h], ebp
        ; Exact mapped bytes EB 30: jmp 0x1006f738
        __asm _emit 0xeb
        __asm _emit 0x30
        ; Exact mapped bytes 7D 2E: jge 0x1006f738
        __asm _emit 0x7d
        __asm _emit 0x2e
        mov eax, dword ptr [esi + 20b00h]
        mov eax, dword ptr [eax + edi]
        mov dword ptr [eax + 124h], 0ffffffffh
        mov dword ptr [eax + 108h], ebp
        ; Exact mapped bytes EB 13: jmp 0x1006f738
        __asm _emit 0xeb
        __asm _emit 0x13
        mov ecx, dword ptr [esi + 20b00h]
        mov edx, dword ptr [ecx + edi]
        mov dword ptr [edx + 108h], 0
        add edi, 4
        cmp edi, 88h
        ; Exact mapped bytes 0F 8C 42 FF FF FF: jl 0x1006f689
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x42
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop ebp
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, 8
        mov eax, dword ptr [esi + 20b00h]
        mov eax, dword ptr [eax + ecx]
        cmp eax, edx
        ; Exact mapped bytes 74 06: je 0x1006f765
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [eax + 108h], edx
        add ecx, 4
        cmp ecx, 88h
        ; Exact mapped bytes 7C E2: jl 0x1006f752
        __asm _emit 0x7c
        __asm _emit 0xe2
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
