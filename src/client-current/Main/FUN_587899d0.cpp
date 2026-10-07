// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587899D0 .. +0x146 bytes.
// Source symbol alias: FUN_587899d0.
extern "C" __declspec(naked) void FUN_587899d0() {
    __asm {
        // 0x587899D0: push ebx
        __asm _emit 0x53
        // 0x587899D1: push esi
        __asm _emit 0x56
        // 0x587899D2: push edi
        __asm _emit 0x57
        // 0x587899D3: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587899D5: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587899D7: push 0x30
        __asm _emit 0x6A
        __asm _emit 0x30
        // 0x587899D9: cmp dword ptr [esi + 0x6c], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x6C
        // 0x587899DC: jne 0x58789a1b
        __asm _emit 0x75
        __asm _emit 0x3D
        // 0x587899DE: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0x32
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x587899E3: mov ebx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587899E7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587899EA: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587899EC: je 0x58789a14
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x587899EE: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587899F2: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587899F6: push ecx
        __asm _emit 0x51
        // 0x587899F7: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587899FB: push edx
        __asm _emit 0x52
        // 0x587899FC: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58789A00: push ecx
        __asm _emit 0x51
        // 0x58789A01: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58789A05: push edx
        __asm _emit 0x52
        // 0x58789A06: push ebx
        __asm _emit 0x53
        // 0x58789A07: push ecx
        __asm _emit 0x51
        // 0x58789A08: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58789A0A: call 0x587897b0
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58789A0F: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x58789A12: jmp 0x58789a62
        __asm _emit 0xEB
        __asm _emit 0x4E
        // 0x58789A14: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58789A16: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x58789A19: jmp 0x58789a62
        __asm _emit 0xEB
        __asm _emit 0x47
        // 0x58789A1B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0x32
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58789A20: mov ebx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58789A24: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58789A27: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58789A29: je 0x58789a4e
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x58789A2B: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58789A2F: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58789A33: push edx
        __asm _emit 0x52
        // 0x58789A34: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58789A38: push ecx
        __asm _emit 0x51
        // 0x58789A39: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58789A3D: push edx
        __asm _emit 0x52
        // 0x58789A3E: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58789A42: push ecx
        __asm _emit 0x51
        // 0x58789A43: push ebx
        __asm _emit 0x53
        // 0x58789A44: push edx
        __asm _emit 0x52
        // 0x58789A45: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58789A47: call 0x587897b0
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58789A4C: jmp 0x58789a50
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58789A4E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58789A50: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58789A53: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        // 0x58789A55: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x58789A58: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58789A5A: mov dword ptr [edx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58789A5D: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x58789A60: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58789A62: inc dword ptr [esi + 0x58]
        __asm _emit 0xFF
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x58789A65: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x58789A68: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x58789A6B: mov ecx, dword ptr [0x58a245a8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58789A71: cmp dword ptr [ecx + 0x114], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789A77: je 0x58789aa6
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x58789A79: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58789A7F: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58789A82: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58789A84: je 0x58789aa6
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x58789A86: movzx eax, word ptr [eax + 0x350]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789A8D: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x58789A90: cmp dword ptr [ecx + 0x18], eax
        __asm _emit 0x39
        __asm _emit 0x41
        __asm _emit 0x18
        // 0x58789A93: je 0x58789ab5
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x58789A95: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x58789A98: mov dword ptr [esi + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x50
        // 0x58789A9B: mov dword ptr [esi + 0x4c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x4C
        // 0x58789A9E: mov eax, dword ptr [edx + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x58789AA1: add dword ptr [esi + 0x54], eax
        __asm _emit 0x01
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x58789AA4: jmp 0x58789ab5
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x58789AA6: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58789AA9: mov dword ptr [esi + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x50
        // 0x58789AAC: mov dword ptr [esi + 0x4c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x4C
        // 0x58789AAF: mov edx, dword ptr [ecx + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x58789AB2: add dword ptr [esi + 0x54], edx
        __asm _emit 0x01
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x58789AB5: mov al, byte ptr [esp + 0x28]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58789AB9: cmp al, 9
        __asm _emit 0x3C
        __asm _emit 0x09
        // 0x58789ABB: je 0x58789b00
        __asm _emit 0x74
        __asm _emit 0x43
        // 0x58789ABD: movzx eax, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC0
        // 0x58789AC0: dec eax
        __asm _emit 0x48
        // 0x58789AC1: cmp eax, 7
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x07
        // 0x58789AC4: ja 0x58789b00
        __asm _emit 0x77
        __asm _emit 0x3A
        // 0x58789AC6: jmp dword ptr [eax*4 + 0x58789b18]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x18
        __asm _emit 0x9B
        __asm _emit 0x78
        __asm _emit 0x58
        // 0x58789ACD: movzx eax, bl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC3
        // 0x58789AD0: inc byte ptr [eax + esi + 4]
        __asm _emit 0xFE
        __asm _emit 0x44
        __asm _emit 0x30
        __asm _emit 0x04
        // 0x58789AD4: pop edi
        __asm _emit 0x5F
        // 0x58789AD5: lea eax, [eax + esi + 4]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x30
        __asm _emit 0x04
        // 0x58789AD9: pop esi
        __asm _emit 0x5E
        // 0x58789ADA: pop ebx
        __asm _emit 0x5B
        // 0x58789ADB: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58789ADE: movzx ecx, bl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xCB
        // 0x58789AE1: inc byte ptr [ecx + esi + 0xe]
        __asm _emit 0xFE
        __asm _emit 0x44
        __asm _emit 0x31
        __asm _emit 0x0E
        // 0x58789AE5: pop edi
        __asm _emit 0x5F
        // 0x58789AE6: lea eax, [ecx + esi + 0xe]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x31
        __asm _emit 0x0E
        // 0x58789AEA: pop esi
        __asm _emit 0x5E
        // 0x58789AEB: pop ebx
        __asm _emit 0x5B
        // 0x58789AEC: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58789AEF: movzx edx, bl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD3
        // 0x58789AF2: inc byte ptr [edx + esi + 0x18]
        __asm _emit 0xFE
        __asm _emit 0x44
        __asm _emit 0x32
        __asm _emit 0x18
        // 0x58789AF6: pop edi
        __asm _emit 0x5F
        // 0x58789AF7: lea eax, [edx + esi + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x32
        __asm _emit 0x18
        // 0x58789AFB: pop esi
        __asm _emit 0x5E
        // 0x58789AFC: pop ebx
        __asm _emit 0x5B
        // 0x58789AFD: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58789B00: cmp bl, 0x10
        __asm _emit 0x80
        __asm _emit 0xFB
        __asm _emit 0x10
        // 0x58789B03: jb 0x58789acd
        __asm _emit 0x72
        __asm _emit 0xC8
        // 0x58789B05: movzx ecx, bl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xCB
        // 0x58789B08: inc byte ptr [ecx + esi - 2]
        __asm _emit 0xFE
        __asm _emit 0x44
        __asm _emit 0x31
        __asm _emit 0xFE
        // 0x58789B0C: pop edi
        __asm _emit 0x5F
        // 0x58789B0D: lea eax, [ecx + esi - 2]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x31
        __asm _emit 0xFE
        // 0x58789B11: pop esi
        __asm _emit 0x5E
        // 0x58789B12: pop ebx
        __asm _emit 0x5B
        // 0x58789B13: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
