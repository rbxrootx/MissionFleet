// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041A1C4 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_0041a1c4_0041A1C4() {
    __asm {
        mov eax, 43ae48h
        ; Exact mapped bytes E8 3A 54 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 0ch
        mov eax, dword ptr [ecx]
        push ebx
        and dword ptr [ebp - 4], 0
        push esi
        push edi
        lea edx, [ebp - 14h]
        mov dword ptr [ebp - 10h], esp
        push edx
        push 0bh
        push 0fffffdfeh
        mov dword ptr [ebp - 14h], 1
        ; Exact mapped bytes FF 50 64: call dword ptr [eax + 0x64]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 14h]
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
        ret
    }
}
