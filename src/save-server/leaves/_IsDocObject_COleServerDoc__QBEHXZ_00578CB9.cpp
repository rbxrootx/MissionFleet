// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00578CB9 .. +0x2D bytes.
extern "C" __declspec(naked) void _IsDocObject_COleServerDoc__QBEHXZ_00578CB9() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 1a4h
        push 67cd20h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 8D 15 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x15
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        xor eax, eax
        cmp dword ptr [ecx + 0d0h], 0
        setne al
        mov esp, ebp
        pop ebp
        ret
    }
}
