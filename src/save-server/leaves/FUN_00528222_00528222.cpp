// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00528222 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_00528222_00528222() {
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
        and edx, 0ffffh
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8B AD FD FF: call 0x502fd2
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xad
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
