// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586CEEC0 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_586ceec0_586CEEC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        movzx eax, word ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0bch], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b4h]
        mov dword ptr [ebp - 8], eax
        movzx ecx, word ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A1 C2 0E 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xc2
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
