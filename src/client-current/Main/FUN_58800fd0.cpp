// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 476 bytes in 2 exact ranges.
// Source symbol alias: FUN_58800fd0.

// Ghidra body range 0x58800FD0..0x58801119; 329 mapped bytes.
extern "C" __declspec(naked) void FUN_58800fd0_segment_00() {
    __asm {
        // 0x58800FD0: push ebx
        __asm _emit 0x53
        // 0x58800FD1: push ebp
        __asm _emit 0x55
        // 0x58800FD2: push esi
        __asm _emit 0x56
        // 0x58800FD3: push edi
        __asm _emit 0x57
        // 0x58800FD4: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58800FD6: mov esi, dword ptr [edi + 0x10544]
        __asm _emit 0x8B
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58800FDC: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58800FDE: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x58800FE0: je 0x58800ff0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58800FE2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58800FE4: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x1C
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58800FE9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58800FEB: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0x1C
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58800FF0: mov eax, dword ptr [edi + 0x20d54]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x54
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58800FF6: mov esi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x58800FF9: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x58800FFB: je 0x58801018
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x58800FFD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58801000: mov ebx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x58801003: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58801005: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0x1C
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5880100A: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5880100C: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0x1C
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58801011: mov esi, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x08
        // 0x58801014: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x58801016: jne 0x58801000
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x58801018: mov ebx, dword ptr [edi + 0x20d54]
        __asm _emit 0x8B
        __asm _emit 0x9F
        __asm _emit 0x54
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5880101E: mov esi, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x73
        __asm _emit 0x04
        // 0x58801021: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x58801023: je 0x58801036
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x58801025: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58801027: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58801029: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x5880102B: mov esi, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x08
        // 0x5880102E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58801030: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58801032: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x58801034: jne 0x58801025
        __asm _emit 0x75
        __asm _emit 0xEF
        // 0x58801036: mov dword ptr [ebx + 8], ebp
        __asm _emit 0x89
        __asm _emit 0x6B
        __asm _emit 0x08
        // 0x58801039: mov dword ptr [ebx + 4], ebp
        __asm _emit 0x89
        __asm _emit 0x6B
        __asm _emit 0x04
        // 0x5880103C: mov dword ptr [ebx + 0xc], ebp
        __asm _emit 0x89
        __asm _emit 0x6B
        __asm _emit 0x0C
        // 0x5880103F: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58801045: mov esi, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x0C
        // 0x58801048: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x5880104A: je 0x588010a1
        __asm _emit 0x74
        __asm _emit 0x55
        // 0x5880104C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58801050: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58801052: mov dword ptr [esi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x54
        // 0x58801055: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0x1C
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5880105A: mov edx, dword ptr [esi + 0x6020]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x20
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58801060: mov ebx, dword ptr [edx + 0x3b4]
        __asm _emit 0x8B
        __asm _emit 0x9A
        __asm _emit 0xB4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58801066: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58801068: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0x1B
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5880106D: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5880106F: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0x1B
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58801074: mov eax, dword ptr [esi + 0x6024]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880107A: mov ebx, dword ptr [eax + 0x3b4]
        __asm _emit 0x8B
        __asm _emit 0x98
        __asm _emit 0xB4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58801080: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58801082: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x1B
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58801087: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58801089: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0x1B
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5880108E: mov ecx, dword ptr [edi + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58801094: push esi
        __asm _emit 0x56
        // 0x58801095: call 0x5890dbf0
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0xCB
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5880109A: mov esi, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x78
        // 0x5880109D: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x5880109F: jne 0x58801050
        __asm _emit 0x75
        __asm _emit 0xAF
        // 0x588010A1: mov eax, dword ptr [edi + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588010A7: add eax, dword ptr [edi + 0x10488]
        __asm _emit 0x03
        __asm _emit 0x87
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588010AD: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588010AF: div dword ptr [0x58a24914]
        __asm _emit 0xF7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588010B5: mov ecx, dword ptr [0x58a2491c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588010BB: mov edx, dword ptr [ecx + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x91
        // 0x588010BE: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588010C0: and eax, 3
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x03
        // 0x588010C3: add eax, 0x1388
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588010C8: cmp dword ptr [edi + 0x21f0c], eax
        __asm _emit 0x39
        __asm _emit 0x87
        __asm _emit 0x0C
        __asm _emit 0x1F
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588010CE: jne 0x588010f5
        __asm _emit 0x75
        __asm _emit 0x25
        // 0x588010D0: cmp eax, 0x138b
        __asm _emit 0x3D
        __asm _emit 0x8B
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588010D5: jne 0x588010de
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x588010D7: mov eax, 0x138a
        __asm _emit 0xB8
        __asm _emit 0x8A
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588010DC: jmp 0x588010f5
        __asm _emit 0xEB
        __asm _emit 0x17
        // 0x588010DE: cmp eax, 0x1388
        __asm _emit 0x3D
        __asm _emit 0x88
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588010E3: jne 0x588010ec
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x588010E5: mov eax, 0x1389
        __asm _emit 0xB8
        __asm _emit 0x89
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588010EA: jmp 0x588010f5
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x588010EC: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x588010EF: jne 0x588010f4
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x588010F1: inc eax
        __asm _emit 0x40
        // 0x588010F2: jmp 0x588010f5
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x588010F4: dec eax
        __asm _emit 0x48
        // 0x588010F5: push eax
        __asm _emit 0x50
        // 0x588010F6: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588010F8: call 0x58800360
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588010FD: mov edx, dword ptr [edi + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58801103: push edx
        __asm _emit 0x52
        // 0x58801104: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58801106: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x1E
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5880110B: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58801110: mov esi, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x0C
        // 0x58801113: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x58801115: je 0x5880117c
        __asm _emit 0x74
        __asm _emit 0x65
        // 0x58801117: jmp 0x58801120
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x58801120..0x588011B3; 147 mapped bytes.
extern "C" __declspec(naked) void FUN_58800fd0_segment_01() {
    __asm {
        // 0x58801120: mov ecx, dword ptr [edi + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58801126: mov edx, dword ptr [esi + 0x6020]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x20
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880112C: mov dword ptr [esi + 0x54], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x5880112F: mov ebx, dword ptr [edi + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x9F
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58801135: mov ebp, dword ptr [edx + 0x3b4]
        __asm _emit 0x8B
        __asm _emit 0xAA
        __asm _emit 0xB4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880113B: push ebp
        __asm _emit 0x55
        // 0x5880113C: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5880113E: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x1D
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58801143: push ebp
        __asm _emit 0x55
        // 0x58801144: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58801146: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x1E
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5880114B: mov eax, dword ptr [esi + 0x6024]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58801151: mov ebp, dword ptr [eax + 0x3b4]
        __asm _emit 0x8B
        __asm _emit 0xA8
        __asm _emit 0xB4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58801157: push ebp
        __asm _emit 0x55
        // 0x58801158: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5880115A: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0x1D
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5880115F: push ebp
        __asm _emit 0x55
        // 0x58801160: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58801162: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0x1D
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58801167: mov ecx, dword ptr [edi + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5880116D: push esi
        __asm _emit 0x56
        // 0x5880116E: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0x1D
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58801173: mov esi, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x78
        // 0x58801176: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58801178: jne 0x58801120
        __asm _emit 0x75
        __asm _emit 0xA6
        // 0x5880117A: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5880117C: mov ecx, dword ptr [edi + 0x21f04]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x04
        __asm _emit 0x1F
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58801182: call 0x587cda60
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0xC8
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x58801187: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58801189: call 0x587f2ad0
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0x19
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5880118E: mov esi, dword ptr [edi + 0x10544]
        __asm _emit 0x8B
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58801194: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x58801196: je 0x588011ae
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x58801198: mov edi, dword ptr [edi + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0xBF
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5880119E: push esi
        __asm _emit 0x56
        // 0x5880119F: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588011A1: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0x1D
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x588011A6: push esi
        __asm _emit 0x56
        // 0x588011A7: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588011A9: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0x1D
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x588011AE: pop edi
        __asm _emit 0x5F
        // 0x588011AF: pop esi
        __asm _emit 0x5E
        // 0x588011B0: pop ebp
        __asm _emit 0x5D
        // 0x588011B1: pop ebx
        __asm _emit 0x5B
        // 0x588011B2: ret
        __asm _emit 0xC3
    }
}
