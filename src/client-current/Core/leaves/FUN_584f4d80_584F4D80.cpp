// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F4D80 .. +0xD2 bytes.
extern "C" __declspec(naked) void FUN_584f4d80_584F4D80() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887fbf0h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 20h
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
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 24h]
        add eax, 4
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 14h]
        cmp ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 74 5A: je 0x584f4e25
        __asm _emit 0x74
        __asm _emit 0x5a
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 63 31 F9 FF: call 0x58487f40
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x31
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 10 37 FC FF: call 0x584b8500
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x37
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 12 31 F9 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x31
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 F6 20 F9 FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x20
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 82 24 F9 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x24
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 4
        push eax
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 22 26 F9 FF: call 0x58487460
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x26
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
