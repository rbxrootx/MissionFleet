// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00445A80 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_00445a80_00445A80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov al, byte ptr [ebp - 0ch]
        mov byte ptr [ebp - 8], al
        lea ecx, [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 29 28 00 00: call 0x4482d0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
