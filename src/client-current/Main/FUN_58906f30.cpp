// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58906F30 .. +0x109 bytes.
extern "C" __declspec(naked) void FUN_58906f30() {
    __asm {
        // 0x58906F30: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58906F33: push esi
        __asm _emit 0x56
        // 0x58906F34: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58906F36: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58906F3A: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x58906F3C: je 0x58907032
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58906F42: push edi
        __asm _emit 0x57
        // 0x58906F43: mov edi, dword ptr [esi + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x4C
        // 0x58906F46: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58906F48: je 0x58906f76
        __asm _emit 0x74
        __asm _emit 0x2C
        // 0x58906F4A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58906F50: cmp word ptr [edi + 0x26], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0x26
        __asm _emit 0x00
        // 0x58906F55: jge 0x58906f76
        __asm _emit 0x7D
        __asm _emit 0x1F
        // 0x58906F57: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58906F5B: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58906F5F: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x58906F61: mov edx, dword ptr [edx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x14
        // 0x58906F64: push eax
        __asm _emit 0x50
        // 0x58906F65: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58906F69: push ecx
        __asm _emit 0x51
        // 0x58906F6A: push eax
        __asm _emit 0x50
        // 0x58906F6B: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58906F6D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58906F6F: mov edi, dword ptr [edi + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x48
        // 0x58906F72: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58906F74: jne 0x58906f50
        __asm _emit 0x75
        __asm _emit 0xDA
        // 0x58906F76: mov ecx, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58906F7C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58906F7E: je 0x5890700e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58906F84: cmp dword ptr [esi + 0x5c], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x5C
        __asm _emit 0x00
        // 0x58906F88: jne 0x58906f9e
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x58906F8A: mov eax, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x28
        // 0x58906F8D: sub eax, dword ptr [ecx + 0x20]
        __asm _emit 0x2B
        __asm _emit 0x41
        __asm _emit 0x20
        // 0x58906F90: imul eax, dword ptr [esi + 0xe8]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58906F97: cdq
        __asm _emit 0x99
        // 0x58906F98: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58906F9A: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x58906F9C: jmp 0x58906fa0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58906F9E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58906FA0: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x58906FA3: add edx, dword ptr [esi + 4]
        __asm _emit 0x03
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58906FA6: push ebx
        __asm _emit 0x53
        // 0x58906FA7: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x58906FA9: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58906FAD: add edx, dword ptr [eax]
        __asm _emit 0x03
        __asm _emit 0x10
        // 0x58906FAF: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x58906FB2: add eax, dword ptr [esi + 0x10]
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x58906FB5: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58906FB7: add eax, dword ptr [esi + 8]
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58906FBA: cmp dword ptr [esi + 0xe8], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58906FC0: mov dword ptr [esp + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58906FC4: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58906FC8: jle 0x5890700d
        __asm _emit 0x7E
        __asm _emit 0x43
        // 0x58906FCA: push ebp
        __asm _emit 0x55
        // 0x58906FCB: lea ebp, [esi + 0x68]
        __asm _emit 0x8D
        __asm _emit 0x6E
        __asm _emit 0x68
        // 0x58906FCE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58906FD0: mov edx, dword ptr [esi + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x2C
        // 0x58906FD3: mov eax, dword ptr [esi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x28
        // 0x58906FD6: push edx
        __asm _emit 0x52
        // 0x58906FD7: mov edx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x58906FDA: push eax
        __asm _emit 0x50
        // 0x58906FDB: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58906FDF: push edx
        __asm _emit 0x52
        // 0x58906FE0: push eax
        __asm _emit 0x50
        // 0x58906FE1: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58906FE5: lea edx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58906FE9: push edx
        __asm _emit 0x52
        // 0x58906FEA: push eax
        __asm _emit 0x50
        // 0x58906FEB: call 0x5873a5d0
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0x35
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x58906FF0: mov ecx, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58906FF6: mov edx, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x28
        // 0x58906FF9: sub edx, dword ptr [ecx + 0x20]
        __asm _emit 0x2B
        __asm _emit 0x51
        __asm _emit 0x20
        // 0x58906FFC: inc ebx
        __asm _emit 0x43
        // 0x58906FFD: add dword ptr [esp + 0x10], edx
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58907001: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x58907004: cmp ebx, dword ptr [esi + 0xe8]
        __asm _emit 0x3B
        __asm _emit 0x9E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890700A: jl 0x58906fd0
        __asm _emit 0x7C
        __asm _emit 0xC4
        // 0x5890700C: pop ebp
        __asm _emit 0x5D
        // 0x5890700D: pop ebx
        __asm _emit 0x5B
        // 0x5890700E: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58907010: je 0x58907031
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x58907012: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58907016: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5890701A: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5890701C: push ecx
        __asm _emit 0x51
        // 0x5890701D: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58907021: push edx
        __asm _emit 0x52
        // 0x58907022: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58907025: push ecx
        __asm _emit 0x51
        // 0x58907026: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58907028: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5890702A: mov edi, dword ptr [edi + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x48
        // 0x5890702D: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5890702F: jne 0x58907012
        __asm _emit 0x75
        __asm _emit 0xE1
        // 0x58907031: pop edi
        __asm _emit 0x5F
        // 0x58907032: pop esi
        __asm _emit 0x5E
        // 0x58907033: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58907036: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
