// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851F326 .. +0x21 bytes.
extern "C" __declspec(naked) void Catch_All_5851f326_5851F326() {
    __asm {
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 2ch], edx
        push 1
        push 4
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 F0 CF FE FF: call 0x5850c330
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xcf
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov eax, 5851f350h
        ret
    }
}
