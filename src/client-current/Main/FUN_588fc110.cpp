// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 235 bytes in 2 exact ranges.
// Source symbol alias: FUN_588fc110.

// Ghidra body range 0x588FC110..0x588FC1B7; 167 mapped bytes.
extern "C" __declspec(naked) void FUN_588fc110_segment_00() {
    __asm {
        // 0x588FC110: push ebp
        __asm _emit 0x55
        // 0x588FC111: push esi
        __asm _emit 0x56
        // 0x588FC112: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588FC116: push edi
        __asm _emit 0x57
        // 0x588FC117: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x588FC119: lea eax, [esi + 0xb8]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC11F: push eax
        __asm _emit 0x50
        // 0x588FC120: mov dword ptr [ebp + 0xa0], 1
        __asm _emit 0xC7
        __asm _emit 0x85
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC12A: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FC130: push esi
        __asm _emit 0x56
        // 0x588FC131: call 0x588f3e70
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0x7D
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FC136: mov ecx, dword ptr [esi + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588FC139: push ecx
        __asm _emit 0x51
        // 0x588FC13A: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FC140: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588FC142: call 0x58778b20
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0xC9
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588FC147: mov edx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FC14D: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FC153: cmp dword ptr [edx + 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x7A
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588FC157: mov dl, byte ptr [ecx + 0xd54]
        __asm _emit 0x8A
        __asm _emit 0x91
        __asm _emit 0x54
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC15D: jle 0x588fc171
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x588FC15F: and dl, 0xf
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x0F
        // 0x588FC162: cmp byte ptr [eax + 0x35c], dl
        __asm _emit 0x38
        __asm _emit 0x90
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC168: jne 0x588fc186
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x588FC16A: call 0x587daeb0
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0xED
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x588FC16F: jmp 0x588fc186
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x588FC171: and dl, 0xf
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x0F
        // 0x588FC174: cmp byte ptr [eax + 0x35c], dl
        __asm _emit 0x38
        __asm _emit 0x90
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC17A: jne 0x588fc186
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x588FC17C: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588FC17E: je 0x588fc186
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588FC180: push edi
        __asm _emit 0x57
        // 0x588FC181: call 0x587df580
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0x33
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588FC186: mov ecx, dword ptr [ebp + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC18C: call 0x588bcfd0
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x0E
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x588FC191: mov cx, word ptr [esp + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588FC196: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588FC199: jbe 0x588fc1f3
        __asm _emit 0x76
        __asm _emit 0x58
        // 0x588FC19B: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588FC19D: shr eax, 1
        __asm _emit 0xD1
        __asm _emit 0xE8
        // 0x588FC19F: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x588FC1A2: lea eax, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x40
        // 0x588FC1A5: lea esi, [esi + eax*8 + 0xb8]
        __asm _emit 0x8D
        __asm _emit 0xB4
        __asm _emit 0xC6
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC1AC: movzx eax, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC1
        // 0x588FC1AF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FC1B1: jle 0x588fc1d7
        __asm _emit 0x7E
        __asm _emit 0x24
        // 0x588FC1B3: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588FC1B5: jmp 0x588fc1c0
        __asm _emit 0xEB
        __asm _emit 0x09
    }
}

// Ghidra body range 0x588FC1C0..0x588FC204; 68 mapped bytes.
extern "C" __declspec(naked) void FUN_588fc110_segment_01() {
    __asm {
        // 0x588FC1C0: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FC1C6: push esi
        __asm _emit 0x56
        // 0x588FC1C7: call 0x588f43f0
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0x82
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FC1CC: add esi, 0x180
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC1D2: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x588FC1D5: jne 0x588fc1c0
        __asm _emit 0x75
        __asm _emit 0xE9
        // 0x588FC1D7: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FC1DD: mov ecx, dword ptr [ecx + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC1E3: call 0x588730f0
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0x6F
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x588FC1E8: mov ecx, dword ptr [ebp + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC1EE: call 0x588bc600
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0x04
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x588FC1F3: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FC1F9: call 0x587da120
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0xDF
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x588FC1FE: pop edi
        __asm _emit 0x5F
        // 0x588FC1FF: pop esi
        __asm _emit 0x5E
        // 0x588FC200: pop ebp
        __asm _emit 0x5D
        // 0x588FC201: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
