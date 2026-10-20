// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10043380 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_10043380_10043380() {
    __asm {
        mov eax, dword ptr [ecx + 130h]
        mov edx, dword ptr [ecx + 0a8h]
        push esi
        mov esi, 0e10h
        lea eax, [eax + edx + 384h]
        cdq
        idiv esi
        pop esi
        test edx, edx
        mov dword ptr [ecx + 0e4h], edx
        ; Exact mapped bytes 7D 0C: jge 0x100433b3
        __asm _emit 0x7d
        __asm _emit 0x0c
        add edx, 0e10h
        mov dword ptr [ecx + 0e4h], edx
        mov eax, dword ptr [ecx + 0e4h]
        ret
    }
}
