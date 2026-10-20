// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58971700 .. +0x28 bytes.
extern "C" __declspec(naked) void _Lockit() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        cmp eax, 4
        push esi
        mov esi, ecx
        mov dword ptr [esi], eax
        ; Exact mapped bytes 7D 0F: jge 0x58971721
        __asm _emit 0x7d
        __asm _emit 0x0f
        imul eax, eax, 18h
        add eax, 58a28548h
        push eax
        ; Exact mapped bytes E8 AA 06 00 00: call 0x58971dca
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov eax, esi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
