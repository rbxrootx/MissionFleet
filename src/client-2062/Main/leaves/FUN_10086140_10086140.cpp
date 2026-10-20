// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10086140 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_10086140_10086140() {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 10h]
        test edi, edi
        mov esi, ecx
        ; Exact mapped bytes 74 36: je 0x10086183
        __asm _emit 0x74
        __asm _emit 0x36
        mov eax, dword ptr [esi + 6ch]
        ; Exact mapped bytes 8B 1D B0 50 17 10: mov ebx, dword ptr [0x101750b0]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea ecx, [edi + 2dh]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10086168
        __asm _emit 0x74
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x10086168
        __asm _emit 0x74
        __asm _emit 0x04
        push ecx
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov esi, dword ptr [esi + 70h]
        lea ecx, [edi + 0ch]
        mov eax, dword ptr [esi + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x100861b7
        __asm _emit 0x74
        __asm _emit 0x42
        test ecx, ecx
        ; Exact mapped bytes 74 3E: je 0x100861b7
        __asm _emit 0x74
        __asm _emit 0x3e
        push ecx
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 6ch]
        ; Exact mapped bytes 8B 3D B0 50 17 10: mov edi, dword ptr [0x101750b0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x100861a0
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, 101ace48h
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x100861a0
        __asm _emit 0x74
        __asm _emit 0x04
        push ecx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov esi, dword ptr [esi + 70h]
        mov eax, dword ptr [esi + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x100861b7
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, 101ace48h
        test edx, edx
        ; Exact mapped bytes 74 04: je 0x100861b7
        __asm _emit 0x74
        __asm _emit 0x04
        push edx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
