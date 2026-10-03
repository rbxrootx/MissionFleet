// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58816EE0 .. +0x3EB bytes.
extern "C" __declspec(naked) void FUN_58816ee0() {
    __asm {
        // 0x58816EE0: sub esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x18
        // 0x58816EE3: cmp dword ptr [esp + 0x20], 2
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x58816EE8: push edi
        __asm _emit 0x57
        // 0x58816EE9: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58816EEB: jne 0x588172c2
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816EF1: mov eax, dword ptr [edi + 0x198]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816EF7: cmp dword ptr [eax + 0xcd0], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xD0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816EFE: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58816F02: push ebp
        __asm _emit 0x55
        // 0x58816F03: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816F08: push esi
        __asm _emit 0x56
        // 0x58816F09: lea esi, [ebp + 0xb]
        __asm _emit 0x8D
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x58816F0C: je 0x58816fb8
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816F12: cmp ecx, dword ptr [edi + 0x14c]
        __asm _emit 0x3B
        __asm _emit 0x8F
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816F18: jne 0x58816f35
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x58816F1A: mov ecx, 0xff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816F1F: cmp word ptr [eax + 0x88], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816F26: jae 0x58816fad
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816F2C: add word ptr [eax + 0x88], bp
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0xA8
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816F33: jmp 0x58816f53
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x58816F35: cmp ecx, dword ptr [edi + 0x15c]
        __asm _emit 0x3B
        __asm _emit 0x8F
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816F3B: jne 0x58816fb8
        __asm _emit 0x75
        __asm _emit 0x7B
        // 0x58816F3D: cmp word ptr [eax + 0x88], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816F45: jbe 0x58816fad
        __asm _emit 0x76
        __asm _emit 0x66
        // 0x58816F47: mov ecx, 0xffff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816F4C: add word ptr [eax + 0x88], cx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816F53: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58816F58: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816F5E: jle 0x58816f74
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58816F60: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816F67: je 0x58816f74
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58816F69: mov edx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816F6F: mov ecx, dword ptr [edx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x30
        // 0x58816F72: jmp 0x58816f76
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58816F74: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58816F76: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58816F7B: push eax
        __asm _emit 0x50
        // 0x58816F7C: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0x0A
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58816F81: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58816F86: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816F8C: jle 0x58816fa2
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58816F8E: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816F95: je 0x58816fa2
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58816F97: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816F9D: mov ecx, dword ptr [ecx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x30
        // 0x58816FA0: jmp 0x58816fa4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58816FA2: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58816FA4: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58816FA6: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58816FA9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58816FAB: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58816FAD: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58816FAF: call 0x58815e10
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0xEE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58816FB4: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58816FB8: mov eax, dword ptr [edi + 0x198]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816FBE: cmp dword ptr [eax + 0xcd4], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xD4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816FC5: je 0x58817071
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816FCB: cmp ecx, dword ptr [edi + 0x150]
        __asm _emit 0x3B
        __asm _emit 0x8F
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816FD1: jne 0x58816fee
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x58816FD3: mov ecx, 0xff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816FD8: cmp word ptr [eax + 0x8a], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816FDF: jae 0x58817066
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816FE5: add word ptr [eax + 0x8a], bp
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0xA8
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816FEC: jmp 0x5881700c
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x58816FEE: cmp ecx, dword ptr [edi + 0x160]
        __asm _emit 0x3B
        __asm _emit 0x8F
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816FF4: jne 0x58817071
        __asm _emit 0x75
        __asm _emit 0x7B
        // 0x58816FF6: cmp word ptr [eax + 0x8a], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816FFE: jbe 0x58817066
        __asm _emit 0x76
        __asm _emit 0x66
        // 0x58817000: mov ecx, 0xffff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817005: add word ptr [eax + 0x8a], cx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x88
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881700C: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58817011: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817017: jle 0x5881702d
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58817019: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817020: je 0x5881702d
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58817022: mov edx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817028: mov ecx, dword ptr [edx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x30
        // 0x5881702B: jmp 0x5881702f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881702D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5881702F: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58817034: push eax
        __asm _emit 0x50
        // 0x58817035: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0x09
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5881703A: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881703F: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817045: jle 0x5881705b
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58817047: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881704E: je 0x5881705b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58817050: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817056: mov ecx, dword ptr [ecx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x30
        // 0x58817059: jmp 0x5881705d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881705B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5881705D: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5881705F: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58817062: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58817064: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58817066: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58817068: call 0x58815e10
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0xED
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5881706D: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58817071: mov eax, dword ptr [edi + 0x198]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817077: cmp dword ptr [eax + 0xcdc], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xDC
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881707E: je 0x5881712a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817084: cmp ecx, dword ptr [edi + 0x154]
        __asm _emit 0x3B
        __asm _emit 0x8F
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881708A: jne 0x588170a7
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x5881708C: mov ecx, 0xff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817091: cmp word ptr [eax + 0x8e], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817098: jae 0x5881711f
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881709E: add word ptr [eax + 0x8e], bp
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0xA8
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588170A5: jmp 0x588170c5
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x588170A7: cmp ecx, dword ptr [edi + 0x164]
        __asm _emit 0x3B
        __asm _emit 0x8F
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588170AD: jne 0x5881712a
        __asm _emit 0x75
        __asm _emit 0x7B
        // 0x588170AF: cmp word ptr [eax + 0x8e], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588170B7: jbe 0x5881711f
        __asm _emit 0x76
        __asm _emit 0x66
        // 0x588170B9: mov ecx, 0xffff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588170BE: add word ptr [eax + 0x8e], cx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x88
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588170C5: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588170CA: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588170D0: jle 0x588170e6
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588170D2: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588170D9: je 0x588170e6
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588170DB: mov edx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588170E1: mov ecx, dword ptr [edx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x30
        // 0x588170E4: jmp 0x588170e8
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588170E6: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588170E8: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588170ED: push eax
        __asm _emit 0x50
        // 0x588170EE: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x08
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588170F3: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588170F8: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588170FE: jle 0x58817114
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58817100: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817107: je 0x58817114
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58817109: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881710F: mov ecx, dword ptr [ecx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x30
        // 0x58817112: jmp 0x58817116
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58817114: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58817116: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58817118: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5881711B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5881711D: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5881711F: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58817121: call 0x58815e10
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58817126: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5881712A: mov eax, dword ptr [edi + 0x198]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817130: cmp dword ptr [eax + 0xcd8], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xD8
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817137: je 0x588171e3
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881713D: cmp ecx, dword ptr [edi + 0x158]
        __asm _emit 0x3B
        __asm _emit 0x8F
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817143: jne 0x58817160
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x58817145: mov ecx, 0xff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881714A: cmp word ptr [eax + 0x8c], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817151: jae 0x588171d8
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817157: add word ptr [eax + 0x8c], bp
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0xA8
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881715E: jmp 0x5881717e
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x58817160: cmp ecx, dword ptr [edi + 0x168]
        __asm _emit 0x3B
        __asm _emit 0x8F
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817166: jne 0x588171e3
        __asm _emit 0x75
        __asm _emit 0x7B
        // 0x58817168: cmp word ptr [eax + 0x8c], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817170: jbe 0x588171d8
        __asm _emit 0x76
        __asm _emit 0x66
        // 0x58817172: mov ecx, 0xffff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817177: add word ptr [eax + 0x8c], cx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881717E: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58817183: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817189: jle 0x5881719f
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x5881718B: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817192: je 0x5881719f
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58817194: mov edx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881719A: mov ecx, dword ptr [edx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x30
        // 0x5881719D: jmp 0x588171a1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881719F: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588171A1: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588171A6: push eax
        __asm _emit 0x50
        // 0x588171A7: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0x07
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588171AC: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588171B1: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588171B7: jle 0x588171cd
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588171B9: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588171C0: je 0x588171cd
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588171C2: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588171C8: mov ecx, dword ptr [ecx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x30
        // 0x588171CB: jmp 0x588171cf
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588171CD: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588171CF: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588171D1: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588171D4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588171D6: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588171D8: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588171DA: call 0x58815e10
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588171DF: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588171E3: pop esi
        __asm _emit 0x5E
        // 0x588171E4: pop ebp
        __asm _emit 0x5D
        // 0x588171E5: cmp ecx, dword ptr [edi + 0x16c]
        __asm _emit 0x3B
        __asm _emit 0x8F
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588171EB: jne 0x588172b1
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588171F1: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588171F3: call 0x58815c80
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0xEA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588171F8: mov eax, dword ptr [edi + 0x198]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588171FE: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58817200: mov word ptr [esp + 0x22], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x22
        // 0x58817205: mov ecx, dword ptr [eax + 0xcd0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xD0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881720B: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58817210: mov byte ptr [esp + 0x21], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x21
        __asm _emit 0x00
        // 0x58817215: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58817217: jne 0x5881721d
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58817219: lea ecx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5881721D: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5881721F: mov dword ptr [esp + 4], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58817223: mov ecx, dword ptr [eax + 0xcd4]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xD4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817229: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5881722B: jne 0x58817231
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x5881722D: lea ecx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58817231: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x58817233: mov dword ptr [esp + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58817237: mov ecx, dword ptr [eax + 0xcd8]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xD8
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881723D: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5881723F: jne 0x58817245
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58817241: lea ecx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58817245: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58817247: mov dword ptr [esp + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5881724B: mov eax, dword ptr [eax + 0xcdc]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xDC
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817251: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58817253: jne 0x58817259
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58817255: lea eax, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58817259: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x5881725B: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5881725F: mov eax, dword ptr [edi + 0x198]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817265: mov cl, byte ptr [eax + 0x88]
        __asm _emit 0x8A
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881726B: mov byte ptr [esp + 0x14], cl
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5881726F: mov dl, byte ptr [eax + 0x8a]
        __asm _emit 0x8A
        __asm _emit 0x90
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817275: mov byte ptr [esp + 0x15], dl
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x15
        // 0x58817279: mov cx, word ptr [eax + 0x8c]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817280: mov word ptr [esp + 0x16], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x16
        // 0x58817285: mov dx, word ptr [eax + 0x8e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881728C: mov word ptr [esp + 0x18], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58817291: mov edx, dword ptr [eax + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x48
        // 0x58817294: lea ecx, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58817298: push ecx
        __asm _emit 0x51
        // 0x58817299: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881729F: shr edx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x0A
        // 0x588172A2: push edx
        __asm _emit 0x52
        // 0x588172A3: call 0x587b9970
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0x26
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x588172A8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588172AA: pop edi
        __asm _emit 0x5F
        // 0x588172AB: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x588172AE: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588172B1: cmp ecx, dword ptr [edi + 0x170]
        __asm _emit 0x3B
        __asm _emit 0x8F
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588172B7: jne 0x588172c2
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x588172B9: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588172BB: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588172BE: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588172C0: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588172C2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588172C4: pop edi
        __asm _emit 0x5F
        // 0x588172C5: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x588172C8: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
