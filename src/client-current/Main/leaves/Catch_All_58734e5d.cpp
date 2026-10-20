// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58734E5D .. +0x22 bytes.
extern "C" __declspec(naked) void Catch_All_58734e5d() {
    __asm {
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], esp
        mov dword ptr [ebp - 18h], eax
        inc eax
        push 0
        push eax
        mov byte ptr [ebp - 4], 2
        ; Exact mapped bytes E8 0D FE FF FF: call 0x58734c80
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp + 8], eax
        add esp, 8
        mov eax, 58734e7fh
        ret
    }
}
