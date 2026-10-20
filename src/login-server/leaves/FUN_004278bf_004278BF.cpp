// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004278BF .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_004278bf_004278BF() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, eax
        and eax, 1fh
        sar ecx, 5
        lea eax, [eax + eax*8]
        mov ecx, dword ptr [ecx*4 + 451080h]
        lea eax, [ecx + eax*4 + 0ch]
        push eax
        ; Exact mapped bytes FF 15 B0 C1 43 00: call dword ptr [0x43c1b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        ret
    }
}
