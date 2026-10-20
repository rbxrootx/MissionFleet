// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FB590 .. +0xC9 bytes.
extern "C" __declspec(naked) void FUN_004fb590_004FB590() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57d3d4h
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
        ; Exact mapped bytes E8 F4 9E 04 00: call 0x5454a4
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x9e
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 18h], 0
        ; Exact mapped bytes 0F 85 83 00 00 00: jne 0x4fb643
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 7D: je 0x4fb643
        __asm _emit 0x74
        __asm _emit 0x7d
        push 0
        ; Exact mapped bytes E8 D2 1B FF FF: call 0x4ed19f
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x1b
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        push 50704fh
        ; Exact mapped bytes E8 C8 1D FF FF: call 0x4ed3a2
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x1d
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 2ch
        push 5c76b8h
        push 48h
        ; Exact mapped bytes E8 48 1A FF FF: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 16: je 0x4fb614
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 4
        push 584910h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 3D 19 00 00: call 0x4fcf4c
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x4fb61b
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
        ; Exact mapped bytes E8 68 1D FF FF: call 0x4ed3a2
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x1d
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 5C 1B FF FF: call 0x4ed19f
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x1b
        __asm _emit 0xff
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
