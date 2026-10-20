// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B8FE0 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_587b8fe0() {
    __asm {
        ; Exact mapped bytes A1 80 45 A2 58: mov eax, dword ptr [0x58a24580]
        __asm _emit 0xa1
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        mov esi, ecx
        ; Exact mapped bytes 3B 05 94 45 A2 58: cmp eax, dword ptr [0x58a24594]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x94
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 74 0D: je 0x587b8ffd
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 0D 84 45 A2 58: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        xor eax, eax
        mov dword ptr [esi + 44h], 1
        mov dword ptr [esi + 48h], eax
        mov dword ptr [esi + 4ch], eax
        mov dword ptr [esi + 50h], eax
        mov dword ptr [esi + 54h], eax
        mov dword ptr [esi + 58h], eax
        pop esi
        ret
    }
}
