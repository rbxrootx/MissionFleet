// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58507860 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_58507860_58507860() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 76 2E FA FF: call 0x584aa6f0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x2e
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        movzx eax, byte ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 2E 28 00 00: call 0x5850a0c0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 1], 0
        lea eax, [ebp - 1]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp + 14h]
        add ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 34 2D FA FF: call 0x584aa5e0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x2d
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
