// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58853627 .. +0x1A bytes.
extern "C" __declspec(naked) void FUN_58853627() {
    __asm {
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes FF B6 04 04 00 00: push dword ptr [esi + 0x404]
        __asm _emit 0xff
        __asm _emit 0xb6
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 D9 95 01 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 83 A6 04 04 00 00 00: and dword ptr [esi + 0x404], 0
        __asm _emit 0x83
        __asm _emit 0xa6
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
