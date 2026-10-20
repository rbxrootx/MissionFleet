// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004176CD .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_004176cd_004176CD() {
    __asm {
        push esi
        mov esi, ecx
        push dword ptr [esp + 8]
        ; Exact mapped bytes E8 41 B0 01 00: call 0x43271a
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esp + 0ch]
        and dword ptr [esi + 0ch], 0
        and dword ptr [esi + 10h], 0
        mov dword ptr [esi + 94h], eax
        mov dword ptr [esi], 43e9e0h
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
