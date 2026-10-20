// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F0462 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_004f0462_004F0462() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1ch
        ; Exact mapped bytes E8 25 C7 FD FF: call 0x4ccb9d
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xc7
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 A8 00 00 00: call dword ptr [edx + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
