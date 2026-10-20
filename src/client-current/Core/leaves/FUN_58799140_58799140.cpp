// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58799140 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_58799140_58799140() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, eax
        push esi
        mov esi, ecx
        cmp dword ptr [eax + 14h], 0fh
        ; Exact mapped bytes 76 16: jbe 0x58799165
        __asm _emit 0x76
        __asm _emit 0x16
        mov edx, dword ptr [eax]
        mov ecx, edx
        mov eax, dword ptr [eax + 10h]
        add eax, edx
        push eax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 DF 17 00 00: call 0x5879a940
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        mov eax, dword ptr [eax + 10h]
        add eax, edx
        push eax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 CB 17 00 00: call 0x5879a940
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
