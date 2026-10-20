// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042DF21 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_0042df21_0042DF21() {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov esi, ecx
        test edi, edi
        ; Exact mapped bytes 75 04: jne 0x42df31
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 07: jmp 0x42df38
        __asm _emit 0xeb
        __asm _emit 0x07
        push edi
        ; Exact mapped bytes FF 15 60 C2 43 00: call dword ptr [0x43c260]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push edi
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 81 FF FF FF: call 0x42dec2
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, esi
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
