// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00435A12 .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_00435a12_00435A12() {
    __asm {
        mov eax, 43a7e8h
        ; Exact mapped bytes E8 EC 9B FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x9b
        __asm _emit 0xfe
        __asm _emit 0xff
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [esi], 43d6f0h
        mov ecx, dword ptr [esi + 0cch]
        and dword ptr [ebp - 4], 0
        lea edi, [esi + 0cch]
        test ecx, ecx
        ; Exact mapped bytes 74 12: je 0x435a50
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 58: call dword ptr [eax + 0x58]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x58
        mov ecx, dword ptr [edi]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x435a50
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov eax, dword ptr [esi + 30h]
        ; Exact mapped bytes 8B 3D B0 C4 43 00: mov edi, dword ptr [0x43c4b0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xb0
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 03: je 0x435a60
        __asm _emit 0x74
        __asm _emit 0x03
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [esi + 2ch]
        test eax, eax
        ; Exact mapped bytes 74 03: je 0x435a6a
        __asm _emit 0x74
        __asm _emit 0x03
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov esi, dword ptr [esi + 0ch]
        test esi, esi
        ; Exact mapped bytes 74 07: je 0x435a78
        __asm _emit 0x74
        __asm _emit 0x07
        push esi
        ; Exact mapped bytes E8 A7 9A FE FF: call 0x41f51e
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x9a
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        mov ecx, dword ptr [ebp - 0ch]
        pop edi
        pop esi
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
