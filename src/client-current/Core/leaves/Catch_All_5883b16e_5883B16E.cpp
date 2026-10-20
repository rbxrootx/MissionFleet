// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883B16E .. +0x24 bytes.
extern "C" __declspec(naked) void Catch_All_5883b16e_5883B16E() {
    __asm {
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], esp
        push 1
        mov dword ptr [ebp + 8], eax
        inc eax
        push 1
        push eax
        mov byte ptr [ebp - 4], 2
        ; Exact mapped bytes E8 C4 F0 FF FF: call 0x5883a24a
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        add esp, 0ch
        mov eax, 5883b192h
        ret
    }
}
