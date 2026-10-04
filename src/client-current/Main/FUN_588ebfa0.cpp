// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588EBFA0 .. +0xDD bytes.
// Source symbol alias: FUN_588ebfa0.
extern "C" __declspec(naked) void FUN_588ebfa0() {
    __asm {
        // 0x588EBFA0: push ebx
        __asm _emit 0x53
        // 0x588EBFA1: mov ebx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588EBFA5: push ebp
        __asm _emit 0x55
        // 0x588EBFA6: push esi
        __asm _emit 0x56
        // 0x588EBFA7: mov esi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588EBFAB: push edi
        __asm _emit 0x57
        // 0x588EBFAC: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x588EBFAE: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588EBFB0: jne 0x588ebfb4
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x588EBFB2: mov esi, ebx
        __asm _emit 0x8B
        __asm _emit 0xF3
        // 0x588EBFB4: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0x0C
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EBFB9: sub esi, ebx
        __asm _emit 0x2B
        __asm _emit 0xF3
        // 0x588EBFBB: inc esi
        __asm _emit 0x46
        // 0x588EBFBC: cdq
        __asm _emit 0x99
        // 0x588EBFBD: idiv esi
        __asm _emit 0xF7
        __asm _emit 0xFE
        // 0x588EBFBF: cmp dword ptr [0x589c9074], 2
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x02
        // 0x588EBFC6: mov ebp, edx
        __asm _emit 0x8B
        __asm _emit 0xEA
        // 0x588EBFC8: je 0x588ebfd3
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588EBFCA: pop edi
        __asm _emit 0x5F
        // 0x588EBFCB: pop esi
        __asm _emit 0x5E
        // 0x588EBFCC: pop ebp
        __asm _emit 0x5D
        // 0x588EBFCD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EBFCF: pop ebx
        __asm _emit 0x5B
        // 0x588EBFD0: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588EBFD3: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588EBFD7: mov eax, dword ptr [edi + esi*8 + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0xF7
        __asm _emit 0x08
        // 0x588EBFDB: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x588EBFDE: je 0x588ec00d
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x588EBFE0: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x588EBFE3: cmp dword ptr [ecx + 0x170], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EBFE9: jle 0x588ebffe
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588EBFEB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588EBFED: jl 0x588ebffe
        __asm _emit 0x7C
        __asm _emit 0x0F
        // 0x588EBFEF: mov ecx, dword ptr [ecx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EBFF5: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588EBFF7: je 0x588ebffe
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588EBFF9: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x81
        // 0x588EBFFC: jmp 0x588ec000
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588EBFFE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EC000: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EC002: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588EC004: mov eax, dword ptr [edx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x14
        // 0x588EC007: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588EC009: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588EC00B: jne 0x588ec071
        __asm _emit 0x75
        __asm _emit 0x64
        // 0x588EC00D: lea eax, [ebx + ebp]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x2B
        // 0x588EC010: mov dword ptr [edi + esi*8 + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0xF7
        __asm _emit 0x08
        // 0x588EC014: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x588EC017: cmp dword ptr [ecx + 0x170], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC01D: jle 0x588ec032
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588EC01F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588EC021: jl 0x588ec032
        __asm _emit 0x7C
        __asm _emit 0x0F
        // 0x588EC023: mov ecx, dword ptr [ecx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC029: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588EC02B: je 0x588ec032
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588EC02D: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x81
        // 0x588EC030: jmp 0x588ec034
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588EC032: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EC034: mov ecx, dword ptr [0x58a248fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588EC03A: push ecx
        __asm _emit 0x51
        // 0x588EC03B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588EC03D: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588EC042: mov eax, dword ptr [edi + esi*8 + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0xF7
        __asm _emit 0x08
        // 0x588EC046: mov edi, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x04
        // 0x588EC049: cmp dword ptr [edi + 0x170], eax
        __asm _emit 0x39
        __asm _emit 0x87
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC04F: jle 0x588ec064
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588EC051: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588EC053: jl 0x588ec064
        __asm _emit 0x7C
        __asm _emit 0x0F
        // 0x588EC055: mov edi, dword ptr [edi + 0x194]
        __asm _emit 0x8B
        __asm _emit 0xBF
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC05B: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588EC05D: je 0x588ec064
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588EC05F: mov eax, dword ptr [edi + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x87
        // 0x588EC062: jmp 0x588ec066
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588EC064: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EC066: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EC068: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588EC06A: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588EC06D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588EC06F: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588EC071: pop edi
        __asm _emit 0x5F
        // 0x588EC072: pop esi
        __asm _emit 0x5E
        // 0x588EC073: pop ebp
        __asm _emit 0x5D
        // 0x588EC074: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC079: pop ebx
        __asm _emit 0x5B
        // 0x588EC07A: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
