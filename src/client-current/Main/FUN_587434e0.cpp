// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 228 bytes in 1 exact ranges.
// Source symbol alias: FUN_587434e0.

// Ghidra body range 0x587434E0..0x587435C4; 228 mapped bytes.
extern "C" __declspec(naked) void FUN_587434e0_segment_00() {
    __asm {
        // 0x587434E0: push ebx
        __asm _emit 0x53
        // 0x587434E1: mov ebx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587434E5: push ebp
        __asm _emit 0x55
        // 0x587434E6: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x587434E8: lea eax, [ebx*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xDD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587434EF: sub eax, ebx
        __asm _emit 0x2B
        __asm _emit 0xC3
        // 0x587434F1: mov ecx, dword ptr [ebp + eax*8 + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0xC5
        __asm _emit 0x30
        // 0x587434F5: push esi
        __asm _emit 0x56
        // 0x587434F6: lea esi, [ebp + eax*8]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0xC5
        __asm _emit 0x00
        // 0x587434FA: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0x31
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587434FF: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58743504: je 0x58743513
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x58743506: mov dword ptr [esi + 0x30], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874350D: pop esi
        __asm _emit 0x5E
        // 0x5874350E: pop ebp
        __asm _emit 0x5D
        // 0x5874350F: pop ebx
        __asm _emit 0x5B
        // 0x58743510: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58743513: mov edx, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x34
        // 0x58743516: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58743518: je 0x58743528
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5874351A: cmp edx, 2
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5874351D: je 0x58743528
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5874351F: cmp edx, 1
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x01
        // 0x58743522: jne 0x587435be
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743528: lea ecx, [ebx + 0x139]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874352E: push edi
        __asm _emit 0x57
        // 0x5874352F: mov edi, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x00
        // 0x58743532: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x58743535: mov eax, dword ptr [ecx + edi]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x39
        // 0x58743538: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874353A: je 0x5874355a
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x5874353C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58743540: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x58743543: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58743545: je 0x58743553
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x58743547: mov ecx, dword ptr [ecx + 0x514]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874354D: cmp dword ptr [ecx + 0x64], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x58743551: jg 0x58743591
        __asm _emit 0x7F
        __asm _emit 0x3E
        // 0x58743553: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x58743556: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58743558: jne 0x58743540
        __asm _emit 0x75
        __asm _emit 0xE6
        // 0x5874355A: mov dl, byte ptr [esi + 0xc]
        __asm _emit 0x8A
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x5874355D: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5874355F: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58743563: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x58743566: push eax
        __asm _emit 0x50
        // 0x58743567: mov dword ptr [esi + 0x30], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874356E: mov dword ptr [esi + 0x34], 6
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743575: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x58743578: or dl, 0x40
        __asm _emit 0x80
        __asm _emit 0xCA
        __asm _emit 0x40
        // 0x5874357B: push 0x16
        __asm _emit 0x6A
        __asm _emit 0x16
        // 0x5874357D: mov byte ptr [esp + 0x20], dl
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58743581: mov byte ptr [esp + 0x22], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x22
        // 0x58743585: call 0x588e4260
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0x0C
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5874358A: pop edi
        __asm _emit 0x5F
        // 0x5874358B: pop esi
        __asm _emit 0x5E
        // 0x5874358C: pop ebp
        __asm _emit 0x5D
        // 0x5874358D: pop ebx
        __asm _emit 0x5B
        // 0x5874358E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58743591: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58743593: jne 0x587435a3
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x58743595: pop edi
        __asm _emit 0x5F
        // 0x58743596: mov dword ptr [esi + 0x34], 1
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874359D: pop esi
        __asm _emit 0x5E
        // 0x5874359E: pop ebp
        __asm _emit 0x5D
        // 0x5874359F: pop ebx
        __asm _emit 0x5B
        // 0x587435A0: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587435A3: cmp edx, 2
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x587435A6: jne 0x587435bd
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x587435A8: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x587435AB: movzx edx, word ptr [ecx + 0x350]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x91
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587435B2: push edx
        __asm _emit 0x52
        // 0x587435B3: push ebx
        __asm _emit 0x53
        // 0x587435B4: push edi
        __asm _emit 0x57
        // 0x587435B5: call 0x587475e0
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587435BA: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587435BD: pop edi
        __asm _emit 0x5F
        // 0x587435BE: pop esi
        __asm _emit 0x5E
        // 0x587435BF: pop ebp
        __asm _emit 0x5D
        // 0x587435C0: pop ebx
        __asm _emit 0x5B
        // 0x587435C1: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
