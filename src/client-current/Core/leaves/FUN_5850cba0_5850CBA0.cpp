// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850CBA0 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_5850cba0_5850CBA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        lea eax, [ebp + 14h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 0
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 5D 31 FC FF: call 0x584cfd20
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x31
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 14h
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
