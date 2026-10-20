// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B8400 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_004b8400_004B8400() {
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 8], 14h
        ; Exact mapped bytes 7D 11: jge 0x4b841a
        __asm _emit 0x7d
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        add eax, 1ch
        push eax
        ; Exact mapped bytes E8 7B CE FF FF: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes EB 0D: jmp 0x4b8427
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 20h
        push ecx
        ; Exact mapped bytes FF 15 24 24 5E 00: call dword ptr [0x5e2424]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        pop ebp
        ret
    }
}
