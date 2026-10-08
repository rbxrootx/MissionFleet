// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 172 bytes in 1 exact ranges.
// Source symbol alias: FUN_5882f530.

// Ghidra body range 0x5882F530..0x5882F5DC; 172 mapped bytes.
extern "C" __declspec(naked) void FUN_5882f530_segment_00() {
    __asm {
        // 0x5882F530: push edi
        __asm _emit 0x57
        // 0x5882F531: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5882F533: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x5882F537: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x5882F539: je 0x5882f5d6
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F53F: mov cx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x24
        // 0x5882F543: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F548: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5882F54B: mov eax, 0x100
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F550: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5882F553: mov cx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x24
        // 0x5882F557: jne 0x5882f574
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x5882F559: mov edx, 0xe2ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F55E: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5882F561: mov eax, 0x200
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F566: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x5882F569: mov word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x24
        // 0x5882F56D: or word ptr [edi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4F
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5882F572: jmp 0x5882f5b1
        __asm _emit 0xEB
        __asm _emit 0x3D
        // 0x5882F574: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5882F577: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F57C: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5882F57F: jne 0x5882f5ad
        __asm _emit 0x75
        __asm _emit 0x2C
        // 0x5882F581: mov cx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x24
        // 0x5882F585: mov edx, 0xe5ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F58A: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5882F58D: mov eax, 0x500
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F592: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x5882F595: mov word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x24
        // 0x5882F599: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F59E: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4F
        __asm _emit 0x24
        // 0x5882F5A2: mov edx, 0xfffb
        __asm _emit 0xBA
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F5A7: and word ptr [edi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x57
        __asm _emit 0x24
        // 0x5882F5AB: jmp 0x5882f5b1
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5882F5AD: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x5882F5B1: mov ecx, dword ptr [edi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x3C
        // 0x5882F5B4: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5882F5B6: je 0x5882f5d6
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x5882F5B8: push esi
        __asm _emit 0x56
        // 0x5882F5B9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F5C0: mov esi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x38
        // 0x5882F5C3: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5882F5C5: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x5882F5C8: cmp esi, dword ptr [edi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x77
        __asm _emit 0x3C
        // 0x5882F5CB: je 0x5882f5d8
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5882F5CD: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5882F5CF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5882F5D1: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5882F5D3: jne 0x5882f5c0
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x5882F5D5: pop esi
        __asm _emit 0x5E
        // 0x5882F5D6: pop edi
        __asm _emit 0x5F
        // 0x5882F5D7: ret
        __asm _emit 0xC3
        // 0x5882F5D8: pop esi
        __asm _emit 0x5E
        // 0x5882F5D9: pop edi
        __asm _emit 0x5F
        // 0x5882F5DA: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
    }
}
