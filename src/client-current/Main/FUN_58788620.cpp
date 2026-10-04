// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58788620 .. +0x154 bytes.
// Source symbol alias: FUN_58788620.
extern "C" __declspec(naked) void FUN_58788620() {
    __asm {
        // 0x58788620: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58788625: sub esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x18
        // 0x58788628: cmp word ptr [eax + 0x105f0], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x0F
        // 0x58788630: push esi
        __asm _emit 0x56
        // 0x58788631: push edi
        __asm _emit 0x57
        // 0x58788632: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58788634: jne 0x587886a4
        __asm _emit 0x75
        __asm _emit 0x6E
        // 0x58788636: mov dword ptr [edi + 0x928], 0
        __asm _emit 0xC7
        __asm _emit 0x87
        __asm _emit 0x28
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788640: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58788642: mov eax, dword ptr [edi + 0x910]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788648: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5878864A: je 0x58788680
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x5878864C: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58788652: mov esi, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x72
        __asm _emit 0x04
        // 0x58788655: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58788657: je 0x58788680
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x58788659: mov edx, dword ptr [ecx + eax]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x5878865C: mov eax, dword ptr [edx + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788662: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58788664: je 0x58788680
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x58788666: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x58788669: je 0x58788680
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x5878866B: movzx eax, byte ptr [esi + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788672: cmp dword ptr [edx + 0xb8], eax
        __asm _emit 0x39
        __asm _emit 0x82
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788678: jne 0x58788680
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x5878867A: inc dword ptr [edi + 0x928]
        __asm _emit 0xFF
        __asm _emit 0x87
        __asm _emit 0x28
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788680: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58788686: mov eax, dword ptr [edx + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878868C: mov eax, dword ptr [eax + ecx + 0x5b8]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0xB8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788693: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788698: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5878869C: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5878869F: cmp ecx, 0x18
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x18
        // 0x587886A2: jl 0x58788642
        __asm _emit 0x7C
        __asm _emit 0x9E
        // 0x587886A4: push ebx
        __asm _emit 0x53
        // 0x587886A5: lea esi, [edi + 0x870]
        __asm _emit 0x8D
        __asm _emit 0xB7
        __asm _emit 0x70
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587886AB: push ebp
        __asm _emit 0x55
        // 0x587886AC: mov ebp, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x10
        // 0x587886AF: cmp dword ptr [esi + 0xc], ebp
        __asm _emit 0x39
        __asm _emit 0x6E
        __asm _emit 0x0C
        // 0x587886B2: jbe 0x587886b9
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587886B4: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0x45
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x587886B9: mov ebx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x587886BC: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587886BE: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587886C2: cmp ebx, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x587886C5: jbe 0x587886cc
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587886C7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0x45
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x587886CC: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587886D0: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587886D2: push ebp
        __asm _emit 0x55
        // 0x587886D3: push ecx
        __asm _emit 0x51
        // 0x587886D4: push ebx
        __asm _emit 0x53
        // 0x587886D5: push eax
        __asm _emit 0x50
        // 0x587886D6: lea edx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587886DA: push edx
        __asm _emit 0x52
        // 0x587886DB: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587886DD: call 0x587aedb0
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0x66
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587886E2: mov ebx, dword ptr [edi + 0x868]
        __asm _emit 0x8B
        __asm _emit 0x9F
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587886E8: cmp dword ptr [edi + 0x864], ebx
        __asm _emit 0x39
        __asm _emit 0x9F
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587886EE: lea esi, [edi + 0x858]
        __asm _emit 0x8D
        __asm _emit 0xB7
        __asm _emit 0x58
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587886F4: jbe 0x587886fb
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587886F6: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0x45
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x587886FB: mov ebp, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x0C
        // 0x587886FE: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58788700: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58788704: cmp ebp, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x6E
        __asm _emit 0x10
        // 0x58788707: jbe 0x5878870e
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58788709: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0x45
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x5878870E: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58788712: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58788714: push ebx
        __asm _emit 0x53
        // 0x58788715: push ecx
        __asm _emit 0x51
        // 0x58788716: push ebp
        __asm _emit 0x55
        // 0x58788717: push eax
        __asm _emit 0x50
        // 0x58788718: lea edx, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5878871C: push edx
        __asm _emit 0x52
        // 0x5878871D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5878871F: call 0x587aedb0
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0x66
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58788724: mov eax, dword ptr [edi + 0x910]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878872A: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5878872C: pop ebp
        __asm _emit 0x5D
        // 0x5878872D: pop ebx
        __asm _emit 0x5B
        // 0x5878872E: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x58788730: je 0x58788741
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x58788732: push eax
        __asm _emit 0x50
        // 0x58788733: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0x45
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58788738: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5878873B: mov dword ptr [edi + 0x910], esi
        __asm _emit 0x89
        __asm _emit 0xB7
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788741: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x58788744: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x58788746: je 0x58788753
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58788748: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5878874A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5878874C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5878874E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58788750: mov dword ptr [edi + 4], esi
        __asm _emit 0x89
        __asm _emit 0x77
        __asm _emit 0x04
        // 0x58788753: mov ecx, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x08
        // 0x58788756: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x58788758: je 0x58788765
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5878875A: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5878875C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5878875E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58788760: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58788762: mov dword ptr [edi + 8], esi
        __asm _emit 0x89
        __asm _emit 0x77
        __asm _emit 0x08
        // 0x58788765: mov ecx, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x10
        // 0x58788768: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x5878876A: je 0x58788777
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5878876C: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5878876E: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58788770: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58788772: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
    }
}
