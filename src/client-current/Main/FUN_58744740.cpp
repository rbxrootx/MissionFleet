// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 304 bytes in 1 exact ranges.
// Source symbol alias: FUN_58744740.

// Ghidra body range 0x58744740..0x58744870; 304 mapped bytes.
extern "C" __declspec(naked) void FUN_58744740_segment_00() {
    __asm {
        // 0x58744740: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58744742: push 0x5897e108
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0xE1
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58744747: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874474D: push eax
        __asm _emit 0x50
        // 0x5874474E: sub esp, 0x38
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x38
        // 0x58744751: push ebx
        __asm _emit 0x53
        // 0x58744752: push ebp
        __asm _emit 0x55
        // 0x58744753: push esi
        __asm _emit 0x56
        // 0x58744754: push edi
        __asm _emit 0x57
        // 0x58744755: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5874475A: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5874475C: push eax
        __asm _emit 0x50
        // 0x5874475D: lea eax, [esp + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x58744761: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744767: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x58744769: mov dword ptr [esp + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874476D: lea eax, [esp + 0x17]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x17
        // 0x58744771: push eax
        __asm _emit 0x50
        // 0x58744772: lea ecx, [esp + 0x1b]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1B
        // 0x58744776: push ecx
        __asm _emit 0x51
        // 0x58744777: lea ecx, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5874477B: call 0x587a0c30
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0xC4
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x58744780: mov edx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58744784: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58744787: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58744789: push eax
        __asm _emit 0x50
        // 0x5874478A: lea ecx, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5874478E: mov dword ptr [esp + 0x58], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x58744792: call 0x58786680
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0x1E
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58744797: mov eax, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5874479B: mov dword ptr [eax + 4], eax
        __asm _emit 0x89
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x5874479E: mov eax, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x587447A2: mov dword ptr [esp + 0x48], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x587447A6: mov dword ptr [eax], eax
        __asm _emit 0x89
        __asm _emit 0x00
        // 0x587447A8: mov eax, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x587447AC: mov dword ptr [eax + 8], eax
        __asm _emit 0x89
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x587447AF: mov edi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x587447B2: cmp edi, esi
        __asm _emit 0x3B
        __asm _emit 0xFE
        // 0x587447B4: jle 0x5874484b
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587447BA: dec edi
        __asm _emit 0x4F
        // 0x587447BB: cmp edi, esi
        __asm _emit 0x3B
        __asm _emit 0xFE
        // 0x587447BD: jl 0x5874484b
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587447C3: lea ecx, [edi*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xFD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587447CA: sub ecx, edi
        __asm _emit 0x2B
        __asm _emit 0xCF
        // 0x587447CC: lea ebp, [ebp + ecx*8 + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x6C
        __asm _emit 0xCD
        __asm _emit 0x10
        // 0x587447D0: mov edx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x587447D4: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587447D8: push ebp
        __asm _emit 0x55
        // 0x587447D9: lea eax, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587447DD: push eax
        __asm _emit 0x50
        // 0x587447DE: lea ecx, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587447E2: mov dword ptr [esp + 0x28], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587447E6: call 0x58743af0
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587447EB: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587447ED: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587447EF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587447F1: je 0x587447f7
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587447F3: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587447F5: je 0x587447fc
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587447F7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0x84
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587447FC: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58744800: cmp dword ptr [esi + 4], ecx
        __asm _emit 0x39
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58744803: jne 0x58744843
        __asm _emit 0x75
        __asm _emit 0x3E
        // 0x58744805: mov edx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x58744808: cmp edx, 3
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x03
        // 0x5874480B: je 0x58744843
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x5874480D: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58744811: mov eax, dword ptr [ecx + 0x70c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x0C
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744817: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x5874481A: jl 0x58744820
        __asm _emit 0x7C
        __asm _emit 0x04
        // 0x5874481C: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5874481E: jmp 0x5874482d
        __asm _emit 0xEB
        __asm _emit 0x0D
        // 0x58744820: cmp edx, 1
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x01
        // 0x58744823: jne 0x5874482c
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x58744825: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58744827: jle 0x58744833
        __asm _emit 0x7E
        __asm _emit 0x0A
        // 0x58744829: push edx
        __asm _emit 0x52
        // 0x5874482A: jmp 0x5874482d
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x5874482C: push eax
        __asm _emit 0x50
        // 0x5874482D: push edi
        __asm _emit 0x57
        // 0x5874482E: call 0x587435d0
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0xED
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58744833: push ebp
        __asm _emit 0x55
        // 0x58744834: lea ecx, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58744838: call 0x587a1330
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0xCA
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x5874483D: mov dword ptr [eax], 1
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744843: dec edi
        __asm _emit 0x4F
        // 0x58744844: sub ebp, 0x38
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x38
        // 0x58744847: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58744849: jge 0x587447d0
        __asm _emit 0x7D
        __asm _emit 0x85
        // 0x5874484B: lea ecx, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5874484F: mov dword ptr [esp + 0x54], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x54
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58744857: call 0x587a13e0
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0xCB
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x5874485C: mov ecx, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x58744860: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744867: pop ecx
        __asm _emit 0x59
        // 0x58744868: pop edi
        __asm _emit 0x5F
        // 0x58744869: pop esi
        __asm _emit 0x5E
        // 0x5874486A: pop ebp
        __asm _emit 0x5D
        // 0x5874486B: pop ebx
        __asm _emit 0x5B
        // 0x5874486C: add esp, 0x44
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x44
        // 0x5874486F: ret
        __asm _emit 0xC3
    }
}
