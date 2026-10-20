// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A27A0 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_587a27a0_587A27A0() {
    __asm {
        mov ecx, dword ptr [esp + 8]
        mov eax, dword ptr [ecx]
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x587a27ca
        __asm _emit 0x74
        __asm _emit 0x20
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov dword ptr [ecx], 0
        mov esi, dword ptr [eax]
        push eax
        push edi
        ; Exact mapped bytes E8 11 42 00 00: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov eax, esi
        test esi, esi
        ; Exact mapped bytes 75 EE: jne 0x587a27b6
        __asm _emit 0x75
        __asm _emit 0xee
        pop edi
        pop esi
        ret
    }
}
