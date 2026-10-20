// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A14F0 .. +0xED bytes.
extern "C" __declspec(naked) void FUN_584a14f0_584A14F0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887dd1dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 24h
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
        mov dword ptr [ebp - 14h], ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 F0 69 FE FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x69
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        xor eax, eax
        mov byte ptr [ebp - 0dh], al
        lea ecx, [ebp - 0dh]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        lea ecx, [ebp - 0eh]
        ; Exact mapped bytes E8 DC 0D 00 00: call 0x584a2320
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 78: je 0x584a15c3
        __asm _emit 0x74
        __asm _emit 0x78
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A9 1B 00 00: call 0x584a3100
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 3B 5D FE FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x5d
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 2A 5D FE FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x5d
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        ; Exact mapped bytes E8 0D 08 00 00: call 0x584a1db0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 4], eax
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 CE 0D 00 00: call 0x584a2390
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        lea ecx, [ebp - 0eh]
        ; Exact mapped bytes E8 65 69 FE FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x69
        __asm _emit 0xfe
        __asm _emit 0xff
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
