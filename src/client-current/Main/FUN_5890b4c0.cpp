// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5890B4C0 .. +0x11B bytes.
extern "C" __declspec(naked) void FUN_5890b4c0() {
    __asm {
        // 0x5890B4C0: sub esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x28
        // 0x5890B4C3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5890B4C8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5890B4CA: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5890B4CE: push esi
        __asm _emit 0x56
        // 0x5890B4CF: push edi
        __asm _emit 0x57
        // 0x5890B4D0: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5890B4D2: mov ecx, dword ptr [0x58a28534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5890B4D8: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5890B4DA: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5890B4DC: je 0x5890b5bf
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xDD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890B4E2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5890B4E4: push edi
        __asm _emit 0x57
        // 0x5890B4E5: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5890B4E9: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5890B4ED: push 0x58a28530
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5890B4F2: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5890B4F6: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5890B4FA: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5890B4FE: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5890B502: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5890B506: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5890B50A: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5890B50E: lea edx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5890B512: mov dword ptr [esp + 0x10], 0x24
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890B51A: mov dword ptr [esp + 0x14], 0x11
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890B522: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5890B524: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5890B527: push edx
        __asm _emit 0x52
        // 0x5890B528: push ecx
        __asm _emit 0x51
        // 0x5890B529: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5890B52B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5890B52D: jl 0x5890b5c8
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890B533: mov ecx, dword ptr [0x58a28530]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x30
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5890B539: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5890B53B: je 0x5890b581
        __asm _emit 0x74
        __asm _emit 0x44
        // 0x5890B53D: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5890B53F: lea eax, [esi + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x5890B542: push eax
        __asm _emit 0x50
        // 0x5890B543: push 0x589a3ce8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5890B548: push ecx
        __asm _emit 0x51
        // 0x5890B549: mov ecx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x0A
        // 0x5890B54B: call ecx
        __asm _emit 0xFF
        __asm _emit 0xD1
        // 0x5890B54D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5890B54F: jge 0x5890b57b
        __asm _emit 0x7D
        __asm _emit 0x2A
        // 0x5890B551: mov eax, dword ptr [0x58a28530]
        __asm _emit 0xA1
        __asm _emit 0x30
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5890B556: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5890B558: je 0x5890b5c8
        __asm _emit 0x74
        __asm _emit 0x6E
        // 0x5890B55A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5890B55C: push eax
        __asm _emit 0x50
        // 0x5890B55D: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x5890B560: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5890B562: mov dword ptr [0x58a28530], edi
        __asm _emit 0x89
        __asm _emit 0x3D
        __asm _emit 0x30
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5890B568: pop edi
        __asm _emit 0x5F
        // 0x5890B569: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5890B56B: pop esi
        __asm _emit 0x5E
        // 0x5890B56C: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5890B570: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5890B572: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0x16
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5890B577: add esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x28
        // 0x5890B57A: ret
        __asm _emit 0xC3
        // 0x5890B57B: mov ecx, dword ptr [0x58a28530]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x30
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5890B581: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x5890B584: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5890B586: je 0x5890b59a
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5890B588: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5890B58A: mov edx, dword ptr [ecx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x1C
        // 0x5890B58D: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5890B590: push esi
        __asm _emit 0x56
        // 0x5890B591: push eax
        __asm _emit 0x50
        // 0x5890B592: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5890B594: mov ecx, dword ptr [0x58a28530]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x30
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5890B59A: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5890B59C: je 0x5890b5c8
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x5890B59E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5890B5A0: push ecx
        __asm _emit 0x51
        // 0x5890B5A1: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5890B5A4: call ecx
        __asm _emit 0xFF
        __asm _emit 0xD1
        // 0x5890B5A6: mov dword ptr [0x58a28530], edi
        __asm _emit 0x89
        __asm _emit 0x3D
        __asm _emit 0x30
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5890B5AC: pop edi
        __asm _emit 0x5F
        // 0x5890B5AD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5890B5AF: pop esi
        __asm _emit 0x5E
        // 0x5890B5B0: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5890B5B4: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5890B5B6: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0x16
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5890B5BB: add esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x28
        // 0x5890B5BE: ret
        __asm _emit 0xC3
        // 0x5890B5BF: mov dword ptr [0x58a28530], edi
        __asm _emit 0x89
        __asm _emit 0x3D
        __asm _emit 0x30
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5890B5C5: mov dword ptr [esi + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x5890B5C8: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5890B5CC: pop edi
        __asm _emit 0x5F
        // 0x5890B5CD: pop esi
        __asm _emit 0x5E
        // 0x5890B5CE: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5890B5D0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5890B5D2: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x16
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5890B5D7: add esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x28
        // 0x5890B5DA: ret
        __asm _emit 0xC3
    }
}
