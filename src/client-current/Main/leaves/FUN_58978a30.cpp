// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58978A30 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_58978a30() {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov eax, dword ptr [edi + 20h]
        push eax
        mov esi, dword ptr [eax + 18h]
        ; Exact mapped bytes FF 56 0C: call dword ptr [esi + 0xc]
        __asm _emit 0xff
        __asm _emit 0x56
        __asm _emit 0x0c
        add esp, 4
        test al, al
        ; Exact mapped bytes 75 03: jne 0x58978a4a
        __asm _emit 0x75
        __asm _emit 0x03
        pop edi
        pop esi
        ret
        mov eax, dword ptr [esi]
        mov dword ptr [edi], eax
        mov ecx, dword ptr [esi + 4]
        mov dword ptr [edi + 4], ecx
        pop edi
        mov al, 1
        pop esi
        ret
    }
}
