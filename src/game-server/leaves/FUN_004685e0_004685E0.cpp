// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004685E0 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_004685e0_004685E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0dch]
        sub ecx, 11h
        imul ecx, ecx, 0dh
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0c8h]
        ; Exact mapped bytes E8 A4 A8 FA FF: call 0x412eb0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xa8
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 CA 01 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
