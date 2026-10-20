// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048D8C5 .. +0x34 bytes.
extern "C" __declspec(naked) void _AfxEnableControlContainer__YAXPAVCOccManager___Z_0048D8C5() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 19: jne 0x48d8e8
        __asm _emit 0x75
        __asm _emit 0x19
        mov ecx, 5de52ch
        ; Exact mapped bytes E8 17 15 00 00: call 0x48edf0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        ; Exact mapped bytes E8 63 7B 0B 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x7b
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [eax + 1038h], esi
        ; Exact mapped bytes EB 0E: jmp 0x48d8f6
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes E8 56 7B 0B 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x7b
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 1038h], ecx
        pop esi
        pop ebp
        ret
    }
}
