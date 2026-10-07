// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 198 bytes in 1 exact ranges.
// Source symbol alias: FUN_58975210.

// Ghidra body range 0x58975210..0x589752D6; 198 mapped bytes.
extern "C" __declspec(naked) void FUN_58975210_segment_00() {
    __asm {
        // 0x58975210: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58975214: push ebx
        __asm _emit 0x53
        // 0x58975215: push esi
        __asm _emit 0x56
        // 0x58975216: mov esi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5897521A: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5897521C: cmp eax, 0x3e
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x3E
        // 0x5897521F: mov dword ptr [esi + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x04
        // 0x58975222: je 0x58975243
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x58975224: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58975226: push esi
        __asm _emit 0x56
        // 0x58975227: mov dword ptr [ecx + 0x14], 0xc
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x14
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897522E: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58975230: mov dword ptr [edx + 0x18], 0x3e
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x18
        __asm _emit 0x3E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975237: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58975239: mov dword ptr [ecx + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x1C
        // 0x5897523C: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5897523E: call dword ptr [edx]
        __asm _emit 0xFF
        __asm _emit 0x12
        // 0x58975240: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58975243: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58975247: cmp eax, 0x168
        __asm _emit 0x3D
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897524C: je 0x5897526d
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x5897524E: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58975250: push esi
        __asm _emit 0x56
        // 0x58975251: mov dword ptr [ecx + 0x14], 0x15
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x14
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975258: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5897525A: mov dword ptr [edx + 0x18], 0x168
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x18
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975261: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58975263: mov dword ptr [ecx + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x1C
        // 0x58975266: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58975268: call dword ptr [edx]
        __asm _emit 0xFF
        __asm _emit 0x12
        // 0x5897526A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897526D: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5897526F: push ebp
        __asm _emit 0x55
        // 0x58975270: mov ebp, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x0C
        // 0x58975273: push edi
        __asm _emit 0x57
        // 0x58975274: mov ecx, 0x5a
        __asm _emit 0xB9
        __asm _emit 0x5A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975279: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5897527B: mov edi, esi
        __asm _emit 0x8B
        __asm _emit 0xFE
        // 0x5897527D: push esi
        __asm _emit 0x56
        // 0x5897527E: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xF3
        __asm _emit 0xAB
        // 0x58975280: mov dword ptr [esi], edx
        __asm _emit 0x89
        __asm _emit 0x16
        // 0x58975282: mov dword ptr [esi + 0xc], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x0C
        // 0x58975285: mov byte ptr [esi + 0x10], bl
        __asm _emit 0x88
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x58975288: call 0x58975f50
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897528D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58975290: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58975292: mov dword ptr [esi + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x08
        // 0x58975295: mov dword ptr [esi + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x18
        // 0x58975298: mov dword ptr [esi + 0x44], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x44
        // 0x5897529B: mov dword ptr [esi + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x48
        // 0x5897529E: mov dword ptr [esi + 0x4c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x4C
        // 0x589752A1: pop edi
        __asm _emit 0x5F
        // 0x589752A2: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x589752A5: mov ecx, 4
        __asm _emit 0xB9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589752AA: mov dword ptr [esi + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x589752AD: lea eax, [esi + 0x68]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x589752B0: pop ebp
        __asm _emit 0x5D
        // 0x589752B1: mov dword ptr [eax - 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0xF0
        // 0x589752B4: mov dword ptr [eax], ebx
        __asm _emit 0x89
        __asm _emit 0x18
        // 0x589752B6: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x589752B9: dec ecx
        __asm _emit 0x49
        // 0x589752BA: jne 0x589752b1
        __asm _emit 0x75
        __asm _emit 0xF5
        // 0x589752BC: mov dword ptr [esi + 0x30], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x30
        // 0x589752BF: mov dword ptr [esi + 0x160], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589752C5: mov dword ptr [esi + 0x34], 0x3ff00000
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xF0
        __asm _emit 0x3F
        // 0x589752CC: mov dword ptr [esi + 0x14], 0x64
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x14
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589752D3: pop esi
        __asm _emit 0x5E
        // 0x589752D4: pop ebx
        __asm _emit 0x5B
        // 0x589752D5: ret
        __asm _emit 0xC3
    }
}
