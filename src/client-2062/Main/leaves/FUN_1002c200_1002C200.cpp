// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1002C200 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_1002c200_1002C200() {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [ecx + 0ch]
        push edi
        test esi, esi
        ; Exact mapped bytes 74 2C: je 0x1002c236
        __asm _emit 0x74
        __asm _emit 0x2c
        mov edi, dword ptr [esp + 10h]
        ; Exact mapped bytes 8B 1D 84 50 17 10: mov ebx, dword ptr [0x10175084]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi + 5c50h]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x1002c22f
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [esi + 0f10h]
        mov eax, dword ptr [eax + 6ch]
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x1002c23e
        __asm _emit 0x74
        __asm _emit 0x0f
        mov esi, dword ptr [esi + 78h]
        test esi, esi
        ; Exact mapped bytes 75 DE: jne 0x1002c214
        __asm _emit 0x75
        __asm _emit 0xde
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
