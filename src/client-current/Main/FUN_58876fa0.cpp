// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 785 bytes in 1 exact ranges.
// Source symbol alias: FUN_58876fa0.

// Ghidra body range 0x58876FA0..0x588772B1; 785 mapped bytes.
extern "C" __declspec(naked) void FUN_58876fa0_segment_00() {
    __asm {
        // 0x58876FA0: push esi
        __asm _emit 0x56
        // 0x58876FA1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58876FA3: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58876FA7: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x58876FA9: je 0x5887728d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xDE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876FAF: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58876FB3: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876FB8: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58876FBB: mov eax, 0x100
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876FC0: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58876FC3: jne 0x58877127
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x5E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876FC9: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876FCF: mov eax, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x28
        // 0x58876FD2: add eax, 6
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x06
        // 0x58876FD5: cmp eax, 0xff
        __asm _emit 0x3D
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876FDA: jge 0x58876fdf
        __asm _emit 0x7D
        __asm _emit 0x03
        // 0x58876FDC: push eax
        __asm _emit 0x50
        // 0x58876FDD: jmp 0x58876fe4
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x58876FDF: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876FE4: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0xBC
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58876FE9: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876FEF: mov eax, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x28
        // 0x58876FF2: add eax, 6
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x06
        // 0x58876FF5: cmp eax, 0xfa
        __asm _emit 0x3D
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876FFA: jge 0x58877073
        __asm _emit 0x7D
        __asm _emit 0x77
        // 0x58876FFC: push eax
        __asm _emit 0x50
        // 0x58876FFD: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0xBC
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58877002: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877008: mov edx, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x28
        // 0x5887700B: add edx, 6
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x06
        // 0x5887700E: push edx
        __asm _emit 0x52
        // 0x5887700F: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0xBC
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58877014: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887701A: mov eax, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x28
        // 0x5887701D: add eax, 6
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x06
        // 0x58877020: push eax
        __asm _emit 0x50
        // 0x58877021: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0xBC
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58877026: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887702C: mov edx, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x28
        // 0x5887702F: add edx, 6
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x06
        // 0x58877032: push edx
        __asm _emit 0x52
        // 0x58877033: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0xBC
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58877038: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887703E: mov eax, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x28
        // 0x58877041: add eax, 6
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x06
        // 0x58877044: push eax
        __asm _emit 0x50
        // 0x58877045: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0xBC
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887704A: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877050: mov edx, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x28
        // 0x58877053: add edx, 6
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x06
        // 0x58877056: push edx
        __asm _emit 0x52
        // 0x58877057: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0xBC
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887705C: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877062: mov eax, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x28
        // 0x58877065: add eax, 6
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x06
        // 0x58877068: push eax
        __asm _emit 0x50
        // 0x58877069: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0xBC
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887706E: jmp 0x5887728d
        __asm _emit 0xE9
        __asm _emit 0x1A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877073: push 0xfa
        __asm _emit 0x68
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877078: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0xBC
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887707D: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877083: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877088: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0xBC
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887708D: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877093: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877098: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0xBC
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887709D: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588770A3: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588770A8: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0xBC
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588770AD: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588770B3: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588770B8: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0xBC
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588770BD: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588770C3: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588770C8: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0xBC
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588770CD: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588770D3: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588770D8: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0xBC
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588770DD: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588770E3: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588770E8: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0xBB
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588770ED: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588770F3: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588770F9: push eax
        __asm _emit 0x50
        // 0x588770FA: mov dword ptr [esi + 0xa8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877100: call 0x58770a80
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x99
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58877105: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58877109: mov edx, 0xe2ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887710E: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58877111: mov eax, 0x200
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877116: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x58877119: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5887711D: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x58877122: jmp 0x5887728d
        __asm _emit 0xE9
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877127: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5887712B: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5887712E: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877133: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58877136: jne 0x5887726e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887713C: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877142: mov eax, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x28
        // 0x58877145: add eax, -6
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xFA
        // 0x58877148: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5887714A: jle 0x5887714f
        __asm _emit 0x7E
        __asm _emit 0x03
        // 0x5887714C: push eax
        __asm _emit 0x50
        // 0x5887714D: jmp 0x58877151
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5887714F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58877151: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0xBB
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58877156: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887715C: mov edx, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x28
        // 0x5887715F: sub edx, 6
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x06
        // 0x58877162: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58877164: jle 0x588771ed
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887716A: mov eax, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877170: mov edx, dword ptr [eax + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x28
        // 0x58877173: sub edx, 6
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x06
        // 0x58877176: push edx
        __asm _emit 0x52
        // 0x58877177: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0xBB
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887717C: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877182: mov eax, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x28
        // 0x58877185: sub eax, 6
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x06
        // 0x58877188: push eax
        __asm _emit 0x50
        // 0x58877189: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0xBB
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887718E: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877194: mov edx, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x28
        // 0x58877197: sub edx, 6
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x06
        // 0x5887719A: push edx
        __asm _emit 0x52
        // 0x5887719B: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0xBB
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588771A0: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588771A6: mov eax, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x28
        // 0x588771A9: sub eax, 6
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x06
        // 0x588771AC: push eax
        __asm _emit 0x50
        // 0x588771AD: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0xBB
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588771B2: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588771B8: mov edx, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x28
        // 0x588771BB: sub edx, 6
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x06
        // 0x588771BE: push edx
        __asm _emit 0x52
        // 0x588771BF: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0xBB
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588771C4: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588771CA: mov eax, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x28
        // 0x588771CD: sub eax, 6
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x06
        // 0x588771D0: push eax
        __asm _emit 0x50
        // 0x588771D1: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0xBB
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588771D6: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588771DC: mov edx, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x28
        // 0x588771DF: sub edx, 6
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x06
        // 0x588771E2: push edx
        __asm _emit 0x52
        // 0x588771E3: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0xBA
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588771E8: jmp 0x5887728d
        __asm _emit 0xE9
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588771ED: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588771EF: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0xBA
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588771F4: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588771FA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588771FC: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0xBA
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58877201: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877207: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58877209: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0xBA
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887720E: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877214: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58877216: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0xBA
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887721B: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877221: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58877223: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0xBA
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58877228: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887722E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58877230: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0xBA
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58877235: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887723B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5887723D: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0xBA
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58877242: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58877246: mov ecx, 0xe5ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887724B: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5887724E: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877253: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x58877256: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5887725A: mov eax, 0xfffd
        __asm _emit 0xB8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887725F: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58877263: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877268: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5887726C: jmp 0x5887728d
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x5887726E: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x58877272: mov eax, 0x1f00
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877277: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x5887727A: mov ecx, 0x500
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887727F: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x58877282: jne 0x5887728d
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x58877284: mov edx, 0xfffb
        __asm _emit 0xBA
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877289: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5887728D: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x58877290: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58877292: je 0x588772ab
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x58877294: push edi
        __asm _emit 0x57
        // 0x58877295: mov edi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x38
        // 0x58877298: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5887729A: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5887729D: cmp edi, dword ptr [esi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x588772A0: je 0x588772ad
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588772A2: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588772A4: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588772A6: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588772A8: jne 0x58877295
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x588772AA: pop edi
        __asm _emit 0x5F
        // 0x588772AB: pop esi
        __asm _emit 0x5E
        // 0x588772AC: ret
        __asm _emit 0xC3
        // 0x588772AD: pop edi
        __asm _emit 0x5F
        // 0x588772AE: pop esi
        __asm _emit 0x5E
        // 0x588772AF: jmp edx
        __asm _emit 0xFF
        __asm _emit 0xE2
    }
}
