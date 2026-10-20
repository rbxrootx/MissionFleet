// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FDA10 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_100fda10_100FDA10() {
    __asm {
        mov eax, dword ptr [esp + 0ch]
        push esi
        push eax
        mov esi, ecx
        mov ecx, dword ptr [esp + 0ch]
        push 0
        push 0
        push 0
        push 0
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 84 0F 00 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 0ch]
        mov dword ptr [esi], 10176704h
        mov dword ptr [esi + 50h], edx
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
