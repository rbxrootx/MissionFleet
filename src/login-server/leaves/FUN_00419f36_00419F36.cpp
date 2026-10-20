// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00419F36 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_00419f36_00419F36() {
    __asm {
        mov eax, 43ae14h
        ; Exact mapped bytes E8 C8 56 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 0ch
        push ebx
        mov eax, dword ptr [ecx]
        push esi
        push edi
        and dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 10h], esp
        push dword ptr [ebp + 8]
        mov dword ptr [ebp - 14h], ecx
        push 8
        push 0fffffdfah
        ; Exact mapped bytes FF 50 64: call dword ptr [eax + 0x64]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebx
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
