// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00536E6E .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_00536e6e_00536E6E() {
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
        ; Exact mapped bytes E8 B2 E6 FF FF: call 0x535542
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 38 1E 5E 00: call dword ptr [0x5e1e38]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6A CE FC FF: call 0x503d0a
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xce
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
