// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58505AC0 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_58505ac0_58505AC0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        lea eax, [ebp + 10h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 40h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 93 A2 FC FF: call 0x584cfd70
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xa2
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 10h
        mov esp, ebp
        pop ebp
        ret
    }
}
