// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BA830 .. +0x110 bytes.
extern "C" __declspec(naked) void FUN_587ba830() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 89 4D FC: mov dword ptr [ebp - 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes E8 81 C1 CC FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 2B C8: sub ecx, eax
        __asm _emit 0x2b
        __asm _emit 0xc8
        ; Exact mapped bytes 89 4D 0C: mov dword ptr [ebp + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes E8 61 18 CD FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x18
        __asm _emit 0xcd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 55 10: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x10
        ; Exact mapped bytes 2B D0: sub edx, eax
        __asm _emit 0x2b
        __asm _emit 0xd0
        ; Exact mapped bytes 89 55 10: mov dword ptr [ebp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes E8 D1 5D CE FF: call 0x584a0630
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x5d
        __asm _emit 0xce
        __asm _emit 0xff
        ; Exact mapped bytes 39 45 14: cmp dword ptr [ebp + 0x14], eax
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0x14
        ; Exact mapped bytes 7D 0B: jge 0x587ba86f
        __asm _emit 0x7d
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes E8 C4 5D CE FF: call 0x584a0630
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x5d
        __asm _emit 0xce
        __asm _emit 0xff
        ; Exact mapped bytes 89 45 14: mov dword ptr [ebp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x14
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes E8 F9 5D CE FF: call 0x584a0670
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x5d
        __asm _emit 0xce
        __asm _emit 0xff
        ; Exact mapped bytes 39 45 18: cmp dword ptr [ebp + 0x18], eax
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0x18
        ; Exact mapped bytes 7D 0B: jge 0x587ba887
        __asm _emit 0x7d
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes E8 EC 5D CE FF: call 0x584a0670
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0xce
        __asm _emit 0xff
        ; Exact mapped bytes 89 45 18: mov dword ptr [ebp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x18
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes E8 C1 5D CE FF: call 0x584a0650
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x5d
        __asm _emit 0xce
        __asm _emit 0xff
        ; Exact mapped bytes 39 45 1C: cmp dword ptr [ebp + 0x1c], eax
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0x1c
        ; Exact mapped bytes 7E 0B: jle 0x587ba89f
        __asm _emit 0x7e
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes E8 B4 5D CE FF: call 0x584a0650
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x5d
        __asm _emit 0xce
        __asm _emit 0xff
        ; Exact mapped bytes 89 45 1C: mov dword ptr [ebp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes E8 69 5D CE FF: call 0x584a0610
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x5d
        __asm _emit 0xce
        __asm _emit 0xff
        ; Exact mapped bytes 39 45 20: cmp dword ptr [ebp + 0x20], eax
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0x20
        ; Exact mapped bytes 7E 0B: jle 0x587ba8b7
        __asm _emit 0x7e
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes E8 5C 5D CE FF: call 0x584a0610
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x5d
        __asm _emit 0xce
        __asm _emit 0xff
        ; Exact mapped bytes 89 45 20: mov dword ptr [ebp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x20
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes E8 01 C1 CC FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xc1
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D 14: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x14
        ; Exact mapped bytes 2B C8: sub ecx, eax
        __asm _emit 0x2b
        __asm _emit 0xc8
        ; Exact mapped bytes 89 4D 14: mov dword ptr [ebp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x14
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes E8 E1 17 CD FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x17
        __asm _emit 0xcd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 55 18: mov edx, dword ptr [ebp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x18
        ; Exact mapped bytes 2B D0: sub edx, eax
        __asm _emit 0x2b
        __asm _emit 0xd0
        ; Exact mapped bytes 89 55 18: mov dword ptr [ebp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x18
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes E8 E1 C0 CC FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xc0
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D 1C: mov ecx, dword ptr [ebp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x1c
        ; Exact mapped bytes 2B C8: sub ecx, eax
        __asm _emit 0x2b
        __asm _emit 0xc8
        ; Exact mapped bytes 89 4D 1C: mov dword ptr [ebp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes E8 C1 17 CD FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x17
        __asm _emit 0xcd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 55 20: mov edx, dword ptr [ebp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x20
        ; Exact mapped bytes 2B D0: sub edx, eax
        __asm _emit 0x2b
        __asm _emit 0xd0
        ; Exact mapped bytes 89 55 20: mov dword ptr [ebp + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x20
        ; Exact mapped bytes 8B 45 28: mov eax, dword ptr [ebp + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x28
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 24: mov ecx, dword ptr [ebp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x24
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 83 EC 10: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x10
        ; Exact mapped bytes 8B D4: mov edx, esp
        __asm _emit 0x8b
        __asm _emit 0xd4
        ; Exact mapped bytes 8B 45 14: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x14
        ; Exact mapped bytes 89 02: mov dword ptr [edx], eax
        __asm _emit 0x89
        __asm _emit 0x02
        ; Exact mapped bytes 8B 4D 18: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x18
        ; Exact mapped bytes 89 4A 04: mov dword ptr [edx + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x04
        ; Exact mapped bytes 8B 45 1C: mov eax, dword ptr [ebp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x1c
        ; Exact mapped bytes 89 42 08: mov dword ptr [edx + 8], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4D 20: mov ecx, dword ptr [ebp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x20
        ; Exact mapped bytes 89 4A 0C: mov dword ptr [edx + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 55 10: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x10
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes E8 95 A0 CC FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xa0
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 42 04: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 24 00: ret 0x24
        __asm _emit 0xc2
        __asm _emit 0x24
        __asm _emit 0x00
    }
}
