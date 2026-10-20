// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10167700 .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_10167700_10167700() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 18h]
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x1016770c
        __asm _emit 0x75
        __asm _emit 0x02
        pop esi
        ret
        ; Exact mapped bytes 8B 0D 48 93 1C 10: mov ecx, dword ptr [0x101c9348]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        test ecx, ecx
        ; Exact mapped bytes 75 0E: jne 0x10167724
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 0D 4C 93 1C 10: mov ecx, dword ptr [0x101c934c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        test ecx, ecx
        ; Exact mapped bytes 75 04: jne 0x10167724
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        pop esi
        ret
        mov ecx, dword ptr [esi + 28h]
        test ecx, ecx
        ; Exact mapped bytes 74 32: je 0x1016775d
        __asm _emit 0x74
        __asm _emit 0x32
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
        ; Exact mapped bytes 74 1A: je 0x1016775d
        __asm _emit 0x74
        __asm _emit 0x1a
        push -1
        push eax
        ; Exact mapped bytes FF 15 EC 50 17 10: call dword ptr [0x101750ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi + 28h]
        push eax
        ; Exact mapped bytes FF 15 C0 50 17 10: call dword ptr [0x101750c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [esi + 28h], 0
        mov eax, 1
        pop esi
        ret
    }
}
