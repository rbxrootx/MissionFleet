// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00556943 .. +0x2A bytes.
extern "C" __declspec(naked) void _IsOpen_COleClientItem__QBEHXZ_00556943() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 139h
        push 67c1ech
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 03 39 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x39
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        xor eax, eax
        cmp dword ptr [ecx + 4ch], 2
        sete al
        mov esp, ebp
        pop ebp
        ret
    }
}
