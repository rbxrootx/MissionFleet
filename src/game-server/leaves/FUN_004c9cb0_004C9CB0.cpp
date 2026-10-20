// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C9CB0 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_004c9cb0_004C9CB0() {
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
        ; Exact mapped bytes FF 15 58 1F 5E 00: call dword ptr [0x5e1f58]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x1f
        __asm _emit 0x5e
        __asm _emit 0x00
        pop esi
        ret
    }
}
