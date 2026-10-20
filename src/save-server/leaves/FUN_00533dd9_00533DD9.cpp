// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00533DD9 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_00533dd9_00533DD9() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 28 B4 68 00: call dword ptr [0x68b428]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 48 20 FB FF: call 0x4e5e47
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x20
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
