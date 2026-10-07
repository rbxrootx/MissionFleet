// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 192 bytes in 1 exact ranges.
// Source symbol alias: FUN_587351f0.

// Ghidra body range 0x587351F0..0x587352B0; 192 mapped bytes.
extern "C" __declspec(naked) void FUN_587351f0_segment_00() {
    __asm {
        // 0x587351F0: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x587351F3: push ebp
        __asm _emit 0x55
        // 0x587351F4: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x587351F6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587351F8: cmp dword ptr [ebp + 0x24], 4
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587351FC: ja 0x587352a9
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xA7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735202: push ebx
        __asm _emit 0x53
        // 0x58735203: push esi
        __asm _emit 0x56
        // 0x58735204: push edi
        __asm _emit 0x57
        // 0x58735205: mov edi, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x18
        // 0x58735208: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5873520C: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58735210: cmp edi, dword ptr [ebp + 0x1c]
        __asm _emit 0x3B
        __asm _emit 0x7D
        __asm _emit 0x1C
        // 0x58735213: jbe 0x5873521a
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58735215: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0x7A
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873521A: mov esi, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5873521D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58735220: mov ebx, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x1C
        // 0x58735223: cmp dword ptr [ebp + 0x18], ebx
        __asm _emit 0x39
        __asm _emit 0x5D
        __asm _emit 0x18
        // 0x58735226: jbe 0x5873522d
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58735228: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x7A
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873522D: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x58735230: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58735232: je 0x58735238
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58735234: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x58735236: je 0x5873523d
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58735238: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0x7A
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873523D: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x5873523F: je 0x5873529b
        __asm _emit 0x74
        __asm _emit 0x5A
        // 0x58735241: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58735243: jne 0x58735293
        __asm _emit 0x75
        __asm _emit 0x4E
        // 0x58735245: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0x7A
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873524A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5873524C: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x5873524F: jb 0x58735256
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58735251: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x7A
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58735256: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5873525A: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5873525E: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58735262: push eax
        __asm _emit 0x50
        // 0x58735263: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58735267: push ecx
        __asm _emit 0x51
        // 0x58735268: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5873526A: push edx
        __asm _emit 0x52
        // 0x5873526B: push eax
        __asm _emit 0x50
        // 0x5873526C: call 0x587425f0
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0xD3
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735271: add dword ptr [esp + 0x14], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58735275: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58735277: jne 0x58735297
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x58735279: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0x79
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873527E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58735280: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58735283: jb 0x5873528a
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58735285: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873528A: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5873528D: inc dword ptr [esp + 0x10]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58735291: jmp 0x58735220
        __asm _emit 0xEB
        __asm _emit 0x8D
        // 0x58735293: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58735295: jmp 0x5873524c
        __asm _emit 0xEB
        __asm _emit 0xB5
        // 0x58735297: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58735299: jmp 0x58735280
        __asm _emit 0xEB
        __asm _emit 0xE5
        // 0x5873529B: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5873529F: pop edi
        __asm _emit 0x5F
        // 0x587352A0: pop esi
        __asm _emit 0x5E
        // 0x587352A1: mov dword ptr [ebp + 0x24], 4
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587352A8: pop ebx
        __asm _emit 0x5B
        // 0x587352A9: pop ebp
        __asm _emit 0x5D
        // 0x587352AA: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587352AD: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
