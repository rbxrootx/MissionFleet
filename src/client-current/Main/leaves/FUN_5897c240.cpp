// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897C240 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_5897c240() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push esi
        mov eax, dword ptr [esi + 13ch]
        mov byte ptr [eax + 0ch], 0
        mov ecx, dword ptr [esi + 14ch]
        ; Exact mapped bytes FF 51 04: call dword ptr [ecx + 4]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x04
        mov edx, dword ptr [esi + 14ch]
        push esi
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        add esp, 8
        pop esi
        ret
    }
}
