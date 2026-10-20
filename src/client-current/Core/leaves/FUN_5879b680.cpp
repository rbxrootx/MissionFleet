// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879B680 .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_5879b680() {
    __asm {
        ; Exact mapped bytes 83 79 44 0F: cmp dword ptr [ecx + 0x44], 0xf
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x44
        __asm _emit 0x0f
        ; Exact mapped bytes 8D 51 30: lea edx, [ecx + 0x30]
        __asm _emit 0x8d
        __asm _emit 0x51
        __asm _emit 0x30
        ; Exact mapped bytes 76 03: jbe 0x5879b68c
        __asm _emit 0x76
        __asm _emit 0x03
        ; Exact mapped bytes 8B 51 30: mov edx, dword ptr [ecx + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x30
        ; Exact mapped bytes FF 71 40: push dword ptr [ecx + 0x40]
        __asm _emit 0xff
        __asm _emit 0x71
        __asm _emit 0x40
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 08 A6 D2 FF: call 0x584c5ca0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xa6
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
