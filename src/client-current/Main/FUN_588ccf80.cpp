// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 291 bytes in 1 exact ranges.
// Source symbol alias: FUN_588ccf80.

// Ghidra body range 0x588CCF80..0x588CD0A3; 291 mapped bytes.
extern "C" __declspec(naked) void FUN_588ccf80_segment_00() {
    __asm {
        // 0x588CCF80: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588CCF84: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588CCF88: push esi
        __asm _emit 0x56
        // 0x588CCF89: push eax
        __asm _emit 0x50
        // 0x588CCF8A: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588CCF8E: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588CCF90: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588CCF94: push ecx
        __asm _emit 0x51
        // 0x588CCF95: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588CCF99: push edx
        __asm _emit 0x52
        // 0x588CCF9A: push eax
        __asm _emit 0x50
        // 0x588CCF9B: push ecx
        __asm _emit 0x51
        // 0x588CCF9C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588CCF9E: call 0x588d02e0
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CCFA3: mov dword ptr [esi], 0x589a0d10
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x10
        __asm _emit 0x0D
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588CCFA9: mov eax, dword ptr [0x58a24690]
        __asm _emit 0xA1
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CCFAE: mov edx, 0x23
        __asm _emit 0xBA
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CCFB3: cmp dword ptr [eax + 0x164], edx
        __asm _emit 0x39
        __asm _emit 0x90
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CCFB9: jle 0x588ccfd2
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588CCFBB: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CCFC2: je 0x588ccfd2
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588CCFC4: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CCFCA: mov eax, dword ptr [eax + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CCFD0: jmp 0x588ccfd4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CCFD2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588CCFD4: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588CCFD7: push edi
        __asm _emit 0x57
        // 0x588CCFD8: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588CCFDB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588CCFDD: je 0x588cd007
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588CCFDF: mov edi, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x588CCFE2: mov dword ptr [ecx + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x0C
        // 0x588CCFE5: mov edi, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x14
        // 0x588CCFE8: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588CCFEB: mov dword ptr [ecx + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x10
        // 0x588CCFEE: mov edi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x38
        // 0x588CCFF0: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588CCFF3: mov dword ptr [ecx], edi
        __asm _emit 0x89
        __asm _emit 0x39
        // 0x588CCFF5: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x588CCFF8: mov dword ptr [ecx + 4], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x04
        // 0x588CCFFB: mov edi, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x588CCFFE: mov dword ptr [ecx + 8], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x08
        // 0x588CD001: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588CD004: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588CD007: mov eax, dword ptr [0x58a24690]
        __asm _emit 0xA1
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CD00C: cmp dword ptr [eax + 0x164], 0x24
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x24
        // 0x588CD013: jle 0x588cd02c
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588CD015: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD01C: je 0x588cd02c
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588CD01E: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD024: mov eax, dword ptr [ecx + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD02A: jmp 0x588cd02e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CD02C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588CD02E: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x588CD031: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588CD034: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588CD036: je 0x588cd060
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588CD038: mov edi, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x588CD03B: mov dword ptr [ecx + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x0C
        // 0x588CD03E: mov edi, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x14
        // 0x588CD041: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588CD044: mov dword ptr [ecx + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x10
        // 0x588CD047: mov edi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x38
        // 0x588CD049: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588CD04C: mov dword ptr [ecx], edi
        __asm _emit 0x89
        __asm _emit 0x39
        // 0x588CD04E: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x588CD051: mov dword ptr [ecx + 4], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x04
        // 0x588CD054: mov edi, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x588CD057: mov dword ptr [ecx + 8], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x08
        // 0x588CD05A: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588CD05D: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588CD060: mov eax, dword ptr [0x58a24690]
        __asm _emit 0xA1
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CD065: cmp dword ptr [eax + 0x164], edx
        __asm _emit 0x39
        __asm _emit 0x90
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD06B: pop edi
        __asm _emit 0x5F
        // 0x588CD06C: jle 0x588cd092
        __asm _emit 0x7E
        __asm _emit 0x24
        // 0x588CD06E: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD075: je 0x588cd092
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x588CD077: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD07D: mov eax, dword ptr [ecx + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD083: mov edx, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x5C
        // 0x588CD086: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x588CD089: mov dword ptr [edx + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x74
        // 0x588CD08C: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588CD08E: pop esi
        __asm _emit 0x5E
        // 0x588CD08F: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588CD092: mov edx, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x5C
        // 0x588CD095: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588CD097: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x588CD09A: mov dword ptr [edx + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x74
        // 0x588CD09D: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588CD09F: pop esi
        __asm _emit 0x5E
        // 0x588CD0A0: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
