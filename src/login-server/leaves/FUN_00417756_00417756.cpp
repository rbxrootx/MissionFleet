// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00417756 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_00417756_00417756() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 10h]
        push edi
        ; Exact mapped bytes FF 15 7C C1 43 00: call dword ptr [0x43c17c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        ; Exact mapped bytes E8 83 5E 01 00: call 0x42d5ef
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        and dword ptr [esi + 8], 0
        and dword ptr [esi + 0ch], 0
        push edi
        ; Exact mapped bytes FF 15 B0 C1 43 00: call dword ptr [0x43c1b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        pop edi
        pop esi
        ret
    }
}
