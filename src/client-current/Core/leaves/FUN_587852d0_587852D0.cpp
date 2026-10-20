// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587852D0 .. +0x11F bytes.
extern "C" __declspec(naked) void FUN_587852d0_587852D0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58890a24h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 38h
        push esi
        push edi
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
        push 1ch
        ; Exact mapped bytes E8 03 BD 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xbd
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 0D: je 0x58785321
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 D4 F4 FF FF: call 0x587847f0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58785328
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 F1 F5 FF FF: call 0x58784940
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 4C F7 FF FF: call 0x58784ab0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 74h]
        ; Exact mapped bytes E8 B0 FE FF FF: call 0x58785220
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 34h]
        or eax, dword ptr [ebp - 30h]
        ; Exact mapped bytes 74 35: je 0x587853b3
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 5A F7 FF FF: call 0x58784ae0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        mov edi, edx
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 74h]
        ; Exact mapped bytes E8 8B FE FF FF: call 0x58785220
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], esi
        mov dword ptr [ebp - 38h], edi
        mov dword ptr [ebp - 44h], eax
        mov dword ptr [ebp - 40h], edx
        mov edx, dword ptr [ebp - 3ch]
        cmp edx, dword ptr [ebp - 44h]
        ; Exact mapped bytes 75 08: jne 0x587853b1
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 38h]
        cmp eax, dword ptr [ebp - 40h]
        ; Exact mapped bytes 74 02: je 0x587853b3
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 29: jmp 0x587853dc
        __asm _emit 0xeb
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 48 01 00 00: call 0x58785510
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 2ch], edx
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 05 0B D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x0b
        __asm _emit 0xd0
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
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
