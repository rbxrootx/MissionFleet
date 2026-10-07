// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 341 bytes in 1 exact ranges.
// Source symbol alias: FUN_5882c7e0.

// Ghidra body range 0x5882C7E0..0x5882C935; 341 mapped bytes.
extern "C" __declspec(naked) void FUN_5882c7e0_segment_00() {
    __asm {
        // 0x5882C7E0: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x5882C7E3: push ebx
        __asm _emit 0x53
        // 0x5882C7E4: push esi
        __asm _emit 0x56
        // 0x5882C7E5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5882C7E7: mov ecx, dword ptr [esi + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C7ED: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5882C7EF: mov byte ptr [esi + 0x18a], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0x8A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C7F5: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5882C7F7: je 0x5882c92f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C7FD: push ebp
        __asm _emit 0x55
        // 0x5882C7FE: call 0x58786480
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0x9C
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882C803: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5882C807: mov eax, dword ptr [0x58a2481c]
        __asm _emit 0xA1
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882C80C: mov eax, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x1C
        // 0x5882C80F: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5882C811: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5882C815: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5882C817: jbe 0x5882c92e
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C81D: push edi
        __asm _emit 0x57
        // 0x5882C81E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5882C820: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882C826: mov dword ptr [esp + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5882C82A: mov byte ptr [esp + 0x10], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        // 0x5882C82F: mov word ptr [esp + 0x12], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x12
        // 0x5882C834: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5882C838: push edi
        __asm _emit 0x57
        // 0x5882C839: call 0x58778b20
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0xC2
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5882C83E: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5882C840: je 0x5882c922
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C846: movzx ecx, byte ptr [eax + 0x35c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C84D: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5882C851: shr edx, 8
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x5882C854: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x5882C856: jne 0x5882c922
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C85C: movzx ecx, word ptr [eax + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5882C860: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5882C862: and edx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x5882C865: cmp dx, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x5882C869: je 0x5882c922
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C86F: shr ecx, 5
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x05
        // 0x5882C872: and ecx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x5882C875: cmp cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x01
        // 0x5882C879: je 0x5882c922
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C87F: cmp cx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x5882C883: je 0x5882c922
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C889: cmp cx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x05
        // 0x5882C88D: je 0x5882c922
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C893: cmp dx, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x09
        // 0x5882C897: je 0x5882c922
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C89D: cmp cx, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x06
        // 0x5882C8A1: je 0x5882c922
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C8A7: cmp cx, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x08
        // 0x5882C8AB: je 0x5882c922
        __asm _emit 0x74
        __asm _emit 0x75
        // 0x5882C8AD: cmp dword ptr [eax + 0x14], ebx
        __asm _emit 0x39
        __asm _emit 0x58
        __asm _emit 0x14
        // 0x5882C8B0: jne 0x5882c922
        __asm _emit 0x75
        __asm _emit 0x70
        // 0x5882C8B2: movzx ecx, byte ptr [esi + 0x18a]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x8A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C8B9: mov edx, dword ptr [esi + 0x178]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C8BF: lea ecx, [ecx + ecx*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x89
        // 0x5882C8C2: mov dword ptr [edx + ecx*4], edi
        __asm _emit 0x89
        __asm _emit 0x3C
        __asm _emit 0x8A
        // 0x5882C8C5: movzx ecx, byte ptr [esi + 0x18a]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x8A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C8CC: mov eax, dword ptr [eax + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x60
        // 0x5882C8CF: mov edx, dword ptr [esi + 0x178]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C8D5: lea ecx, [ecx + ecx*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x89
        // 0x5882C8D8: mov dword ptr [edx + ecx*4 + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x5882C8DC: movzx eax, byte ptr [esi + 0x18a]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x8A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C8E3: mov edx, dword ptr [esi + 0x178]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C8E9: lea ecx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x80
        // 0x5882C8EC: mov dword ptr [edx + ecx*4 + 4], 0x1869f
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x8A
        __asm _emit 0x04
        __asm _emit 0x9F
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5882C8F4: movzx eax, byte ptr [esi + 0x18a]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x8A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C8FB: mov ecx, dword ptr [esi + 0x178]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C901: lea eax, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x80
        // 0x5882C904: mov dword ptr [ecx + eax*4 + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x81
        __asm _emit 0x0C
        // 0x5882C908: movzx eax, byte ptr [esi + 0x18a]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x8A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C90F: lea edx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x80
        // 0x5882C912: mov eax, dword ptr [esi + 0x178]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C918: mov dword ptr [eax + edx*4 + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x90
        __asm _emit 0x10
        // 0x5882C91C: inc byte ptr [esi + 0x18a]
        __asm _emit 0xFE
        __asm _emit 0x86
        __asm _emit 0x8A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C922: inc ebp
        __asm _emit 0x45
        // 0x5882C923: cmp ebp, dword ptr [esp + 0x18]
        __asm _emit 0x3B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5882C927: jb 0x5882c820
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0xF3
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882C92D: pop edi
        __asm _emit 0x5F
        // 0x5882C92E: pop ebp
        __asm _emit 0x5D
        // 0x5882C92F: pop esi
        __asm _emit 0x5E
        // 0x5882C930: pop ebx
        __asm _emit 0x5B
        // 0x5882C931: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5882C934: ret
        __asm _emit 0xC3
    }
}
