// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004318F5 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_004318f5_004318F5() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi]
        ; Exact mapped bytes FF 90 80 00 00 00: call dword ptr [eax + 0x80]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        push dword ptr [edi]
        push -4
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes FF 15 DC C4 43 00: call dword ptr [0x43c4dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        and dword ptr [edi], 0
        mov ecx, esi
        ; Exact mapped bytes E8 3C DA FF FF: call 0x42f356
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        ret
    }
}
