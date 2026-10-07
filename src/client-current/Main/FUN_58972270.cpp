// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 464 bytes in 1 exact ranges.
// Source symbol alias: FUN_58972270.

// Ghidra body range 0x58972270..0x58972440; 464 mapped bytes.
extern "C" __declspec(naked) void FUN_58972270_segment_00() {
    __asm {
        // 0x58972270: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972276: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58972278: push 0x5898ada6
        __asm _emit 0x68
        __asm _emit 0xA6
        __asm _emit 0xAD
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5897227D: push eax
        __asm _emit 0x50
        // 0x5897227E: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58972282: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972289: sub esp, 0x848
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x48
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897228F: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x58972292: push esi
        __asm _emit 0x56
        // 0x58972293: push edi
        __asm _emit 0x57
        // 0x58972294: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58972296: jne 0x58972359
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xBD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897229C: push eax
        __asm _emit 0x50
        // 0x5897229D: lea ecx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x589722A1: call 0x589728d0
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589722A6: mov dword ptr [esp + 8], 0x589a3030
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x30
        __asm _emit 0x30
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x589722AE: push esi
        __asm _emit 0x56
        // 0x589722AF: lea ecx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x589722B3: mov dword ptr [esp + 0x85c], 0
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x5C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589722BE: call 0x58972c70
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589722C3: mov eax, dword ptr [esp + 0x860]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589722CA: lea ecx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x589722CE: push eax
        __asm _emit 0x50
        // 0x589722CF: call 0x58973580
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589722D4: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x589722D6: je 0x58972304
        __asm _emit 0x74
        __asm _emit 0x2C
        // 0x589722D8: lea ecx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x589722DC: mov dword ptr [esp + 0x858], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589722E7: mov dword ptr [esp + 8], 0x589a302c
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x2C
        __asm _emit 0x30
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x589722EF: call 0x589729a0
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589722F4: lea ecx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x589722F8: call 0x589728f0
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589722FD: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x589722FF: jmp 0x58972427
        __asm _emit 0xE9
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972304: lea ecx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58972308: call 0x58972740
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897230D: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5897230F: or ecx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFF
        // 0x58972312: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58972314: lea edx, [esi + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x44
        // 0x58972317: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xF2
        __asm _emit 0xAE
        // 0x58972319: not ecx
        __asm _emit 0xF7
        __asm _emit 0xD1
        // 0x5897231B: sub edi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF9
        // 0x5897231D: mov dword ptr [esp + 0x858], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58972328: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5897232A: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x5897232C: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x5897232E: shr ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x02
        // 0x58972331: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58972333: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58972335: and ecx, 3
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x03
        // 0x58972338: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA4
        // 0x5897233A: lea ecx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5897233E: mov dword ptr [esp + 8], 0x589a302c
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x2C
        __asm _emit 0x30
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58972346: call 0x589729a0
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897234B: lea ecx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5897234F: call 0x589728f0
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972354: jmp 0x58972425
        __asm _emit 0xE9
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972359: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x5897235C: jne 0x58972400
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972362: lea ecx, [esp + 0x1c4]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972369: call 0x58972ce0
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897236E: push esi
        __asm _emit 0x56
        // 0x5897236F: lea ecx, [esp + 0x1c8]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972376: mov dword ptr [esp + 0x85c], 1
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x5C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972381: call 0x58972c70
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972386: mov ecx, dword ptr [esp + 0x860]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897238D: push ecx
        __asm _emit 0x51
        // 0x5897238E: lea ecx, [esp + 0x1c8]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972395: call 0x58973020
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897239A: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5897239C: je 0x589723b9
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x5897239E: lea ecx, [esp + 0x1c4]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589723A5: mov dword ptr [esp + 0x858], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589723B0: call 0x58972d30
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589723B5: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x589723B7: jmp 0x58972427
        __asm _emit 0xEB
        __asm _emit 0x6E
        // 0x589723B9: lea ecx, [esp + 0x1c4]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589723C0: call 0x58972740
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589723C5: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x589723C7: or ecx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFF
        // 0x589723CA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x589723CC: lea edx, [esi + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x44
        // 0x589723CF: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xF2
        __asm _emit 0xAE
        // 0x589723D1: not ecx
        __asm _emit 0xF7
        __asm _emit 0xD1
        // 0x589723D3: sub edi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF9
        // 0x589723D5: mov dword ptr [esp + 0x858], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589723E0: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x589723E2: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x589723E4: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x589723E6: shr ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x02
        // 0x589723E9: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x589723EB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x589723ED: and ecx, 3
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x03
        // 0x589723F0: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA4
        // 0x589723F2: lea ecx, [esp + 0x1c4]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589723F9: call 0x58972d30
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589723FE: jmp 0x58972425
        __asm _emit 0xEB
        __asm _emit 0x25
        // 0x58972400: mov edi, 0x589ce5e4
        __asm _emit 0xBF
        __asm _emit 0xE4
        __asm _emit 0xE5
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58972405: or ecx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFF
        // 0x58972408: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5897240A: lea edx, [esi + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x44
        // 0x5897240D: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xF2
        __asm _emit 0xAE
        // 0x5897240F: not ecx
        __asm _emit 0xF7
        __asm _emit 0xD1
        // 0x58972411: sub edi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF9
        // 0x58972413: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58972415: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x58972417: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58972419: shr ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x02
        // 0x5897241C: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x5897241E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58972420: and ecx, 3
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x03
        // 0x58972423: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA4
        // 0x58972425: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58972427: mov ecx, dword ptr [esp + 0x850]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897242E: pop edi
        __asm _emit 0x5F
        // 0x5897242F: pop esi
        __asm _emit 0x5E
        // 0x58972430: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972437: add esp, 0x854
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897243D: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
