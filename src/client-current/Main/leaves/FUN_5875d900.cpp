// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875D900 .. +0x1EA bytes.
extern "C" __declspec(naked) void FUN_5875d900() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        push edi
        test al, 2
        ; Exact mapped bytes 0F 84 D0 01 00 00: je 0x5875dae1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov ebx, dword ptr [esp + 10h]
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x5875d941
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x5875d939
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 10h]
        push ebx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0C: je 0x5875d941
        __asm _emit 0x74
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 75 EA: jne 0x5875d923
        __asm _emit 0x75
        __asm _emit 0xea
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edi, dword ptr [esi + 50h]
        test edi, edi
        ; Exact mapped bytes 0F 84 95 01 00 00: je 0x5875dae1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C8 84 A2 58: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        add edx, 4
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 E3 3B FD FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x3b
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 F5 00 00 00: je 0x5875da5a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 4]
        sub eax, 201h
        ; Exact mapped bytes 0F 84 B0 00 00 00: je 0x5875da23
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 1
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x5875d9fe
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 3
        ; Exact mapped bytes 74 6E: je 0x5875d9ef
        __asm _emit 0x74
        __asm _emit 0x6e
        cmp edi, 1
        ; Exact mapped bytes 74 09: je 0x5875d98f
        __asm _emit 0x74
        __asm _emit 0x09
        cmp edi, 5
        ; Exact mapped bytes 0F 85 52 01 00 00: jne 0x5875dae1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 90h]
        test ecx, ecx
        ; Exact mapped bytes 74 1E: je 0x5875d9b7
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 3D F8 48 A2 58: mov edi, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [esi + 4]
        mov edx, 12ch
        sub edx, dword ptr [esi + 8]
        push edi
        sub eax, 190h
        push edx
        push eax
        ; Exact mapped bytes E8 49 9A 05 00: call 0x587b7400
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x9a
        __asm _emit 0x05
        __asm _emit 0x00
        cmp dword ptr [esi + 98h], 0
        ; Exact mapped bytes 74 20: je 0x5875d9e0
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [esi + 94h]
        push 1
        ; Exact mapped bytes E8 23 3C FD FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x3c
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [esi + 50h]
        cdq
        idiv dword ptr [esi + 9ch]
        mov eax, dword ptr [esi + 94h]
        mov dword ptr [eax + 50h], edx
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 28h]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 20h]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [esi + 98h], 0
        ; Exact mapped bytes 74 0D: je 0x5875da14
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 94h]
        push 1
        ; Exact mapped bytes E8 DC 3B FD FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x3b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 18h]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1E: je 0x5875da4b
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 3D F8 48 A2 58: mov edi, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [esi + 4]
        mov edx, 12ch
        sub edx, dword ptr [esi + 8]
        push edi
        sub eax, 190h
        push edx
        push eax
        ; Exact mapped bytes E8 B5 99 05 00: call 0x587b7400
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x99
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 1ch]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [esi + 68h], 0
        ; Exact mapped bytes 74 3F: je 0x5875da9f
        __asm _emit 0x74
        __asm _emit 0x3f
        mov eax, dword ptr [ebx + 4]
        sub eax, 202h
        ; Exact mapped bytes 74 1D: je 0x5875da87
        __asm _emit 0x74
        __asm _emit 0x1d
        sub eax, 3
        ; Exact mapped bytes 75 72: jne 0x5875dae1
        __asm _emit 0x75
        __asm _emit 0x72
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 20h]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 2ch]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 18h]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 2ch]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp edi, 1
        ; Exact mapped bytes 74 3D: je 0x5875dae1
        __asm _emit 0x74
        __asm _emit 0x3d
        cmp edi, 5
        ; Exact mapped bytes 74 38: je 0x5875dae1
        __asm _emit 0x74
        __asm _emit 0x38
        cmp dword ptr [esi + 98h], 0
        ; Exact mapped bytes 74 20: je 0x5875dad2
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [esi + 94h]
        push 1
        ; Exact mapped bytes E8 31 3B FD FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x3b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [esi + 50h]
        cdq
        idiv dword ptr [esi + 9ch]
        mov ecx, dword ptr [esi + 94h]
        mov dword ptr [ecx + 50h], edx
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 2ch]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
