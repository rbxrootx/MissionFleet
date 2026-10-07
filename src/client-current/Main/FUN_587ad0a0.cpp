// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1035 bytes in 2 discontiguous ranges.
// Source symbol alias: FUN_587ad0a0.

// Ghidra body range 0x587AD0A0..0x587AD1FD; 349 mapped bytes.
extern "C" __declspec(naked) void FUN_587ad0a0_segment_00() {
    __asm {
        // 0x587AD0A0: sub esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x14
        // 0x587AD0A3: push ebx
        __asm _emit 0x53
        // 0x587AD0A4: push ebp
        __asm _emit 0x55
        // 0x587AD0A5: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x587AD0A7: push esi
        __asm _emit 0x56
        // 0x587AD0A8: push edi
        __asm _emit 0x57
        // 0x587AD0A9: mov edi, dword ptr [ebp + 0x170]
        __asm _emit 0x8B
        __asm _emit 0xBD
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AD0AF: mov dword ptr [esp + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587AD0B3: cmp edi, dword ptr [ebp + 0x174]
        __asm _emit 0x3B
        __asm _emit 0xBD
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AD0B9: jbe 0x587ad0c0
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AD0BB: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0xFB
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AD0C0: mov esi, dword ptr [ebp + 0x164]
        __asm _emit 0x8B
        __asm _emit 0xB5
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AD0C6: mov dword ptr [esp + 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587AD0CA: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587AD0CE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x587AD0D0: mov ebx, dword ptr [ebp + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x9D
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AD0D6: cmp dword ptr [ebp + 0x170], ebx
        __asm _emit 0x39
        __asm _emit 0x9D
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AD0DC: jbe 0x587ad0e3
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AD0DE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0xFB
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AD0E3: mov eax, dword ptr [ebp + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AD0E9: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587AD0EB: je 0x587ad0f1
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587AD0ED: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x587AD0EF: je 0x587ad0f6
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587AD0F1: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0xFB
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AD0F6: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587AD0F8: je 0x587ad4a0
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AD0FE: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587AD100: jne 0x587ad138
        __asm _emit 0x75
        __asm _emit 0x36
        // 0x587AD102: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0xFB
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AD107: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AD109: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x587AD10C: jb 0x587ad113
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AD10E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0xFB
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AD113: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587AD115: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587AD119: cmp dword ptr [eax + 0x78], ecx
        __asm _emit 0x39
        __asm _emit 0x48
        __asm _emit 0x78
        // 0x587AD11C: je 0x587ad140
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x587AD11E: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587AD120: jne 0x587ad13c
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x587AD122: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0xFB
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AD127: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AD129: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x587AD12C: jb 0x587ad133
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AD12E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0xFB
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AD133: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587AD136: jmp 0x587ad0d0
        __asm _emit 0xEB
        __asm _emit 0x98
        // 0x587AD138: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587AD13A: jmp 0x587ad109
        __asm _emit 0xEB
        __asm _emit 0xCD
        // 0x587AD13C: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587AD13E: jmp 0x587ad129
        __asm _emit 0xEB
        __asm _emit 0xE9
        // 0x587AD140: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587AD144: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587AD146: jne 0x587ad2fb
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AD14C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0xFB
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AD151: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AD153: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x587AD156: jb 0x587ad15d
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AD158: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0xFB
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AD15D: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x587AD15F: mov edi, dword ptr [edx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xBA
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AD165: mov ebp, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x6F
        __asm _emit 0x0C
        // 0x587AD168: cmp ebp, dword ptr [edi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x6F
        __asm _emit 0x10
        // 0x587AD16B: jbe 0x587ad172
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AD16D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0xFB
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AD172: mov ebx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x1F
        // 0x587AD174: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AD178: mov dword ptr [esp + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AD17C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587AD180: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587AD182: jne 0x587ad302
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x7A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AD188: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0xFA
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AD18D: mov edi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587AD191: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587AD194: jb 0x587ad19b
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AD196: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0xFA
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AD19B: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587AD19D: mov esi, dword ptr [eax + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB0
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AD1A3: mov edi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587AD1A6: cmp dword ptr [esi + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x587AD1A9: jbe 0x587ad1b0
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AD1AB: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0xFA
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AD1B0: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587AD1B2: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587AD1B4: je 0x587ad1ba
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587AD1B6: cmp ebx, esi
        __asm _emit 0x3B
        __asm _emit 0xDE
        // 0x587AD1B8: je 0x587ad1bf
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587AD1BA: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0xFA
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AD1BF: mov esi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AD1C3: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x587AD1C5: je 0x587ad4a4
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AD1CB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587AD1CD: jne 0x587ad309
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AD1D3: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0xFA
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AD1D8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AD1DA: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x587AD1DD: jb 0x587ad1e4
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AD1DF: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0xFA
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AD1E4: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x587AD1E6: mov edi, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AD1EC: mov esi, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x0C
        // 0x587AD1EF: cmp esi, dword ptr [edi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x77
        __asm _emit 0x10
        // 0x587AD1F2: jbe 0x587ad1f9
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AD1F4: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0xFA
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AD1F9: mov edi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x3F
        // 0x587AD1FB: jmp 0x587ad200
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x587AD200..0x587AD4AE; 686 mapped bytes.
extern "C" __declspec(naked) void FUN_587ad0a0_segment_01() {
    __asm {
        // 0x587AD200: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587AD202: jne 0x587ad310
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AD208: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0xFA
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AD20D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AD20F: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AD213: cmp edx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587AD216: jb 0x587ad21d
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AD218: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0xFA
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AD21D: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AD221: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587AD223: mov ebx, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x99
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AD229: mov ebp, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6B
        __asm _emit 0x10
        // 0x587AD22C: cmp dword ptr [ebx + 0xc], ebp
        __asm _emit 0x39
        __asm _emit 0x6B
        __asm _emit 0x0C
        // 0x587AD22F: jbe 0x587ad236
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AD231: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0xFA
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AD236: mov ebx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x1B
        // 0x587AD238: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AD23A: je 0x587ad240
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587AD23C: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587AD23E: je 0x587ad245
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587AD240: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0xFA
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AD245: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x587AD247: je 0x587ad46d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AD24D: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587AD251: mov eax, dword ptr [edx + 0x12e8]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AD257: mov ebx, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x6C
        // 0x587AD25A: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AD25C: jne 0x587ad317
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AD262: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0xFA
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AD267: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AD269: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x587AD26C: jb 0x587ad273
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AD26E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xF9
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AD273: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x587AD275: push ebx
        __asm _emit 0x53
        // 0x587AD276: add ecx, 0xe
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x0E
        // 0x587AD279: push ecx
        __asm _emit 0x51
        // 0x587AD27A: call dword ptr [0x5898c1a4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587AD280: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587AD282: jne 0x587ad448
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AD288: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AD28A: jne 0x587ad31e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AD290: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0xF9
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AD295: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AD297: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x587AD29A: jb 0x587ad2a1
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AD29C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0xF9
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AD2A1: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587AD2A3: mov eax, dword ptr [edx + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x70
        // 0x587AD2A6: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587AD2AC: push eax
        __asm _emit 0x50
        // 0x587AD2AD: call 0x58778b20
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0xB8
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587AD2B2: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x587AD2B4: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587AD2B6: je 0x587ad393
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AD2BC: mov cl, byte ptr [ebx + 4]
        __asm _emit 0x8A
        __asm _emit 0x4B
        __asm _emit 0x04
        // 0x587AD2BF: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x587AD2C2: cmp cl, 0x10
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x10
        // 0x587AD2C5: jae 0x587ad329
        __asm _emit 0x73
        __asm _emit 0x62
        // 0x587AD2C7: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AD2C9: jne 0x587ad325
        __asm _emit 0x75
        __asm _emit 0x5A
        // 0x587AD2CB: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0xF9
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AD2D0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AD2D2: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x587AD2D5: jb 0x587ad2dc
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AD2D7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0xF9
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AD2DC: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587AD2DE: movzx ecx, word ptr [ebx + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4B
        __asm _emit 0x04
        // 0x587AD2E2: movzx eax, byte ptr [edx + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x587AD2E6: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587AD2EA: and ecx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x587AD2ED: lea eax, [eax + eax*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xC0
        // 0x587AD2F0: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xCD
        // 0x587AD2F2: lea eax, [ecx + eax*8 + 0x19c]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0xC1
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AD2F9: jmp 0x587ad35b
        __asm _emit 0xEB
        __asm _emit 0x60
        // 0x587AD2FB: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587AD2FD: jmp 0x587ad153
        __asm _emit 0xE9
        __asm _emit 0x51
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AD302: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587AD304: jmp 0x587ad18d
        __asm _emit 0xE9
        __asm _emit 0x84
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AD309: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587AD30B: jmp 0x587ad1da
        __asm _emit 0xE9
        __asm _emit 0xCA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AD310: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587AD312: jmp 0x587ad20f
        __asm _emit 0xE9
        __asm _emit 0xF8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AD317: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587AD319: jmp 0x587ad269
        __asm _emit 0xE9
        __asm _emit 0x4B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AD31E: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587AD320: jmp 0x587ad297
        __asm _emit 0xE9
        __asm _emit 0x72
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AD325: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587AD327: jmp 0x587ad2d2
        __asm _emit 0xEB
        __asm _emit 0xA9
        // 0x587AD329: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AD32B: jne 0x587ad38b
        __asm _emit 0x75
        __asm _emit 0x5E
        // 0x587AD32D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0xF9
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AD332: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AD334: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x587AD337: jb 0x587ad33e
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AD339: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0xF9
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AD33E: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587AD340: movzx ecx, word ptr [ebx + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4B
        __asm _emit 0x04
        // 0x587AD344: movzx eax, byte ptr [edx + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x587AD348: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587AD34C: and ecx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x587AD34F: lea eax, [eax + eax*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xC0
        // 0x587AD352: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xCD
        // 0x587AD354: lea eax, [ecx + eax*8 + 0x196]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0xC1
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AD35B: dec byte ptr [eax]
        __asm _emit 0xFE
        __asm _emit 0x08
        // 0x587AD35D: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AD35F: jne 0x587ad38f
        __asm _emit 0x75
        __asm _emit 0x2E
        // 0x587AD361: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0xF9
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AD366: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AD368: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x587AD36B: jb 0x587ad372
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AD36D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0xF9
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AD372: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587AD374: movzx eax, byte ptr [edx + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x587AD378: mov ecx, dword ptr [ebx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x78
        // 0x587AD37B: sub dword ptr [ebp + eax*4 + 0x3dc], ecx
        __asm _emit 0x29
        __asm _emit 0x8C
        __asm _emit 0x85
        __asm _emit 0xDC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AD382: lea eax, [ebp + eax*4 + 0x3dc]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0xDC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AD389: jmp 0x587ad397
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x587AD38B: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587AD38D: jmp 0x587ad334
        __asm _emit 0xEB
        __asm _emit 0xA5
        // 0x587AD38F: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587AD391: jmp 0x587ad368
        __asm _emit 0xEB
        __asm _emit 0xD5
        // 0x587AD393: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587AD397: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AD399: jne 0x587ad43d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AD39F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0xF8
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AD3A4: cmp esi, dword ptr [edi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x77
        __asm _emit 0x10
        // 0x587AD3A7: jb 0x587ad3ae
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AD3A9: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0xF8
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AD3AE: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587AD3B2: mov dl, byte ptr [ecx + 0x354]
        __asm _emit 0x8A
        __asm _emit 0x91
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AD3B8: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587AD3BA: mov byte ptr [eax + 0xc], dl
        __asm _emit 0x88
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587AD3BD: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587AD3C0: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x587AD3C2: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587AD3C5: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587AD3C8: mov cl, byte ptr [ecx + 0x355]
        __asm _emit 0x8A
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AD3CE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587AD3D0: mov byte ptr [eax + 0xd], cl
        __asm _emit 0x88
        __asm _emit 0x48
        __asm _emit 0x0D
        // 0x587AD3D3: push eax
        __asm _emit 0x50
        // 0x587AD3D4: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587AD3D6: call 0x587acba0
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AD3DB: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AD3DF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587AD3E1: jne 0x587ad444
        __asm _emit 0x75
        __asm _emit 0x61
        // 0x587AD3E3: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0xF8
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AD3E8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AD3EA: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AD3EE: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x587AD3F1: jb 0x587ad3f8
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AD3F3: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0xF8
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AD3F8: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x587AD3FA: mov edi, dword ptr [edx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xBA
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AD400: mov eax, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x10
        // 0x587AD403: lea ecx, [esi + 4]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587AD406: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x587AD408: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587AD40B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587AD40D: jle 0x587ad41f
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587AD40F: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x587AD411: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x587AD413: push eax
        __asm _emit 0x50
        // 0x587AD414: push ecx
        __asm _emit 0x51
        // 0x587AD415: push eax
        __asm _emit 0x50
        // 0x587AD416: push esi
        __asm _emit 0x56
        // 0x587AD417: call 0x5897cc54
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0xF8
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AD41C: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587AD41F: add dword ptr [edi + 0x10], -4
        __asm _emit 0x83
        __asm _emit 0x47
        __asm _emit 0x10
        __asm _emit 0xFC
        // 0x587AD423: mov eax, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x10
        // 0x587AD426: cmp dword ptr [edi + 0xc], esi
        __asm _emit 0x39
        __asm _emit 0x77
        __asm _emit 0x0C
        // 0x587AD429: ja 0x587ad42f
        __asm _emit 0x77
        __asm _emit 0x04
        // 0x587AD42B: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x587AD42D: jbe 0x587ad434
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AD42F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0xF8
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AD434: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AD438: jmp 0x587ad1f9
        __asm _emit 0xE9
        __asm _emit 0xBC
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AD43D: mov edi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x3F
        // 0x587AD43F: jmp 0x587ad3a4
        __asm _emit 0xE9
        __asm _emit 0x60
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AD444: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587AD446: jmp 0x587ad3ea
        __asm _emit 0xEB
        __asm _emit 0xA2
        // 0x587AD448: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AD44A: jne 0x587ad469
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x587AD44C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0xF8
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AD451: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AD453: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x587AD456: jb 0x587ad45d
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AD458: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AD45D: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AD461: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x587AD464: jmp 0x587ad200
        __asm _emit 0xE9
        __asm _emit 0x97
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AD469: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587AD46B: jmp 0x587ad453
        __asm _emit 0xEB
        __asm _emit 0xE6
        // 0x587AD46D: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AD471: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587AD473: jne 0x587ad49c
        __asm _emit 0x75
        __asm _emit 0x27
        // 0x587AD475: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0xF7
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AD47A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AD47C: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AD480: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x587AD483: jb 0x587ad48a
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AD485: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AD48A: add dword ptr [esp + 0x18], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x04
        // 0x587AD48F: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AD493: mov esi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587AD497: jmp 0x587ad180
        __asm _emit 0xE9
        __asm _emit 0xE4
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AD49C: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587AD49E: jmp 0x587ad47c
        __asm _emit 0xEB
        __asm _emit 0xDC
        // 0x587AD4A0: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587AD4A4: pop edi
        __asm _emit 0x5F
        // 0x587AD4A5: pop esi
        __asm _emit 0x5E
        // 0x587AD4A6: pop ebp
        __asm _emit 0x5D
        // 0x587AD4A7: pop ebx
        __asm _emit 0x5B
        // 0x587AD4A8: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587AD4AB: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
