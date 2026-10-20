// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00435BE4 .. +0xAE bytes.
extern "C" __declspec(naked) void FUN_00435be4_00435BE4() {
    __asm {
        mov eax, 43a81ch
        ; Exact mapped bytes E8 1A 9A FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x9a
        __asm _emit 0xfe
        __asm _emit 0xff
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [esi], 43d700h
        mov ecx, dword ptr [esi + 14h]
        and dword ptr [ebp - 4], 0
        push 1
        test ecx, ecx
        pop ebx
        ; Exact mapped bytes 74 05: je 0x435c0f
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx]
        push ebx
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 18h]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x435c1b
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx]
        push ebx
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 1ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x435c27
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx]
        push ebx
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 20h]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x435c33
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx]
        push ebx
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 24h]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x435c3f
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx]
        push ebx
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 38h]
        test ecx, ecx
        ; Exact mapped bytes 74 17: je 0x435c5d
        __asm _emit 0x74
        __asm _emit 0x17
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 74 11: je 0x435c5d
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes E8 34 77 FF FF: call 0x42d385
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 BE 7C FF FF: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov ecx, dword ptr [esi + 38h]
        ; Exact mapped bytes EB E9: jmp 0x435c46
        __asm _emit 0xeb
        __asm _emit 0xe9
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x435c6a
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ecx]
        push ebx
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov ecx, dword ptr [esi + 34h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x435c77
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ecx]
        push ebx
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov ecx, dword ptr [esi + 38h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x435c84
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ecx]
        push ebx
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov ecx, dword ptr [ebp - 0ch]
        pop esi
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ret
    }
}
