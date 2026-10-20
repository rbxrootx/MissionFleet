// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100174B0 .. +0x1F6 bytes.
extern "C" __declspec(naked) void FUN_100174b0_100174B0() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 2
        ; Exact mapped bytes 0F 84 DC 01 00 00: je 0x1001769c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov ebp, dword ptr [esp + 14h]
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x100174ed
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x100174e4
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [eax]
        push ebp
        mov ecx, eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0B: je 0x100174ed
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes EB EA: jmp 0x100174ce
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
        mov ebx, dword ptr [esi + 50h]
        test ebx, ebx
        ; Exact mapped bytes 0F 84 A4 01 00 00: je 0x1001769c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D D4 92 1C 10: mov ecx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edi, dword ptr [esi + 4]
        mov edx, dword ptr [esi + 14h]
        mov eax, dword ptr [ecx + 4]
        add edx, edi
        cmp eax, edx
        ; Exact mapped bytes 0F 8C 0C 01 00 00: jl 0x1001761d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 1ch]
        add edx, edi
        cmp eax, edx
        ; Exact mapped bytes 0F 8D FF 00 00 00: jge 0x1001761d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 8]
        mov edx, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 18h]
        add ecx, edx
        cmp eax, ecx
        ; Exact mapped bytes 0F 8C EC 00 00 00: jl 0x1001761d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 20h]
        add ecx, edx
        cmp eax, ecx
        ; Exact mapped bytes 0F 8D DF 00 00 00: jge 0x1001761d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 4]
        add eax, 0fffffdffh
        cmp eax, 4
        ; Exact mapped bytes 77 71: ja 0x100175bc
        __asm _emit 0x77
        __asm _emit 0x71
        ; Exact mapped bytes FF 24 85 A8 76 01 10: jmp dword ptr [eax*4 + 0x100176a8]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 8ch]
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x10017570
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, 12ch
        add edi, 0fffffe70h
        sub eax, edx
        push eax
        push edi
        ; Exact mapped bytes E8 20 14 03 00: call 0x10048990
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x14
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 1C: call dword ptr [edx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x1c
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
        ; Exact mapped bytes FF 50 24: call dword ptr [eax + 0x24]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x24
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 98h]
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x100175a0
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [esi + 94h]
        or byte ptr [eax + 24h], 1
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
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
        ; Exact mapped bytes FF 50 20: call dword ptr [eax + 0x20]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x20
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp ebx, 1
        ; Exact mapped bytes 74 09: je 0x100175ca
        __asm _emit 0x74
        __asm _emit 0x09
        cmp ebx, 5
        ; Exact mapped bytes 0F 85 D2 00 00 00: jne 0x1001769c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 90h]
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x100175e8
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, 12ch
        add edi, 0fffffe70h
        sub eax, edx
        push eax
        push edi
        ; Exact mapped bytes E8 A8 13 03 00: call 0x10048990
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x13
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 98h]
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x1001760f
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [esi + 94h]
        or byte ptr [eax + 24h], 1
        mov eax, dword ptr [esi + 50h]
        cdq
        idiv dword ptr [esi + 9ch]
        mov ecx, dword ptr [esi + 94h]
        mov dword ptr [ecx + 50h], edx
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 28: call dword ptr [edx + 0x28]
        __asm _emit 0xff
        __asm _emit 0x52
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
        ; Exact mapped bytes 74 39: je 0x1001765d
        __asm _emit 0x74
        __asm _emit 0x39
        mov eax, dword ptr [ebp + 4]
        sub eax, 202h
        ; Exact mapped bytes 74 1A: je 0x10017648
        __asm _emit 0x74
        __asm _emit 0x1a
        sub eax, 3
        ; Exact mapped bytes 75 69: jne 0x1001769c
        __asm _emit 0x75
        __asm _emit 0x69
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 20: call dword ptr [eax + 0x20]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x20
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
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
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
        cmp ebx, 1
        ; Exact mapped bytes 74 3A: je 0x1001769c
        __asm _emit 0x74
        __asm _emit 0x3a
        cmp ebx, 5
        ; Exact mapped bytes 74 35: je 0x1001769c
        __asm _emit 0x74
        __asm _emit 0x35
        mov eax, dword ptr [esi + 98h]
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x1001768e
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [esi + 94h]
        or byte ptr [eax + 24h], 1
        mov eax, dword ptr [esi + 50h]
        cdq
        idiv dword ptr [esi + 9ch]
        mov eax, dword ptr [esi + 94h]
        mov dword ptr [eax + 50h], edx
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
