// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041F7ED .. +0x17 bytes.
extern "C" __declspec(naked) void FUN_0041f7ed_0041F7ED() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 0F B6 08: movzx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x08
        ; Exact mapped bytes 8A 89 C1 12 45 00: mov cl, byte ptr [ecx + 0x4512c1]
        __asm _emit 0x8a
        __asm _emit 0x89
        __asm _emit 0xc1
        __asm _emit 0x12
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 80 E1 04: and cl, 4
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x04
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 01: je 0x41f803
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
