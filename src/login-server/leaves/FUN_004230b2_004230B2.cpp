// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004230B2 .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_004230b2_004230B2() {
    __asm {
        xor eax, eax
        push 0
        cmp dword ptr [esp + 8], eax
        push 1000h
        sete al
        push eax
        ; Exact mapped bytes FF 15 78 C1 43 00: call dword ptr [0x43c178]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes A3 68 10 45 00: mov dword ptr [0x451068], eax
        __asm _emit 0xa3
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 74 36: je 0x423108
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes E8 93 FE FF FF: call 0x422f6a
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 3
        ; Exact mapped bytes A3 6C 10 45 00: mov dword ptr [0x45106c], eax
        __asm _emit 0xa3
        __asm _emit 0x6c
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 75 0D: jne 0x4230ee
        __asm _emit 0x75
        __asm _emit 0x0d
        push 3f8h
        ; Exact mapped bytes E8 AC 02 00 00: call 0x423397
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes EB 0A: jmp 0x4230f8
        __asm _emit 0xeb
        __asm _emit 0x0a
        cmp eax, 2
        ; Exact mapped bytes 75 18: jne 0x42310b
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes E8 E6 0D 00 00: call 0x423ede
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x42310b
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes FF 35 68 10 45 00: push dword ptr [0x451068]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 74 C1 43 00: call dword ptr [0x43c174]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        xor eax, eax
        ret
        push 1
        pop eax
        ret
    }
}
