// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 234 bytes in 1 exact ranges.
// Source symbol alias: FUN_58817800.

// Ghidra body range 0x58817800..0x588178EA; 234 mapped bytes.
extern "C" __declspec(naked) void FUN_58817800_segment_00() {
    __asm {
        // 0x58817800: cmp dword ptr [esp + 4], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58817805: push esi
        __asm _emit 0x56
        // 0x58817806: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58817808: je 0x588178c2
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881780E: mov eax, dword ptr [esi + 0x198]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817814: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881781A: add eax, 0x48
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x48
        // 0x5881781D: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x5881781F: shr eax, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0A
        // 0x58817822: push eax
        __asm _emit 0x50
        // 0x58817823: call 0x588f4060
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0xC8
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58817828: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5881782A: je 0x5881784b
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x5881782C: mov ecx, dword ptr [esi + 0x198]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817832: push ecx
        __asm _emit 0x51
        // 0x58817833: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58817835: call 0x588e98e0
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0x20
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5881783A: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58817840: mov ecx, dword ptr [edx + 0xdac]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xAC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817846: call 0x588ecea0
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0x56
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5881784B: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58817850: cmp dword ptr [eax + 0x170], 0x28
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x28
        // 0x58817857: jle 0x58817870
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58817859: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817860: je 0x58817870
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58817862: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817868: mov ecx, dword ptr [eax + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881786E: jmp 0x58817872
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58817870: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58817872: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58817878: push edx
        __asm _emit 0x52
        // 0x58817879: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5881787E: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58817883: cmp dword ptr [eax + 0x170], 0x28
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x28
        // 0x5881788A: jle 0x588178a3
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5881788C: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58817893: je 0x588178a3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58817895: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881789B: mov ecx, dword ptr [eax + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588178A1: jmp 0x588178a5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588178A3: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588178A5: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588178A7: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588178AA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588178AC: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588178AE: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x588178B0: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x588178B3: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588178B5: mov dword ptr [esi + 0x58], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588178BC: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588178BE: pop esi
        __asm _emit 0x5E
        // 0x588178BF: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588178C2: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x588178C7: cmp word ptr [esp + 0xc], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588178CD: jne 0x588178e6
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x588178CF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588178D1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588178D3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588178D5: push 0x12e
        __asm _emit 0x68
        __asm _emit 0x2E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588178DA: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0x42
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x588178DF: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588178E1: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0xD4
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x588178E6: pop esi
        __asm _emit 0x5E
        // 0x588178E7: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
