// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00418881 .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_00418881_00418881() {
    __asm {
        mov eax, 43ad2ch
        ; Exact mapped bytes E8 7D 6D 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push ecx
        mov eax, dword ptr [ecx]
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 50 70: call dword ptr [eax + 0x70]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x70
        xor ecx, ecx
        cmp eax, ecx
        ; Exact mapped bytes 75 04: jne 0x4188a5
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 35: jmp 0x4188da
        __asm _emit 0xeb
        __asm _emit 0x35
        cmp dword ptr [eax + 38h], ecx
        ; Exact mapped bytes 75 12: jne 0x4188bc
        __asm _emit 0x75
        __asm _emit 0x12
        push ecx
        push ecx
        push 0f0h
        push dword ptr [eax + 1ch]
        ; Exact mapped bytes FF 15 4C C5 43 00: call dword ptr [0x43c54c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes EB 1E: jmp 0x4188da
        __asm _emit 0xeb
        __asm _emit 0x1e
        lea edx, [ebp + 8]
        mov dword ptr [ebp - 4], ecx
        push edx
        push 3
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 0B 5B 01 00: call 0x42e3d8
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x5b
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        cmp eax, 0ffffh
        ; Exact mapped bytes 75 03: jne 0x4188da
        __asm _emit 0x75
        __asm _emit 0x03
        push 1
        pop eax
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
