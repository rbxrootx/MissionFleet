// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 198 bytes in 1 exact ranges.
// Source symbol alias: FUN_587537e0.

// Ghidra body range 0x587537E0..0x587538A6; 198 mapped bytes.
extern "C" __declspec(naked) void FUN_587537e0_segment_00() {
    __asm {
        // 0x587537E0: push ebx
        __asm _emit 0x53
        // 0x587537E1: push ebp
        __asm _emit 0x55
        // 0x587537E2: push esi
        __asm _emit 0x56
        // 0x587537E3: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x587537E5: push edi
        __asm _emit 0x57
        // 0x587537E6: mov edi, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x10
        // 0x587537E9: cmp edi, dword ptr [ebp + 0x14]
        __asm _emit 0x3B
        __asm _emit 0x7D
        __asm _emit 0x14
        // 0x587537EC: jbe 0x587537f3
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587537EE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0x94
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x587537F3: mov esi, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x587537F6: mov ebx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x14
        // 0x587537F9: cmp dword ptr [ebp + 0x10], ebx
        __asm _emit 0x39
        __asm _emit 0x5D
        __asm _emit 0x10
        // 0x587537FC: jbe 0x58753803
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587537FE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0x94
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753803: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x58753806: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58753808: je 0x5875380e
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5875380A: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x5875380C: je 0x58753813
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5875380E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0x94
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753813: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58753815: je 0x5875389d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875381B: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5875381D: jne 0x58753870
        __asm _emit 0x75
        __asm _emit 0x51
        // 0x5875381F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0x94
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753824: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58753826: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58753829: jb 0x58753830
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5875382B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0x94
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753830: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58753834: cmp dword ptr [edi], eax
        __asm _emit 0x39
        __asm _emit 0x07
        // 0x58753836: jne 0x58753856
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x58753838: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5875383A: jne 0x58753874
        __asm _emit 0x75
        __asm _emit 0x38
        // 0x5875383C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0x94
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753841: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58753843: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58753846: jb 0x5875384d
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58753848: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0x94
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5875384D: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58753851: cmp dword ptr [edi + 4], ecx
        __asm _emit 0x39
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x58753854: je 0x5875387c
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x58753856: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58753858: jne 0x58753878
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x5875385A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0x94
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5875385F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58753861: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58753864: jb 0x5875386b
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58753866: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0x94
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5875386B: add edi, 0x48
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x48
        // 0x5875386E: jmp 0x587537f6
        __asm _emit 0xEB
        __asm _emit 0x86
        // 0x58753870: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58753872: jmp 0x58753826
        __asm _emit 0xEB
        __asm _emit 0xB2
        // 0x58753874: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58753876: jmp 0x58753843
        __asm _emit 0xEB
        __asm _emit 0xCB
        // 0x58753878: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5875387A: jmp 0x58753861
        __asm _emit 0xEB
        __asm _emit 0xE5
        // 0x5875387C: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5875387E: jne 0x58753899
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x58753880: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0x93
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753885: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x58753888: jb 0x5875388f
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5875388A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0x93
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5875388F: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x58753892: pop edi
        __asm _emit 0x5F
        // 0x58753893: pop esi
        __asm _emit 0x5E
        // 0x58753894: pop ebp
        __asm _emit 0x5D
        // 0x58753895: pop ebx
        __asm _emit 0x5B
        // 0x58753896: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58753899: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x5875389B: jmp 0x58753885
        __asm _emit 0xEB
        __asm _emit 0xE8
        // 0x5875389D: pop edi
        __asm _emit 0x5F
        // 0x5875389E: pop esi
        __asm _emit 0x5E
        // 0x5875389F: pop ebp
        __asm _emit 0x5D
        // 0x587538A0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587538A2: pop ebx
        __asm _emit 0x5B
        // 0x587538A3: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
