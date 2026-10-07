// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 251 bytes in 1 exact ranges.
// Source symbol alias: FUN_58975720.

// Ghidra body range 0x58975720..0x5897581B; 251 mapped bytes.
extern "C" __declspec(naked) void FUN_58975720_segment_00() {
    __asm {
        // 0x58975720: push ebx
        __asm _emit 0x53
        // 0x58975721: push esi
        __asm _emit 0x56
        // 0x58975722: mov esi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58975726: cmp dword ptr [esi + 0x14], 0x64
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x14
        __asm _emit 0x64
        // 0x5897572A: je 0x58975745
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x5897572C: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5897572E: push esi
        __asm _emit 0x56
        // 0x5897572F: mov dword ptr [eax + 0x14], 0x14
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x14
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975736: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58975738: mov edx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x14
        // 0x5897573B: mov dword ptr [ecx + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x18
        // 0x5897573E: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58975740: call dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x10
        // 0x58975742: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58975745: mov eax, dword ptr [esi + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x44
        // 0x58975748: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5897574A: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5897574C: jne 0x58975760
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x5897574E: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58975751: push 0x348
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975756: push ebx
        __asm _emit 0x53
        // 0x58975757: push esi
        __asm _emit 0x56
        // 0x58975758: call dword ptr [ecx]
        __asm _emit 0xFF
        __asm _emit 0x11
        // 0x5897575A: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5897575D: mov dword ptr [esi + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x44
        // 0x58975760: push ebp
        __asm _emit 0x55
        // 0x58975761: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58975763: push 0x4b
        __asm _emit 0x6A
        __asm _emit 0x4B
        // 0x58975765: push esi
        __asm _emit 0x56
        // 0x58975766: mov dword ptr [esi + 0x38], 8
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x38
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897576D: call 0x58975700
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58975772: push esi
        __asm _emit 0x56
        // 0x58975773: call 0x58975820
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975778: mov ecx, 0xffffff78
        __asm _emit 0xB9
        __asm _emit 0x78
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897577D: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58975780: lea eax, [esi + 0x88]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975786: sub ecx, esi
        __asm _emit 0x2B
        __asm _emit 0xCE
        // 0x58975788: mov dl, 5
        __asm _emit 0xB2
        __asm _emit 0x05
        // 0x5897578A: mov byte ptr [eax - 0x10], bl
        __asm _emit 0x88
        __asm _emit 0x58
        __asm _emit 0xF0
        // 0x5897578D: mov byte ptr [eax], 1
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58975790: mov byte ptr [eax + 0x10], dl
        __asm _emit 0x88
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58975793: inc eax
        __asm _emit 0x40
        // 0x58975794: lea ebp, [ecx + eax]
        __asm _emit 0x8D
        __asm _emit 0x2C
        __asm _emit 0x01
        // 0x58975797: cmp ebp, 0x10
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x10
        // 0x5897579A: jl 0x5897578a
        __asm _emit 0x7C
        __asm _emit 0xEE
        // 0x5897579C: mov eax, dword ptr [esi + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x38
        // 0x5897579F: mov dword ptr [esi + 0xac], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589757A5: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x589757A8: mov dword ptr [esi + 0xa8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589757AE: mov byte ptr [esi + 0xb0], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589757B4: mov byte ptr [esi + 0xb1], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0xB1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589757BA: mov byte ptr [esi + 0xb2], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0xB2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589757C0: pop ebp
        __asm _emit 0x5D
        // 0x589757C1: jle 0x589757ca
        __asm _emit 0x7E
        __asm _emit 0x07
        // 0x589757C3: mov byte ptr [esi + 0xb2], 1
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0xB2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x589757CA: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589757CF: push esi
        __asm _emit 0x56
        // 0x589757D0: mov byte ptr [esi + 0xb3], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0xB3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589757D6: mov dword ptr [esi + 0xb4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589757DC: mov dword ptr [esi + 0xb8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589757E2: mov dword ptr [esi + 0xbc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589757E8: mov dword ptr [esi + 0xc0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589757EE: mov byte ptr [esi + 0xc5], 1
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x589757F5: mov byte ptr [esi + 0xc6], 1
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x589757FC: mov byte ptr [esi + 0xc7], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975802: mov word ptr [esi + 0xc8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975809: mov word ptr [esi + 0xca], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xCA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975810: call 0x58975920
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975815: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58975818: pop esi
        __asm _emit 0x5E
        // 0x58975819: pop ebx
        __asm _emit 0x5B
        // 0x5897581A: ret
        __asm _emit 0xC3
    }
}
