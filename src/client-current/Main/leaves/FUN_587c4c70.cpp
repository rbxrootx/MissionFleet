// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C4C70 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_587c4c70() {
    __asm {
        mov eax, dword ptr [esp + 8]
        mov edx, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [ecx]
        push edi
        mov edi, eax
        sub edi, edx
        push edi
        mov edi, dword ptr [esp + 1ch]
        push edi
        mov edi, dword ptr [esp + 1ch]
        push edi
        push eax
        mov eax, dword ptr [esi + 28h]
        push edx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop esi
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
