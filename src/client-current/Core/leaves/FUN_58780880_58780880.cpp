// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58780880 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_58780880_58780880() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], eax
        movzx ecx, byte ptr [ebp - 1]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 34 05 D2 FF: call 0x584a0dd0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BB 11 00 00: call 0x58781a60
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
