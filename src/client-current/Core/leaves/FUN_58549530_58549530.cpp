// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58549530 .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_58549530_58549530() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A6 D6 FA FF: call 0x584f6bf0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xd6
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 3C: je 0x5854958f
        __asm _emit 0x74
        __asm _emit 0x3c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        ; Exact mapped bytes 3B 05 F8 04 96 58: cmp eax, dword ptr [0x589604f8]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 77 12: ja 0x58549573
        __asm _emit 0x77
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 30 54 03 00: call 0x5857e9a0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1C: jmp 0x5854958f
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes E8 78 DC F8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xdc
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 0
        push 0
        push 0
        push 460h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E2 F7 F8 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xf7
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
