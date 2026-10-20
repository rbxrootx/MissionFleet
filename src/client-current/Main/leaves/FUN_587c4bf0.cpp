// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C4BF0 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_587c4bf0() {
    __asm {
        mov eax, dword ptr [esp + 8]
        mov edx, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [ecx]
        push edi
        mov edi, eax
        sub edi, edx
        push edi
        mov edi, dword ptr [esp + 18h]
        push edi
        push eax
        mov eax, dword ptr [esi + 1ch]
        push edx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
