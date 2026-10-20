// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D6041 .. +0xD0 bytes.
extern "C" __declspec(naked) void FUN_004d6041_004D6041() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57cf9eh
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
        ; Exact mapped bytes E8 43 F4 06 00: call 0x5454a4
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 24h], 0
        ; Exact mapped bytes 0F 85 8A 00 00 00: jne 0x4d60fb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x4d60fb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes E8 1D 71 01 00: call 0x4ed19f
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        push 50704fh
        ; Exact mapped bytes E8 13 73 01 00: call 0x4ed3a2
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        push 453h
        push 5c64b4h
        push 48h
        ; Exact mapped bytes E8 90 6F 01 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 16: je 0x4d60cc
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 4
        push 583440h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 85 6E 02 00: call 0x4fcf4c
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x6e
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x4d60d3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 24h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 B0 72 01 00: call 0x4ed3a2
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 A4 70 01 00: call 0x4ed19f
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov eax, dword ptr [eax + 24h]
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
