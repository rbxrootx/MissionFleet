// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00415403 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_00415403_00415403() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 24h]
        add eax, 4
        cmp eax, dword ptr [esi + 28h]
        ; Exact mapped bytes 76 05: jbe 0x415416
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 68 F3 01 00: call 0x43477e
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xf3
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 24h]
        mov ecx, dword ptr [esp + 8]
        mov dword ptr [eax], ecx
        add dword ptr [esi + 24h], 4
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
