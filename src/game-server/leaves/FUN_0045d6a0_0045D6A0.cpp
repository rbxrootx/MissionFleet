// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045D6A0 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_0045d6a0_0045D6A0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov cl, byte ptr [eax]
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx], cl
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3E 03 00 00: call 0x45da00
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 11 B1 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xb1
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
