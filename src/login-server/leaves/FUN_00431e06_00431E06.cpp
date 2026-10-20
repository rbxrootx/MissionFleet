// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00431E06 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_00431e06_00431E06() {
    __asm {
        push esi
        push edi
        mov edi, ecx
        ; Exact mapped bytes E8 4C 36 FE FF: call 0x41545b
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x36
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, eax
        xor eax, eax
        push eax
        push eax
        push 36ah
        mov dword ptr [edi + 84h], eax
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes FF 15 FC C3 43 00: call dword ptr [0x43c3fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        push dword ptr [esp + 10h]
        mov eax, dword ptr [esi]
        mov ecx, esi
        push dword ptr [esp + 10h]
        ; Exact mapped bytes FF 50 6C: call dword ptr [eax + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x6c
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
