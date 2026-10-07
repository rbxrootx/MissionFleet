// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 720 bytes in 3 exact ranges.
// Source symbol alias: FUN_587635a0.

// Ghidra body range 0x587635A0..0x587636F2; 338 mapped bytes.
extern "C" __declspec(naked) void FUN_587635a0_segment_00() {
    __asm {
        // 0x587635A0: sub esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x1C
        // 0x587635A3: push ebx
        __asm _emit 0x53
        // 0x587635A4: push esi
        __asm _emit 0x56
        // 0x587635A5: push edi
        __asm _emit 0x57
        // 0x587635A6: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587635A8: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587635AD: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587635AF: cmp dword ptr [esi + 0x78], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x78
        // 0x587635B2: jne 0x587635e6
        __asm _emit 0x75
        __asm _emit 0x32
        // 0x587635B4: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x587635B7: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x587635BA: je 0x587635e0
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x587635BC: cmp eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x587635BF: je 0x587635e0
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x587635C1: cmp eax, 0x4a3
        __asm _emit 0x3D
        __asm _emit 0xA3
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587635C6: je 0x587635e0
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x587635C8: cmp eax, 0x4a4
        __asm _emit 0x3D
        __asm _emit 0xA4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587635CD: jne 0x58763608
        __asm _emit 0x75
        __asm _emit 0x39
        // 0x587635CF: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587635D4: mov ecx, dword ptr [eax + 0xdb0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xB0
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587635DA: mov dword ptr [ecx + 0x2c8], ebx
        __asm _emit 0x89
        __asm _emit 0x99
        __asm _emit 0xC8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587635E0: mov dword ptr [0x58a248d8], ebx
        __asm _emit 0x89
        __asm _emit 0x1D
        __asm _emit 0xD8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587635E6: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x587635E9: cmp dword ptr [esi + 0x78], ebx
        __asm _emit 0x39
        __asm _emit 0x5E
        __asm _emit 0x78
        // 0x587635EC: je 0x58763812
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587635F2: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587635F5: jne 0x5876361c
        __asm _emit 0x75
        __asm _emit 0x25
        // 0x587635F7: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587635FD: pop edi
        __asm _emit 0x5F
        // 0x587635FE: pop esi
        __asm _emit 0x5E
        // 0x587635FF: pop ebx
        __asm _emit 0x5B
        // 0x58763600: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58763603: jmp 0x587e5be0
        __asm _emit 0xE9
        __asm _emit 0xD8
        __asm _emit 0x25
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58763608: cmp eax, 0x1b58
        __asm _emit 0x3D
        __asm _emit 0x58
        __asm _emit 0x1B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876360D: jne 0x587635e6
        __asm _emit 0x75
        __asm _emit 0xD7
        // 0x5876360F: mov ecx, dword ptr [0x58a24594]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58763615: call 0x5878f920
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0xC3
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5876361A: jmp 0x587635e6
        __asm _emit 0xEB
        __asm _emit 0xCA
        // 0x5876361C: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x5876361F: je 0x58763883
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x5E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763625: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x58763628: je 0x58763883
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x55
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876362E: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x58763631: je 0x58763883
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763637: cmp eax, 0x12
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x12
        // 0x5876363A: jne 0x5876364f
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x5876363C: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763642: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58763644: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58763647: pop edi
        __asm _emit 0x5F
        // 0x58763648: pop esi
        __asm _emit 0x5E
        // 0x58763649: pop ebx
        __asm _emit 0x5B
        // 0x5876364A: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x5876364D: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
        // 0x5876364F: cmp eax, 0x64
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x64
        // 0x58763652: jne 0x58763667
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x58763654: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876365A: push ebx
        __asm _emit 0x53
        // 0x5876365B: call 0x587ba8a0
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x72
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x58763660: pop edi
        __asm _emit 0x5F
        // 0x58763661: pop esi
        __asm _emit 0x5E
        // 0x58763662: pop ebx
        __asm _emit 0x5B
        // 0x58763663: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58763666: ret
        __asm _emit 0xC3
        // 0x58763667: cmp eax, 0x12e
        __asm _emit 0x3D
        __asm _emit 0x2E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876366C: jne 0x58763681
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x5876366E: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58763674: mov byte ptr [ecx + 0xe4], bl
        __asm _emit 0x88
        __asm _emit 0x99
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876367A: pop edi
        __asm _emit 0x5F
        // 0x5876367B: pop esi
        __asm _emit 0x5E
        // 0x5876367C: pop ebx
        __asm _emit 0x5B
        // 0x5876367D: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58763680: ret
        __asm _emit 0xC3
        // 0x58763681: cmp eax, 0x131
        __asm _emit 0x3D
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763686: jne 0x587636a5
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x58763688: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876368E: mov eax, dword ptr [edx + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763694: mov ecx, dword ptr [eax + 0x15c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876369A: pop edi
        __asm _emit 0x5F
        // 0x5876369B: pop esi
        __asm _emit 0x5E
        // 0x5876369C: pop ebx
        __asm _emit 0x5B
        // 0x5876369D: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x587636A0: jmp 0x58829670
        __asm _emit 0xE9
        __asm _emit 0xCB
        __asm _emit 0x5F
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587636A5: cmp eax, 0x133
        __asm _emit 0x3D
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587636AA: jne 0x587636cb
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x587636AC: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587636B2: mov edx, dword ptr [ecx + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587636B8: mov eax, dword ptr [edx + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587636BE: mov dword ptr [esi + 0xa8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587636C4: pop edi
        __asm _emit 0x5F
        // 0x587636C5: pop esi
        __asm _emit 0x5E
        // 0x587636C6: pop ebx
        __asm _emit 0x5B
        // 0x587636C7: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x587636CA: ret
        __asm _emit 0xC3
        // 0x587636CB: cmp eax, 0x15e
        __asm _emit 0x3D
        __asm _emit 0x5E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587636D0: jne 0x587636fc
        __asm _emit 0x75
        __asm _emit 0x2A
        // 0x587636D2: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587636D8: push edi
        __asm _emit 0x57
        // 0x587636D9: push ecx
        __asm _emit 0x51
        // 0x587636DA: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587636E0: push ebx
        __asm _emit 0x53
        // 0x587636E1: call 0x587ba290
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0x6B
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x587636E6: mov edx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587636EC: push edx
        __asm _emit 0x52
        // 0x587636ED: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x95
        __asm _emit 0x21
        __asm _emit 0x00
    }
}

// Ghidra body range 0x587636FC..0x58763768; 108 mapped bytes.
extern "C" __declspec(naked) void FUN_587635a0_segment_01() {
    __asm {
        // 0x587636FC: cmp eax, 0x190
        __asm _emit 0x3D
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763701: je 0x58763754
        __asm _emit 0x74
        __asm _emit 0x51
        // 0x58763703: cmp eax, 0x19b
        __asm _emit 0x3D
        __asm _emit 0x9B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763708: jne 0x58763726
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x5876370A: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876370F: mov ecx, dword ptr [eax + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763715: mov ecx, dword ptr [ecx + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876371B: pop edi
        __asm _emit 0x5F
        // 0x5876371C: pop esi
        __asm _emit 0x5E
        // 0x5876371D: pop ebx
        __asm _emit 0x5B
        // 0x5876371E: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58763721: jmp 0x58868b20
        __asm _emit 0xE9
        __asm _emit 0xFA
        __asm _emit 0x53
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58763726: cmp eax, 0x1f4
        __asm _emit 0x3D
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876372B: jne 0x58763778
        __asm _emit 0x75
        __asm _emit 0x4B
        // 0x5876372D: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763733: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58763735: je 0x58763754
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x58763737: cmp dword ptr [eax + 0x20], 0x15e
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x20
        __asm _emit 0x5E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876373E: jne 0x58763754
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x58763740: mov edx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763746: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876374C: push edi
        __asm _emit 0x57
        // 0x5876374D: push edx
        __asm _emit 0x52
        // 0x5876374E: push ebx
        __asm _emit 0x53
        // 0x5876374F: call 0x587ba290
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0x6B
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x58763754: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876375A: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5876375C: je 0x58763883
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763762: push eax
        __asm _emit 0x50
        // 0x58763763: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0x94
        __asm _emit 0x21
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58763778..0x5876388A; 274 mapped bytes.
extern "C" __declspec(naked) void FUN_587635a0_segment_02() {
    __asm {
        // 0x58763778: cmp eax, 0x258
        __asm _emit 0x3D
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876377D: jne 0x58763797
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x5876377F: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58763784: mov ecx, dword ptr [eax + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876378A: push edi
        __asm _emit 0x57
        // 0x5876378B: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0xDE
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x58763790: pop edi
        __asm _emit 0x5F
        // 0x58763791: pop esi
        __asm _emit 0x5E
        // 0x58763792: pop ebx
        __asm _emit 0x5B
        // 0x58763793: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58763796: ret
        __asm _emit 0xC3
        // 0x58763797: cmp eax, 0x4a7
        __asm _emit 0x3D
        __asm _emit 0xA7
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876379C: jne 0x587637b9
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x5876379E: mov ecx, dword ptr [0x58a245f0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587637A4: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587637A6: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x587637A9: push ebx
        __asm _emit 0x53
        // 0x587637AA: push 0xf233
        __asm _emit 0x68
        __asm _emit 0x33
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587637AF: push ebx
        __asm _emit 0x53
        // 0x587637B0: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587637B2: pop edi
        __asm _emit 0x5F
        // 0x587637B3: pop esi
        __asm _emit 0x5E
        // 0x587637B4: pop ebx
        __asm _emit 0x5B
        // 0x587637B5: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x587637B8: ret
        __asm _emit 0xC3
        // 0x587637B9: cmp eax, 0x4b0
        __asm _emit 0x3D
        __asm _emit 0xB0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587637BE: jne 0x58763883
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587637C4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587637C6: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587637CA: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587637CE: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587637D2: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587637D6: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587637DA: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587637DE: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587637E2: mov eax, dword ptr [0x58a24594]
        __asm _emit 0xA1
        __asm _emit 0x94
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587637E7: mov edx, dword ptr [eax + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x60
        // 0x587637EA: add eax, 0x60
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x60
        // 0x587637ED: sub esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x1C
        // 0x587637F0: mov edi, esp
        __asm _emit 0x8B
        __asm _emit 0xFC
        // 0x587637F2: mov ecx, 7
        __asm _emit 0xB9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587637F7: lea esi, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587637FB: mov dword ptr [esp + 0x2c], 0x20
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763803: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58763805: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58763807: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58763809: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5876380B: pop edi
        __asm _emit 0x5F
        // 0x5876380C: pop esi
        __asm _emit 0x5E
        // 0x5876380D: pop ebx
        __asm _emit 0x5B
        // 0x5876380E: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58763811: ret
        __asm _emit 0xC3
        // 0x58763812: cmp eax, 0x12
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x12
        // 0x58763815: jne 0x58763838
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x58763817: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876381D: mov ecx, dword ptr [ecx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x30
        // 0x58763820: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58763822: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763828: mov edx, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x18
        // 0x5876382B: push ebx
        __asm _emit 0x53
        // 0x5876382C: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x5876382E: push eax
        __asm _emit 0x50
        // 0x5876382F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58763831: pop edi
        __asm _emit 0x5F
        // 0x58763832: pop esi
        __asm _emit 0x5E
        // 0x58763833: pop ebx
        __asm _emit 0x5B
        // 0x58763834: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58763837: ret
        __asm _emit 0xC3
        // 0x58763838: cmp eax, 0x14
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x14
        // 0x5876383B: je 0x58763842
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5876383D: cmp eax, 0x28
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x28
        // 0x58763840: jne 0x58763883
        __asm _emit 0x75
        __asm _emit 0x41
        // 0x58763842: mov eax, dword ptr [0x58a245a0]
        __asm _emit 0xA1
        __asm _emit 0xA0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58763847: mov eax, dword ptr [eax + 0xa00]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876384D: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58763851: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x08
        // 0x58763855: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x58763858: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x5876385B: jne 0x58763883
        __asm _emit 0x75
        __asm _emit 0x26
        // 0x5876385D: mov edx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58763863: mov ecx, dword ptr [edx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x30
        // 0x58763866: mov edx, dword ptr [0x58a245a0]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876386C: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5876386E: mov edx, dword ptr [edx + 0xa00]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763874: mov eax, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x18
        // 0x58763877: push ebx
        __asm _emit 0x53
        // 0x58763878: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x5876387A: push edx
        __asm _emit 0x52
        // 0x5876387B: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5876387D: mov dword ptr [esi + 0xa4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763883: pop edi
        __asm _emit 0x5F
        // 0x58763884: pop esi
        __asm _emit 0x5E
        // 0x58763885: pop ebx
        __asm _emit 0x5B
        // 0x58763886: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58763889: ret
        __asm _emit 0xC3
    }
}
