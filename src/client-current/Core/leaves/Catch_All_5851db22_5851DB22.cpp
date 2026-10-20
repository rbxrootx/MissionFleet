// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851DB22 .. +0x24 bytes.
extern "C" __declspec(naked) void Catch_All_5851db22_5851DB22() {
    __asm {
        mov ebx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 20h]
        add eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 48h], eax
        push 1
        push 4
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 F1 E7 FE FF: call 0x5850c330
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov eax, 5851db4fh
        ret
    }
}
