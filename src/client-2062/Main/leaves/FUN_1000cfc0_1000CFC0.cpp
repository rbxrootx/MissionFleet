// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1000CFC0 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_1000cfc0_1000CFC0() {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esi], 10175298h
        mov eax, dword ptr [esi + 0ch]
        mov dword ptr [esp + 4], eax
        push eax
        mov dword ptr [esp + 8], eax
        ; Exact mapped bytes E8 A9 F7 15 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xf7
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        xor eax, eax
        mov dword ptr [esi + 0ch], eax
        mov dword ptr [esi + 10h], eax
        mov dword ptr [esi + 14h], eax
        pop esi
        pop ecx
        ret
    }
}
