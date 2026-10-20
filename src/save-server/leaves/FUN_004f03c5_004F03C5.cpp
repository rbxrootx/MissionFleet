// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F03C5 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_004f03c5_004F03C5() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 41h
        push 678234h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 84 9E FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 84 00 00 00: call dword ptr [edx + 0x84]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
