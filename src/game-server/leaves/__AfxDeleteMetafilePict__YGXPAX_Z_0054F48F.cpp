// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054F48F .. +0x30 bytes.
extern "C" __declspec(naked) void __AfxDeleteMetafilePict__YGXPAX_Z_0054F48F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 1E: je 0x54f4b9
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 0ch], 20h
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 1C 2A 5E 00: call dword ptr [0x5e2a1c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
