// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 215 bytes in 1 exact ranges.
// Source symbol alias: FUN_58743400.

// Ghidra body range 0x58743400..0x587434D7; 215 mapped bytes.
extern "C" __declspec(naked) void FUN_58743400_segment_00() {
    __asm {
        // 0x58743400: push ebx
        __asm _emit 0x53
        // 0x58743401: mov ebx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58743405: push esi
        __asm _emit 0x56
        // 0x58743406: lea eax, [ebx*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xDD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874340D: push edi
        __asm _emit 0x57
        // 0x5874340E: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58743410: sub eax, ebx
        __asm _emit 0x2B
        __asm _emit 0xC3
        // 0x58743412: mov ecx, dword ptr [edi + eax*8 + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0xC7
        __asm _emit 0x30
        // 0x58743416: lea esi, [edi + eax*8]
        __asm _emit 0x8D
        __asm _emit 0x34
        __asm _emit 0xC7
        // 0x58743419: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5874341B: je 0x5874349b
        __asm _emit 0x74
        __asm _emit 0x7E
        // 0x5874341D: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0x32
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58743422: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58743427: je 0x58743436
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x58743429: pop edi
        __asm _emit 0x5F
        // 0x5874342A: mov dword ptr [esi + 0x30], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743431: pop esi
        __asm _emit 0x5E
        // 0x58743432: pop ebx
        __asm _emit 0x5B
        // 0x58743433: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58743436: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x58743439: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874343B: je 0x5874344c
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x5874343D: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x58743440: je 0x5874344c
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58743442: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x58743445: je 0x5874344c
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58743447: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x5874344A: jne 0x5874349b
        __asm _emit 0x75
        __asm _emit 0x4F
        // 0x5874344C: lea ecx, [ebx + 0x139]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743452: push ebp
        __asm _emit 0x55
        // 0x58743453: mov ebp, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x2F
        // 0x58743455: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x58743458: mov edx, dword ptr [ecx + ebp]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x29
        // 0x5874345B: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5874345D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874345F: je 0x5874347b
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x58743461: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x58743464: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58743466: je 0x58743474
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x58743468: mov ecx, dword ptr [ecx + 0x514]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874346E: cmp dword ptr [ecx + 0x64], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x58743472: jle 0x587434a1
        __asm _emit 0x7E
        __asm _emit 0x2D
        // 0x58743474: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x58743477: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58743479: jne 0x58743461
        __asm _emit 0x75
        __asm _emit 0xE6
        // 0x5874347B: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5874347D: je 0x5874349a
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x5874347F: cmp dword ptr [edx + 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x7A
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58743483: je 0x5874349a
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x58743485: mov esi, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x30
        // 0x58743488: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5874348B: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x5874348E: push ecx
        __asm _emit 0x51
        // 0x5874348F: push edx
        __asm _emit 0x52
        // 0x58743490: push ebx
        __asm _emit 0x53
        // 0x58743491: push ebp
        __asm _emit 0x55
        // 0x58743492: call 0x587474f0
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743497: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5874349A: pop ebp
        __asm _emit 0x5D
        // 0x5874349B: pop edi
        __asm _emit 0x5F
        // 0x5874349C: pop esi
        __asm _emit 0x5E
        // 0x5874349D: pop ebx
        __asm _emit 0x5B
        // 0x5874349E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587434A1: mov dl, byte ptr [esi + 0xc]
        __asm _emit 0x8A
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x587434A4: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x587434A6: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587434AA: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x587434AD: push eax
        __asm _emit 0x50
        // 0x587434AE: mov dword ptr [esi + 0x30], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587434B5: mov dword ptr [esi + 0x34], 6
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587434BC: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x587434BE: or dl, 0x40
        __asm _emit 0x80
        __asm _emit 0xCA
        __asm _emit 0x40
        // 0x587434C1: push 0x16
        __asm _emit 0x6A
        __asm _emit 0x16
        // 0x587434C3: mov byte ptr [esp + 0x20], dl
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587434C7: mov byte ptr [esp + 0x22], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x22
        // 0x587434CB: call 0x588e4260
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0x0D
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587434D0: pop ebp
        __asm _emit 0x5D
        // 0x587434D1: pop edi
        __asm _emit 0x5F
        // 0x587434D2: pop esi
        __asm _emit 0x5E
        // 0x587434D3: pop ebx
        __asm _emit 0x5B
        // 0x587434D4: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
