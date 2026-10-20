// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100EDBB0 .. +0xBC bytes.
extern "C" __declspec(naked) void FUN_100edbb0_100EDBB0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        cmp eax, 40000000h
        mov esi, ecx
        ; Exact mapped bytes 75 6C: jne 0x100edc2a
        __asm _emit 0x75
        __asm _emit 0x6c
        mov eax, dword ptr [esi + 1034h]
        or byte ptr [eax + 24h], 1
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 0ah
        ; Exact mapped bytes 7E 0F: jle 0x100edbe5
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100edbe5
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [eax + 28h]
        ; Exact mapped bytes EB 02: jmp 0x100edbe7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov eax, dword ptr [ecx]
        push 0
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 4], esi
        ; Exact mapped bytes 74 17: je 0x100edc10
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [esi + 0e9ch]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x100edc10
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 5c04h]
        push 1
        ; Exact mapped bytes E8 10 6E F2 FF: call 0x10014a20
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x6e
        __asm _emit 0xf2
        __asm _emit 0xff
        cmp dword ptr [esi + 5c70h], 40000h
        ; Exact mapped bytes 75 4C: jne 0x100edc68
        __asm _emit 0x75
        __asm _emit 0x4c
        mov esi, dword ptr [esi + 0f18h]
        or byte ptr [esi + 24h], 1
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 3A: jne 0x100edc68
        __asm _emit 0x75
        __asm _emit 0x3a
        mov eax, dword ptr [esi + 1034h]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [edx + 4], esi
        ; Exact mapped bytes 74 17: je 0x100edc5c
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [esi + 0e9ch]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x100edc5c
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 5c04h]
        push 0
        ; Exact mapped bytes E8 C4 6D F2 FF: call 0x10014a20
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x6d
        __asm _emit 0xf2
        __asm _emit 0xff
        mov esi, dword ptr [esi + 0f18h]
        ; Exact mapped bytes 66 81 66 24 FE FF: and word ptr [esi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
