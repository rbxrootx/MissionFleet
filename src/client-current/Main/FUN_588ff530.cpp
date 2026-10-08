// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 250 bytes in 1 exact ranges.
// Source symbol alias: FUN_588ff530.

// Ghidra body range 0x588FF530..0x588FF62A; 250 mapped bytes.
extern "C" __declspec(naked) void FUN_588ff530_segment_00() {
    __asm {
        // 0x588FF530: push ebx
        __asm _emit 0x53
        // 0x588FF531: push ebp
        __asm _emit 0x55
        // 0x588FF532: mov ebp, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588FF536: push esi
        __asm _emit 0x56
        // 0x588FF537: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588FF539: mov dword ptr [esi + 0x88], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF53F: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x588FF542: sub eax, dword ptr [esi + 0x70]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588FF545: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588FF547: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588FF54A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FF54C: jbe 0x588ff624
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0xD2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF552: push edi
        __asm _emit 0x57
        // 0x588FF553: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588FF556: sub ecx, dword ptr [esi + 0x70]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588FF559: sar ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x588FF55C: cmp ebx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD9
        // 0x588FF55E: jb 0x588ff565
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588FF560: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0xD7
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FF565: mov edx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x588FF568: lea edi, [ebx*4]
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0x9D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF56F: mov eax, dword ptr [edi + edx]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x17
        // 0x588FF572: mov edx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x74
        // 0x588FF575: sub edx, dword ptr [esi + 0x70]
        __asm _emit 0x2B
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x588FF578: movzx ecx, byte ptr [eax + 0x6a]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x48
        __asm _emit 0x6A
        // 0x588FF57C: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588FF57F: cmp ebp, ecx
        __asm _emit 0x3B
        __asm _emit 0xE9
        // 0x588FF581: je 0x588ff5fd
        __asm _emit 0x74
        __asm _emit 0x7A
        // 0x588FF583: cmp ebx, edx
        __asm _emit 0x3B
        __asm _emit 0xDA
        // 0x588FF585: jb 0x588ff58c
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588FF587: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0xD6
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FF58C: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588FF58F: mov ecx, dword ptr [eax + edi]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x38
        // 0x588FF592: cmp byte ptr [ecx + 0x98], 0
        __asm _emit 0x80
        __asm _emit 0xB9
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF599: jne 0x588ff5bb
        __asm _emit 0x75
        __asm _emit 0x20
        // 0x588FF59B: mov edx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x74
        // 0x588FF59E: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x588FF5A0: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588FF5A3: cmp ebx, edx
        __asm _emit 0x3B
        __asm _emit 0xDA
        // 0x588FF5A5: jb 0x588ff5ac
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588FF5A7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0xD6
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FF5AC: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588FF5AF: mov eax, dword ptr [edi + eax]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x07
        // 0x588FF5B2: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF5B7: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588FF5BB: mov edx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x74
        // 0x588FF5BE: sub edx, dword ptr [esi + 0x70]
        __asm _emit 0x2B
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x588FF5C1: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588FF5C4: cmp ebx, edx
        __asm _emit 0x3B
        __asm _emit 0xDA
        // 0x588FF5C6: jb 0x588ff5cd
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588FF5C8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0xD6
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FF5CD: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588FF5D0: mov ecx, dword ptr [eax + edi]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x38
        // 0x588FF5D3: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x588FF5D5: call 0x588f7e10
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0x88
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF5DA: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x588FF5DC: jne 0x588ff611
        __asm _emit 0x75
        __asm _emit 0x33
        // 0x588FF5DE: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x588FF5E1: sub eax, dword ptr [esi + 0x70]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588FF5E4: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588FF5E7: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x588FF5E9: jb 0x588ff5f0
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588FF5EB: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0xD6
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FF5F0: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588FF5F3: mov ecx, dword ptr [edi + ecx]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x0F
        // 0x588FF5F6: call 0x588f7e00
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF5FB: jmp 0x588ff611
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x588FF5FD: cmp ebx, edx
        __asm _emit 0x3B
        __asm _emit 0xDA
        // 0x588FF5FF: jb 0x588ff606
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588FF601: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0xD6
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FF606: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588FF609: mov edi, dword ptr [edi + eax]
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0x07
        // 0x588FF60C: or word ptr [edi + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4F
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588FF611: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588FF614: sub ecx, dword ptr [esi + 0x70]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588FF617: inc ebx
        __asm _emit 0x43
        // 0x588FF618: sar ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x588FF61B: cmp ebx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD9
        // 0x588FF61D: jb 0x588ff553
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0x30
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF623: pop edi
        __asm _emit 0x5F
        // 0x588FF624: pop esi
        __asm _emit 0x5E
        // 0x588FF625: pop ebp
        __asm _emit 0x5D
        // 0x588FF626: pop ebx
        __asm _emit 0x5B
        // 0x588FF627: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
