// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10024690 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_10024690_10024690() {
    __asm {
        mov edx, ecx
        push edi
        mov ecx, 10h
        xor eax, eax
        lea edi, [edx + 0d54h]
        mov dword ptr [edx], 10175648h
        mov dword ptr [edx + 0e14h], 0
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov eax, edx
        pop edi
        ret
    }
}
