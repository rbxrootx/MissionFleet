// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58805690 .. +0xF9 bytes.
// Source symbol alias: FUN_58805690.
extern "C" __declspec(naked) void FUN_58805690() {
    __asm {
        // 0x58805690: cmp dword ptr [ecx + 0x64], 0x40000000
        __asm _emit 0x81
        __asm _emit 0x79
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58805697: jne 0x58805788
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880569D: mov edx, dword ptr [ecx + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588056A3: mov eax, dword ptr [ecx + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588056A9: push ebx
        __asm _emit 0x53
        // 0x588056AA: push esi
        __asm _emit 0x56
        // 0x588056AB: push edi
        __asm _emit 0x57
        // 0x588056AC: mov edi, dword ptr [ecx + 0x118]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588056B2: mov esi, dword ptr [edi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x50
        // 0x588056B5: lea ebx, [eax + edx]
        __asm _emit 0x8D
        __asm _emit 0x1C
        __asm _emit 0x10
        // 0x588056B8: cmp ebx, esi
        __asm _emit 0x3B
        __asm _emit 0xDE
        // 0x588056BA: jne 0x588056d1
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x588056BC: mov ebx, dword ptr [ecx + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x99
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588056C2: add ebx, dword ptr [ecx + 0xb4]
        __asm _emit 0x03
        __asm _emit 0x99
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588056C8: cmp ebx, dword ptr [edi + 0x54]
        __asm _emit 0x3B
        __asm _emit 0x5F
        __asm _emit 0x54
        // 0x588056CB: je 0x58805756
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588056D1: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x588056D3: mov esi, dword ptr [ecx + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588056D9: sub esi, dword ptr [edi + 0x54]
        __asm _emit 0x2B
        __asm _emit 0x77
        __asm _emit 0x54
        // 0x588056DC: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588056DE: add esi, dword ptr [ecx + 0xb4]
        __asm _emit 0x03
        __asm _emit 0xB1
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588056E4: lea edx, [eax + 7]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x07
        // 0x588056E7: cmp edx, 0xe
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0E
        // 0x588056EA: ja 0x5880570f
        __asm _emit 0x77
        __asm _emit 0x23
        // 0x588056EC: lea edx, [eax + 3]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x03
        // 0x588056EF: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x588056F2: ja 0x58805706
        __asm _emit 0x77
        __asm _emit 0x12
        // 0x588056F4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588056F6: jge 0x588056fd
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x588056F8: or ebx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCB
        __asm _emit 0xFF
        // 0x588056FB: jmp 0x5880571a
        __asm _emit 0xEB
        __asm _emit 0x1D
        // 0x588056FD: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588056FF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58805701: setg bl
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC3
        // 0x58805704: jmp 0x5880571a
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x58805706: cdq
        __asm _emit 0x99
        // 0x58805707: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58805709: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5880570B: sar ebx, 1
        __asm _emit 0xD1
        __asm _emit 0xFB
        // 0x5880570D: jmp 0x5880571a
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x5880570F: cdq
        __asm _emit 0x99
        // 0x58805710: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x58805713: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58805715: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58805717: sar ebx, 2
        __asm _emit 0xC1
        __asm _emit 0xFB
        __asm _emit 0x02
        // 0x5880571A: lea eax, [esi + 7]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x07
        // 0x5880571D: cmp eax, 0xe
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0E
        // 0x58805720: ja 0x58805745
        __asm _emit 0x77
        __asm _emit 0x23
        // 0x58805722: lea edx, [esi + 3]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x03
        // 0x58805725: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58805728: ja 0x5880573c
        __asm _emit 0x77
        __asm _emit 0x12
        // 0x5880572A: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5880572C: jge 0x58805733
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x5880572E: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x58805731: jmp 0x58805750
        __asm _emit 0xEB
        __asm _emit 0x1D
        // 0x58805733: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58805735: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58805737: setg al
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC0
        // 0x5880573A: jmp 0x58805750
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x5880573C: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5880573E: cdq
        __asm _emit 0x99
        // 0x5880573F: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58805741: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x58805743: jmp 0x58805750
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x58805745: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58805747: cdq
        __asm _emit 0x99
        // 0x58805748: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x5880574B: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5880574D: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58805750: add dword ptr [edi + 0x50], ebx
        __asm _emit 0x01
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x58805753: add dword ptr [edi + 0x54], eax
        __asm _emit 0x01
        __asm _emit 0x47
        __asm _emit 0x54
        // 0x58805756: mov edx, dword ptr [ecx + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880575C: add edx, dword ptr [ecx + 0xf8]
        __asm _emit 0x03
        __asm _emit 0x91
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805762: mov eax, dword ptr [ecx + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805768: pop edi
        __asm _emit 0x5F
        // 0x58805769: pop esi
        __asm _emit 0x5E
        // 0x5880576A: pop ebx
        __asm _emit 0x5B
        // 0x5880576B: cmp edx, dword ptr [eax + 0x50]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x5880576E: jne 0x58805788
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x58805770: mov edx, dword ptr [ecx + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805776: add edx, dword ptr [ecx + 0xb4]
        __asm _emit 0x03
        __asm _emit 0x91
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880577C: cmp edx, dword ptr [eax + 0x54]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x54
        // 0x5880577F: jne 0x58805788
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x58805781: mov dword ptr [ecx + 0x64], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805788: ret
        __asm _emit 0xC3
    }
}
