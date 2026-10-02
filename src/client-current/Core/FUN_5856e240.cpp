// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856E240 .. +0x161 bytes.
extern "C" __declspec(naked) void FUN_5856e240() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58883a63h
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
        push 28h
        ; Exact mapped bytes E8 94 02 00 00: call 0x5856e500
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes C7 05 B8 60 96 58 01 00 00 00: mov dword ptr [0x589660b8], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D0 60 96 58: mov eax, dword ptr [0x589660d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x60
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes A3 30 22 96 58: mov dword ptr [0x58962230], eax
        __asm _emit 0xa3
        __asm _emit 0x30
        __asm _emit 0x22
        __asm _emit 0x96
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes FF 15 B4 44 89 58: call dword ptr [0x588944b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        push 74h
        ; Exact mapped bytes E8 71 2D 2C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x2d
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 11: je 0x5856e2b7
        __asm _emit 0x74
        __asm _emit 0x11
        push 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FE FA FF FF: call 0x5856ddb0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x5856e2be
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 20h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 89 15 24 5F 96 58: mov dword ptr [0x58965f24], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push 64h
        ; Exact mapped bytes E8 29 2D 2C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x2d
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 0D: je 0x5856e2fb
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 5A 1B 01 00: call 0x5857fe50
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5856e302
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 89 0D 28 22 96 58: mov dword ptr [0x58962228], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x22
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 B4 56 90 58: mov edx, dword ptr [0x589056b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x56
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes A1 1C 5F 96 58: mov eax, dword ptr [0x58965f1c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [edx + 4], eax
        ; Exact mapped bytes 8B 0D 28 22 96 58: mov ecx, dword ptr [0x58962228]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x22
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes E8 EE 01 00 00: call 0x5856e520
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes 8B 15 28 22 96 58: mov edx, dword ptr [0x58962228]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x22
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 CF 01 00 00: call 0x5856e510
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes A1 28 22 96 58: mov eax, dword ptr [0x58962228]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x22
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 A1 01 00 00: call 0x5856e4f0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes E8 69 25 F9 FF: call 0x585008c0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x25
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes 8B 0D 1C 5F 96 58: mov ecx, dword ptr [0x58965f1c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 A1 29 F9 FF: call 0x58500d10
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x29
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes E8 4C 25 F9 FF: call 0x585008c0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x25
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C5 29 F9 FF: call 0x58500d40
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x29
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes A1 28 22 96 58: mov eax, dword ptr [0x58962228]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x22
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [eax]
        ; Exact mapped bytes 8B 0D 28 22 96 58: mov ecx, dword ptr [0x58962228]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x22
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov eax, 1
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
