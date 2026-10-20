// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004216B4 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_004216b4_004216B4() {
    __asm {
        test esi, esi
        ; Exact mapped bytes 75 03: jne 0x4216bb
        __asm _emit 0x75
        __asm _emit 0x03
        push 1
        pop esi
        add esi, 0fh
        and esi, 0fffffff0h
        push esi
        push dword ptr [ebp + 8]
        push 10h
        ; Exact mapped bytes FF 35 68 10 45 00: push dword ptr [0x451068]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 48 C1 43 00: call dword ptr [0x43c148]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 1ch]
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
        ret
    }
}
