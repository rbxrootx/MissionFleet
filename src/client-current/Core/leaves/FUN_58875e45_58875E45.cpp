// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58875E45 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_58875e45_58875E45() {
    __asm {
        push 0ch
        push 588ed6b0h
        ; Exact mapped bytes E8 0F C9 FB FF: call 0x58832760
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xc9
        __asm _emit 0xfb
        __asm _emit 0xff
        and dword ptr [ebp - 1ch], 0
        push 0bh
        ; Exact mapped bytes E8 C0 DD FE FF: call 0x58863c1c
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xdd
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        and dword ptr [ebp - 4], 0
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 32 00 00 00: call 0x58875ea4
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov esi, eax
        mov dword ptr [ebp - 1ch], esi
        mov dword ptr [ebp - 4], 0fffffffeh
        ; Exact mapped bytes E8 15 00 00 00: call 0x58875e9b
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
