// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00429120 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_00429120_00429120() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push esi
        push 0f00021h
        mov esi, dword ptr [eax + 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [eax + 0ch]
        sub ecx, esi
        mov eax, dword ptr [eax + 8]
        push ecx
        sub eax, edx
        mov ecx, dword ptr [esp + 10h]
        push eax
        push esi
        push edx
        push ecx
        ; Exact mapped bytes FF 15 44 C0 43 00: call dword ptr [0x43c044]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        pop esi
        ret
    }
}
