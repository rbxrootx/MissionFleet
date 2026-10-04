// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58849210 .. +0x126 bytes.
// Source symbol alias: FUN_58849210.
extern "C" __declspec(naked) void FUN_58849210() {
    __asm {
        // 0x58849210: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58849212: push 0x5898498b
        __asm _emit 0x68
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58849217: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884921D: push eax
        __asm _emit 0x50
        // 0x5884921E: sub esp, 0x68
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x68
        // 0x58849221: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58849226: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58849228: mov dword ptr [esp + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x5884922C: push ebx
        __asm _emit 0x53
        // 0x5884922D: push ebp
        __asm _emit 0x55
        // 0x5884922E: push esi
        __asm _emit 0x56
        // 0x5884922F: push edi
        __asm _emit 0x57
        // 0x58849230: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58849235: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58849237: push eax
        __asm _emit 0x50
        // 0x58849238: lea eax, [esp + 0x7c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x7C
        // 0x5884923C: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849242: mov ebp, dword ptr [esp + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0xAC
        __asm _emit 0x24
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849249: push 0xb4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884924E: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58849250: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0x39
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58849255: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58849258: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5884925C: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5884925E: mov dword ptr [esp + 0x84], ebx
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849265: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58849267: je 0x58849289
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x58849269: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5884926C: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x5884926F: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58849271: push ebx
        __asm _emit 0x53
        // 0x58849272: push ebx
        __asm _emit 0x53
        // 0x58849273: push ecx
        __asm _emit 0x51
        // 0x58849274: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884927A: push edx
        __asm _emit 0x52
        // 0x5884927B: push ecx
        __asm _emit 0x51
        // 0x5884927C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5884927E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58849280: call 0x5875a7e0
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0x15
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58849285: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58849287: jmp 0x5884928b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58849289: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5884928B: push ebp
        __asm _emit 0x55
        // 0x5884928C: lea edx, [esp + 0x1d]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1D
        // 0x58849290: push edx
        __asm _emit 0x52
        // 0x58849291: mov dword ptr [esp + 0x8c], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884929C: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x588492A1: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588492A7: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588492A9: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588492AD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588492AF: mov word ptr [esp + 0x5c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x588492B4: push edx
        __asm _emit 0x52
        // 0x588492B5: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588492B7: mov word ptr [esp + 0x36], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x36
        // 0x588492BC: mov byte ptr [esp + 0x38], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588492C0: mov dword ptr [esp + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x588492C4: mov dword ptr [esp + 0x58], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x588492C8: mov dword ptr [esp + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x588492CC: mov dword ptr [esp + 0x64], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x588492D0: call 0x5875a4b0
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0x11
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x588492D5: mov eax, 0x7fff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588492DA: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x588492DE: cmp dword ptr [esi + 0x64], ebx
        __asm _emit 0x39
        __asm _emit 0x5E
        __asm _emit 0x64
        // 0x588492E1: jne 0x588492ee
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x588492E3: mov dword ptr [esi + 0x64], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x64
        // 0x588492E6: mov dword ptr [esi + 0xfc], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588492EC: jmp 0x588492fa
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x588492EE: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x588492F1: mov dword ptr [ecx + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x54
        // 0x588492F4: mov edx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x68
        // 0x588492F7: mov dword ptr [edi + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x50
        // 0x588492FA: inc word ptr [esi + 0xf0]
        __asm _emit 0x66
        __asm _emit 0xFF
        __asm _emit 0x86
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849301: mov eax, 0xfffe
        __asm _emit 0xB8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849306: mov dword ptr [esi + 0x68], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x68
        // 0x58849309: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x5884930D: push ebx
        __asm _emit 0x53
        // 0x5884930E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58849310: call 0x588486e0
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58849315: mov ecx, dword ptr [esp + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x7C
        // 0x58849319: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849320: pop ecx
        __asm _emit 0x59
        // 0x58849321: pop edi
        __asm _emit 0x5F
        // 0x58849322: pop esi
        __asm _emit 0x5E
        // 0x58849323: pop ebp
        __asm _emit 0x5D
        // 0x58849324: pop ebx
        __asm _emit 0x5B
        // 0x58849325: mov ecx, dword ptr [esp + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x58849329: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5884932B: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0x38
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58849330: add esp, 0x74
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x74
        // 0x58849333: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
