// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588DCC10 .. +0xE1 bytes.
// Source symbol alias: FUN_588dcc10.
extern "C" __declspec(naked) void FUN_588dcc10() {
    __asm {
        // 0x588DCC10: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588DCC14: push ebx
        __asm _emit 0x53
        // 0x588DCC15: push ebp
        __asm _emit 0x55
        // 0x588DCC16: mov ebp, dword ptr [0x5898c198]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588DCC1C: push esi
        __asm _emit 0x56
        // 0x588DCC1D: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588DCC1F: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x588DCC21: mov dword ptr [esi + 0x370], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCC27: mov dword ptr [esi + 0x1334], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x34
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCC2D: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588DCC30: mov dword ptr [esi + 0x374], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCC36: mov dword ptr [esi + 0x1338], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCC3C: movzx ecx, word ptr [eax + 8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x588DCC40: push edi
        __asm _emit 0x57
        // 0x588DCC41: mov word ptr [esi + 0x378], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCC48: mov word ptr [esi + 0x133c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCC4F: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x588DCC52: lea edi, [eax + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x588DCC55: push edi
        __asm _emit 0x57
        // 0x588DCC56: lea ebx, [esi + 0x1344]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0x44
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCC5C: mov dword ptr [esi + 0x37c], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x7C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCC62: push ebx
        __asm _emit 0x53
        // 0x588DCC63: mov dword ptr [esi + 0x1340], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x40
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCC69: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x588DCC6B: push edi
        __asm _emit 0x57
        // 0x588DCC6C: lea eax, [esi + 0x380]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCC72: push eax
        __asm _emit 0x50
        // 0x588DCC73: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x588DCC75: cmp dword ptr [esi + 0x1338], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x38
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCC7C: je 0x588dccb9
        __asm _emit 0x74
        __asm _emit 0x3B
        // 0x588DCC7E: push ebx
        __asm _emit 0x53
        // 0x588DCC7F: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588DCC85: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x588DCC88: lea ecx, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x40
        // 0x588DCC8B: lea eax, [edx + ecx*2 - 0x43]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x4A
        __asm _emit 0xBD
        // 0x588DCC8F: mov ecx, dword ptr [esi + 0x12ec]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xEC
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCC95: push eax
        __asm _emit 0x50
        // 0x588DCC96: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x66
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DCC9B: mov ecx, dword ptr [esi + 0x12e0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCCA1: push ebx
        __asm _emit 0x53
        // 0x588DCCA2: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0x50
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588DCCA7: mov esi, dword ptr [esi + 0x12e0]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0xE0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCCAD: or word ptr [esi + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x588DCCB2: pop edi
        __asm _emit 0x5F
        // 0x588DCCB3: pop esi
        __asm _emit 0x5E
        // 0x588DCCB4: pop ebp
        __asm _emit 0x5D
        // 0x588DCCB5: pop ebx
        __asm _emit 0x5B
        // 0x588DCCB6: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588DCCB9: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588DCCBC: sub ecx, 0x46
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x46
        // 0x588DCCBF: push ecx
        __asm _emit 0x51
        // 0x588DCCC0: mov ecx, dword ptr [esi + 0x12ec]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xEC
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCCC6: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0x66
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DCCCB: mov ecx, dword ptr [esi + 0x12e0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCCD1: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588DCCD6: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588DCCDB: mov esi, dword ptr [esi + 0x12e0]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0xE0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCCE1: pop edi
        __asm _emit 0x5F
        // 0x588DCCE2: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCCE7: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588DCCEB: pop esi
        __asm _emit 0x5E
        // 0x588DCCEC: pop ebp
        __asm _emit 0x5D
        // 0x588DCCED: pop ebx
        __asm _emit 0x5B
        // 0x588DCCEE: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
