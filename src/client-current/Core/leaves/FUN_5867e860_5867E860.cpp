// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5867E860 .. +0xEC bytes.
extern "C" __declspec(naked) void FUN_5867e860_5867E860() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 9ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 9ch], ecx
        ; Exact mapped bytes FF 15 24 45 89 58: call dword ptr [0x58894524]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes A1 34 5D 96 58: mov eax, dword ptr [0x58965d34]
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, 7d0h
        cmp eax, dword ptr [ebp - 88h]
        ; Exact mapped bytes 0F 83 97 00 00 00: jae 0x5867e932
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8ch], 1eh
        mov ecx, dword ptr [ebp - 8ch]
        push ecx
        push 588aff94h
        ; Exact mapped bytes E8 3A 37 EA FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x37
        __asm _emit 0xea
        __asm _emit 0xff
        add esp, 4
        push eax
        lea edx, [ebp - 84h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0B D5 FF FF: call 0x5867bde0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        push 588affb8h
        ; Exact mapped bytes E8 0B 37 EA FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x37
        __asm _emit 0xea
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 90h], eax
        push 9fh
        push 0
        mov eax, dword ptr [ebp - 90h]
        push eax
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 F9 FF E7 FF: call 0x584fe900
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CE D4 FF FF: call 0x5867bde0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        push 9fh
        push 1
        lea ecx, [ebp - 84h]
        push ecx
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 CF FF E7 FF: call 0x584fe900
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 88h]
        ; Exact mapped bytes 89 15 34 5D 96 58: mov dword ptr [0x58965d34], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 08 27 1B 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x27
        __asm _emit 0x1b
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
