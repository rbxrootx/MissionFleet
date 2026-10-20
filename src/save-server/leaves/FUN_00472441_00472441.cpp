// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00472441 .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_00472441_00472441() {
    __asm {
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 07: jne 0x47244e
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp + 8], 1
        mov ecx, dword ptr [ebp + 8]
        add ecx, 0fh
        and ecx, 0fffffff0h
        mov dword ptr [ebp + 8], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 0
        ; Exact mapped bytes A1 88 89 68 00: mov eax, dword ptr [0x688988]
        __asm _emit 0xa1
        __asm _emit 0x88
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 60 B8 68 00: call dword ptr [0x68b860]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xb8
        __asm _emit 0x68
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
        mov esp, ebp
        pop ebp
        ret
    }
}
