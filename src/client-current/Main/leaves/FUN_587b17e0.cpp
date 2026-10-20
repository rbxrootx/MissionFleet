// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B17E0 .. +0x6D bytes.
extern "C" __declspec(naked) void FUN_587b17e0() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 74 5C: je 0x587b1847
        __asm _emit 0x74
        __asm _emit 0x5c
        ; Exact mapped bytes E8 D0 F4 FF FF: call 0x587b0cc0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 E9 EE FF FF: call 0x587b06e0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 F4 F6 FF FF: call 0x587b0ef0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D 54 90 9C 58 00: cmp dword ptr [0x589c9054], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x54
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 07: je 0x587b180c
        __asm _emit 0x74
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 34 FB FF FF: call 0x587b1340
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 130h]
        add ecx, dword ptr [esi + 0a8h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 10 EE FF FF: call 0x587b0630
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 3ch]
        mov edx, dword ptr [esi + 0a0h]
        mov dword ptr [esi + 50h], edx
        test ecx, ecx
        ; Exact mapped bytes 74 17: je 0x587b1847
        __asm _emit 0x74
        __asm _emit 0x17
        push edi
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0B: je 0x587b1849
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x587b1831
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
