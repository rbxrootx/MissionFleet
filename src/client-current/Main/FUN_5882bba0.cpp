// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 328 bytes in 1 exact ranges.
// Source symbol alias: FUN_5882bba0.

// Ghidra body range 0x5882BBA0..0x5882BCE8; 328 mapped bytes.
extern "C" __declspec(naked) void FUN_5882bba0_segment_00() {
    __asm {
        // 0x5882BBA0: push ebp
        __asm _emit 0x55
        // 0x5882BBA1: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5882BBA3: and esp, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xF8
        // 0x5882BBA6: sub esp, 0x194
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BBAC: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5882BBB1: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5882BBB3: mov dword ptr [esp + 0x190], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BBBA: push ebx
        __asm _emit 0x53
        // 0x5882BBBB: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x5882BBBD: mov ecx, dword ptr [ebx + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BBC3: push esi
        __asm _emit 0x56
        // 0x5882BBC4: push edi
        __asm _emit 0x57
        // 0x5882BBC5: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5882BBC7: je 0x5882bcd3
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BBCD: call 0x587864a0
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0xA8
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882BBD2: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5882BBD4: add esi, 0x200
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BBDA: mov ecx, 0x20
        __asm _emit 0xB9
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BBDF: lea edi, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5882BBE3: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x5882BBE5: mov ecx, dword ptr [ebx + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BBEB: call 0x587860f0
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0xA5
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882BBF0: mov ecx, dword ptr [ebx + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BBF6: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5882BBF8: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0xCB
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882BBFD: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5882BBFF: jbe 0x5882bcd3
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BC05: lea esi, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5882BC09: mov eax, 0x280
        __asm _emit 0xB8
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BC0E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5882BC10: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x5882BC12: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5882BC16: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5882BC1A: cmp byte ptr [esi], 0
        __asm _emit 0x80
        __asm _emit 0x3E
        __asm _emit 0x00
        // 0x5882BC1D: je 0x5882bcae
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BC23: cmp word ptr [esi + 2], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5882BC28: je 0x5882bcae
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BC2E: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5882BC30: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882BC36: push edx
        __asm _emit 0x52
        // 0x5882BC37: call 0x58778dc0
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0xD1
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5882BC3C: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5882BC3E: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5882BC40: je 0x5882bcae
        __asm _emit 0x74
        __asm _emit 0x6C
        // 0x5882BC42: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BC47: lea eax, [esp + 0x9c]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BC4E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882BC50: push eax
        __asm _emit 0x50
        // 0x5882BC51: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x0F
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5882BC56: mov ecx, dword ptr [ebx + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BC5C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5882BC5F: call 0x587864a0
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0xA8
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882BC64: movzx ecx, word ptr [edi + 0x98]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8F
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BC6B: add eax, dword ptr [esp + 0x14]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5882BC6F: and ecx, 0xff
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BC75: mov eax, dword ptr [eax + esi]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x30
        // 0x5882BC78: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x5882BC7B: push eax
        __asm _emit 0x50
        // 0x5882BC7C: push ecx
        __asm _emit 0x51
        // 0x5882BC7D: push 0x5899df44
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0xDF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5882BC82: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882BC88: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5882BC8B: push eax
        __asm _emit 0x50
        // 0x5882BC8C: lea edx, [esp + 0xa4]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BC93: push edx
        __asm _emit 0x52
        // 0x5882BC94: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882BC9A: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5882BC9D: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5882BCA2: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5882BCA4: lea eax, [esp + 0xa0]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BCAB: push eax
        __asm _emit 0x50
        // 0x5882BCAC: jmp 0x5882bcba
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x5882BCAE: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5882BCB3: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5882BCB5: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882BCBA: mov ecx, dword ptr [ebx + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BCC0: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0xCC
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882BCC5: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5882BCC8: sub dword ptr [esp + 0x10], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        // 0x5882BCCD: jne 0x5882bc1a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x47
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882BCD3: mov ecx, dword ptr [esp + 0x19c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BCDA: pop edi
        __asm _emit 0x5F
        // 0x5882BCDB: pop esi
        __asm _emit 0x5E
        // 0x5882BCDC: pop ebx
        __asm _emit 0x5B
        // 0x5882BCDD: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5882BCDF: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0x0E
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5882BCE4: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x5882BCE6: pop ebp
        __asm _emit 0x5D
        // 0x5882BCE7: ret
        __asm _emit 0xC3
    }
}
