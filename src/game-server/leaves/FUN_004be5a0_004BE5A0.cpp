// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BE5A0 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_004be5a0_004BE5A0() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes 66 8B 4D 08: mov cx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        push ecx
        ; Exact mapped bytes E8 4F 63 00 00: call 0x4c4900
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        and eax, 0ffffh
        cmp eax, 0ffffh
        ; Exact mapped bytes 75 0B: jne 0x4be5cb
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx], 0ffffffffh
        ; Exact mapped bytes EB 0D: jmp 0x4be5d8
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        add ecx, 1
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx], ecx
        pop ebp
        ret
    }
}
