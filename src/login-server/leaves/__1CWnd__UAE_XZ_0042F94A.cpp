// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042F94A .. +0x7C bytes.
extern "C" __declspec(naked) void __1CWnd__UAE_XZ_0042F94A() {
    __asm {
        mov eax, 43a898h
        ; Exact mapped bytes E8 B4 FC FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [esi], 43dd10h
        and dword ptr [ebp - 4], 0
        cmp dword ptr [esi + 1ch], 0
        ; Exact mapped bytes 74 25: je 0x42f990
        __asm _emit 0x74
        __asm _emit 0x25
        cmp esi, 44f5b8h
        ; Exact mapped bytes 74 1D: je 0x42f990
        __asm _emit 0x74
        __asm _emit 0x1d
        cmp esi, 44f578h
        ; Exact mapped bytes 74 15: je 0x42f990
        __asm _emit 0x74
        __asm _emit 0x15
        cmp esi, 44f538h
        ; Exact mapped bytes 74 0D: je 0x42f990
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp esi, 44f4f8h
        ; Exact mapped bytes 74 05: je 0x42f990
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 78 01 00 00: call 0x42fb08
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 34h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x42f99e
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov eax, dword ptr [esi + 38h]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x42f9ae
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [eax + 24h], esi
        ; Exact mapped bytes 75 04: jne 0x42f9ae
        __asm _emit 0x75
        __asm _emit 0x04
        and dword ptr [eax + 24h], 0
        or dword ptr [ebp - 4], 0ffffffffh
        mov ecx, esi
        ; Exact mapped bytes E8 8D 1F 00 00: call 0x431946
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
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
