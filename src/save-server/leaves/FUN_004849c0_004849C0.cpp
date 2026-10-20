// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004849C0 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_004849c0_004849C0() {
    __asm {
        push esi
        push 688de0h
        ; Exact mapped bytes FF 15 74 B9 68 00: call dword ptr [0x68b974]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        push 688de0h
        ; Exact mapped bytes FF 15 68 B9 68 00: call dword ptr [0x68b968]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        push 688de0h
        ; Exact mapped bytes FF 05 44 90 68 00: inc dword ptr [0x689044]
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x44
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 6C B9 68 00: call dword ptr [0x68b96c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 44 90 68 00 01: cmp dword ptr [0x689044], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 18: jne 0x484a09
        __asm _emit 0x75
        __asm _emit 0x18
        mov esi, dword ptr [esp + 8]
        push 0
        push 1
        push esi
        ; Exact mapped bytes E8 D1 2F 00 00: call 0x4879d0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E8 49 0B 00 00: call 0x485550
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 04: jmp 0x484a0d
        __asm _emit 0xeb
        __asm _emit 0x04
        mov esi, dword ptr [esp + 8]
        ; Exact mapped bytes E8 2E 02 00 00: call 0x484c40
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x484a1c
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 D4 00 00 00: call 0x484af0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 40 90 68 00: mov eax, dword ptr [0x689040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
