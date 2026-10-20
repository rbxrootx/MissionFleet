// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041749C .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_0041749c_0041749C() {
    __asm {
        push esi
        mov esi, ecx
        push dword ptr [esp + 8]
        ; Exact mapped bytes E8 72 B2 01 00: call 0x43271a
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esp + 0ch]
        and dword ptr [esi + 0ch], 0
        and dword ptr [esi + 10h], 0
        mov dword ptr [esi + 94h], eax
        mov dword ptr [esi], 43e890h
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
