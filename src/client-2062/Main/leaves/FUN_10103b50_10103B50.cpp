// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10103B50 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_10103b50_10103B50() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 1ch]
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x10103b77
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [esp + 8]
        mov ecx, dword ptr [eax]
        push 0
        push edx
        push eax
        ; Exact mapped bytes FF 51 44: call dword ptr [ecx + 0x44]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x44
        mov eax, dword ptr [esi + 1ch]
        mov edx, dword ptr [esp + 0ch]
        push 0
        push edx
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 40: call dword ptr [ecx + 0x40]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x40
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
