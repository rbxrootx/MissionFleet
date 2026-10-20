// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044BBE1 .. +0x107 bytes.
extern "C" __declspec(naked) void FUN_0044bbe1_0044BBE1() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 83 EC 20: sub esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x20
        ; Exact mapped bytes B8 CC CC CC CC: mov eax, 0xcccccccc
        __asm _emit 0xb8
        __asm _emit 0xcc
        __asm _emit 0xcc
        __asm _emit 0xcc
        __asm _emit 0xcc
        ; Exact mapped bytes 89 45 E0: mov dword ptr [ebp - 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe0
        ; Exact mapped bytes 89 45 E4: mov dword ptr [ebp - 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 89 45 E8: mov dword ptr [ebp - 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 89 45 EC: mov dword ptr [ebp - 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 89 45 F0: mov dword ptr [ebp - 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 89 45 F4: mov dword ptr [ebp - 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 89 45 F8: mov dword ptr [ebp - 8], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 89 45 FC: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 89 4D E0: mov dword ptr [ebp - 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe0
        ; Exact mapped bytes C7 45 E8 31 00 00 00: mov dword ptr [ebp - 0x18], 0x31
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 45 E4 00 00 00 00: mov dword ptr [ebp - 0x1c], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 45 E8: lea eax, [ebp - 0x18]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 4D E4: lea ecx, [ebp - 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 55 08: lea edx, [ebp + 8]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 6A A2 FC FF: call 0x415e90
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xa2
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 07: jne 0x44bc34
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes E9 A4 00 00 00: jmp 0x44bcd8
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 E0: mov eax, dword ptr [ebp - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe0
        ; Exact mapped bytes 8B 88 68 01 00 00: mov ecx, dword ptr [eax + 0x168]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 08: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 69 D2 70 03 00 00: imul edx, edx, 0x370
        __asm _emit 0x69
        __asm _emit 0xd2
        __asm _emit 0x70
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 84 11 DC 6B 01 00: lea eax, [ecx + edx + 0x16bdc]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0xdc
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 FC: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4D E0: mov ecx, dword ptr [ebp - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe0
        ; Exact mapped bytes E8 46 BA FF FF: call 0x4476a2
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 45 F4: mov dword ptr [ebp - 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 83 7D F4 00: cmp dword ptr [ebp - 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xf4
        __asm _emit 0x00
        ; Exact mapped bytes 75 04: jne 0x44bc69
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes EB 6F: jmp 0x44bcd8
        __asm _emit 0xeb
        __asm _emit 0x6f
        ; Exact mapped bytes C7 45 F8 00 00 00 00: mov dword ptr [ebp - 8], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x44bc7b
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 55 F8: mov edx, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C2 01: add edx, 1
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        ; Exact mapped bytes 89 55 F8: mov dword ptr [ebp - 8], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf8
        ; Exact mapped bytes 83 7D F8 20: cmp dword ptr [ebp - 8], 0x20
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xf8
        __asm _emit 0x20
        ; Exact mapped bytes 7D 52: jge 0x44bcd3
        __asm _emit 0x7d
        __asm _emit 0x52
        ; Exact mapped bytes C7 45 F0 01 00 00 00: mov dword ptr [ebp - 0x10], 1
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xf0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 1F 00 00 00: mov ecx, 0x1f
        __asm _emit 0xb9
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B 4D F8: sub ecx, dword ptr [ebp - 8]
        __asm _emit 0x2b
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 45 F0: mov eax, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes D3 E0: shl eax, cl
        __asm _emit 0xd3
        __asm _emit 0xe0
        ; Exact mapped bytes 89 45 F0: mov dword ptr [ebp - 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 4D F4: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 8B 91 54 02 00 00: mov edx, dword ptr [ecx + 0x254]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 55 EC: mov dword ptr [ebp - 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 8B 45 EC: mov eax, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 23 45 F0: and eax, dword ptr [ebp - 0x10]
        __asm _emit 0x23
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 23: jne 0x44bcd1
        __asm _emit 0x75
        __asm _emit 0x23
        ; Exact mapped bytes 8B 4D F8: mov ecx, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes 6B C9 0A: imul ecx, ecx, 0xa
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 66 8B 84 0A 2E 01 00 00: mov ax, word ptr [edx + ecx + 0x12e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 25 0F 00: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 25 FF FF 00 00: and eax, 0xffff
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 05: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 74 04: je 0x44bcd1
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes EB 07: jmp 0x44bcd8
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes EB 9F: jmp 0x44bc72
        __asm _emit 0xeb
        __asm _emit 0x9f
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 20: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x20
        ; Exact mapped bytes 3B EC: cmp ebp, esp
        __asm _emit 0x3b
        __asm _emit 0xec
        ; Exact mapped bytes E8 FE CA 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xca
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
