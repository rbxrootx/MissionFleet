// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 232 bytes in 2 exact ranges.
// Source symbol alias: FUN_587465c0.

// Ghidra body range 0x587465C0..0x587465DD; 29 mapped bytes.
extern "C" __declspec(naked) void FUN_587465c0_segment_00() {
    __asm {
        // 0x587465C0: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x587465C3: push ebx
        __asm _emit 0x53
        // 0x587465C4: push ebp
        __asm _emit 0x55
        // 0x587465C5: mov dword ptr [esp + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587465C9: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587465CB: push esi
        __asm _emit 0x56
        // 0x587465CC: add ecx, 0x18
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x18
        // 0x587465CF: push edi
        __asm _emit 0x57
        // 0x587465D0: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587465D4: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587465D6: mov esi, 0xb40
        __asm _emit 0xBE
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587465DB: jmp 0x587465e0
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x587465E0..0x587466AB; 203 mapped bytes.
extern "C" __declspec(naked) void FUN_587465c0_segment_01() {
    __asm {
        // 0x587465E0: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587465E4: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587465E6: mov ecx, dword ptr [esi + eax + 0x34c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x06
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587465ED: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587465EF: je 0x587465fa
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587465F1: movzx ecx, byte ptr [ecx]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x09
        // 0x587465F4: cmp cx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x05
        // 0x587465F8: je 0x5874660e
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x587465FA: mov ecx, dword ptr [esi + eax + 0x34c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x06
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746601: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58746603: je 0x58746682
        __asm _emit 0x74
        __asm _emit 0x7D
        // 0x58746605: movzx ecx, byte ptr [ecx]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x09
        // 0x58746608: cmp cx, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x06
        // 0x5874660C: jne 0x58746682
        __asm _emit 0x75
        __asm _emit 0x74
        // 0x5874660E: mov edx, dword ptr [eax + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746614: mov edx, dword ptr [edx + 0x268]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874661A: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5874661C: mov ebp, 0x80000000
        __asm _emit 0xBD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x58746621: shr ebp, cl
        __asm _emit 0xD3
        __asm _emit 0xED
        // 0x58746623: mov ecx, 0x1f
        __asm _emit 0xB9
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746628: sub ecx, edi
        __asm _emit 0x2B
        __asm _emit 0xCF
        // 0x5874662A: and edx, ebp
        __asm _emit 0x23
        __asm _emit 0xD5
        // 0x5874662C: shr edx, cl
        __asm _emit 0xD3
        __asm _emit 0xEA
        // 0x5874662E: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x58746630: jne 0x58746682
        __asm _emit 0x75
        __asm _emit 0x50
        // 0x58746632: cmp dword ptr [esi + eax + 0x34c], 0
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x06
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874663A: je 0x58746682
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x5874663C: mov ecx, 0xaa
        __asm _emit 0xB9
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746641: xor cx, word ptr [esi + eax + 0x2cc]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x8C
        __asm _emit 0x06
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746649: jbe 0x58746682
        __asm _emit 0x76
        __asm _emit 0x37
        // 0x5874664B: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5874664F: movzx ecx, word ptr [edx]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x0A
        // 0x58746652: cmp cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x01
        // 0x58746656: je 0x5874665e
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58746658: cmp cx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x5874665C: jne 0x58746682
        __asm _emit 0x75
        __asm _emit 0x24
        // 0x5874665E: mov eax, dword ptr [esi + eax - 0x900]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58746665: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58746667: je 0x58746682
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x58746669: cmp word ptr [edx + 0x34], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7A
        __asm _emit 0x34
        __asm _emit 0x00
        // 0x5874666E: ja 0x58746676
        __asm _emit 0x77
        __asm _emit 0x06
        // 0x58746670: cmp dword ptr [edx + 0x30], 0
        __asm _emit 0x83
        __asm _emit 0x7A
        __asm _emit 0x30
        __asm _emit 0x00
        // 0x58746674: je 0x58746682
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x58746676: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5874667A: push ebx
        __asm _emit 0x53
        // 0x5874667B: push edi
        __asm _emit 0x57
        // 0x5874667C: push eax
        __asm _emit 0x50
        // 0x5874667D: call 0x587462d0
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58746682: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x58746685: inc edi
        __asm _emit 0x47
        // 0x58746686: cmp esi, 0xbc0
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0xC0
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874668C: jl 0x587465e0
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x4E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58746692: add dword ptr [esp + 0x10], 0x38
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x38
        // 0x58746697: inc ebx
        __asm _emit 0x43
        // 0x58746698: cmp ebx, 2
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x02
        // 0x5874669B: jl 0x587465d4
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x33
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587466A1: pop edi
        __asm _emit 0x5F
        // 0x587466A2: pop esi
        __asm _emit 0x5E
        // 0x587466A3: pop ebp
        __asm _emit 0x5D
        // 0x587466A4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587466A6: pop ebx
        __asm _emit 0x5B
        // 0x587466A7: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587466AA: ret
        __asm _emit 0xC3
    }
}
