// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A0FA0 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_584a0fa0_584A0FA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        xor eax, eax
        mov byte ptr [ebp - 1], al
        xor ecx, ecx
        mov byte ptr [ebp - 2], cl
        movzx edx, byte ptr [ebp - 1]
        push edx
        movzx eax, byte ptr [ebp - 2]
        push eax
        lea ecx, [ebp + 10h]
        push ecx
        lea edx, [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 93 03 00 00: call 0x584a1360
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
