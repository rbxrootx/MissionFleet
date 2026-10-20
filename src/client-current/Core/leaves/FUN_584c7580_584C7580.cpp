// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C7580 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_584c7580_584C7580() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 56 31 FE FF: call 0x584aa6f0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x31
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        mov byte ptr [ebp - 1], 0
        lea eax, [ebp - 1]
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 2F 30 FE FF: call 0x584aa5e0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x30
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
