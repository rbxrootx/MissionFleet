// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043D240 .. +0x45 bytes.
extern "C" __declspec(naked) void FUN_0043d240_0043D240() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 30: je 0x43d27f
        __asm _emit 0x74
        __asm _emit 0x30
        mov eax, dword ptr [ebp + 0ch]
        shl eax, 2
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 80h
        ; Exact mapped bytes 76 0E: jbe 0x43d26f
        __asm _emit 0x76
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 3F F2 08 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xf2
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 10: jmp 0x43d27f
        __asm _emit 0xeb
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 F4 6E FF FF: call 0x434170
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x6e
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
