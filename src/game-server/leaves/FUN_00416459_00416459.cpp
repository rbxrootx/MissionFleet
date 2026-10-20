// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00416459 .. +0x12C bytes.
extern "C" __declspec(naked) void FUN_00416459_00416459() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 16ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9C 53 03 00: call 0x44b825
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x53
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 16ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 17 52 03 00: call 0x44b6b6
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x52
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        and ecx, 0ffffh
        cmp ecx, 8
        ; Exact mapped bytes 0F 84 95 00 00 00: je 0x416549
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0ah
        ; Exact mapped bytes 77 0A: ja 0x4164c4
        __asm _emit 0x77
        __asm _emit 0x0a
        ; Exact mapped bytes A1 94 11 5A 00: mov eax, dword ptr [0x5a1194]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x11
        __asm _emit 0x5a
        __asm _emit 0x00
        ; Exact mapped bytes E9 B1 00 00 00: jmp 0x416575
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 1ah
        ; Exact mapped bytes 77 0A: ja 0x4164d4
        __asm _emit 0x77
        __asm _emit 0x0a
        ; Exact mapped bytes A1 98 11 5A 00: mov eax, dword ptr [0x5a1198]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x11
        __asm _emit 0x5a
        __asm _emit 0x00
        ; Exact mapped bytes E9 A1 00 00 00: jmp 0x416575
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 22h
        ; Exact mapped bytes 77 0A: ja 0x4164e4
        __asm _emit 0x77
        __asm _emit 0x0a
        ; Exact mapped bytes A1 9C 11 5A 00: mov eax, dword ptr [0x5a119c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x11
        __asm _emit 0x5a
        __asm _emit 0x00
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x416575
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 2ah
        ; Exact mapped bytes 77 0A: ja 0x4164f4
        __asm _emit 0x77
        __asm _emit 0x0a
        ; Exact mapped bytes A1 A0 11 5A 00: mov eax, dword ptr [0x5a11a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x11
        __asm _emit 0x5a
        __asm _emit 0x00
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x416575
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 2fh
        ; Exact mapped bytes 77 07: ja 0x416501
        __asm _emit 0x77
        __asm _emit 0x07
        ; Exact mapped bytes A1 A4 11 5A 00: mov eax, dword ptr [0x5a11a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x11
        __asm _emit 0x5a
        __asm _emit 0x00
        ; Exact mapped bytes EB 74: jmp 0x416575
        __asm _emit 0xeb
        __asm _emit 0x74
        cmp dword ptr [ebp - 8], 33h
        ; Exact mapped bytes 77 07: ja 0x41650e
        __asm _emit 0x77
        __asm _emit 0x07
        ; Exact mapped bytes A1 A8 11 5A 00: mov eax, dword ptr [0x5a11a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x11
        __asm _emit 0x5a
        __asm _emit 0x00
        ; Exact mapped bytes EB 67: jmp 0x416575
        __asm _emit 0xeb
        __asm _emit 0x67
        cmp dword ptr [ebp - 8], 37h
        ; Exact mapped bytes 77 07: ja 0x41651b
        __asm _emit 0x77
        __asm _emit 0x07
        ; Exact mapped bytes A1 AC 11 5A 00: mov eax, dword ptr [0x5a11ac]
        __asm _emit 0xa1
        __asm _emit 0xac
        __asm _emit 0x11
        __asm _emit 0x5a
        __asm _emit 0x00
        ; Exact mapped bytes EB 5A: jmp 0x416575
        __asm _emit 0xeb
        __asm _emit 0x5a
        cmp dword ptr [ebp - 8], 3bh
        ; Exact mapped bytes 77 07: ja 0x416528
        __asm _emit 0x77
        __asm _emit 0x07
        ; Exact mapped bytes A1 B0 11 5A 00: mov eax, dword ptr [0x5a11b0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x11
        __asm _emit 0x5a
        __asm _emit 0x00
        ; Exact mapped bytes EB 4D: jmp 0x416575
        __asm _emit 0xeb
        __asm _emit 0x4d
        cmp dword ptr [ebp - 8], 44h
        ; Exact mapped bytes 77 07: ja 0x416535
        __asm _emit 0x77
        __asm _emit 0x07
        ; Exact mapped bytes A1 B4 11 5A 00: mov eax, dword ptr [0x5a11b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x11
        __asm _emit 0x5a
        __asm _emit 0x00
        ; Exact mapped bytes EB 40: jmp 0x416575
        __asm _emit 0xeb
        __asm _emit 0x40
        cmp dword ptr [ebp - 8], 48h
        ; Exact mapped bytes 77 07: ja 0x416542
        __asm _emit 0x77
        __asm _emit 0x07
        ; Exact mapped bytes A1 B8 11 5A 00: mov eax, dword ptr [0x5a11b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x11
        __asm _emit 0x5a
        __asm _emit 0x00
        ; Exact mapped bytes EB 33: jmp 0x416575
        __asm _emit 0xeb
        __asm _emit 0x33
        ; Exact mapped bytes A1 BC 11 5A 00: mov eax, dword ptr [0x5a11bc]
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0x11
        __asm _emit 0x5a
        __asm _emit 0x00
        ; Exact mapped bytes EB 2C: jmp 0x416575
        __asm _emit 0xeb
        __asm _emit 0x2c
        cmp dword ptr [ebp - 8], 33h
        ; Exact mapped bytes 77 07: ja 0x416556
        __asm _emit 0x77
        __asm _emit 0x07
        ; Exact mapped bytes A1 C0 11 5A 00: mov eax, dword ptr [0x5a11c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x11
        __asm _emit 0x5a
        __asm _emit 0x00
        ; Exact mapped bytes EB 1F: jmp 0x416575
        __asm _emit 0xeb
        __asm _emit 0x1f
        cmp dword ptr [ebp - 8], 3bh
        ; Exact mapped bytes 77 07: ja 0x416563
        __asm _emit 0x77
        __asm _emit 0x07
        ; Exact mapped bytes A1 C4 11 5A 00: mov eax, dword ptr [0x5a11c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x11
        __asm _emit 0x5a
        __asm _emit 0x00
        ; Exact mapped bytes EB 12: jmp 0x416575
        __asm _emit 0xeb
        __asm _emit 0x12
        cmp dword ptr [ebp - 8], 48h
        ; Exact mapped bytes 77 07: ja 0x416570
        __asm _emit 0x77
        __asm _emit 0x07
        ; Exact mapped bytes A1 C8 11 5A 00: mov eax, dword ptr [0x5a11c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x11
        __asm _emit 0x5a
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x416575
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes A1 CC 11 5A 00: mov eax, dword ptr [0x5a11cc]
        __asm _emit 0xa1
        __asm _emit 0xcc
        __asm _emit 0x11
        __asm _emit 0x5a
        __asm _emit 0x00
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 61 22 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x22
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
