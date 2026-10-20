// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043715F .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_0043715f_0043715F() {
    __asm {
        ; Exact mapped bytes 83 3D E4 FB 44 00 00: cmp dword ptr [0x44fbe4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0xfb
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 26: je 0x43718e
        __asm _emit 0x74
        __asm _emit 0x26
        push esi
        ; Exact mapped bytes 8B 35 44 C5 43 00: mov esi, dword ptr [0x43c544]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x44
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        push 2
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        inc eax
        push 3
        ; Exact mapped bytes A3 88 FB 44 00: mov dword ptr [0x44fb88], eax
        __asm _emit 0xa3
        __asm _emit 0x88
        __asm _emit 0xfb
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        inc eax
        ; Exact mapped bytes C7 05 F0 FB 44 00 01 00 00 00: mov dword ptr [0x44fbf0], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xf0
        __asm _emit 0xfb
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A3 8C FB 44 00: mov dword ptr [0x44fb8c], eax
        __asm _emit 0xa3
        __asm _emit 0x8c
        __asm _emit 0xfb
        __asm _emit 0x44
        __asm _emit 0x00
        pop esi
        ret
    }
}
