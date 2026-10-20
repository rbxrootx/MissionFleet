// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5873A760 .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_5873a760() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 9A B6 0A 00: call 0x587e5e10
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xb6
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        mov eax, dword ptr [esi + 500h]
        mov ecx, 1
        ; Exact mapped bytes 74 15: je 0x5873a79a
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 09 4E 24: or word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 4E 24 04: or word ptr [esi + 0x24], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x04
        mov dword ptr [esi + 470h], ecx
        pop esi
        ret
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 66 09 4E 24: or word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 4E 24 04: or word ptr [esi + 0x24], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x04
        mov dword ptr [esi + 470h], ecx
        pop esi
        ret
    }
}
