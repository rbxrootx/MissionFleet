// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041E41E .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_0041e41e_0041E41E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4
        push ebx
        push esi
        push edi
        cld
        mov dword ptr [ebp - 4], eax
        xor eax, eax
        push eax
        push eax
        push eax
        push dword ptr [ebp - 4]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A8 37 00 00: call 0x421bec
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        mov dword ptr [ebp + 14h], eax
        pop edi
        pop esi
        pop ebx
        mov eax, dword ptr [ebp + 14h]
        mov esp, ebp
        pop ebp
        ret
    }
}
