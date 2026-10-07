// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 322 bytes in 1 exact ranges.
// Source symbol alias: FUN_58770530.

// Ghidra body range 0x58770530..0x58770672; 322 mapped bytes.
extern "C" __declspec(naked) void FUN_58770530_segment_00() {
    __asm {
        // 0x58770530: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58770532: push 0x5897ef86
        __asm _emit 0x68
        __asm _emit 0x86
        __asm _emit 0xEF
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58770537: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877053D: push eax
        __asm _emit 0x50
        // 0x5877053E: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58770541: push ebx
        __asm _emit 0x53
        // 0x58770542: push esi
        __asm _emit 0x56
        // 0x58770543: push edi
        __asm _emit 0x57
        // 0x58770544: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58770549: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5877054B: push eax
        __asm _emit 0x50
        // 0x5877054C: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58770550: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770556: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58770558: cmp dword ptr [esi + 0x70], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x70
        __asm _emit 0x00
        // 0x5877055C: jne 0x58770580
        __asm _emit 0x75
        __asm _emit 0x22
        // 0x5877055E: cmp dword ptr [esi + 0x74], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x74
        __asm _emit 0x00
        // 0x58770562: jne 0x5877065f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770568: call 0x5876ee90
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0xE9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877056D: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58770571: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770578: pop ecx
        __asm _emit 0x59
        // 0x58770579: pop edi
        __asm _emit 0x5F
        // 0x5877057A: pop esi
        __asm _emit 0x5E
        // 0x5877057B: pop ebx
        __asm _emit 0x5B
        // 0x5877057C: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x5877057F: ret
        __asm _emit 0xC3
        // 0x58770580: call 0x5876f560
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0xEF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58770585: mov bl, al
        __asm _emit 0x8A
        __asm _emit 0xD8
        // 0x58770587: dec al
        __asm _emit 0xFE
        __asm _emit 0xC8
        // 0x58770589: mov byte ptr [esp + 0x10], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5877058D: cmp al, 2
        __asm _emit 0x3C
        __asm _emit 0x02
        // 0x5877058F: ja 0x5877065f
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xCA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770595: cmp dword ptr [esi + 0x50], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x58770599: jne 0x587705d7
        __asm _emit 0x75
        __asm _emit 0x3C
        // 0x5877059B: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587705A0: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0xC6
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587705A5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587705A8: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587705AC: mov dword ptr [esp + 0x20], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587705B4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587705B6: je 0x587705ca
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587705B8: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587705BA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587705BC: push 0x58996158
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x61
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587705C1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587705C3: call 0x588f3d70
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0x37
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587705C8: jmp 0x587705cc
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587705CA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587705CC: mov dword ptr [esp + 0x20], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587705D4: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x587705D7: cmp dword ptr [esi + 0x54], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x54
        __asm _emit 0x00
        // 0x587705DB: jne 0x58770645
        __asm _emit 0x75
        __asm _emit 0x68
        // 0x587705DD: push 0x8c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587705E2: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0xC6
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587705E7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587705EA: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587705EE: mov dword ptr [esp + 0x20], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587705F6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587705F8: je 0x58770623
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x587705FA: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x587705FD: mov edi, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x58770600: push 0x7d00
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x7D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770605: lea ecx, [edx + 0xaa]
        __asm _emit 0x8D
        __asm _emit 0x8A
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877060B: push ecx
        __asm _emit 0x51
        // 0x5877060C: lea ecx, [edi + 0x1ae]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0xAE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770612: push ecx
        __asm _emit 0x51
        // 0x58770613: push edx
        __asm _emit 0x52
        // 0x58770614: mov edx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x50
        // 0x58770617: push edi
        __asm _emit 0x57
        // 0x58770618: push esi
        __asm _emit 0x56
        // 0x58770619: push edx
        __asm _emit 0x52
        // 0x5877061A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5877061C: call 0x58771840
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770621: jmp 0x58770625
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58770623: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58770625: mov dword ptr [esi + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x58770628: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877062D: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58770631: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x58770634: mov edx, 0xbfff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770639: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5877063D: mov dword ptr [esp + 0x20], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58770645: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58770649: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x5877064C: push eax
        __asm _emit 0x50
        // 0x5877064D: call 0x587714c0
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770652: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x58770655: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58770657: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5877065A: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5877065C: mov byte ptr [esi + 0x7a], bl
        __asm _emit 0x88
        __asm _emit 0x5E
        __asm _emit 0x7A
        // 0x5877065F: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58770663: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877066A: pop ecx
        __asm _emit 0x59
        // 0x5877066B: pop edi
        __asm _emit 0x5F
        // 0x5877066C: pop esi
        __asm _emit 0x5E
        // 0x5877066D: pop ebx
        __asm _emit 0x5B
        // 0x5877066E: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58770671: ret
        __asm _emit 0xC3
    }
}
