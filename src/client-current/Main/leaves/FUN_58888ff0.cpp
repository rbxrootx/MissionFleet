// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58888FF0 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_58888ff0() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 68h]
        mov eax, dword ptr [esi + 54h]
        sub eax, dword ptr [ecx + 20h]
        mov edx, dword ptr [ecx + 4]
        add eax, dword ptr [ecx + 18h]
        push eax
        push edx
        ; Exact mapped bytes E8 97 D7 F2 FF: call 0x587b67a0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xd7
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 68h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        pop esi
        ; Exact mapped bytes FF E2: jmp edx
        __asm _emit 0xff
        __asm _emit 0xe2
    }
}
