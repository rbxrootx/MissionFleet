// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 133 bytes in 1 exact ranges.
// Source symbol alias: FUN_58777810.

// Ghidra body range 0x58777810..0x58777895; 133 mapped bytes.
extern "C" __declspec(naked) void FUN_58777810_segment_00() {
    __asm {
        // 0x58777810: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58777813: push ebx
        __asm _emit 0x53
        // 0x58777814: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58777818: push esi
        __asm _emit 0x56
        // 0x58777819: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5877781B: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x5877781E: push edi
        __asm _emit 0x57
        // 0x5877781F: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x58777822: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58777824: sub ecx, edi
        __asm _emit 0x2B
        __asm _emit 0xCF
        // 0x58777826: sar ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x58777829: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5877782B: ja 0x58777832
        __asm _emit 0x77
        __asm _emit 0x05
        // 0x5877782D: call 0x58777420
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58777832: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x58777834: jbe 0x5877783b
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58777836: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x54
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877783B: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x5877783D: push ebp
        __asm _emit 0x55
        // 0x5877783E: mov ebp, esi
        __asm _emit 0x8B
        __asm _emit 0xEE
        // 0x58777840: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58777844: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58777846: jne 0x5877785f
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x58777848: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0x54
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877784D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877784F: lea edi, [edi + ebx*4]
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0x9F
        // 0x58777852: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58777855: ja 0x5877786a
        __asm _emit 0x77
        __asm _emit 0x13
        // 0x58777857: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58777859: je 0x58777863
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5877785B: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x5877785D: jmp 0x58777865
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x5877785F: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58777861: jmp 0x5877784f
        __asm _emit 0xEB
        __asm _emit 0xEC
        // 0x58777863: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58777865: cmp edi, dword ptr [esi + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x58777868: jae 0x5877786f
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x5877786A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x54
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877786F: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58777871: jne 0x58777890
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x58777873: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0x53
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777878: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877787A: pop ebp
        __asm _emit 0x5D
        // 0x5877787B: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x5877787E: jb 0x58777885
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58777880: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0x53
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777885: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58777887: pop edi
        __asm _emit 0x5F
        // 0x58777888: pop esi
        __asm _emit 0x5E
        // 0x58777889: pop ebx
        __asm _emit 0x5B
        // 0x5877788A: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5877788D: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58777890: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58777893: jmp 0x5877787a
        __asm _emit 0xEB
        __asm _emit 0xE5
    }
}
