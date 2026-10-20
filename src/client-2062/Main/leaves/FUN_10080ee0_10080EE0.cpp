// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10080EE0 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_10080ee0_10080EE0() {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esi + 0dch]
        ; Exact mapped bytes E8 5C 0C 01 00: call 0x10091b50
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d8h]
        push edi
        ; Exact mapped bytes E8 90 3F 01 00: call 0x10094e90
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
