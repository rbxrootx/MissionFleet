// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857E3D0 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_5857e3d0_5857E3D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 9E 2D 2D 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x2d
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 80013202h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8E E5 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xe5
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
