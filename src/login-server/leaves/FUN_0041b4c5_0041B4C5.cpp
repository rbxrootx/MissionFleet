// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041B4C5 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_0041b4c5_0041B4C5() {
    __asm {
        mov eax, dword ptr [ecx + 8]
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edx, dword ptr [eax + 8]
        mov eax, dword ptr [eax]
        push edx
        mov esi, dword ptr [eax + esi*8]
        mov eax, dword ptr [ecx]
        push esi
        push dword ptr [ecx + 0ch]
        mov edi, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 57 10: call dword ptr [edi + 0x10]
        __asm _emit 0xff
        __asm _emit 0x57
        __asm _emit 0x10
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
