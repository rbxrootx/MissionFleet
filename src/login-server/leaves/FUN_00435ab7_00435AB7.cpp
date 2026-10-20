// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00435AB7 .. +0x63 bytes.
extern "C" __declspec(naked) void FUN_00435ab7_00435AB7() {
    __asm {
        mov eax, ecx
        xor edx, edx
        lea ecx, [eax + 103ch]
        mov dword ptr [eax + 1ch], edx
        mov dword ptr [eax + 20h], edx
        mov dword ptr [eax + 24h], edx
        mov dword ptr [eax + 28h], edx
        mov dword ptr [ecx], edx
        mov dword ptr [ecx + 4], edx
        or dword ptr [eax + 104ch], 0ffffffffh
        lea ecx, [eax + 1048h]
        mov dword ptr [ecx + 8], edx
        mov dword ptr [ecx + 1ch], edx
        mov dword ptr [ecx + 20h], edx
        mov cl, byte ptr [esp + 4]
        mov dword ptr [eax], 43d6f8h
        mov dword ptr [eax + 28h], 1ch
        mov dword ptr [eax + 20h], 14h
        mov dword ptr [eax + 18h], edx
        mov byte ptr [eax + 14h], cl
        mov dword ptr [eax + 30h], 1
        mov dword ptr [eax + 1040h], 18h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
