// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 183 bytes in 1 exact ranges.
// Source symbol alias: FUN_587da710.

// Ghidra body range 0x587DA710..0x587DA7C7; 183 mapped bytes.
extern "C" __declspec(naked) void FUN_587da710_segment_00() {
    __asm {
        // 0x587DA710: push ebx
        __asm _emit 0x53
        // 0x587DA711: mov ebx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587DA715: push ebp
        __asm _emit 0x55
        // 0x587DA716: push esi
        __asm _emit 0x56
        // 0x587DA717: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587DA719: mov ecx, dword ptr [esi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA71F: mov eax, dword ptr [ecx + ebx*4 + 0x9a4]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA726: mov dx, word ptr [eax + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x5E
        // 0x587DA72A: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x0F
        // 0x587DA72E: movzx edx, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD2
        // 0x587DA731: push edi
        __asm _emit 0x57
        // 0x587DA732: mov edi, dword ptr [eax + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0xB8
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA738: movzx ebp, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xEA
        // 0x587DA73B: push ebp
        __asm _emit 0x55
        // 0x587DA73C: shr edi, 1
        __asm _emit 0xD1
        __asm _emit 0xEF
        // 0x587DA73E: call 0x588e6680
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0xBF
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587DA743: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DA745: je 0x587da7bb
        __asm _emit 0x74
        __asm _emit 0x74
        // 0x587DA747: mov ecx, dword ptr [esi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA74D: mov eax, dword ptr [ecx + ebx*4 + 0x9a4]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA754: push eax
        __asm _emit 0x50
        // 0x587DA755: call 0x588e75e0
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0xCE
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587DA75A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DA75C: je 0x587da7bb
        __asm _emit 0x74
        __asm _emit 0x5D
        // 0x587DA75E: mov ecx, dword ptr [esi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA764: cmp edi, 0x47
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x47
        // 0x587DA767: jne 0x587da798
        __asm _emit 0x75
        __asm _emit 0x2F
        // 0x587DA769: push ebp
        __asm _emit 0x55
        // 0x587DA76A: call 0x588e6680
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0xBF
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587DA76F: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587DA772: je 0x587da77b
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587DA774: cmp byte ptr [esp + 0x18], 0
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587DA779: jne 0x587da7bb
        __asm _emit 0x75
        __asm _emit 0x40
        // 0x587DA77B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DA77D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DA77F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DA781: push 0x2d
        __asm _emit 0x6A
        __asm _emit 0x2D
        // 0x587DA783: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0x13
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587DA788: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587DA78A: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0xA5
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587DA78F: pop edi
        __asm _emit 0x5F
        // 0x587DA790: pop esi
        __asm _emit 0x5E
        // 0x587DA791: pop ebp
        __asm _emit 0x5D
        // 0x587DA792: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587DA794: pop ebx
        __asm _emit 0x5B
        // 0x587DA795: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587DA798: mov ebx, dword ptr [ecx + ebx*4 + 0x9a4]
        __asm _emit 0x8B
        __asm _emit 0x9C
        __asm _emit 0x99
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA79F: push ebx
        __asm _emit 0x53
        // 0x587DA7A0: call 0x588e75e0
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0xCE
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587DA7A5: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587DA7A8: je 0x587da77b
        __asm _emit 0x74
        __asm _emit 0xD1
        // 0x587DA7AA: mov ecx, dword ptr [esi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA7B0: push ebp
        __asm _emit 0x55
        // 0x587DA7B1: call 0x588e6680
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0xBE
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587DA7B6: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587DA7B9: jmp 0x587da779
        __asm _emit 0xEB
        __asm _emit 0xBE
        // 0x587DA7BB: pop edi
        __asm _emit 0x5F
        // 0x587DA7BC: pop esi
        __asm _emit 0x5E
        // 0x587DA7BD: pop ebp
        __asm _emit 0x5D
        // 0x587DA7BE: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA7C3: pop ebx
        __asm _emit 0x5B
        // 0x587DA7C4: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
