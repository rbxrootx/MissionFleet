// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045F3A0 .. +0x5A bytes.
extern "C" __declspec(naked) void FUN_0045f3a0_0045F3A0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 83 EC 08: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x08
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 89 4D F8: mov dword ptr [ebp - 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes 6A 0D: push 0xd
        __asm _emit 0x6a
        __asm _emit 0x0d
        ; Exact mapped bytes E8 C7 39 0E 00: call 0x542d7a
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x39
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 F8: mov eax, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4D F8: mov ecx, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes FF 52 28: call dword ptr [edx + 0x28]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x28
        ; Exact mapped bytes 89 45 FC: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 83 7D FC 00: cmp dword ptr [ebp - 4], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xfc
        __asm _emit 0x00
        ; Exact mapped bytes 75 11: jne 0x45f3d8
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 6A 20: push 0x20
        __asm _emit 0x6a
        __asm _emit 0x20
        ; Exact mapped bytes 68 E4 92 67 00: push 0x6792e4
        __asm _emit 0x68
        __asm _emit 0xe4
        __asm _emit 0x92
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes E8 6D 99 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x99
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 01: je 0x45f3d8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 E3: jne 0x45f3c1
        __asm _emit 0x75
        __asm _emit 0xe3
        ; Exact mapped bytes 83 7D FC 00: cmp dword ptr [ebp - 4], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xfc
        __asm _emit 0x00
        ; Exact mapped bytes 74 08: je 0x45f3ec
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes E8 B5 03 00 00: call 0x45f7a1
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 0D: push 0xd
        __asm _emit 0x6a
        __asm _emit 0x0d
        ; Exact mapped bytes E8 B9 3A 0E 00: call 0x542eac
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x3a
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
