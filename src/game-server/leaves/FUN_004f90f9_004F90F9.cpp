// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F90F9 .. +0x365 bytes.
extern "C" __declspec(naked) void FUN_004f90f9_004F90F9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 D8 17 00 00: call 0x4fa8e6
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 6ch]
        push edx
        push 5c5e54h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F9 B9 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 A2 BB 03 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xbb
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 70h]
        push ecx
        push 5c5e64h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DE B9 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 87 BB 03 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xbb
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 74h]
        push eax
        push 5c5e78h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C3 B9 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 BC B9 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 78h]
        push edx
        push 5c5e88h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A8 B9 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 ED BB 03 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xbb
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 7ch]
        push ecx
        push 5c5e98h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8D B9 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 86 B9 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 88h]
        push eax
        push 5c5each
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6F B9 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 B4 BB 03 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xbb
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 8ch]
        push edx
        push 5c5ebch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 51 B9 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 4A B9 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 90h]
        push ecx
        push 5c5ed0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 33 B9 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 2C B9 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 94h]
        push eax
        push 5c5ee8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 15 B9 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 0E B9 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 98h]
        push edx
        push 5c5f00h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F7 B8 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xb8
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 A0 BA 03 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 9ch]
        push ecx
        push 5c5f10h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D9 B8 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xb8
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 82 BA 03 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 0a0h]
        push eax
        push 5c5f20h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BB B8 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xb8
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 CC BA 03 00: call 0x534d33
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes 74 7D: je 0x4f92f0
        __asm _emit 0x74
        __asm _emit 0x7d
        push 5c5f38h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9B B8 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xb8
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [edx + 0ach]
        ; Exact mapped bytes E8 82 45 F9 FF: call 0x48d810
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x45
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x4f92a3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 7D 45: jge 0x4f92f0
        __asm _emit 0x7d
        __asm _emit 0x45
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 0ach]
        ; Exact mapped bytes E8 73 45 F9 FF: call 0x48d830
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x45
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9C 7C 03 00: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x7c
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x4f92ee
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [edx + 0ach]
        ; Exact mapped bytes E8 56 45 F9 FF: call 0x48d830
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x45
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        push 5c5f50h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 33 B8 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xb8
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 F7 46 FF FF: call 0x4ed9e5
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB AA: jmp 0x4f929a
        __asm _emit 0xeb
        __asm _emit 0xaa
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + 84h], 0
        ; Exact mapped bytes 74 1B: je 0x4f9317
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [edx + 84h]
        mov eax, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax + 84h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 10: call dword ptr [eax + 0x10]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 0a4h]
        push edx
        push 5c5f5ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 ED B7 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xb7
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 32 BA 03 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 0a8h]
        push ecx
        push 5c5f74h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CF B7 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xb7
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 78 B9 03 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 0b8h]
        push eax
        push 5c5f90h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B1 B7 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xb7
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 5A B9 03 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        push 5c5fa8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9D B7 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xb7
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 34h]
        push edx
        push 5c5fb8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 89 B7 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xb7
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 32 B9 03 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 38h]
        push ecx
        push 5c5fc4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6E B7 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xb7
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 17 B9 03 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 3ch]
        push eax
        push 5c5fd4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 53 B7 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xb7
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 FC B8 03 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xb8
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 40h]
        push edx
        push 5c5fe0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 38 B7 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xb7
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 0A BA 03 00: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 44h]
        push ecx
        push 5c5fech
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1D B7 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xb7
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 2E B9 03 00: call 0x534d33
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 4ch]
        push eax
        mov ecx, dword ptr [edx + 48h]
        push ecx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 72 C5 03 00: call 0x53598a
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xc5
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 10h], edx
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        push 5c5ff8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E3 B6 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xb6
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 74 77 00 00: call 0x500bb2
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        push 5c6000h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D0 B6 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xb6
        __asm _emit 0x03
        __asm _emit 0x00
        push 5c6004h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C3 B6 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xb6
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
