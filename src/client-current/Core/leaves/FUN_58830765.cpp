// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58830765 .. +0x1A bytes.
extern "C" __declspec(naked) void FUN_58830765() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 83 78 24 00: cmp dword ptr [eax + 0x24], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 74 0C: je 0x5883077d
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes FF 70 24: push dword ptr [eax + 0x24]
        __asm _emit 0xff
        __asm _emit 0x70
        __asm _emit 0x24
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 6C 37 03 00: call 0x58863ee7
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x37
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
