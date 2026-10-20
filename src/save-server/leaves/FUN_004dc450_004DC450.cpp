// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DC450 .. +0xC9 bytes.
extern "C" __declspec(naked) void FUN_004dc450_004DC450() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58d924h
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
        ; Exact mapped bytes E8 54 42 06 00: call 0x5406c4
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x42
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 18h], 0
        ; Exact mapped bytes 0F 85 83 00 00 00: jne 0x4dc503
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 7D: je 0x4dc503
        __asm _emit 0x74
        __asm _emit 0x7d
        push 0
        ; Exact mapped bytes E8 B2 FD FE FF: call 0x4cc23f
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xfd
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        push 4ec00fh
        ; Exact mapped bytes E8 A8 FF FE FF: call 0x4cc442
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 2ch
        push 676930h
        push 48h
        ; Exact mapped bytes E8 28 FC FE FF: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 16: je 0x4dc4d4
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 4
        push 638e08h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 3D F8 FF FF: call 0x4dbd0c
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x4dc4db
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 18h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 48 FF FE FF: call 0x4cc442
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 3C FD FE FF: call 0x4cc23f
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xfd
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov eax, dword ptr [eax + 18h]
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
