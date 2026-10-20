// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897173F .. +0x1A bytes.
extern "C" __declspec(naked) void _AtModuleExit() {
    __asm {
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes FF 75 08: push dword ptr [ebp + 8]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 C3 B6 00 00: call 0x5897ce0f
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 06: je 0x58971757
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes E9 55 BE 00 00: jmp 0x5897d5ac
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
