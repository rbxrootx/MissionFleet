// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 278 bytes in 2 exact ranges.
// Source symbol alias: FUN_5889a240.

// Ghidra body range 0x5889A240..0x5889A327; 231 mapped bytes.
extern "C" __declspec(naked) void FUN_5889a240_segment_00() {
    __asm {
        // 0x5889A240: push ebp
        __asm _emit 0x55
        // 0x5889A241: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5889A243: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5889A245: push 0x58987430
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x74
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889A24A: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889A250: push eax
        __asm _emit 0x50
        // 0x5889A251: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x5889A254: push ebx
        __asm _emit 0x53
        // 0x5889A255: push esi
        __asm _emit 0x56
        // 0x5889A256: push edi
        __asm _emit 0x57
        // 0x5889A257: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889A25C: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xC5
        // 0x5889A25E: push eax
        __asm _emit 0x50
        // 0x5889A25F: lea eax, [ebp - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x5889A262: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889A268: mov dword ptr [ebp - 0x10], esp
        __asm _emit 0x89
        __asm _emit 0x65
        __asm _emit 0xF0
        // 0x5889A26B: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5889A26D: mov edi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x5889A270: cmp edi, 0xaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0x0A
        // 0x5889A276: jbe 0x5889a27d
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5889A278: call 0x588f6660
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0xC3
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x5889A27D: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5889A280: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889A282: je 0x5889a29a
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x5889A284: mov ecx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x5889A287: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x5889A289: mov eax, 0x2aaaaaab
        __asm _emit 0xB8
        __asm _emit 0xAB
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0x2A
        // 0x5889A28E: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5889A290: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5889A293: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5889A295: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5889A298: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5889A29A: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5889A29C: jae 0x5889a345
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889A2A2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5889A2A4: push edi
        __asm _emit 0x57
        // 0x5889A2A5: call 0x58898610
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0xE3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889A2AA: mov edi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x5889A2AD: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5889A2B0: mov dword ptr [ebp - 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x5889A2B3: mov dword ptr [ebp - 4], 0
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889A2BA: cmp dword ptr [esi + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x5889A2BD: jbe 0x5889a2c4
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5889A2BF: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0x29
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5889A2C4: mov ebx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x5889A2C7: cmp ebx, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x5889A2CA: jbe 0x5889a2d1
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5889A2CC: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0x29
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5889A2D1: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x08
        // 0x5889A2D4: mov byte ptr [ebp - 0x18], 0
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xE8
        __asm _emit 0x00
        // 0x5889A2D8: mov ecx, dword ptr [ebp - 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xE8
        // 0x5889A2DB: push ecx
        __asm _emit 0x51
        // 0x5889A2DC: push edx
        __asm _emit 0x52
        // 0x5889A2DD: lea eax, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5889A2E0: push eax
        __asm _emit 0x50
        // 0x5889A2E1: mov eax, dword ptr [ebp - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x5889A2E4: push eax
        __asm _emit 0x50
        // 0x5889A2E5: push edi
        __asm _emit 0x57
        // 0x5889A2E6: push ebx
        __asm _emit 0x53
        // 0x5889A2E7: call 0x58899bb0
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889A2EC: mov ebx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x5889A2EF: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x5889A2F2: sub ecx, ebx
        __asm _emit 0x2B
        __asm _emit 0xCB
        // 0x5889A2F4: mov eax, 0x2aaaaaab
        __asm _emit 0xB8
        __asm _emit 0xAB
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0x2A
        // 0x5889A2F9: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5889A2FB: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5889A2FE: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x5889A300: shr edi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x1F
        // 0x5889A303: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5889A306: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x5889A308: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5889A30A: je 0x5889a32a
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x5889A30C: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x5889A30F: push ecx
        __asm _emit 0x51
        // 0x5889A310: lea eax, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5889A313: push eax
        __asm _emit 0x50
        // 0x5889A314: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x5889A317: push eax
        __asm _emit 0x50
        // 0x5889A318: push ebx
        __asm _emit 0x53
        // 0x5889A319: call 0x58899c80
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889A31E: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x5889A321: push edx
        __asm _emit 0x52
        // 0x5889A322: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x29
        __asm _emit 0x0E
        __asm _emit 0x00
    }
}

// Ghidra body range 0x5889A32A..0x5889A359; 47 mapped bytes.
extern "C" __declspec(naked) void FUN_5889a240_segment_01() {
    __asm {
        // 0x5889A32A: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5889A32D: lea ecx, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x40
        // 0x5889A330: mov eax, dword ptr [ebp - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x5889A333: lea edx, [eax + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xC8
        // 0x5889A336: lea ecx, [edi + edi*2]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x7F
        // 0x5889A339: mov dword ptr [esi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x14
        // 0x5889A33C: lea edx, [eax + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xC8
        // 0x5889A33F: mov dword ptr [esi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x10
        // 0x5889A342: mov dword ptr [esi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5889A345: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x5889A348: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889A34F: pop ecx
        __asm _emit 0x59
        // 0x5889A350: pop edi
        __asm _emit 0x5F
        // 0x5889A351: pop esi
        __asm _emit 0x5E
        // 0x5889A352: pop ebx
        __asm _emit 0x5B
        // 0x5889A353: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x5889A355: pop ebp
        __asm _emit 0x5D
        // 0x5889A356: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
