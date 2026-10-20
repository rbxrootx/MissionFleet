// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004F680 .. +0x17F bytes.
extern "C" __declspec(naked) void FUN_1004f680_1004F680() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 2
        ; Exact mapped bytes 0F 84 69 01 00 00: je 0x1004f7f7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x1004f6b9
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x1004f6b2
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [eax]
        push edi
        mov ecx, eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 09: je 0x1004f6b9
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes EB EA: jmp 0x1004f69c
        __asm _emit 0xeb
        __asm _emit 0xea
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4]
        sub eax, 200h
        ; Exact mapped bytes 0F 84 BD 00 00 00: je 0x1004f784
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 2
        ; Exact mapped bytes 0F 85 27 01 00 00: jne 0x1004f7f7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 D4 92 1C 10: mov edx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esi + 4]
        mov edi, dword ptr [esi + 14h]
        mov ecx, dword ptr [edx + 4]
        add edi, eax
        cmp ecx, edi
        ; Exact mapped bytes 0F 8C 0E 01 00 00: jl 0x1004f7f7
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 1ch]
        add edi, eax
        cmp ecx, edi
        ; Exact mapped bytes 0F 8D 01 01 00 00: jge 0x1004f7f7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edx + 8]
        mov eax, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 18h]
        add edx, eax
        cmp ecx, edx
        ; Exact mapped bytes 0F 8C EE 00 00 00: jl 0x1004f7f7
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 20h]
        add edx, eax
        cmp ecx, edx
        ; Exact mapped bytes 0F 8D E1 00 00 00: jge 0x1004f7f7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, eax
        and ecx, 1f00h
        ; Exact mapped bytes 66 81 F9 00 02: cmp cx, 0x200
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 74 3A: je 0x1004f763
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 66 81 F9 00 01: cmp cx, 0x100
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 74 33: je 0x1004f763
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes 66 81 F9 00 05: cmp cx, 0x500
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x05
        ; Exact mapped bytes 74 0B: je 0x1004f742
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 66 81 F9 00 04: cmp cx, 0x400
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 0F 85 B5 00 00 00: jne 0x1004f7f7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        and eax, 0e1ffh
        or ah, 1
        push 1
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov eax, dword ptr [ecx]
        push 2
        push esi
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        and eax, 0e4ffh
        or ah, 4
        push 0
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov edx, dword ptr [ecx]
        push 2
        push esi
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 D4 92 1C 10: mov edx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esi + 4]
        mov edi, dword ptr [esi + 14h]
        mov ecx, dword ptr [edx + 4]
        add edi, eax
        cmp ecx, edi
        ; Exact mapped bytes 7C 44: jl 0x1004f7dd
        __asm _emit 0x7c
        __asm _emit 0x44
        mov edi, dword ptr [esi + 1ch]
        add edi, eax
        cmp ecx, edi
        ; Exact mapped bytes 7D 3B: jge 0x1004f7dd
        __asm _emit 0x7d
        __asm _emit 0x3b
        mov ecx, dword ptr [edx + 8]
        mov eax, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 18h]
        add edx, eax
        cmp ecx, edx
        ; Exact mapped bytes 7C 2C: jl 0x1004f7dd
        __asm _emit 0x7c
        __asm _emit 0x2c
        mov edx, dword ptr [esi + 20h]
        add edx, eax
        cmp ecx, edx
        ; Exact mapped bytes 7D 23: jge 0x1004f7dd
        __asm _emit 0x7d
        __asm _emit 0x23
        mov eax, dword ptr [esi + 58h]
        test eax, eax
        ; Exact mapped bytes 75 36: jne 0x1004f7f7
        __asm _emit 0x75
        __asm _emit 0x36
        mov ecx, dword ptr [esi + 30h]
        push 0
        push 3
        push esi
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        mov eax, dword ptr [esi + 34h]
        mov dword ptr [esi + 58h], 1
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [esi + 58h], 1
        ; Exact mapped bytes 75 14: jne 0x1004f7f7
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [esi + 30h]
        push 0
        push 4
        push esi
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov dword ptr [esi + 58h], 0
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
