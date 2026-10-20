// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048CF80 .. +0x35 bytes.
extern "C" __declspec(naked) void _DrawState__YGHPAUHDC____PAUHBRUSH____P6GH0JIHH_ZJIHHHHI_Z_0048CF80() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 2ch]
        push eax
        mov ecx, dword ptr [ebp + 28h]
        push ecx
        mov edx, dword ptr [ebp + 24h]
        push edx
        mov eax, dword ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 5C 28 5E 00: call dword ptr [0x5e285c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        pop ebp
        ; Exact mapped bytes C2 28 00: ret 0x28
        __asm _emit 0xc2
        __asm _emit 0x28
        __asm _emit 0x00
    }
}
