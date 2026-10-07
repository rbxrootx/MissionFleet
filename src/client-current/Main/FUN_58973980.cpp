// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1057 bytes in 1 exact ranges.
// Source symbol alias: FUN_58973980.

// Ghidra body range 0x58973980..0x58973DA1; 1057 mapped bytes.
extern "C" __declspec(naked) void FUN_58973980_segment_00() {
    __asm {
        // 0x58973980: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x58973983: push ebx
        __asm _emit 0x53
        // 0x58973984: push ebp
        __asm _emit 0x55
        // 0x58973985: mov ebp, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58973989: push esi
        __asm _emit 0x56
        // 0x5897398A: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5897398C: push edi
        __asm _emit 0x57
        // 0x5897398D: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58973990: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58973992: mov dword ptr [esp + 0x10], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897399A: call dword ptr [eax + 0x2c]
        __asm _emit 0xFF
        __asm _emit 0x50
        __asm _emit 0x2C
        // 0x5897399D: cmp eax, 0xff
        __asm _emit 0x3D
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589739A2: jne 0x58973d95
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xED
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589739A8: mov edx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x589739AB: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x589739AD: call dword ptr [edx + 0x2c]
        __asm _emit 0xFF
        __asm _emit 0x52
        __asm _emit 0x2C
        // 0x589739B0: cmp eax, 0xd8
        __asm _emit 0x3D
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589739B5: jne 0x58973d95
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xDA
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589739BB: cmp dword ptr [esi + 0x1fc], 0x14
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x14
        // 0x589739C2: jge 0x58973b84
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589739C8: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x589739CA: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x589739CD: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x589739CF: call dword ptr [eax + 0x2c]
        __asm _emit 0xFF
        __asm _emit 0x50
        __asm _emit 0x2C
        // 0x589739D2: cmp eax, 0xff
        __asm _emit 0x3D
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589739D7: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x589739DB: jne 0x589739f2
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x589739DD: cmp edi, 6
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x06
        // 0x589739E0: jge 0x58973bb5
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xCF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589739E6: inc edi
        __asm _emit 0x47
        // 0x589739E7: cmp edi, 7
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x07
        // 0x589739EA: jge 0x58973bbf
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xCF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589739F0: jmp 0x589739ca
        __asm _emit 0xEB
        __asm _emit 0xD8
        // 0x589739F2: mov ecx, dword ptr [esi + 0x1fc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589739F8: lea ecx, [ecx + ecx*2]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x49
        // 0x589739FB: mov dword ptr [esi + ecx*4 + 0x110], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973A02: mov edx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x58973A05: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58973A07: call dword ptr [edx + 0x2c]
        __asm _emit 0xFF
        __asm _emit 0x52
        __asm _emit 0x2C
        // 0x58973A0A: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58973A0C: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58973A0F: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58973A11: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58973A15: call dword ptr [eax + 0x2c]
        __asm _emit 0xFF
        __asm _emit 0x50
        __asm _emit 0x2C
        // 0x58973A18: shl edi, 8
        __asm _emit 0xC1
        __asm _emit 0xE7
        __asm _emit 0x08
        // 0x58973A1B: or edi, eax
        __asm _emit 0x0B
        __asm _emit 0xF8
        // 0x58973A1D: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58973A21: cmp edi, 2
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x58973A24: jl 0x58973bf0
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xC6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973A2A: mov eax, dword ptr [esi + 0x1fc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973A30: push edi
        __asm _emit 0x57
        // 0x58973A31: add eax, 0x17
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x17
        // 0x58973A34: lea ecx, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x40
        // 0x58973A37: mov dword ptr [esi + ecx*4], edi
        __asm _emit 0x89
        __asm _emit 0x3C
        __asm _emit 0x8E
        // 0x58973A3A: call dword ptr [0x5898c30c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x0C
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58973A40: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58973A42: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58973A45: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58973A47: je 0x58973c21
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973A4D: mov eax, dword ptr [esi + 0x1fc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973A53: mov cl, byte ptr [esp + 0x18]
        __asm _emit 0x8A
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58973A57: lea edx, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x40
        // 0x58973A5A: mov al, byte ptr [esp + 0x14]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58973A5E: mov dword ptr [esi + edx*4 + 0x10c], ebx
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0x96
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973A65: mov byte ptr [ebx + 1], cl
        __asm _emit 0x88
        __asm _emit 0x4B
        __asm _emit 0x01
        // 0x58973A68: lea ecx, [edi - 2]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0xFE
        // 0x58973A6B: mov byte ptr [ebx], al
        __asm _emit 0x88
        __asm _emit 0x03
        // 0x58973A6D: mov edx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x58973A70: lea eax, [ebx + 2]
        __asm _emit 0x8D
        __asm _emit 0x43
        __asm _emit 0x02
        // 0x58973A73: push ecx
        __asm _emit 0x51
        // 0x58973A74: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58973A76: push eax
        __asm _emit 0x50
        // 0x58973A77: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58973A79: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58973A7D: call dword ptr [edx + 8]
        __asm _emit 0xFF
        __asm _emit 0x52
        __asm _emit 0x08
        // 0x58973A80: lea edx, [edi - 2]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0xFE
        // 0x58973A83: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58973A85: jne 0x58973c52
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973A8B: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58973A8F: mov eax, dword ptr [esi + 0x1fc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973A95: add ecx, 0xffffff40
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x40
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58973A9B: inc eax
        __asm _emit 0x40
        // 0x58973A9C: cmp ecx, 0x3e
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x3E
        // 0x58973A9F: mov dword ptr [esi + 0x1fc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973AA5: ja 0x58973b77
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973AAB: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58973AAD: mov dl, byte ptr [ecx + 0x58973dc0]
        __asm _emit 0x8A
        __asm _emit 0x91
        __asm _emit 0xC0
        __asm _emit 0x3D
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58973AB3: jmp dword ptr [edx*4 + 0x58973da4]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xA4
        __asm _emit 0x3D
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58973ABA: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58973ABE: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58973AC0: jne 0x58973adf
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x58973AC2: test byte ptr [esp + 0x24], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x58973AC7: je 0x58973adf
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x58973AC9: push edi
        __asm _emit 0x57
        // 0x58973ACA: push ebx
        __asm _emit 0x53
        // 0x58973ACB: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58973ACD: call 0x58974ae0
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973AD2: mov dword ptr [esp + 0x10], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973ADA: jmp 0x58973b77
        __asm _emit 0xE9
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973ADF: dec eax
        __asm _emit 0x48
        // 0x58973AE0: mov dword ptr [esi + 0x1fc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973AE6: lea eax, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x40
        // 0x58973AE9: mov ecx, dword ptr [esi + eax*4 + 0x10c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973AF0: push ecx
        __asm _emit 0x51
        // 0x58973AF1: call dword ptr [0x5898c2ac]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xAC
        __asm _emit 0xC2
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58973AF7: mov eax, dword ptr [esi + 0x1fc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973AFD: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58973B00: lea edx, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x40
        // 0x58973B03: mov dword ptr [esi + edx*4 + 0x10c], 0
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973B0E: jmp 0x58973b77
        __asm _emit 0xEB
        __asm _emit 0x67
        // 0x58973B10: test byte ptr [esp + 0x24], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x58973B15: je 0x58973b39
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x58973B17: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58973B1B: mov edx, 0x589ce7d0
        __asm _emit 0xBA
        __asm _emit 0xD0
        __asm _emit 0xE7
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58973B20: mov ebx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x19
        // 0x58973B22: cmp ebx, dword ptr [edx]
        __asm _emit 0x3B
        __asm _emit 0x1A
        // 0x58973B24: jne 0x58973b39
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x58973B26: push edi
        __asm _emit 0x57
        // 0x58973B27: push ecx
        __asm _emit 0x51
        // 0x58973B28: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58973B2A: call 0x58973e00
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973B2F: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58973B31: mov byte ptr [ecx + 0x4b4], al
        __asm _emit 0x88
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973B37: jmp 0x58973b77
        __asm _emit 0xEB
        __asm _emit 0x3E
        // 0x58973B39: dec eax
        __asm _emit 0x48
        // 0x58973B3A: mov dword ptr [esi + 0x1fc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973B40: lea edx, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x40
        // 0x58973B43: mov eax, dword ptr [esi + edx*4 + 0x10c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973B4A: push eax
        __asm _emit 0x50
        // 0x58973B4B: call dword ptr [0x5898c2ac]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xAC
        __asm _emit 0xC2
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58973B51: mov eax, dword ptr [esi + 0x1fc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973B57: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58973B5A: lea ecx, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x40
        // 0x58973B5D: mov dword ptr [esi + ecx*4 + 0x10c], 0
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973B68: jmp 0x58973b77
        __asm _emit 0xEB
        __asm _emit 0x0D
        // 0x58973B6A: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58973B6E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58973B70: push edx
        __asm _emit 0x52
        // 0x58973B71: push ebx
        __asm _emit 0x53
        // 0x58973B72: call 0x58974ba0
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973B77: cmp dword ptr [esi + 0x1fc], 0x14
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x14
        // 0x58973B7E: jl 0x589739c8
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x44
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58973B84: mov edi, 0x589ce7b0
        __asm _emit 0xBF
        __asm _emit 0xB0
        __asm _emit 0xE7
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58973B89: or ecx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFF
        // 0x58973B8C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58973B8E: lea edx, [esi + 4]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58973B91: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xF2
        __asm _emit 0xAE
        // 0x58973B93: not ecx
        __asm _emit 0xF7
        __asm _emit 0xD1
        // 0x58973B95: sub edi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF9
        // 0x58973B97: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58973B99: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x58973B9B: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58973B9D: shr ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x02
        // 0x58973BA0: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58973BA2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58973BA4: and ecx, 3
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x03
        // 0x58973BA7: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58973BA9: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA4
        // 0x58973BAB: pop edi
        __asm _emit 0x5F
        // 0x58973BAC: pop esi
        __asm _emit 0x5E
        // 0x58973BAD: pop ebp
        __asm _emit 0x5D
        // 0x58973BAE: pop ebx
        __asm _emit 0x5B
        // 0x58973BAF: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58973BB2: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58973BB5: push 0x589ce798
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0xE7
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58973BBA: jmp 0x58973d8c
        __asm _emit 0xE9
        __asm _emit 0xCD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973BBF: mov edi, 0x589ce780
        __asm _emit 0xBF
        __asm _emit 0x80
        __asm _emit 0xE7
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58973BC4: or ecx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFF
        // 0x58973BC7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58973BC9: lea edx, [esi + 4]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58973BCC: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xF2
        __asm _emit 0xAE
        // 0x58973BCE: not ecx
        __asm _emit 0xF7
        __asm _emit 0xD1
        // 0x58973BD0: sub edi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF9
        // 0x58973BD2: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58973BD4: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x58973BD6: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58973BD8: shr ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x02
        // 0x58973BDB: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58973BDD: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58973BDF: and ecx, 3
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x03
        // 0x58973BE2: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58973BE4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA4
        // 0x58973BE6: pop edi
        __asm _emit 0x5F
        // 0x58973BE7: pop esi
        __asm _emit 0x5E
        // 0x58973BE8: pop ebp
        __asm _emit 0x5D
        // 0x58973BE9: pop ebx
        __asm _emit 0x5B
        // 0x58973BEA: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58973BED: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58973BF0: mov edi, 0x589ce770
        __asm _emit 0xBF
        __asm _emit 0x70
        __asm _emit 0xE7
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58973BF5: or ecx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFF
        // 0x58973BF8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58973BFA: lea edx, [esi + 4]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58973BFD: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xF2
        __asm _emit 0xAE
        // 0x58973BFF: not ecx
        __asm _emit 0xF7
        __asm _emit 0xD1
        // 0x58973C01: sub edi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF9
        // 0x58973C03: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58973C05: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x58973C07: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58973C09: shr ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x02
        // 0x58973C0C: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58973C0E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58973C10: and ecx, 3
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x03
        // 0x58973C13: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58973C15: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA4
        // 0x58973C17: pop edi
        __asm _emit 0x5F
        // 0x58973C18: pop esi
        __asm _emit 0x5E
        // 0x58973C19: pop ebp
        __asm _emit 0x5D
        // 0x58973C1A: pop ebx
        __asm _emit 0x5B
        // 0x58973C1B: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58973C1E: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58973C21: mov edi, 0x589ce754
        __asm _emit 0xBF
        __asm _emit 0x54
        __asm _emit 0xE7
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58973C26: or ecx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFF
        // 0x58973C29: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58973C2B: lea edx, [esi + 4]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58973C2E: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xF2
        __asm _emit 0xAE
        // 0x58973C30: not ecx
        __asm _emit 0xF7
        __asm _emit 0xD1
        // 0x58973C32: sub edi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF9
        // 0x58973C34: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58973C36: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x58973C38: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58973C3A: shr ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x02
        // 0x58973C3D: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58973C3F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58973C41: and ecx, 3
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x03
        // 0x58973C44: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58973C46: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA4
        // 0x58973C48: pop edi
        __asm _emit 0x5F
        // 0x58973C49: pop esi
        __asm _emit 0x5E
        // 0x58973C4A: pop ebp
        __asm _emit 0x5D
        // 0x58973C4B: pop ebx
        __asm _emit 0x5B
        // 0x58973C4C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58973C4F: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58973C52: mov edi, 0x589ce73c
        __asm _emit 0xBF
        __asm _emit 0x3C
        __asm _emit 0xE7
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58973C57: or ecx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFF
        // 0x58973C5A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58973C5C: lea edx, [esi + 4]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58973C5F: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xF2
        __asm _emit 0xAE
        // 0x58973C61: not ecx
        __asm _emit 0xF7
        __asm _emit 0xD1
        // 0x58973C63: sub edi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF9
        // 0x58973C65: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58973C67: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x58973C69: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58973C6B: shr ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x02
        // 0x58973C6E: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58973C70: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58973C72: and ecx, 3
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x03
        // 0x58973C75: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58973C77: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA4
        // 0x58973C79: pop edi
        __asm _emit 0x5F
        // 0x58973C7A: pop esi
        __asm _emit 0x5E
        // 0x58973C7B: pop ebp
        __asm _emit 0x5D
        // 0x58973C7C: pop ebx
        __asm _emit 0x5B
        // 0x58973C7D: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58973C80: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58973C83: test byte ptr [esp + 0x24], 2
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x58973C88: je 0x58973d7b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xED
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973C8E: mov edx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x58973C91: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58973C93: call dword ptr [edx + 0x14]
        __asm _emit 0xFF
        __asm _emit 0x52
        __asm _emit 0x14
        // 0x58973C96: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58973C98: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58973C9B: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58973C9D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58973C9F: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58973CA1: call dword ptr [eax + 0x10]
        __asm _emit 0xFF
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58973CA4: mov edx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x58973CA7: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58973CA9: call dword ptr [edx + 0x14]
        __asm _emit 0xFF
        __asm _emit 0x52
        __asm _emit 0x14
        // 0x58973CAC: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58973CAE: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58973CB1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58973CB3: push ebx
        __asm _emit 0x53
        // 0x58973CB4: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58973CB6: call dword ptr [eax + 0x10]
        __asm _emit 0xFF
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58973CB9: sub edi, ebx
        __asm _emit 0x2B
        __asm _emit 0xFB
        // 0x58973CBB: push edi
        __asm _emit 0x57
        // 0x58973CBC: call dword ptr [0x5898c30c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x0C
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58973CC2: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58973CC4: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58973CC7: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58973CC9: jne 0x58973cfa
        __asm _emit 0x75
        __asm _emit 0x2F
        // 0x58973CCB: mov edi, 0x589ce710
        __asm _emit 0xBF
        __asm _emit 0x10
        __asm _emit 0xE7
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58973CD0: or ecx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFF
        // 0x58973CD3: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xF2
        __asm _emit 0xAE
        // 0x58973CD5: not ecx
        __asm _emit 0xF7
        __asm _emit 0xD1
        // 0x58973CD7: sub edi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF9
        // 0x58973CD9: lea edx, [esi + 4]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58973CDC: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58973CDE: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x58973CE0: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58973CE2: shr ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x02
        // 0x58973CE5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58973CE7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58973CE9: and ecx, 3
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x03
        // 0x58973CEC: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58973CEE: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA4
        // 0x58973CF0: pop edi
        __asm _emit 0x5F
        // 0x58973CF1: pop esi
        __asm _emit 0x5E
        // 0x58973CF2: pop ebp
        __asm _emit 0x5D
        // 0x58973CF3: pop ebx
        __asm _emit 0x5B
        // 0x58973CF4: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58973CF7: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58973CFA: mov edx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x58973CFD: push edi
        __asm _emit 0x57
        // 0x58973CFE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58973D00: push ebx
        __asm _emit 0x53
        // 0x58973D01: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58973D03: call dword ptr [edx + 8]
        __asm _emit 0xFF
        __asm _emit 0x52
        __asm _emit 0x08
        // 0x58973D06: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58973D08: je 0x58973d3b
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x58973D0A: mov edi, 0x589ce6e8
        __asm _emit 0xBF
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58973D0F: or ecx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFF
        // 0x58973D12: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58973D14: lea edx, [esi + 4]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58973D17: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xF2
        __asm _emit 0xAE
        // 0x58973D19: not ecx
        __asm _emit 0xF7
        __asm _emit 0xD1
        // 0x58973D1B: sub edi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF9
        // 0x58973D1D: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58973D1F: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x58973D21: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58973D23: shr ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x02
        // 0x58973D26: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58973D28: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58973D2A: and ecx, 3
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x03
        // 0x58973D2D: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58973D2F: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA4
        // 0x58973D31: pop edi
        __asm _emit 0x5F
        // 0x58973D32: pop esi
        __asm _emit 0x5E
        // 0x58973D33: pop ebp
        __asm _emit 0x5D
        // 0x58973D34: pop ebx
        __asm _emit 0x5B
        // 0x58973D35: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58973D38: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58973D3B: mov eax, dword ptr [esi + 0x1fc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973D41: lea ecx, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x40
        // 0x58973D44: mov dword ptr [esi + ecx*4 + 0x10c], ebx
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973D4B: mov eax, dword ptr [esi + 0x1fc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973D51: add eax, 0x17
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x17
        // 0x58973D54: lea edx, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x40
        // 0x58973D57: mov dword ptr [esi + edx*4], edi
        __asm _emit 0x89
        __asm _emit 0x3C
        __asm _emit 0x96
        // 0x58973D5A: mov eax, dword ptr [esi + 0x1fc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973D60: lea eax, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x40
        // 0x58973D63: mov dword ptr [esi + eax*4 + 0x110], 0x123
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973D6E: mov eax, dword ptr [esi + 0x1fc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973D74: inc eax
        __asm _emit 0x40
        // 0x58973D75: mov dword ptr [esi + 0x1fc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973D7B: pop edi
        __asm _emit 0x5F
        // 0x58973D7C: pop esi
        __asm _emit 0x5E
        // 0x58973D7D: pop ebp
        __asm _emit 0x5D
        // 0x58973D7E: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x58973D80: pop ebx
        __asm _emit 0x5B
        // 0x58973D81: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58973D84: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58973D87: push 0x589ce6d4
        __asm _emit 0x68
        __asm _emit 0xD4
        __asm _emit 0xE6
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58973D8C: call dword ptr [0x5898c370]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58973D92: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58973D95: pop edi
        __asm _emit 0x5F
        // 0x58973D96: pop esi
        __asm _emit 0x5E
        // 0x58973D97: pop ebp
        __asm _emit 0x5D
        // 0x58973D98: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58973D9A: pop ebx
        __asm _emit 0x5B
        // 0x58973D9B: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58973D9E: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
