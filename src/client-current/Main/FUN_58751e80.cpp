// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58751E80 .. +0x174 bytes.
// Source symbol alias: FUN_58751e80.
extern "C" __declspec(naked) void FUN_58751e80() {
    __asm {
        // 0x58751E80: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58751E82: push 0x5897e723
        __asm _emit 0x68
        __asm _emit 0x23
        __asm _emit 0xE7
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58751E87: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58751E8D: push eax
        __asm _emit 0x50
        // 0x58751E8E: push ecx
        __asm _emit 0x51
        // 0x58751E8F: push ebx
        __asm _emit 0x53
        // 0x58751E90: push ebp
        __asm _emit 0x55
        // 0x58751E91: push esi
        __asm _emit 0x56
        // 0x58751E92: push edi
        __asm _emit 0x57
        // 0x58751E93: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58751E98: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58751E9A: push eax
        __asm _emit 0x50
        // 0x58751E9B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58751E9F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58751EA5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58751EA7: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58751EAB: mov ebp, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58751EAF: mov ebx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58751EB3: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58751EB7: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58751EB9: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58751EBB: push edi
        __asm _emit 0x57
        // 0x58751EBC: push edi
        __asm _emit 0x57
        // 0x58751EBD: push ebp
        __asm _emit 0x55
        // 0x58751EBE: push ebx
        __asm _emit 0x53
        // 0x58751EBF: push eax
        __asm _emit 0x50
        // 0x58751EC0: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0x12
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x58751EC5: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58751ECB: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58751ED0: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x58751ED3: mov dword ptr [esi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x54
        // 0x58751ED6: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58751EDD: mov dword ptr [esi + 0x5c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x5C
        // 0x58751EE0: mov ecx, 0x7fbc
        __asm _emit 0xB9
        __asm _emit 0xBC
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58751EE5: mov word ptr [esi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x26
        // 0x58751EE9: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x58751EEC: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58751EF0: mov dword ptr [esi], 0x5898d600
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58751EF6: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58751EF8: je 0x58751f00
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58751EFA: push esi
        __asm _emit 0x56
        // 0x58751EFB: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x10
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x58751F00: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x58751F03: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58751F05: je 0x58751f0d
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58751F07: push esi
        __asm _emit 0x56
        // 0x58751F08: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0x0F
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x58751F0D: mov edx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x58751F10: mov edi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58751F14: add edx, 0x32
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x32
        // 0x58751F17: mov eax, 0xfff0
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58751F1C: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58751F20: mov dword ptr [esi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x20
        // 0x58751F23: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58751F25: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58751F27: mov edx, 4
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58751F2C: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x58751F2E: seto cl
        __asm _emit 0x0F
        __asm _emit 0x90
        __asm _emit 0xC1
        // 0x58751F31: mov dword ptr [esi + 0x74], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x74
        // 0x58751F34: mov dword ptr [esi + 0x64], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58751F3B: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x58751F3D: or ecx, eax
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x58751F3F: push ecx
        __asm _emit 0x51
        // 0x58751F40: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0xF5
        __asm _emit 0x21
        __asm _emit 0x00
        // 0x58751F45: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58751F47: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58751F4A: cmp dword ptr [esi + 0x74], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x74
        // 0x58751F4D: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x58751F50: jle 0x58751fba
        __asm _emit 0x7E
        __asm _emit 0x68
        // 0x58751F52: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x58751F54: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0xAC
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58751F59: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58751F5C: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58751F60: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x58751F65: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58751F67: je 0x58751f98
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x58751F69: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58751F6B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58751F6D: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58751F72: lea ecx, [ebp + 0x1a]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x1A
        // 0x58751F75: push ecx
        __asm _emit 0x51
        // 0x58751F76: lea edx, [ebx + 0x96]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58751F7C: push edx
        __asm _emit 0x52
        // 0x58751F7D: lea ecx, [ebp + 7]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x07
        // 0x58751F80: push ecx
        __asm _emit 0x51
        // 0x58751F81: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58751F87: lea edx, [ebx + 0xa]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x0A
        // 0x58751F8A: push edx
        __asm _emit 0x52
        // 0x58751F8B: push ecx
        __asm _emit 0x51
        // 0x58751F8C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58751F8E: push esi
        __asm _emit 0x56
        // 0x58751F8F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58751F91: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0x12
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58751F96: jmp 0x58751f9a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58751F98: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58751F9A: mov edx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x60
        // 0x58751F9D: mov dword ptr [edx + edi*4], eax
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0xBA
        // 0x58751FA0: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x58751FA3: mov ecx, dword ptr [eax + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0xB8
        // 0x58751FA6: inc edi
        __asm _emit 0x47
        // 0x58751FA7: mov dword ptr [ecx + 0x60], 1
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58751FAE: cmp edi, dword ptr [esi + 0x74]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x74
        // 0x58751FB1: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58751FB6: jl 0x58751f52
        __asm _emit 0x7C
        __asm _emit 0x9A
        // 0x58751FB8: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58751FBA: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58751FBC: mov dword ptr [esi + 0x6c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x6C
        // 0x58751FBF: mov dword ptr [esi + 0x70], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x70
        // 0x58751FC2: mov dword ptr [esi + 0x78], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x78
        // 0x58751FC5: mov dword ptr [esi + 0x80], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58751FCB: mov dword ptr [esi + 0x68], 0x64
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58751FD2: mov word ptr [esi + 0x7c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x7C
        // 0x58751FD6: mov dword ptr [esi + 0x84], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58751FDC: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58751FDE: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58751FE2: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58751FE9: pop ecx
        __asm _emit 0x59
        // 0x58751FEA: pop edi
        __asm _emit 0x5F
        // 0x58751FEB: pop esi
        __asm _emit 0x5E
        // 0x58751FEC: pop ebp
        __asm _emit 0x5D
        // 0x58751FED: pop ebx
        __asm _emit 0x5B
        // 0x58751FEE: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58751FF1: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
