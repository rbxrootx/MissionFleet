// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 190 bytes in 1 exact ranges.
// Source symbol alias: FUN_58974ae0.

// Ghidra body range 0x58974AE0..0x58974B9E; 190 mapped bytes.
extern "C" __declspec(naked) void FUN_58974ae0_segment_00() {
    __asm {
        // 0x58974AE0: sub esp, 0x3f0
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0xF0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974AE6: mov dword ptr [esp], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58974AEA: push esi
        __asm _emit 0x56
        // 0x58974AEB: mov ecx, dword ptr [esp + 0x3fc]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xFC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974AF2: push edi
        __asm _emit 0x57
        // 0x58974AF3: mov eax, 0x3e8
        __asm _emit 0xB8
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974AF8: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58974AFA: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58974AFC: jle 0x58974b05
        __asm _emit 0x7E
        __asm _emit 0x07
        // 0x58974AFE: mov dword ptr [esp + 0x400], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974B05: mov eax, dword ptr [esp + 0x400]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974B0C: mov esi, 2
        __asm _emit 0xBE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974B11: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x58974B13: jle 0x58974b61
        __asm _emit 0x7E
        __asm _emit 0x4C
        // 0x58974B15: push ebx
        __asm _emit 0x53
        // 0x58974B16: push ebp
        __asm _emit 0x55
        // 0x58974B17: mov ebp, dword ptr [esp + 0x404]
        __asm _emit 0x8B
        __asm _emit 0xAC
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974B1E: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58974B20: mov bl, byte ptr [esi + ebp]
        __asm _emit 0x8A
        __asm _emit 0x1C
        __asm _emit 0x2E
        // 0x58974B23: cmp ebx, 0xd
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x0D
        // 0x58974B26: jne 0x58974b2f
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x58974B28: cmp byte ptr [esi + ebp + 1], 0xa
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x2E
        __asm _emit 0x01
        __asm _emit 0x0A
        // 0x58974B2D: je 0x58974b53
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x58974B2F: push ebx
        __asm _emit 0x53
        // 0x58974B30: call dword ptr [0x5898c374]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58974B36: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58974B39: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58974B3B: jne 0x58974b4e
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x58974B3D: cmp ebx, 0xa
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x0A
        // 0x58974B40: je 0x58974b4e
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x58974B42: cmp ebx, 9
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x09
        // 0x58974B45: je 0x58974b4e
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58974B47: mov byte ptr [esp + edi + 0x14], 0x3f
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x3C
        __asm _emit 0x14
        __asm _emit 0x3F
        // 0x58974B4C: jmp 0x58974b52
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x58974B4E: mov byte ptr [esp + edi + 0x14], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x3C
        __asm _emit 0x14
        // 0x58974B52: inc edi
        __asm _emit 0x47
        // 0x58974B53: mov eax, dword ptr [esp + 0x408]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974B5A: inc esi
        __asm _emit 0x46
        // 0x58974B5B: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x58974B5D: jl 0x58974b1e
        __asm _emit 0x7C
        __asm _emit 0xBF
        // 0x58974B5F: pop ebp
        __asm _emit 0x5D
        // 0x58974B60: pop ebx
        __asm _emit 0x5B
        // 0x58974B61: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58974B65: mov byte ptr [esp + edi + 0xc], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x3C
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58974B6A: lea edi, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58974B6E: or ecx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFF
        // 0x58974B71: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58974B73: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58974B75: add edx, 0xc4
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974B7B: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xF2
        __asm _emit 0xAE
        // 0x58974B7D: not ecx
        __asm _emit 0xF7
        __asm _emit 0xD1
        // 0x58974B7F: sub edi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF9
        // 0x58974B81: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58974B83: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x58974B85: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58974B87: shr ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x02
        // 0x58974B8A: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58974B8C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58974B8E: and ecx, 3
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x03
        // 0x58974B91: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA4
        // 0x58974B93: pop edi
        __asm _emit 0x5F
        // 0x58974B94: pop esi
        __asm _emit 0x5E
        // 0x58974B95: add esp, 0x3f0
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0xF0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974B9B: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
