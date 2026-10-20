// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10042080 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_10042080_10042080() {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esi], 1017591ch
        mov eax, dword ptr [esi + 8]
        push eax
        mov dword ptr [esp + 8], eax
        ; Exact mapped bytes E8 ED A6 12 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xa6
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        xor eax, eax
        mov dword ptr [esi + 8], eax
        mov dword ptr [esi + 0ch], eax
        mov dword ptr [esi + 10h], eax
        pop esi
        pop ecx
        ret
    }
}
