// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886079B .. +0x17 bytes.
extern "C" __declspec(naked) void FUN_5886079b() {
    __asm {
        ; Exact mapped bytes 80 79 04 00: cmp byte ptr [ecx + 4], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x588607aa
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 83 C8 FF: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0xff
        ; Exact mapped bytes BA FF FF 1F 00: mov edx, 0x1fffff
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x1f
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes B8 FF FF FF 00: mov eax, 0xffffff
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
