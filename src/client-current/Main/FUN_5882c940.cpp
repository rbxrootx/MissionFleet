// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 307 bytes in 2 exact ranges.
// Source symbol alias: FUN_5882c940.

// Ghidra body range 0x5882C940..0x5882C998; 88 mapped bytes.
extern "C" __declspec(naked) void FUN_5882c940_segment_00() {
    __asm {
        // 0x5882C940: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x5882C943: push ebx
        __asm _emit 0x53
        // 0x5882C944: push esi
        __asm _emit 0x56
        // 0x5882C945: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5882C947: mov ecx, dword ptr [esi + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C94D: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5882C94F: mov byte ptr [esi + 0x18b], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0x8B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C955: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5882C957: je 0x5882ca75
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C95D: push ebp
        __asm _emit 0x55
        // 0x5882C95E: push edi
        __asm _emit 0x57
        // 0x5882C95F: call 0x58786480
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x9B
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882C964: mov edx, dword ptr [esi + 0x17c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C96A: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5882C96E: mov eax, dword ptr [0x58a2481c]
        __asm _emit 0xA1
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882C973: mov edi, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x6C
        // 0x5882C976: lea ecx, [edi + edi*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xBF
        // 0x5882C979: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x5882C97B: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x5882C97D: push ecx
        __asm _emit 0x51
        // 0x5882C97E: push ebx
        __asm _emit 0x53
        // 0x5882C97F: push edx
        __asm _emit 0x52
        // 0x5882C980: mov dword ptr [esp + 0x24], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5882C984: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0x02
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5882C989: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5882C98C: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5882C98E: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x5882C990: jbe 0x5882ca73
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0xDD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C996: jmp 0x5882c9a0
        __asm _emit 0xEB
        __asm _emit 0x08
    }
}

// Ghidra body range 0x5882C9A0..0x5882CA7B; 219 mapped bytes.
extern "C" __declspec(naked) void FUN_5882c940_segment_01() {
    __asm {
        // 0x5882C9A0: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882C9A6: mov dword ptr [esp + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5882C9AA: mov byte ptr [esp + 0x10], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x05
        // 0x5882C9AF: mov word ptr [esp + 0x12], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x12
        // 0x5882C9B4: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5882C9B8: push edi
        __asm _emit 0x57
        // 0x5882C9B9: call 0x58778d00
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0xC3
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5882C9BE: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5882C9C0: je 0x5882ca68
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C9C6: movzx ecx, word ptr [eax + 6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x48
        __asm _emit 0x06
        // 0x5882C9CA: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5882C9CE: shr edx, 8
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x5882C9D1: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x5882C9D3: jne 0x5882ca68
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C9D9: cmp dword ptr [eax + 0x70], ebx
        __asm _emit 0x39
        __asm _emit 0x58
        __asm _emit 0x70
        // 0x5882C9DC: jbe 0x5882ca68
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C9E2: mov ecx, dword ptr [eax + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x68
        // 0x5882C9E5: test ecx, 0x100000
        __asm _emit 0xF7
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5882C9EB: jne 0x5882ca68
        __asm _emit 0x75
        __asm _emit 0x7B
        // 0x5882C9ED: test cl, 0x10
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x10
        // 0x5882C9F0: jne 0x5882ca68
        __asm _emit 0x75
        __asm _emit 0x76
        // 0x5882C9F2: cmp word ptr [eax + 0x20], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x58
        __asm _emit 0x20
        // 0x5882C9F6: jne 0x5882ca68
        __asm _emit 0x75
        __asm _emit 0x70
        // 0x5882C9F8: movzx ecx, byte ptr [esi + 0x18b]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x8B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C9FF: mov edx, dword ptr [esi + 0x17c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CA05: lea ecx, [ecx + ecx*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x89
        // 0x5882CA08: mov dword ptr [edx + ecx*4], edi
        __asm _emit 0x89
        __asm _emit 0x3C
        __asm _emit 0x8A
        // 0x5882CA0B: movzx ecx, byte ptr [esi + 0x18b]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x8B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CA12: mov eax, dword ptr [eax + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x70
        // 0x5882CA15: mov edx, dword ptr [esi + 0x17c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CA1B: lea ecx, [ecx + ecx*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x89
        // 0x5882CA1E: mov dword ptr [edx + ecx*4 + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x5882CA22: movzx eax, byte ptr [esi + 0x18b]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x8B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CA29: mov edx, dword ptr [esi + 0x17c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CA2F: lea ecx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x80
        // 0x5882CA32: mov dword ptr [edx + ecx*4 + 4], 0x1869f
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x8A
        __asm _emit 0x04
        __asm _emit 0x9F
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5882CA3A: movzx eax, byte ptr [esi + 0x18b]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x8B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CA41: mov ecx, dword ptr [esi + 0x17c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CA47: lea eax, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x80
        // 0x5882CA4A: mov dword ptr [ecx + eax*4 + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x81
        __asm _emit 0x0C
        // 0x5882CA4E: movzx eax, byte ptr [esi + 0x18b]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x8B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CA55: lea edx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x80
        // 0x5882CA58: mov eax, dword ptr [esi + 0x17c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CA5E: mov dword ptr [eax + edx*4 + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x90
        __asm _emit 0x10
        // 0x5882CA62: inc byte ptr [esi + 0x18b]
        __asm _emit 0xFE
        __asm _emit 0x86
        __asm _emit 0x8B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CA68: inc ebp
        __asm _emit 0x45
        // 0x5882CA69: cmp ebp, dword ptr [esp + 0x18]
        __asm _emit 0x3B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5882CA6D: jb 0x5882c9a0
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0x2D
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882CA73: pop edi
        __asm _emit 0x5F
        // 0x5882CA74: pop ebp
        __asm _emit 0x5D
        // 0x5882CA75: pop esi
        __asm _emit 0x5E
        // 0x5882CA76: pop ebx
        __asm _emit 0x5B
        // 0x5882CA77: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5882CA7A: ret
        __asm _emit 0xC3
    }
}
