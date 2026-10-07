// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 238 bytes in 1 exact ranges.
// Source symbol alias: FUN_58744170.

// Ghidra body range 0x58744170..0x5874425E; 238 mapped bytes.
extern "C" __declspec(naked) void FUN_58744170_segment_00() {
    __asm {
        // 0x58744170: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x58744173: push ebx
        __asm _emit 0x53
        // 0x58744174: mov ebx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58744178: push ebp
        __asm _emit 0x55
        // 0x58744179: push esi
        __asm _emit 0x56
        // 0x5874417A: push edi
        __asm _emit 0x57
        // 0x5874417B: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5874417D: mov esi, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x18
        // 0x58744180: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58744183: cmp byte ptr [eax + 0x29], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x58744187: mov cl, 1
        __asm _emit 0xB1
        __asm _emit 0x01
        // 0x58744189: mov byte ptr [esp + 0x10], cl
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5874418D: jne 0x587441ae
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x5874418F: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x58744191: cmp edx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58744194: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58744196: setb cl
        __asm _emit 0x0F
        __asm _emit 0x92
        __asm _emit 0xC1
        // 0x58744199: mov byte ptr [esp + 0x10], cl
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5874419D: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5874419F: je 0x587441a5
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587441A1: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587441A3: jmp 0x587441a8
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x587441A5: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x587441A8: cmp byte ptr [eax + 0x29], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x587441AC: je 0x58744191
        __asm _emit 0x74
        __asm _emit 0xE3
        // 0x587441AE: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x587441B0: mov ebp, esi
        __asm _emit 0x8B
        __asm _emit 0xEE
        // 0x587441B2: mov dword ptr [esp + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587441B6: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587441BA: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x587441BC: je 0x5874420f
        __asm _emit 0x74
        __asm _emit 0x51
        // 0x587441BE: mov eax, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x587441C1: mov ebp, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x28
        // 0x587441C3: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587441C5: je 0x587441cb
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587441C7: cmp edx, edx
        __asm _emit 0x3B
        __asm _emit 0xD2
        // 0x587441C9: je 0x587441d0
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587441CB: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0x8A
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587441D0: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587441D4: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x587441D6: jne 0x58744202
        __asm _emit 0x75
        __asm _emit 0x2A
        // 0x587441D8: push ebx
        __asm _emit 0x53
        // 0x587441D9: push esi
        __asm _emit 0x56
        // 0x587441DA: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587441DC: push ecx
        __asm _emit 0x51
        // 0x587441DD: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587441DF: call 0x58743c80
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587441E4: pop edi
        __asm _emit 0x5F
        // 0x587441E5: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587441E7: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587441E9: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587441ED: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x587441F0: pop esi
        __asm _emit 0x5E
        // 0x587441F1: pop ebp
        __asm _emit 0x5D
        // 0x587441F2: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587441F5: mov byte ptr [eax + 8], 1
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x587441F9: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x587441FB: pop ebx
        __asm _emit 0x5B
        // 0x587441FC: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587441FF: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58744202: call 0x587437d0
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58744207: mov ebp, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874420B: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5874420F: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x58744212: cmp eax, dword ptr [ebx]
        __asm _emit 0x3B
        __asm _emit 0x03
        // 0x58744214: jae 0x58744247
        __asm _emit 0x73
        __asm _emit 0x31
        // 0x58744216: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5874421A: push ebx
        __asm _emit 0x53
        // 0x5874421B: push esi
        __asm _emit 0x56
        // 0x5874421C: push ecx
        __asm _emit 0x51
        // 0x5874421D: lea edx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58744221: push edx
        __asm _emit 0x52
        // 0x58744222: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58744224: call 0x58743c80
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58744229: pop edi
        __asm _emit 0x5F
        // 0x5874422A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874422C: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5874422E: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58744232: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x58744235: pop esi
        __asm _emit 0x5E
        // 0x58744236: pop ebp
        __asm _emit 0x5D
        // 0x58744237: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5874423A: mov byte ptr [eax + 8], 1
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x5874423E: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x58744240: pop ebx
        __asm _emit 0x5B
        // 0x58744241: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58744244: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58744247: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5874424B: pop edi
        __asm _emit 0x5F
        // 0x5874424C: pop esi
        __asm _emit 0x5E
        // 0x5874424D: mov dword ptr [eax + 4], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x04
        // 0x58744250: pop ebp
        __asm _emit 0x5D
        // 0x58744251: mov byte ptr [eax + 8], 0
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58744255: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x58744257: pop ebx
        __asm _emit 0x5B
        // 0x58744258: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5874425B: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
