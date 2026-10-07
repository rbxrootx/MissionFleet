// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 162 bytes in 1 exact ranges.
// Source symbol alias: FUN_587435d0.

// Ghidra body range 0x587435D0..0x58743672; 162 mapped bytes.
extern "C" __declspec(naked) void FUN_587435d0_segment_00() {
    __asm {
        // 0x587435D0: push esi
        __asm _emit 0x56
        // 0x587435D1: mov esi, dword ptr [ecx + 0x70c]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x0C
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587435D7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587435D9: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587435DB: jg 0x587435e1
        __asm _emit 0x7F
        __asm _emit 0x04
        // 0x587435DD: pop esi
        __asm _emit 0x5E
        // 0x587435DE: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587435E1: push ebp
        __asm _emit 0x55
        // 0x587435E2: mov ebp, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587435E6: lea edx, [ebp*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xED
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587435ED: sub edx, ebp
        __asm _emit 0x2B
        __asm _emit 0xD5
        // 0x587435EF: cmp byte ptr [ecx + edx*8 + 0x14], 1
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0xD1
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x587435F4: push edi
        __asm _emit 0x57
        // 0x587435F5: lea edi, [ecx + edx*8]
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0xD1
        // 0x587435F8: je 0x58743602
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587435FA: pop edi
        __asm _emit 0x5F
        // 0x587435FB: pop ebp
        __asm _emit 0x5D
        // 0x587435FC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587435FE: pop esi
        __asm _emit 0x5E
        // 0x587435FF: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58743602: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58743606: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x58743608: jle 0x5874360c
        __asm _emit 0x7E
        __asm _emit 0x02
        // 0x5874360A: mov edx, esi
        __asm _emit 0x8B
        __asm _emit 0xD6
        // 0x5874360C: mov esi, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x04
        // 0x5874360F: push ebx
        __asm _emit 0x53
        // 0x58743610: mov ebx, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5F
        __asm _emit 0x0C
        // 0x58743613: movzx esi, word ptr [esi + ebx*4 + 0xac0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xB4
        __asm _emit 0x9E
        __asm _emit 0xC0
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874361B: xor esi, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF6
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743621: sub esi, dword ptr [edi + 0x40]
        __asm _emit 0x2B
        __asm _emit 0x77
        __asm _emit 0x40
        // 0x58743624: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x58743626: jle 0x58743637
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x58743628: mov edx, esi
        __asm _emit 0x8B
        __asm _emit 0xD6
        // 0x5874362A: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5874362C: jg 0x5874363b
        __asm _emit 0x7F
        __asm _emit 0x0D
        // 0x5874362E: pop ebx
        __asm _emit 0x5B
        // 0x5874362F: pop edi
        __asm _emit 0x5F
        // 0x58743630: pop ebp
        __asm _emit 0x5D
        // 0x58743631: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58743633: pop esi
        __asm _emit 0x5E
        // 0x58743634: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58743637: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58743639: jle 0x5874366b
        __asm _emit 0x7E
        __asm _emit 0x30
        // 0x5874363B: cmp ebp, dword ptr [ecx + 8]
        __asm _emit 0x3B
        __asm _emit 0x69
        __asm _emit 0x08
        // 0x5874363E: jge 0x5874366b
        __asm _emit 0x7D
        __asm _emit 0x2B
        // 0x58743640: cmp dword ptr [edi + 0x18], eax
        __asm _emit 0x39
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x58743643: jne 0x5874366b
        __asm _emit 0x75
        __asm _emit 0x26
        // 0x58743645: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58743647: jle 0x5874366b
        __asm _emit 0x7E
        __asm _emit 0x22
        // 0x58743649: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x5874364C: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x5874364F: mov eax, dword ptr [eax + ebx*4 + 0xb40]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743656: movzx eax, word ptr [eax + 0xb0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874365D: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x58743660: mov dword ptr [edi + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x1C
        // 0x58743663: sub dword ptr [ecx + 0x70c], edx
        __asm _emit 0x29
        __asm _emit 0x91
        __asm _emit 0x0C
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743669: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5874366B: pop ebx
        __asm _emit 0x5B
        // 0x5874366C: pop edi
        __asm _emit 0x5F
        // 0x5874366D: pop ebp
        __asm _emit 0x5D
        // 0x5874366E: pop esi
        __asm _emit 0x5E
        // 0x5874366F: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
