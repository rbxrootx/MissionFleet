// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5855BFA0 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_5855bfa0_5855BFA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 10704h], ecx
        mov dword ptr [eax + 10708h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 106fch]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 56 AE F5 FF: call 0x584b6e30
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xae
        __asm _emit 0xf5
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
