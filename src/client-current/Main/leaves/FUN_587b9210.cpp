// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B9210 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_587b9210() {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        push 0
        push edi
        mov esi, ecx
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        inc eax
        push eax
        push edi
        push 0
        push 0
        push 80010f04h
        mov ecx, esi
        ; Exact mapped bytes E8 3C 7A 1B 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x7a
        __asm _emit 0x1b
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
