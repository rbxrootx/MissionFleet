// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042E908 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_0042e908_0042E908() {
    __asm {
        push esi
        push edi
        mov esi, ecx
        ; Exact mapped bytes E8 A6 05 00 00: call 0x42eeb7
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [esi + 3ch]
        push 20h
        push 0
        push edi
        mov dword ptr [esi], 43d81ch
        ; Exact mapped bytes E8 BC 01 FF FF: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 1ch]
        add esp, 0ch
        mov dword ptr [esi + 50h], eax
        mov eax, dword ptr [esp + 0ch]
        movzx ecx, ax
        mov dword ptr [edi], eax
        mov dword ptr [esi + 40h], ecx
        mov eax, esi
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
