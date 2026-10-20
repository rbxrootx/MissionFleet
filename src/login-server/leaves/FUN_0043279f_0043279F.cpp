// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043279F .. +0x20 bytes.
extern "C" __declspec(naked) void FUN_0043279f_0043279F() {
    __asm {
        ; Exact mapped bytes 83 7C 24 08 00: cmp dword ptr [esp + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 74 16: je 0x4327bc
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes FF 74 24 04: push dword ptr [esp + 4]
        __asm _emit 0xff
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 8B 4C 24 0C: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes E8 DA FF FF FF: call 0x43278d
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 05: je 0x4327bc
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 8B 44 24 08: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
