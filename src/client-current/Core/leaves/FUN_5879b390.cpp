// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879B390 .. +0xD bytes.
extern "C" __declspec(naked) void FUN_5879b390() {
    __asm {
        ; Exact mapped bytes 8B 09: mov ecx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x09
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5879b39c
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
