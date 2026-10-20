// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041F804 .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_0041f804_0041F804() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 43fa40h
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
        sub esp, 0ch
        push ebx
        push esi
        push edi
        and dword ptr [ebp - 1ch], 0
        mov esi, dword ptr [ebp + 0ch]
        mov eax, esi
        imul eax, dword ptr [ebp + 10h]
        add dword ptr [ebp + 8], eax
        and dword ptr [ebp - 4], 0
        dec dword ptr [ebp + 10h]
        ; Exact mapped bytes 78 0B: js 0x41f84b
        __asm _emit 0x78
        __asm _emit 0x0b
        sub dword ptr [ebp + 8], esi
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 55 14: call dword ptr [ebp + 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x14
        ; Exact mapped bytes EB F0: jmp 0x41f83b
        __asm _emit 0xeb
        __asm _emit 0xf0
        mov dword ptr [ebp - 1ch], 1
        or dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes E8 11 00 00 00: call 0x41f86c
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
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
