// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58971AA4 .. +0x27 bytes.
extern "C" __declspec(naked) void _Callfns() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi + 20h]
        ; Exact mapped bytes EB 0F: jmp 0x58971ac1
        __asm _emit 0xeb
        __asm _emit 0x0f
        push dword ptr [esi + 4]
        push edi
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 56 08: call dword ptr [esi + 8]
        __asm _emit 0xff
        __asm _emit 0x56
        __asm _emit 0x08
        mov esi, dword ptr [esi]
        add esp, 0ch
        test esi, esi
        ; Exact mapped bytes 75 ED: jne 0x58971ab2
        __asm _emit 0x75
        __asm _emit 0xed
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
