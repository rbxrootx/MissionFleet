// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041771A .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_0041771a_0041771A() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        and dword ptr [esi + 0ch], 0
        and dword ptr [esi + 8], 0
        mov dword ptr [esi], eax
        mov eax, dword ptr [esp + 0ch]
        mov dword ptr [esi + 4], eax
        lea eax, [esi + 10h]
        push eax
        ; Exact mapped bytes FF 15 C4 C1 43 00: call dword ptr [0x43c1c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
