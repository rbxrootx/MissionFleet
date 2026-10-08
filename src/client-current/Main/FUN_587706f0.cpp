// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 267 bytes in 1 exact ranges.
// Source symbol alias: FUN_587706f0.

// Ghidra body range 0x587706F0..0x587707FB; 267 mapped bytes.
extern "C" __declspec(naked) void FUN_587706f0_segment_00() {
    __asm {
        // 0x587706F0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587706F2: push 0x5898947b
        __asm _emit 0x68
        __asm _emit 0x7B
        __asm _emit 0x94
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587706F7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587706FD: push eax
        __asm _emit 0x50
        // 0x587706FE: push ecx
        __asm _emit 0x51
        // 0x587706FF: push esi
        __asm _emit 0x56
        // 0x58770700: push edi
        __asm _emit 0x57
        // 0x58770701: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58770706: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58770708: push eax
        __asm _emit 0x50
        // 0x58770709: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5877070D: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770713: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58770715: mov al, byte ptr [esi + 0x78]
        __asm _emit 0x8A
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x58770718: cmp al, byte ptr [esi + 0x79]
        __asm _emit 0x3A
        __asm _emit 0x46
        __asm _emit 0x79
        // 0x5877071B: jne 0x58770734
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x5877071D: call 0x58770680
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58770722: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58770726: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877072D: pop ecx
        __asm _emit 0x59
        // 0x5877072E: pop edi
        __asm _emit 0x5F
        // 0x5877072F: pop esi
        __asm _emit 0x5E
        // 0x58770730: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58770733: ret
        __asm _emit 0xC3
        // 0x58770734: cmp dword ptr [esi + 0x58], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x58770738: jne 0x587707a2
        __asm _emit 0x75
        __asm _emit 0x68
        // 0x5877073A: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877073F: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0xC5
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58770744: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58770747: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5877074B: mov dword ptr [esp + 0x18], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770753: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58770755: je 0x58770780
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x58770757: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5877075A: mov edi, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x5877075D: push 0x7d00
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x7D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770762: lea ecx, [edx + 0xaa]
        __asm _emit 0x8D
        __asm _emit 0x8A
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770768: push ecx
        __asm _emit 0x51
        // 0x58770769: lea ecx, [edi + 0x1ae]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0xAE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877076F: push ecx
        __asm _emit 0x51
        // 0x58770770: push edx
        __asm _emit 0x52
        // 0x58770771: mov edx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x50
        // 0x58770774: push edi
        __asm _emit 0x57
        // 0x58770775: push esi
        __asm _emit 0x56
        // 0x58770776: push edx
        __asm _emit 0x52
        // 0x58770777: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58770779: call 0x58770d50
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877077E: jmp 0x58770782
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58770780: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58770782: mov dword ptr [esi + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x58770785: mov ecx, 0xbfff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877078A: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5877078E: mov eax, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x58770791: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770796: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5877079A: mov dword ptr [esp + 0x18], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587707A2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587707A4: call 0x5876fd20
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587707A9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587707AB: je 0x587707e2
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x587707AD: movzx eax, byte ptr [esi + 0x78]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x587707B1: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x587707B4: imul eax, eax, 0x418
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587707BA: lea edx, [eax + ecx - 0x418]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587707C1: push edx
        __asm _emit 0x52
        // 0x587707C2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587707C4: call 0x5876ef70
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587707C9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587707CB: call 0x58770130
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587707D0: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587707D4: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587707DB: pop ecx
        __asm _emit 0x59
        // 0x587707DC: pop edi
        __asm _emit 0x5F
        // 0x587707DD: pop esi
        __asm _emit 0x5E
        // 0x587707DE: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587707E1: ret
        __asm _emit 0xC3
        // 0x587707E2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587707E4: call 0x5876ee10
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587707E9: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587707ED: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587707F4: pop ecx
        __asm _emit 0x59
        // 0x587707F5: pop edi
        __asm _emit 0x5F
        // 0x587707F6: pop esi
        __asm _emit 0x5E
        // 0x587707F7: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587707FA: ret
        __asm _emit 0xC3
    }
}
