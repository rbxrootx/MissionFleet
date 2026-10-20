// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00443C90 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_00443c90_00443C90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        ; Exact mapped bytes A1 A8 50 68 00: mov eax, dword ptr [0x6850a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 1B: jne 0x443cbf
        __asm _emit 0x75
        __asm _emit 0x1b
        push 6711b4h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 4F 93 FF FF: call 0x43d000
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x93
        __asm _emit 0xff
        __asm _emit 0xff
        push 64b9d0h
        lea ecx, [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 61 1C 02 00: call 0x465920
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes FF 55 FC: call dword ptr [ebp - 4]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xfc
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 C5 2A 02 00: call 0x466790
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x2a
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 05: je 0x443cdc
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 02: jmp 0x443cde
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB B8: jmp 0x443c96
        __asm _emit 0xeb
        __asm _emit 0xb8
        mov esp, ebp
        pop ebp
        ret
    }
}
