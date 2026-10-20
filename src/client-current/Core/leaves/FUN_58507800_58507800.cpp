// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58507800 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_58507800_58507800() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 D8 2E FA FF: call 0x584aa6f0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x2e
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        movzx eax, byte ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp + 14h]
        push edx
        ; Exact mapped bytes E8 90 28 00 00: call 0x5850a0c0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 10h]
        sub eax, dword ptr [ebp + 14h]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp + 14h]
        add edx, dword ptr [ebp + 18h]
        push edx
        ; Exact mapped bytes E8 9D 2E FA FF: call 0x584aa6f0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x2e
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
