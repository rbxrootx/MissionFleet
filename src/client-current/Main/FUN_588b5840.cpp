// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 841 bytes in 3 exact ranges.
// Source symbol alias: FUN_588b5840.

// Ghidra body range 0x588B5840..0x588B59FD; 445 mapped bytes.
extern "C" __declspec(naked) void FUN_588b5840_segment_00() {
    __asm {
        // 0x588B5840: push ebx
        __asm _emit 0x53
        // 0x588B5841: push ebp
        __asm _emit 0x55
        // 0x588B5842: push esi
        __asm _emit 0x56
        // 0x588B5843: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588B5845: movzx eax, word ptr [esi + 0x19c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B584C: push edi
        __asm _emit 0x57
        // 0x588B584D: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x588B5851: je 0x588b5864
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588B5853: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0B
        // 0x588B5857: je 0x588b5864
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588B5859: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B585F: call 0x587b9110
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0x38
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x588B5864: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588B5868: mov ecx, 0xe4ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B586D: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x588B5870: mov edx, 0x400
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5875: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x588B5878: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588B587C: mov eax, 0xfffd
        __asm _emit 0xB8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5881: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588B5885: or word ptr [esi + 0x24], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x05
        // 0x588B588A: mov ecx, dword ptr [0x58a245ec]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B5890: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588B5894: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x588B5898: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x588B589B: cmp dl, 2
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588B589E: jne 0x588b58ad
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x588B58A0: mov ecx, dword ptr [0x58a245ec]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B58A6: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588B58A8: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588B58AB: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588B58AD: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B58B3: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588B58B5: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588B58B8: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588B58BA: mov eax, dword ptr [0x58a24584]
        __asm _emit 0xA1
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B58BF: mov ecx, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x30
        // 0x588B58C2: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588B58C4: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588B58C6: push ebx
        __asm _emit 0x53
        // 0x588B58C7: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x588B58C9: push eax
        __asm _emit 0x50
        // 0x588B58CA: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x588B58CD: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588B58CF: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588B58D2: mov dword ptr [esi + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x588B58D5: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B58DB: mov dword ptr [esi + 0x54], 0xfffffe3e
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x54
        __asm _emit 0x3E
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B58E2: call 0x5875f320
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0x9A
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588B58E7: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588B58E9: mov byte ptr [esi + 0x1a0], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B58EF: mov word ptr [esi + 0x19c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B58F6: lea edi, [esi + 0xf0]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B58FC: lea ebp, [ebx + 3]
        __asm _emit 0x8D
        __asm _emit 0x6B
        __asm _emit 0x03
        // 0x588B58FF: nop
        __asm _emit 0x90
        // 0x588B5900: mov ecx, dword ptr [edi - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xF4
        // 0x588B5903: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B5908: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588B590A: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0x2E
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B590F: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588B5912: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x588B5915: jne 0x588b5900
        __asm _emit 0x75
        __asm _emit 0xE9
        // 0x588B5917: mov eax, dword ptr [esi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B591D: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x588B5920: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5926: mov dword ptr [ecx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x50
        // 0x588B5929: mov edx, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B592F: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x588B5932: mov eax, dword ptr [esi + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5938: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x588B593B: mov ecx, dword ptr [esi + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5941: mov dword ptr [ecx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x50
        // 0x588B5944: mov edx, dword ptr [esi + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B594A: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x588B594D: mov eax, dword ptr [esi + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5953: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x588B5956: mov ecx, dword ptr [esi + 0x128]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B595C: mov dword ptr [ecx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x50
        // 0x588B595F: mov edx, dword ptr [esi + 0x10c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5965: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x588B5968: mov eax, dword ptr [esi + 0x12c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B596E: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x588B5971: mov ecx, dword ptr [esi + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5977: mov dword ptr [ecx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x50
        // 0x588B597A: mov edx, dword ptr [esi + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5980: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x588B5983: mov eax, dword ptr [esi + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5989: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x588B598C: mov ecx, dword ptr [esi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5992: mov dword ptr [ecx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x50
        // 0x588B5995: mov edx, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B599B: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x588B599E: mov eax, dword ptr [esi + 0x138]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B59A4: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x588B59A7: cmp dword ptr [esi + 0x1cc], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0xCC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B59AD: jne 0x588b5a50
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B59B3: cmp dword ptr [esi + 0x188], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B59B9: je 0x588b5a00
        __asm _emit 0x74
        __asm _emit 0x45
        // 0x588B59BB: movzx eax, word ptr [esi + 0x17e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x7E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B59C2: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B59C5: jbe 0x588b5a00
        __asm _emit 0x76
        __asm _emit 0x39
        // 0x588B59C7: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B59C9: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588B59CB: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588B59CE: jae 0x588b59f1
        __asm _emit 0x73
        __asm _emit 0x21
        // 0x588B59D0: mov edx, dword ptr [esi + 0x188]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B59D6: mov ecx, dword ptr [edx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0xBA
        // 0x588B59D9: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588B59DB: je 0x588b59e5
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588B59DD: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588B59DF: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588B59E1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588B59E3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588B59E5: movzx eax, word ptr [esi + 0x17e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x7E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B59EC: inc edi
        __asm _emit 0x47
        // 0x588B59ED: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588B59EF: jl 0x588b59d0
        __asm _emit 0x7C
        __asm _emit 0xDF
        // 0x588B59F1: mov ecx, dword ptr [esi + 0x188]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B59F7: push ecx
        __asm _emit 0x51
        // 0x588B59F8: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x72
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}

// Ghidra body range 0x588B5A00..0x588B5A4D; 77 mapped bytes.
extern "C" __declspec(naked) void FUN_588b5840_segment_01() {
    __asm {
        // 0x588B5A00: cmp dword ptr [esi + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5A06: je 0x588b5a50
        __asm _emit 0x74
        __asm _emit 0x48
        // 0x588B5A08: movzx eax, word ptr [esi + 0x180]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5A0F: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B5A12: jbe 0x588b5a50
        __asm _emit 0x76
        __asm _emit 0x3C
        // 0x588B5A14: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588B5A16: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588B5A18: cmp dx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x588B5A1B: jae 0x588b5a41
        __asm _emit 0x73
        __asm _emit 0x24
        // 0x588B5A1D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x588B5A20: mov eax, dword ptr [esi + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5A26: mov ecx, dword ptr [eax + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0xB8
        // 0x588B5A29: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588B5A2B: je 0x588b5a35
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588B5A2D: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588B5A2F: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x588B5A31: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588B5A33: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588B5A35: movzx ecx, word ptr [esi + 0x180]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5A3C: inc edi
        __asm _emit 0x47
        // 0x588B5A3D: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x588B5A3F: jl 0x588b5a20
        __asm _emit 0x7C
        __asm _emit 0xDF
        // 0x588B5A41: mov edx, dword ptr [esi + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5A47: push edx
        __asm _emit 0x52
        // 0x588B5A48: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0x71
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}

// Ghidra body range 0x588B5A50..0x588B5B8F; 319 mapped bytes.
extern "C" __declspec(naked) void FUN_588b5840_segment_02() {
    __asm {
        // 0x588B5A50: mov eax, dword ptr [esi + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5A56: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588B5A5A: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x08
        // 0x588B5A5E: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x588B5A61: cmp cl, 1
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x01
        // 0x588B5A64: je 0x588b5a7a
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x588B5A66: mov edx, dword ptr [esi + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5A6C: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x588B5A70: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x588B5A74: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1F
        // 0x588B5A76: cmp al, 2
        __asm _emit 0x3C
        __asm _emit 0x02
        // 0x588B5A78: jne 0x588b5a87
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x588B5A7A: mov ecx, dword ptr [esi + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5A80: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588B5A82: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x588B5A85: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588B5A87: mov ecx, dword ptr [esi + 0x16c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5A8D: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588B5A91: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x588B5A95: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x588B5A98: cmp dl, 1
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x01
        // 0x588B5A9B: je 0x588b5ab3
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588B5A9D: mov eax, dword ptr [esi + 0x16c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5AA3: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588B5AA7: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x08
        // 0x588B5AAB: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x588B5AAE: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x588B5AB1: jne 0x588b5ac0
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x588B5AB3: mov ecx, dword ptr [esi + 0x16c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5AB9: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588B5ABB: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x588B5ABE: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588B5AC0: mov ecx, dword ptr [esi + 0x1cc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5AC6: push ecx
        __asm _emit 0x51
        // 0x588B5AC7: mov ecx, dword ptr [esi + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5ACD: call 0x588bb5e0
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x5B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5AD2: mov edx, dword ptr [esi + 0x1cc]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xCC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5AD8: mov ecx, dword ptr [esi + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5ADE: push edx
        __asm _emit 0x52
        // 0x588B5ADF: call 0x588bcb00
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5AE4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B5AE6: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B5AE8: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588B5AEA: mov word ptr [esi + 0x184], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5AF1: mov word ptr [esi + 0x182], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5AF8: mov word ptr [esi + 0x180], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5AFF: mov word ptr [esi + 0x17e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x7E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5B06: mov word ptr [esi + 0x17c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5B0D: mov word ptr [esi + 0x17a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x7A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5B14: mov word ptr [esi + 0x178], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5B1B: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B5B20: mov edi, 0x32
        __asm _emit 0xBF
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5B25: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5B2B: jle 0x588b5b43
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588B5B2D: cmp dword ptr [eax + 0x194], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5B33: je 0x588b5b43
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588B5B35: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5B3B: mov ecx, dword ptr [ecx + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5B41: jmp 0x588b5b45
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B5B43: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B5B45: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B5B4B: push edx
        __asm _emit 0x52
        // 0x588B5B4C: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x1E
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B5B51: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B5B56: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5B5C: jle 0x588b5b74
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588B5B5E: cmp dword ptr [eax + 0x194], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5B64: je 0x588b5b74
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588B5B66: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5B6C: mov ecx, dword ptr [eax + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5B72: jmp 0x588b5b76
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B5B74: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B5B76: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588B5B78: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588B5B7B: push ebx
        __asm _emit 0x53
        // 0x588B5B7C: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588B5B7E: pop edi
        __asm _emit 0x5F
        // 0x588B5B7F: mov dword ptr [esi + 0x1d4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xD4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5B85: mov dword ptr [esi + 0x1d8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xD8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5B8B: pop esi
        __asm _emit 0x5E
        // 0x588B5B8C: pop ebp
        __asm _emit 0x5D
        // 0x588B5B8D: pop ebx
        __asm _emit 0x5B
        // 0x588B5B8E: ret
        __asm _emit 0xC3
    }
}
