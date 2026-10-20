// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042245C .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_0042245c_0042245C() {
    __asm {
        push esi
        ; Exact mapped bytes E8 7F 01 00 00: call 0x4225e1
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 B4 C1 43 00: call dword ptr [0x43c1b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes A3 F0 AB 44 00: mov dword ptr [0x44abf0], eax
        __asm _emit 0xa3
        __asm _emit 0xf0
        __asm _emit 0xab
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 74 3A: je 0x4224ac
        __asm _emit 0x74
        __asm _emit 0x3a
        push 74h
        push 1
        ; Exact mapped bytes E8 C5 3E 00 00: call 0x426340
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        pop ecx
        test esi, esi
        pop ecx
        ; Exact mapped bytes 74 29: je 0x4224ac
        __asm _emit 0x74
        __asm _emit 0x29
        push esi
        ; Exact mapped bytes FF 35 F0 AB 44 00: push dword ptr [0x44abf0]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xf0
        __asm _emit 0xab
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 E0 C0 43 00: call dword ptr [0x43c0e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x4224ac
        __asm _emit 0x74
        __asm _emit 0x18
        push esi
        ; Exact mapped bytes E8 16 00 00 00: call 0x4224b0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes FF 15 E4 C1 43 00: call dword ptr [0x43c1e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        or dword ptr [esi + 4], 0ffffffffh
        push 1
        mov dword ptr [esi], eax
        pop eax
        pop esi
        ret
        xor eax, eax
        pop esi
        ret
    }
}
