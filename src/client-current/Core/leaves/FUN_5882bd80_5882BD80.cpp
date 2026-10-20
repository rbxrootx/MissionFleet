// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882BD80 .. +0xA1 bytes.
extern "C" __declspec(naked) void FUN_5882bd80_5882BD80() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887dc90h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 8
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588be790h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 87 06 00 00: call 0x5882c440
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 4], -1
        ; Exact mapped bytes 74 1C: je 0x5882bddf
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 2ch], 0
        ; Exact mapped bytes 74 13: je 0x5882bddf
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 2ch]
        ; Exact mapped bytes E8 92 18 00 00: call 0x5882d670
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 74 21: je 0x5882be09
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [ebp - 14h], edx
        push 1
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 38 52 00 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x52
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 1ch], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 6F 05 00 00: call 0x5882c380
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
