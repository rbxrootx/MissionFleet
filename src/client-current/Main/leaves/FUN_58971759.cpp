// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58971759 .. +0x15 bytes.
extern "C" __declspec(naked) void FUN_58971759() {
    __asm {
        ; Exact mapped bytes 8B 49 04: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x04
        ; Exact mapped bytes E8 BF 2F E5 FF: call 0x587c4720
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x2f
        __asm _emit 0xe5
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 08: je 0x5897176d
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
