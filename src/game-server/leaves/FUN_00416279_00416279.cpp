// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00416279 .. +0x12C bytes.
extern "C" __declspec(naked) void FUN_00416279_00416279() {
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
        ; Exact mapped bytes E8 7C 55 03 00: call 0x44b825
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x55
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
        ; Exact mapped bytes E8 F7 53 03 00: call 0x44b6b6
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x53
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        and ecx, 0ffffh
        cmp ecx, 8
        ; Exact mapped bytes 0F 84 95 00 00 00: je 0x416369
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0ah
        ; Exact mapped bytes 77 0A: ja 0x4162e4
        __asm _emit 0x77
        __asm _emit 0x0a
        ; Exact mapped bytes A1 14 11 5A 00: mov eax, dword ptr [0x5a1114]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x11
        __asm _emit 0x5a
        __asm _emit 0x00
        ; Exact mapped bytes E9 B1 00 00 00: jmp 0x416395
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 1ah
        ; Exact mapped bytes 77 0A: ja 0x4162f4
        __asm _emit 0x77
        __asm _emit 0x0a
        ; Exact mapped bytes A1 18 11 5A 00: mov eax, dword ptr [0x5a1118]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x11
        __asm _emit 0x5a
        __asm _emit 0x00
        ; Exact mapped bytes E9 A1 00 00 00: jmp 0x416395
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 22h
        ; Exact mapped bytes 77 0A: ja 0x416304
        __asm _emit 0x77
        __asm _emit 0x0a
        ; Exact mapped bytes A1 1C 11 5A 00: mov eax, dword ptr [0x5a111c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x11
        __asm _emit 0x5a
        __asm _emit 0x00
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x416395
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 2ah
        ; Exact mapped bytes 77 0A: ja 0x416314
        __asm _emit 0x77
        __asm _emit 0x0a
        ; Exact mapped bytes A1 20 11 5A 00: mov eax, dword ptr [0x5a1120]
        __asm _emit 0xa1
        __asm _emit 0x20
        __asm _emit 0x11
        __asm _emit 0x5a
        __asm _emit 0x00
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x416395
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 2fh
        ; Exact mapped bytes 77 07: ja 0x416321
        __asm _emit 0x77
        __asm _emit 0x07
        ; Exact mapped bytes A1 24 11 5A 00: mov eax, dword ptr [0x5a1124]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x11
        __asm _emit 0x5a
        __asm _emit 0x00
        ; Exact mapped bytes EB 74: jmp 0x416395
        __asm _emit 0xeb
        __asm _emit 0x74
        cmp dword ptr [ebp - 8], 33h
        ; Exact mapped bytes 77 07: ja 0x41632e
        __asm _emit 0x77
        __asm _emit 0x07
        ; Exact mapped bytes A1 28 11 5A 00: mov eax, dword ptr [0x5a1128]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x11
        __asm _emit 0x5a
        __asm _emit 0x00
        ; Exact mapped bytes EB 67: jmp 0x416395
        __asm _emit 0xeb
        __asm _emit 0x67
        cmp dword ptr [ebp - 8], 37h
        ; Exact mapped bytes 77 07: ja 0x41633b
        __asm _emit 0x77
        __asm _emit 0x07
        ; Exact mapped bytes A1 2C 11 5A 00: mov eax, dword ptr [0x5a112c]
        __asm _emit 0xa1
        __asm _emit 0x2c
        __asm _emit 0x11
        __asm _emit 0x5a
        __asm _emit 0x00
        ; Exact mapped bytes EB 5A: jmp 0x416395
        __asm _emit 0xeb
        __asm _emit 0x5a
        cmp dword ptr [ebp - 8], 3bh
        ; Exact mapped bytes 77 07: ja 0x416348
        __asm _emit 0x77
        __asm _emit 0x07
        ; Exact mapped bytes A1 30 11 5A 00: mov eax, dword ptr [0x5a1130]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x11
        __asm _emit 0x5a
        __asm _emit 0x00
        ; Exact mapped bytes EB 4D: jmp 0x416395
        __asm _emit 0xeb
        __asm _emit 0x4d
        cmp dword ptr [ebp - 8], 44h
        ; Exact mapped bytes 77 07: ja 0x416355
        __asm _emit 0x77
        __asm _emit 0x07
        ; Exact mapped bytes A1 34 11 5A 00: mov eax, dword ptr [0x5a1134]
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0x11
        __asm _emit 0x5a
        __asm _emit 0x00
        ; Exact mapped bytes EB 40: jmp 0x416395
        __asm _emit 0xeb
        __asm _emit 0x40
        cmp dword ptr [ebp - 8], 48h
        ; Exact mapped bytes 77 07: ja 0x416362
        __asm _emit 0x77
        __asm _emit 0x07
        ; Exact mapped bytes A1 38 11 5A 00: mov eax, dword ptr [0x5a1138]
        __asm _emit 0xa1
        __asm _emit 0x38
        __asm _emit 0x11
        __asm _emit 0x5a
        __asm _emit 0x00
        ; Exact mapped bytes EB 33: jmp 0x416395
        __asm _emit 0xeb
        __asm _emit 0x33
        ; Exact mapped bytes A1 3C 11 5A 00: mov eax, dword ptr [0x5a113c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x11
        __asm _emit 0x5a
        __asm _emit 0x00
        ; Exact mapped bytes EB 2C: jmp 0x416395
        __asm _emit 0xeb
        __asm _emit 0x2c
        cmp dword ptr [ebp - 8], 33h
        ; Exact mapped bytes 77 07: ja 0x416376
        __asm _emit 0x77
        __asm _emit 0x07
        ; Exact mapped bytes A1 40 11 5A 00: mov eax, dword ptr [0x5a1140]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x11
        __asm _emit 0x5a
        __asm _emit 0x00
        ; Exact mapped bytes EB 1F: jmp 0x416395
        __asm _emit 0xeb
        __asm _emit 0x1f
        cmp dword ptr [ebp - 8], 3bh
        ; Exact mapped bytes 77 07: ja 0x416383
        __asm _emit 0x77
        __asm _emit 0x07
        ; Exact mapped bytes A1 44 11 5A 00: mov eax, dword ptr [0x5a1144]
        __asm _emit 0xa1
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x5a
        __asm _emit 0x00
        ; Exact mapped bytes EB 12: jmp 0x416395
        __asm _emit 0xeb
        __asm _emit 0x12
        cmp dword ptr [ebp - 8], 48h
        ; Exact mapped bytes 77 07: ja 0x416390
        __asm _emit 0x77
        __asm _emit 0x07
        ; Exact mapped bytes A1 48 11 5A 00: mov eax, dword ptr [0x5a1148]
        __asm _emit 0xa1
        __asm _emit 0x48
        __asm _emit 0x11
        __asm _emit 0x5a
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x416395
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes A1 4C 11 5A 00: mov eax, dword ptr [0x5a114c]
        __asm _emit 0xa1
        __asm _emit 0x4c
        __asm _emit 0x11
        __asm _emit 0x5a
        __asm _emit 0x00
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 41 24 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x24
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
