// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047BCF0 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_0047bcf0_0047BCF0() {
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 8], 14h
        ; Exact mapped bytes 7D 11: jge 0x47bd0a
        __asm _emit 0x7d
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        add eax, 1ch
        push eax
        ; Exact mapped bytes E8 4B 4C FF FF: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes EB 0D: jmp 0x47bd17
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 20h
        push ecx
        ; Exact mapped bytes FF 15 6C B9 68 00: call dword ptr [0x68b96c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        pop ebp
        ret
    }
}
