// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A7E10 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_587a7e10() {
    __asm {
        mov eax, dword ptr [esp + 4]
        cmp eax, 7
        ; Exact mapped bytes 77 25: ja 0x587a7e3e
        __asm _emit 0x77
        __asm _emit 0x25
        mov edx, dword ptr [esp + 8]
        imul edx, edx, 64h
        push esi
        mov esi, dword ptr [ecx + eax*4 + 10a8ch]
        xor esi, 0aaaaaaaah
        add edx, esi
        xor edx, 0aaaaaaaah
        mov dword ptr [ecx + eax*4 + 10a8ch], edx
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
