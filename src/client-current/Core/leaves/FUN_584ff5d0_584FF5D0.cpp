// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584FF5D0 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_584ff5d0_584FF5D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BB 78 FB FF: call 0x584b6ea0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x78
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5C 78 FB FF: call 0x584b6e50
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x78
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
