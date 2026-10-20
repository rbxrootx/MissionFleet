// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1000D350 .. +0x14D bytes.
extern "C" __declspec(naked) void FUN_1000d350_1000D350() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 2
        ; Exact mapped bytes 0F 84 33 01 00 00: je 0x1000d493
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov ebp, dword ptr [esp + 14h]
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x1000d38d
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x1000d384
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
        ; Exact mapped bytes 74 0B: je 0x1000d38d
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes EB EA: jmp 0x1000d36e
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
        ; Exact mapped bytes 0F 84 FB 00 00 00: je 0x1000d493
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D D4 92 1C 10: mov edi, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esi + 4]
        mov edx, dword ptr [esi + 14h]
        mov ecx, dword ptr [edi + 4]
        add edx, eax
        cmp ecx, edx
        ; Exact mapped bytes 0F 8C A5 00 00 00: jl 0x1000d456
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 1ch]
        add edx, eax
        cmp ecx, edx
        ; Exact mapped bytes 0F 8D 98 00 00 00: jge 0x1000d456
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 8]
        mov edx, dword ptr [esi + 8]
        mov edi, dword ptr [esi + 18h]
        add edi, edx
        cmp ecx, edi
        ; Exact mapped bytes 0F 8C 85 00 00 00: jl 0x1000d456
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 20h]
        add edi, edx
        cmp ecx, edi
        ; Exact mapped bytes 7D 7C: jge 0x1000d456
        __asm _emit 0x7d
        __asm _emit 0x7c
        mov ecx, dword ptr [ebp + 4]
        sub ecx, 201h
        ; Exact mapped bytes 74 48: je 0x1000d42d
        __asm _emit 0x74
        __asm _emit 0x48
        dec ecx
        ; Exact mapped bytes 74 37: je 0x1000d41f
        __asm _emit 0x74
        __asm _emit 0x37
        cmp ebx, 1
        ; Exact mapped bytes 74 09: je 0x1000d3f6
        __asm _emit 0x74
        __asm _emit 0x09
        cmp ebx, 7
        ; Exact mapped bytes 0F 85 9D 00 00 00: jne 0x1000d493
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 70h]
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x1000d411
        __asm _emit 0x74
        __asm _emit 0x14
        lea edi, [eax - 190h]
        mov eax, 12ch
        sub eax, edx
        push eax
        push edi
        ; Exact mapped bytes E8 7F B5 03 00: call 0x10048990
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xb5
        __asm _emit 0x03
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
        mov ecx, dword ptr [esi + 6ch]
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x1000d448
        __asm _emit 0x74
        __asm _emit 0x14
        lea edi, [eax - 190h]
        mov eax, 12ch
        sub eax, edx
        push eax
        push edi
        ; Exact mapped bytes E8 48 B5 03 00: call 0x10048990
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xb5
        __asm _emit 0x03
        __asm _emit 0x00
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
        mov eax, dword ptr [esi + 68h]
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x1000d47b
        __asm _emit 0x74
        __asm _emit 0x1e
        cmp dword ptr [ebp + 4], 202h
        ; Exact mapped bytes 75 2D: jne 0x1000d493
        __asm _emit 0x75
        __asm _emit 0x2d
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
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
        cmp ebx, 1
        ; Exact mapped bytes 74 13: je 0x1000d493
        __asm _emit 0x74
        __asm _emit 0x13
        cmp ebx, 7
        ; Exact mapped bytes 74 0E: je 0x1000d493
        __asm _emit 0x74
        __asm _emit 0x0e
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
