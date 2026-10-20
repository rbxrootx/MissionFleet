// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587642E0 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_587642e0_587642E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5e84h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 6B 86 D4 FF: call 0x584ac970
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x86
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
