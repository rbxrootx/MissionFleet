// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041546F .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_0041546f_0041546F() {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 4]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 8]
        mov dword ptr [eax + 4], ecx
        mov ecx, dword ptr [esp + 0ch]
        or dword ptr [eax + 8], 0ffffffffh
        mov dword ptr [eax + 18h], ecx
        xor ecx, ecx
        mov dword ptr [eax + 20h], ecx
        mov dword ptr [eax + 24h], ecx
        mov dword ptr [eax + 28h], ecx
        mov dword ptr [eax + 14h], ecx
        mov dword ptr [eax + 10h], ecx
        mov dword ptr [eax + 2ch], ecx
        mov ecx, 10000h
        mov dword ptr [eax + 30h], ecx
        mov dword ptr [eax + 34h], ecx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
