// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00484600 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_00484600_00484600() {
    __asm {
        mov eax, dword ptr [esp + 8]
        mov ecx, dword ptr [esp + 4]
        ; Exact mapped bytes A3 F8 75 68 00: mov dword ptr [0x6875f8], eax
        __asm _emit 0xa3
        __asm _emit 0xf8
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 89 0D F0 75 68 00: mov dword ptr [0x6875f0], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 E4 B9 68 00: call dword ptr [0x68b9e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 8B 0D 5C 90 68 00: mov ecx, dword ptr [0x68905c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        push 484550h
        push 4
        ; Exact mapped bytes FF 15 10 BF 68 00: call dword ptr [0x68bf10]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 F4 75 68 00: mov dword ptr [0x6875f4], eax
        __asm _emit 0xa3
        __asm _emit 0xf4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ret
    }
}
