// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004771E0 .. +0xE5 bytes.
extern "C" __declspec(naked) void FUN_004771e0_004771E0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 83 EC 38: sub esp, 0x38
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x38
        ; Exact mapped bytes C6 45 D0 00: mov byte ptr [ebp - 0x30], 0
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xd0
        __asm _emit 0x00
        ; Exact mapped bytes 8D 45 EC: lea eax, [ebp - 0x14]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 89 45 C8: mov dword ptr [ebp - 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xc8
        ; Exact mapped bytes 8D 4D D4: lea ecx, [ebp - 0x2c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xd4
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 55 EC: lea edx, [ebp - 0x14]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 F9 40 00 00: call 0x47b300
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 8B 45 C8: mov eax, dword ptr [ebp - 0x38]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xc8
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 83 E9 01: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x01
        ; Exact mapped bytes 89 4D CC: mov dword ptr [ebp - 0x34], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xcc
        ; Exact mapped bytes 8B 55 C8: mov edx, dword ptr [ebp - 0x38]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xc8
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 83 3A 2D: cmp dword ptr [edx], 0x2d
        __asm _emit 0x83
        __asm _emit 0x3a
        __asm _emit 0x2d
        ; Exact mapped bytes 0F 94 C0: sete al
        __asm _emit 0x0f
        __asm _emit 0x94
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 03 C8: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xc8
        ; Exact mapped bytes 89 4D FC: mov dword ptr [ebp - 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 55 C8: mov edx, dword ptr [ebp - 0x38]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xc8
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 56 5C 00 00: call 0x47ce90
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 55 C8: mov edx, dword ptr [ebp - 0x38]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xc8
        ; Exact mapped bytes 8B 42 04: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 39 45 CC: cmp dword ptr [ebp - 0x34], eax
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0xcc
        ; Exact mapped bytes 0F 9C C1: setl cl
        __asm _emit 0x0f
        __asm _emit 0x9c
        __asm _emit 0xc1
        ; Exact mapped bytes 88 4D D0: mov byte ptr [ebp - 0x30], cl
        __asm _emit 0x88
        __asm _emit 0x4d
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 55 C8: mov edx, dword ptr [ebp - 0x38]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xc8
        ; Exact mapped bytes 8B 42 04: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 89 45 CC: mov dword ptr [ebp - 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xcc
        ; Exact mapped bytes 83 7D CC FC: cmp dword ptr [ebp - 0x34], -4
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xcc
        __asm _emit 0xfc
        ; Exact mapped bytes 7C 08: jl 0x47726b
        __asm _emit 0x7c
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4D CC: mov ecx, dword ptr [ebp - 0x34]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xcc
        ; Exact mapped bytes 3B 4D 10: cmp ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 7C 1C: jl 0x477287
        __asm _emit 0x7c
        __asm _emit 0x1c
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8B 55 C8: mov edx, dword ptr [ebp - 0x38]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xc8
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 45 14: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x14
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 10: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 3E FC FF FF: call 0x476ec0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 14: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x14
        ; Exact mapped bytes EB 3A: jmp 0x4772c1
        __asm _emit 0xeb
        __asm _emit 0x3a
        ; Exact mapped bytes 0F BE 45 D0: movsx eax, byte ptr [ebp - 0x30]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 1C: je 0x4772ab
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 83 C0 01: add eax, 1
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        ; Exact mapped bytes 89 45 FC: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 74 02: je 0x4772a4
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB EB: jmp 0x47728f
        __asm _emit 0xeb
        __asm _emit 0xeb
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes C6 41 FE 00: mov byte ptr [ecx - 2], 0
        __asm _emit 0xc6
        __asm _emit 0x41
        __asm _emit 0xfe
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8B 55 C8: mov edx, dword ptr [ebp - 0x38]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xc8
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 E2 FD FF FF: call 0x4770a0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
