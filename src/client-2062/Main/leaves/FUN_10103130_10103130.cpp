// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10103130 .. +0x148 bytes.
extern "C" __declspec(naked) void FUN_10103130_10103130() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 2
        ; Exact mapped bytes 0F 84 2E 01 00 00: je 0x1010326e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov ebx, dword ptr [esp + 14h]
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x1010316d
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x10103164
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [eax]
        push ebx
        mov ecx, eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0B: je 0x1010316d
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes EB EA: jmp 0x1010314e
        __asm _emit 0xeb
        __asm _emit 0xea
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edi, dword ptr [esi + 50h]
        test edi, edi
        ; Exact mapped bytes 0F 84 F6 00 00 00: je 0x1010326e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0x00
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
        mov ebp, dword ptr [esi + 14h]
        mov ecx, dword ptr [edx + 4]
        add ebp, eax
        cmp ecx, ebp
        ; Exact mapped bytes 0F 8C 85 00 00 00: jl 0x10103216
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esi + 1ch]
        add ebp, eax
        cmp ecx, ebp
        ; Exact mapped bytes 7D 7C: jge 0x10103216
        __asm _emit 0x7d
        __asm _emit 0x7c
        mov ecx, dword ptr [edx + 8]
        mov eax, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 18h]
        add edx, eax
        cmp ecx, edx
        ; Exact mapped bytes 7C 6D: jl 0x10103216
        __asm _emit 0x7c
        __asm _emit 0x6d
        mov edx, dword ptr [esi + 20h]
        add edx, eax
        cmp ecx, edx
        ; Exact mapped bytes 7D 64: jge 0x10103216
        __asm _emit 0x7d
        __asm _emit 0x64
        mov eax, dword ptr [ebx + 4]
        add eax, 0fffffdffh
        cmp eax, 4
        ; Exact mapped bytes 77 3F: ja 0x101031fe
        __asm _emit 0x77
        __asm _emit 0x3f
        ; Exact mapped bytes FF 24 85 78 32 10 10: jmp dword ptr [eax*4 + 0x10103278]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0x32
        __asm _emit 0x10
        __asm _emit 0x10
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 1C: call dword ptr [eax + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x1c
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 24: call dword ptr [edx + 0x24]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x24
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 20: call dword ptr [edx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x20
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp edi, 1
        ; Exact mapped bytes 74 05: je 0x10103208
        __asm _emit 0x74
        __asm _emit 0x05
        cmp edi, 5
        ; Exact mapped bytes 75 66: jne 0x1010326e
        __asm _emit 0x75
        __asm _emit 0x66
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 28: call dword ptr [eax + 0x28]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x28
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 68h]
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x10103256
        __asm _emit 0x74
        __asm _emit 0x39
        mov eax, dword ptr [ebx + 4]
        sub eax, 202h
        ; Exact mapped bytes 74 1A: je 0x10103241
        __asm _emit 0x74
        __asm _emit 0x1a
        sub eax, 3
        ; Exact mapped bytes 75 42: jne 0x1010326e
        __asm _emit 0x75
        __asm _emit 0x42
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 20: call dword ptr [edx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x20
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 2C: call dword ptr [eax + 0x2c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x2c
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 2C: call dword ptr [eax + 0x2c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x2c
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp edi, 1
        ; Exact mapped bytes 74 13: je 0x1010326e
        __asm _emit 0x74
        __asm _emit 0x13
        cmp edi, 5
        ; Exact mapped bytes 74 0E: je 0x1010326e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 2C: call dword ptr [edx + 0x2c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x2c
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
