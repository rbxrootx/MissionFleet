// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588650DF .. +0x20 bytes.
extern "C" __declspec(naked) void FUN_588650df() {
    __asm {
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes B8 63 73 6D E0: mov eax, 0xe06d7363
        __asm _emit 0xb8
        __asm _emit 0x63
        __asm _emit 0x73
        __asm _emit 0x6d
        __asm _emit 0xe0
        ; Exact mapped bytes 39 45 08: cmp dword ptr [ebp + 8], eax
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 74 04: je 0x588650f2
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes FF 75 0C: push dword ptr [ebp + 0xc]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 04 00 00 00: call 0x588650ff
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
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
