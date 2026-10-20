// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B8390 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_004b8390_004B8390() {
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 8], 14h
        ; Exact mapped bytes 7D 11: jge 0x4b83aa
        __asm _emit 0x7d
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        add eax, 1ch
        push eax
        ; Exact mapped bytes E8 4B CE FF FF: call 0x4b51f0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes EB 0D: jmp 0x4b83b7
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 20h
        push ecx
        ; Exact mapped bytes FF 15 20 24 5E 00: call dword ptr [0x5e2420]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        pop ebp
        ret
    }
}
