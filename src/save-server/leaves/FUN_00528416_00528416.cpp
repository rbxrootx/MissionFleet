// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00528416 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_00528416_00528416() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 14h]
        and eax, 0ffffh
        push eax
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 0ffffh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        and edx, 0ffffh
        push edx
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D5 C9 F7 FF: call 0x4a4e20
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xc9
        __asm _emit 0xf7
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
