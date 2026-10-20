// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041F8E2 .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_0041f8e2_0041F8E2() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 43fa60h
        push 423118h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 10h
        push ebx
        push esi
        push edi
        xor eax, eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 1ch]
        cmp eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 7D 13: jge 0x41f92b
        __asm _emit 0x7d
        __asm _emit 0x13
        mov esi, dword ptr [ebp + 8]
        mov ecx, esi
        ; Exact mapped bytes FF 55 14: call dword ptr [ebp + 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x14
        add esi, dword ptr [ebp + 0ch]
        mov dword ptr [ebp + 8], esi
        inc dword ptr [ebp - 1ch]
        ; Exact mapped bytes EB E5: jmp 0x41f910
        __asm _emit 0xeb
        __asm _emit 0xe5
        mov dword ptr [ebp - 20h], 1
        or dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes E8 11 00 00 00: call 0x41f94c
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
