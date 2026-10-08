// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 287 bytes in 1 exact ranges.
// Source symbol alias: FUN_58858ab0.

// Ghidra body range 0x58858AB0..0x58858BCF; 287 mapped bytes.
extern "C" __declspec(naked) void FUN_58858ab0_segment_00() {
    __asm {
        // 0x58858AB0: sub esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x18
        // 0x58858AB3: push ebx
        __asm _emit 0x53
        // 0x58858AB4: push ebp
        __asm _emit 0x55
        // 0x58858AB5: push esi
        __asm _emit 0x56
        // 0x58858AB6: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58858AB8: push edi
        __asm _emit 0x57
        // 0x58858AB9: mov edi, dword ptr [ebx + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0xBB
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858ABF: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58858AC1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58858AC3: cmp edi, esi
        __asm _emit 0x3B
        __asm _emit 0xFE
        // 0x58858AC5: jle 0x58858ada
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x58858AC7: lea ecx, [ebx + 0x15c]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858ACD: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x58858ACF: nop
        __asm _emit 0x90
        // 0x58858AD0: add eax, dword ptr [ecx]
        __asm _emit 0x03
        __asm _emit 0x01
        // 0x58858AD2: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x08
        // 0x58858AD5: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x58858AD8: jne 0x58858ad0
        __asm _emit 0x75
        __asm _emit 0xF6
        // 0x58858ADA: mov dword ptr [ebx + 0x908], 1
        __asm _emit 0xC7
        __asm _emit 0x83
        __asm _emit 0x08
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858AE4: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58858AEA: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58858AED: mov ecx, dword ptr [edx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858AF3: movzx edx, word ptr [ecx + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58858AF7: and edx, 0xff
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858AFD: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58858AFF: jge 0x58858b1d
        __asm _emit 0x7D
        __asm _emit 0x1C
        // 0x58858B01: mov eax, dword ptr [ebx + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858B07: mov ecx, dword ptr [ebx + eax*8 + 0x15c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xC3
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858B0E: cmp ecx, dword ptr [ebx + eax*4 + 0x8e8]
        __asm _emit 0x3B
        __asm _emit 0x8C
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858B15: jge 0x58858b1d
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x58858B17: mov dword ptr [ebx + 0x908], esi
        __asm _emit 0x89
        __asm _emit 0xB3
        __asm _emit 0x08
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858B1D: cmp edi, esi
        __asm _emit 0x3B
        __asm _emit 0xFE
        // 0x58858B1F: mov dword ptr [esp + 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58858B23: mov dword ptr [esp + 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58858B27: mov dword ptr [esp + 0x20], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58858B2B: mov dword ptr [esp + 0x24], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58858B2F: jle 0x58858b5c
        __asm _emit 0x7E
        __asm _emit 0x2B
        // 0x58858B31: lea edx, [ebx + 0x15c]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858B37: lea ecx, [ebx + 0x270]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858B3D: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x58858B3F: nop
        __asm _emit 0x90
        // 0x58858B40: movzx eax, word ptr [ecx]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x01
        // 0x58858B43: mov ebp, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x2A
        // 0x58858B45: dec eax
        __asm _emit 0x48
        // 0x58858B46: add dword ptr [esp + eax*4 + 0x18], ebp
        __asm _emit 0x01
        __asm _emit 0x6C
        __asm _emit 0x84
        __asm _emit 0x18
        // 0x58858B4A: lea eax, [esp + eax*4 + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x84
        __asm _emit 0x18
        // 0x58858B4E: add ecx, 0xd4
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858B54: add edx, 8
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x08
        // 0x58858B57: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x58858B5A: jne 0x58858b40
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x58858B5C: cmp edi, esi
        __asm _emit 0x3B
        __asm _emit 0xFE
        // 0x58858B5E: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58858B62: jle 0x58858bc7
        __asm _emit 0x7E
        __asm _emit 0x63
        // 0x58858B64: lea edx, [ebx + 0x270]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858B6A: lea ebp, [ebx + 0x90c]
        __asm _emit 0x8D
        __asm _emit 0xAB
        __asm _emit 0x0C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858B70: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58858B74: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58858B78: movzx esi, word ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x30
        // 0x58858B7B: dec esi
        __asm _emit 0x4E
        // 0x58858B7C: mov ecx, dword ptr [ebx + esi*4 + 0x898]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xB3
        __asm _emit 0x98
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858B83: lea edi, [ebx + esi*4 + 0x898]
        __asm _emit 0x8D
        __asm _emit 0xBC
        __asm _emit 0xB3
        __asm _emit 0x98
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858B8A: push ecx
        __asm _emit 0x51
        // 0x58858B8B: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58858B91: push edi
        __asm _emit 0x57
        // 0x58858B92: call 0x587a1640
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x8A
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58858B97: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x58858B99: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58858B9B: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858BA1: cmp dword ptr [esp + esi*4 + 0x18], edx
        __asm _emit 0x39
        __asm _emit 0x54
        __asm _emit 0xB4
        __asm _emit 0x18
        // 0x58858BA5: setge al
        __asm _emit 0x0F
        __asm _emit 0x9D
        __asm _emit 0xC0
        // 0x58858BA8: add dword ptr [esp + 0x10], 0xd4
        __asm _emit 0x81
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858BB0: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x58858BB3: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xFC
        // 0x58858BB6: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58858BBA: inc eax
        __asm _emit 0x40
        // 0x58858BBB: cmp eax, dword ptr [ebx + 0xf0]
        __asm _emit 0x3B
        __asm _emit 0x83
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858BC1: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58858BC5: jl 0x58858b74
        __asm _emit 0x7C
        __asm _emit 0xAD
        // 0x58858BC7: pop edi
        __asm _emit 0x5F
        // 0x58858BC8: pop esi
        __asm _emit 0x5E
        // 0x58858BC9: pop ebp
        __asm _emit 0x5D
        // 0x58858BCA: pop ebx
        __asm _emit 0x5B
        // 0x58858BCB: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58858BCE: ret
        __asm _emit 0xC3
    }
}
