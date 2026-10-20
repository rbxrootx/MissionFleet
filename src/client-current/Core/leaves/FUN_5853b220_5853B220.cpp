// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5853B220 .. +0x137 bytes.
extern "C" __declspec(naked) void FUN_5853b220_5853B220() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0a8h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 0a0h], ecx
        mov dword ptr [ebp - 8ch], 0
        mov dword ptr [ebp - 94h], 0
        mov eax, dword ptr [ebp + 8]
        push eax
        push 588a7598h
        lea ecx, [ebp - 84h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        push 0
        push 80h
        push 3
        push 0
        push 0
        push 80000000h
        lea edx, [ebp - 84h]
        push edx
        ; Exact mapped bytes E8 7C 80 27 00: call 0x587b3300
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x80
        __asm _emit 0x27
        __asm _emit 0x00
        mov dword ptr [ebp - 88h], eax
        cmp dword ptr [ebp - 88h], -1
        ; Exact mapped bytes 0F 84 AA 00 00 00: je 0x5853b341
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 0a4h]
        push eax
        mov ecx, dword ptr [ebp - 88h]
        push ecx
        ; Exact mapped bytes FF 15 00 43 89 58: call dword ptr [0x58894300]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 90h], eax
        mov edx, dword ptr [ebp - 90h]
        push edx
        ; Exact mapped bytes E8 85 5D 2F 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x5d
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 98h], eax
        mov eax, dword ptr [ebp - 98h]
        mov dword ptr [ebp - 8ch], eax
        push 0
        lea ecx, [ebp - 0a8h]
        push ecx
        mov edx, dword ptr [ebp - 90h]
        push edx
        mov eax, dword ptr [ebp - 8ch]
        push eax
        mov ecx, dword ptr [ebp - 88h]
        push ecx
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 88h]
        push edx
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        mov eax, dword ptr [ebp - 90h]
        push eax
        mov ecx, dword ptr [ebp - 8ch]
        push ecx
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C2 B9 F8 FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xb9
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        mov edx, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 9ch], edx
        push 1
        mov eax, dword ptr [ebp - 9ch]
        push eax
        ; Exact mapped bytes E8 F6 5C 2F 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x5c
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 94h]
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 FF 5C 2F 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x5c
        __asm _emit 0x2f
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
