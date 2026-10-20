// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875EFF0 .. +0xDC bytes.
extern "C" __declspec(naked) void FUN_5875eff0() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 C7 00 00 00: je 0x5875f0c6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 54h], 0
        ; Exact mapped bytes 0F 85 98 00 00 00: jne 0x5875f0a1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 78h]
        test eax, eax
        ; Exact mapped bytes 7E 30: jle 0x5875f040
        __asm _emit 0x7e
        __asm _emit 0x30
        mov ecx, dword ptr [esi + 74h]
        cmp ecx, dword ptr [esi + 70h]
        ; Exact mapped bytes 75 7D: jne 0x5875f095
        __asm _emit 0x75
        __asm _emit 0x7d
        mov ecx, dword ptr [esi + 7ch]
        mov dword ptr [esi + 54h], 1
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x5875f02d
        __asm _emit 0x74
        __asm _emit 0x07
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 80h]
        test ecx, ecx
        ; Exact mapped bytes 74 6A: je 0x5875f0a1
        __asm _emit 0x74
        __asm _emit 0x6a
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes EB 2F: jmp 0x5875f06f
        __asm _emit 0xeb
        __asm _emit 0x2f
        ; Exact mapped bytes 7D 5F: jge 0x5875f0a1
        __asm _emit 0x7d
        __asm _emit 0x5f
        mov ecx, dword ptr [esi + 74h]
        test ecx, ecx
        ; Exact mapped bytes 75 4C: jne 0x5875f095
        __asm _emit 0x75
        __asm _emit 0x4c
        mov ecx, dword ptr [esi + 7ch]
        mov dword ptr [esi + 54h], 2
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x5875f05e
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 80h]
        test ecx, ecx
        ; Exact mapped bytes 74 39: je 0x5875f0a1
        __asm _emit 0x74
        __asm _emit 0x39
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [esi + 4]
        mov ecx, 12ch
        sub ecx, dword ptr [esi + 8]
        push edx
        push ecx
        mov ecx, dword ptr [esi + 80h]
        sub eax, 190h
        push eax
        ; Exact mapped bytes E8 6D 83 05 00: call 0x587b7400
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x83
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x5875f0a1
        __asm _emit 0xeb
        __asm _emit 0x0c
        add ecx, eax
        mov dword ptr [esi + 74h], ecx
        mov ecx, esi
        ; Exact mapped bytes E8 0F FE FF FF: call 0x5875eeb0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1E: je 0x5875f0c6
        __asm _emit 0x74
        __asm _emit 0x1e
        push edi
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0B: je 0x5875f0c8
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x5875f0b0
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        pop edi
        pop esi
        ; Exact mapped bytes FF E2: jmp edx
        __asm _emit 0xff
        __asm _emit 0xe2
    }
}
