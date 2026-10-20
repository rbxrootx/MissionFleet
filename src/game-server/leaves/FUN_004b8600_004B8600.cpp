// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B8600 .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_004b8600_004B8600() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 0C: jne 0x4b8616
        __asm _emit 0x75
        __asm _emit 0x0c
        push 0
        ; Exact mapped bytes E8 5F 01 00 00: call 0x4b8770
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 2A: jmp 0x4b8640
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 31 FD FF FF: call 0x4b8350
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 25 00 00 00: call 0x4b8650
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 86 FD FF FF: call 0x4b83c0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
