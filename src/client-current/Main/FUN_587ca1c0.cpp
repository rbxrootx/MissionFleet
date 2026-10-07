// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 235 bytes in 1 exact ranges.
// Source symbol alias: FUN_587ca1c0.

// Ghidra body range 0x587CA1C0..0x587CA2AB; 235 mapped bytes.
extern "C" __declspec(naked) void FUN_587ca1c0_segment_00() {
    __asm {
        // 0x587CA1C0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587CA1C2: push 0x589817b3
        __asm _emit 0x68
        __asm _emit 0xB3
        __asm _emit 0x17
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587CA1C7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CA1CD: push eax
        __asm _emit 0x50
        // 0x587CA1CE: push ecx
        __asm _emit 0x51
        // 0x587CA1CF: push ebx
        __asm _emit 0x53
        // 0x587CA1D0: push ebp
        __asm _emit 0x55
        // 0x587CA1D1: push esi
        __asm _emit 0x56
        // 0x587CA1D2: push edi
        __asm _emit 0x57
        // 0x587CA1D3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587CA1D8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587CA1DA: push eax
        __asm _emit 0x50
        // 0x587CA1DB: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587CA1DF: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CA1E5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587CA1E7: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587CA1EB: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587CA1EF: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587CA1F3: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587CA1F7: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587CA1FB: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587CA1FF: push eax
        __asm _emit 0x50
        // 0x587CA200: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587CA204: push ecx
        __asm _emit 0x51
        // 0x587CA205: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587CA209: push edx
        __asm _emit 0x52
        // 0x587CA20A: push eax
        __asm _emit 0x50
        // 0x587CA20B: push ebp
        __asm _emit 0x55
        // 0x587CA20C: push ebx
        __asm _emit 0x53
        // 0x587CA20D: push ecx
        __asm _emit 0x51
        // 0x587CA20E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CA210: call 0x5875bb10
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0x18
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587CA215: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x587CA217: mov dword ptr [esp + 0x24], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CA21F: mov dword ptr [esi], 0x5899b068
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x68
        __asm _emit 0xB0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587CA225: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0x2A
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587CA22A: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587CA22C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587CA22F: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587CA233: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x587CA238: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587CA23A: je 0x587ca25f
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x587CA23C: mov edx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587CA240: push edx
        __asm _emit 0x52
        // 0x587CA241: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587CA243: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587CA245: push ebp
        __asm _emit 0x55
        // 0x587CA246: push ebx
        __asm _emit 0x53
        // 0x587CA247: push esi
        __asm _emit 0x56
        // 0x587CA248: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587CA24A: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0x8F
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CA24F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587CA251: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587CA257: mov dword ptr [edi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x50
        // 0x587CA25A: mov dword ptr [edi + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x54
        // 0x587CA25D: jmp 0x587ca261
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CA25F: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587CA261: mov dword ptr [esi + 0x70], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x70
        // 0x587CA264: mov byte ptr [esi + 0x74], 1
        __asm _emit 0xC6
        __asm _emit 0x46
        __asm _emit 0x74
        __asm _emit 0x01
        // 0x587CA268: mov byte ptr [esi + 0x75], 1
        __asm _emit 0xC6
        __asm _emit 0x46
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x587CA26C: mov dword ptr [esi + 0x78], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CA273: mov dword ptr [esi + 0x7c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x7C
        // 0x587CA276: mov dword ptr [esi + 0x80], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CA27C: or word ptr [esi + 0x24], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587CA281: mov eax, 0xbfff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CA286: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587CA28A: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CA28F: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x587CA293: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587CA295: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587CA299: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CA2A0: pop ecx
        __asm _emit 0x59
        // 0x587CA2A1: pop edi
        __asm _emit 0x5F
        // 0x587CA2A2: pop esi
        __asm _emit 0x5E
        // 0x587CA2A3: pop ebp
        __asm _emit 0x5D
        // 0x587CA2A4: pop ebx
        __asm _emit 0x5B
        // 0x587CA2A5: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587CA2A8: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
