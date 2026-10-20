// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043D120 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_0043d120_0043D120() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 28: je 0x43d155
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, 4
        cmp eax, 80h
        ; Exact mapped bytes 76 0E: jbe 0x43d147
        __asm _emit 0x76
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 67 F3 08 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xf3
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 0E: jmp 0x43d155
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 4
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 1E 70 FF FF: call 0x434170
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
