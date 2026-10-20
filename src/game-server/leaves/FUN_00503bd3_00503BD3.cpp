// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00503BD3 .. +0xBE bytes.
extern "C" __declspec(naked) void FUN_00503bd3_00503BD3() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57d1a5h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 18h
        ; Exact mapped bytes E8 B1 18 04 00: call 0x5454a4
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 20h], 0
        ; Exact mapped bytes 75 7C: jne 0x503c7b
        __asm _emit 0x75
        __asm _emit 0x7c
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 76: je 0x503c7b
        __asm _emit 0x74
        __asm _emit 0x76
        push 0
        ; Exact mapped bytes E8 93 95 FE FF: call 0x4ed19f
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x95
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        push 50704fh
        ; Exact mapped bytes E8 89 97 FE FF: call 0x4ed3a2
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x97
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 48h
        ; Exact mapped bytes E8 9D 97 FE FF: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x97
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 16: je 0x503c4c
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 4
        push 584420h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 05 93 FF FF: call 0x4fcf4c
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x93
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x503c53
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 20h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 30 97 FE FF: call 0x4ed3a2
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x97
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 24 95 FE FF: call 0x4ed19f
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov eax, dword ptr [eax + 20h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
