// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10167450 .. +0xC5 bytes.
extern "C" __declspec(naked) void FUN_10167450_10167450() {
    __asm {
        push -1
        push 10174b88h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0ch], esi
        mov dword ptr [esi], 10176bb0h
        mov eax, dword ptr [esi + 18h]
        ; Exact mapped bytes 8B 3D C0 50 17 10: mov edi, dword ptr [0x101750c0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xc0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 2D EC 50 17 10: mov ebp, dword ptr [0x101750ec]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xec
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [esp + 18h], 0
        test eax, eax
        ; Exact mapped bytes 74 45: je 0x101674d5
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D 48 93 1C 10: mov ecx, dword ptr [0x101c9348]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        test ecx, ecx
        ; Exact mapped bytes 75 0A: jne 0x101674a4
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 0D 4C 93 1C 10: mov ecx, dword ptr [0x101c934c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        test ecx, ecx
        ; Exact mapped bytes 74 31: je 0x101674d5
        __asm _emit 0x74
        __asm _emit 0x31
        mov ecx, dword ptr [esi + 28h]
        test ecx, ecx
        ; Exact mapped bytes 74 2A: je 0x101674d5
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 48: call dword ptr [ecx + 0x48]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x48
        mov eax, dword ptr [esi + 18h]
        push 0
        push eax
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 34: call dword ptr [edx + 0x34]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x34
        mov eax, dword ptr [esi + 28h]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x101674d5
        __asm _emit 0x74
        __asm _emit 0x12
        push -1
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [esi + 28h]
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov dword ptr [esi + 28h], 0
        mov ecx, dword ptr [esi + 2ch]
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [esi + 28h]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x101674f4
        __asm _emit 0x74
        __asm _emit 0x12
        push -1
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov edx, dword ptr [esi + 28h]
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov dword ptr [esi + 28h], 0
        mov ecx, esi
        mov dword ptr [esp + 18h], 0ffffffffh
        ; Exact mapped bytes E8 1D C1 F9 FF: call 0x10103620
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xc1
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 10h]
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ret
    }
}
