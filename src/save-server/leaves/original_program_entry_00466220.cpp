// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00466220 .. +0x14D bytes.
extern "C" __declspec(naked) void original_program_entry_00466220() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 63e128h
        push 46d504h
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
        add esp, -5ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], esp
        ; Exact mapped bytes FF 15 DC B9 68 00: call dword ptr [0x68b9dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 38 72 68 00: mov dword ptr [0x687238], eax
        __asm _emit 0xa3
        __asm _emit 0x38
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A1 38 72 68 00: mov eax, dword ptr [0x687238]
        __asm _emit 0xa1
        __asm _emit 0x38
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        shr eax, 8
        and eax, 0ffh
        ; Exact mapped bytes A3 44 72 68 00: mov dword ptr [0x687244], eax
        __asm _emit 0xa3
        __asm _emit 0x44
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 38 72 68 00: mov ecx, dword ptr [0x687238]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        and ecx, 0ffh
        ; Exact mapped bytes 89 0D 40 72 68 00: mov dword ptr [0x687240], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 40 72 68 00: mov edx, dword ptr [0x687240]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        shl edx, 8
        ; Exact mapped bytes 03 15 44 72 68 00: add edx, dword ptr [0x687244]
        __asm _emit 0x03
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 89 15 3C 72 68 00: mov dword ptr [0x68723c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A1 38 72 68 00: mov eax, dword ptr [0x687238]
        __asm _emit 0xa1
        __asm _emit 0x38
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        shr eax, 10h
        and eax, 0ffffh
        ; Exact mapped bytes A3 38 72 68 00: mov dword ptr [0x687238], eax
        __asm _emit 0xa3
        __asm _emit 0x38
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes E8 DD B9 00 00: call 0x471c80
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x4662b4
        __asm _emit 0x75
        __asm _emit 0x0a
        push 1ch
        ; Exact mapped bytes E8 0F 01 00 00: call 0x4663c0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes E8 67 8F 00 00: call 0x46f220
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x4662c7
        __asm _emit 0x75
        __asm _emit 0x0a
        push 10h
        ; Exact mapped bytes E8 FC 00 00 00: call 0x4663c0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes E8 4D B3 00 00: call 0x471620
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 C4 B8 68 00: call dword ptr [0x68b8c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 D0 8D 68 00: mov dword ptr [0x688dd0], eax
        __asm _emit 0xa3
        __asm _emit 0xd0
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E8 1D B1 00 00: call 0x471400
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A3 0C 72 68 00: mov dword ptr [0x68720c], eax
        __asm _emit 0xa3
        __asm _emit 0x0c
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E8 03 AC 00 00: call 0x470ef0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 AE AA 00 00: call 0x470da0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 D9 3C 00 00: call 0x469fd0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 0
        lea ecx, [ebp - 5ch]
        push ecx
        ; Exact mapped bytes FF 15 C8 B8 68 00: call dword ptr [0x68b8c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E8 D3 A9 00 00: call 0x470ce0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 64h], eax
        mov edx, dword ptr [ebp - 30h]
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 74 0D: je 0x466327
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 2ch]
        and eax, 0ffffh
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x46632e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0ah
        mov ecx, dword ptr [ebp - 6ch]
        push ecx
        mov edx, dword ptr [ebp - 64h]
        push edx
        push 0
        push 0
        ; Exact mapped bytes FF 15 FC B7 68 00: call dword ptr [0x68b7fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 FA 18 02 00: call 0x487c40
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 60h], eax
        mov eax, dword ptr [ebp - 60h]
        push eax
        ; Exact mapped bytes E8 BE 3C 00 00: call 0x46a010
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 68h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 68h]
        push edx
        ; Exact mapped bytes E8 57 A7 00 00: call 0x470ac0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ret
    }
}
