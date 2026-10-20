// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00462C80 .. +0x1AC bytes.
extern "C" __declspec(naked) void FUN_00462c80_00462C80() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57bb48h
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
        sub esp, 1ch
        mov eax, 0cccccccch
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 20h], ecx
        push 43d410h
        push 20h
        push 0d4h
        mov eax, dword ptr [ebp - 20h]
        add eax, 334h
        push eax
        ; Exact mapped bytes E8 6E A7 FD FF: call 0x43d440
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xa7
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1dc0h
        ; Exact mapped bytes E8 30 56 00 00: call 0x468310
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1e7ch
        ; Exact mapped bytes E8 92 A7 FD FF: call 0x43d480
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xa7
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx], 581c10h
        push 16h
        push 5bac50h
        push 1ch
        ; Exact mapped bytes E8 2E A3 08 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xa3
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 12: je 0x462d2a
        __asm _emit 0x74
        __asm _emit 0x12
        push 400h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 7B 56 00 00: call 0x4683a0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x462d31
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 10h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 10h], ecx
        push 17h
        push 5bac50h
        push 24h
        ; Exact mapped bytes E8 DE A2 08 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xa2
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 12: je 0x462d7a
        __asm _emit 0x74
        __asm _emit 0x12
        push 6f8ch
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 1B E1 FA FF: call 0x410e90
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xe1
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x462d81
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 18h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [eax + 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 57 01 00 00: call 0x462efa
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 EC 01 00 00: call 0x462f97
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1a80h
        push 0
        mov eax, dword ptr [ebp - 20h]
        add eax, 334h
        push eax
        ; Exact mapped bytes E8 B0 65 04 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x65
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 6
        push 0
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1db4h
        push ecx
        ; Exact mapped bytes E8 9A 65 04 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x65
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 6
        push 0
        mov edx, dword ptr [ebp - 20h]
        add edx, 1dbah
        push edx
        ; Exact mapped bytes E8 84 65 04 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x65
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 0bch
        push 0
        mov eax, dword ptr [ebp - 20h]
        add eax, 1dc0h
        push eax
        ; Exact mapped bytes E8 6C 65 04 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x65
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 27 53 00 00: call 0x468136
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x53
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 28h
        cmp ebp, esp
        ; Exact mapped bytes E8 BA 59 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x59
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
