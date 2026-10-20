// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588658FC .. +0x1B bytes.
extern "C" __declspec(naked) void FUN_588658fc() {
    __asm {
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 8B 00: mov eax, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 3B 05 A0 98 96 58: cmp eax, dword ptr [0x589698a0]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xa0
        __asm _emit 0x98
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 07: je 0x58865915
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 1D FF FF FF: call 0x58865831
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
