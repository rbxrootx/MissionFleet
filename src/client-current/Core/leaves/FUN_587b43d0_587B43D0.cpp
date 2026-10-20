// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B43D0 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_587b43d0_587B43D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 60 F1 D4 FF: call 0x58503540
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xf1
        __asm _emit 0xd4
        __asm _emit 0xff
        add esp, 4
        push eax
        ; Exact mapped bytes E8 C7 2E CD FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x2e
        __asm _emit 0xcd
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 13 00 00 00: call 0x587b4410
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
