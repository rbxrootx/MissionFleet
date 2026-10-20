// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00570309 .. +0x2D bytes.
extern "C" __declspec(naked) void _IsDocObject_COleServerDoc__QBEHXZ_00570309() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 1a4h
        push 5d0548h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 3D AE F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xae
        __asm _emit 0xf8
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
