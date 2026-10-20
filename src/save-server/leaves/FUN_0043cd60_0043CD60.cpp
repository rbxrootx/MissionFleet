// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043CD60 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_0043cd60_0043CD60() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 27: je 0x43cd94
        __asm _emit 0x74
        __asm _emit 0x27
        cmp dword ptr [ebp + 0ch], 80h
        ; Exact mapped bytes 76 0E: jbe 0x43cd84
        __asm _emit 0x76
        __asm _emit 0x0e
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 2A F7 08 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xf7
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 10: jmp 0x43cd94
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 DF 73 FF FF: call 0x434170
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x73
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
