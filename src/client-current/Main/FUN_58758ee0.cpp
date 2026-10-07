// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 439 bytes in 2 exact ranges.
// Source symbol alias: FUN_58758ee0.

// Ghidra body range 0x58758EE0..0x58758F6A; 138 mapped bytes.
extern "C" __declspec(naked) void FUN_58758ee0_segment_00() {
    __asm {
        // 0x58758EE0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58758EE2: push 0x5898947b
        __asm _emit 0x68
        __asm _emit 0x7B
        __asm _emit 0x94
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58758EE7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758EED: push eax
        __asm _emit 0x50
        // 0x58758EEE: push ecx
        __asm _emit 0x51
        // 0x58758EEF: push esi
        __asm _emit 0x56
        // 0x58758EF0: push edi
        __asm _emit 0x57
        // 0x58758EF1: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58758EF6: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58758EF8: push eax
        __asm _emit 0x50
        // 0x58758EF9: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58758EFD: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758F03: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58758F05: fldz
        __asm _emit 0xD9
        __asm _emit 0xEE
        // 0x58758F07: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58758F09: fst dword ptr [esi + 0x1cc]
        __asm _emit 0xD9
        __asm _emit 0x96
        __asm _emit 0xCC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758F0F: push 0xf0c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758F14: fstp dword ptr [esi + 0x1d0]
        __asm _emit 0xD9
        __asm _emit 0x9E
        __asm _emit 0xD0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758F1A: mov dword ptr [esi], 0x5898d774
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x74
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58758F20: mov dword ptr [esi + 4], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x58758F23: mov dword ptr [esi + 0x2d4], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758F2D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x3D
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58758F32: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58758F35: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58758F39: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58758F3D: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58758F3F: je 0x58758f59
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x58758F41: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58758F45: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58758F49: push ecx
        __asm _emit 0x51
        // 0x58758F4A: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58758F4E: push edx
        __asm _emit 0x52
        // 0x58758F4F: push ecx
        __asm _emit 0x51
        // 0x58758F50: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58758F52: call 0x588e9e10
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0x0E
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58758F57: jmp 0x58758f5b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58758F59: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58758F5B: mov dword ptr [esi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58758F5E: mov dword ptr [esp + 0x18], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58758F66: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58758F68: jmp 0x58758f70
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x58758F70..0x5875909D; 301 mapped bytes.
extern "C" __declspec(naked) void FUN_58758ee0_segment_01() {
    __asm {
        // 0x58758F70: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58758F73: mov ecx, dword ptr [edx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758F79: mov edx, dword ptr [ecx + 0x268]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758F7F: mov edi, 0x1f
        __asm _emit 0xBF
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758F84: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x58758F86: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58758F88: shr edx, cl
        __asm _emit 0xD3
        __asm _emit 0xEA
        // 0x58758F8A: and dl, 1
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x01
        // 0x58758F8D: mov byte ptr [esi + eax + 0x18c], dl
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758F94: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58758F97: mov edx, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758F9D: mov edx, dword ptr [edx + 0x26c]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758FA3: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58758FA5: shr edx, cl
        __asm _emit 0xD3
        __asm _emit 0xEA
        // 0x58758FA7: mov edi, 0x1e
        __asm _emit 0xBF
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758FAC: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x58758FAE: and dl, 1
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x01
        // 0x58758FB1: mov byte ptr [esi + eax + 0x1ac], dl
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758FB8: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58758FBB: mov edx, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758FC1: mov edx, dword ptr [edx + 0x268]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758FC7: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58758FC9: shr edx, cl
        __asm _emit 0xD3
        __asm _emit 0xEA
        // 0x58758FCB: and dl, 1
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x01
        // 0x58758FCE: mov byte ptr [esi + eax + 0x18d], dl
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x8D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758FD5: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58758FD8: mov edx, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758FDE: mov edx, dword ptr [edx + 0x26c]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758FE4: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58758FE6: shr edx, cl
        __asm _emit 0xD3
        __asm _emit 0xEA
        // 0x58758FE8: mov edi, 0x1d
        __asm _emit 0xBF
        __asm _emit 0x1D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758FED: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x58758FEF: and dl, 1
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x01
        // 0x58758FF2: mov byte ptr [esi + eax + 0x1ad], dl
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0xAD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758FF9: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58758FFC: mov edx, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58759002: mov edx, dword ptr [edx + 0x268]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58759008: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5875900A: shr edx, cl
        __asm _emit 0xD3
        __asm _emit 0xEA
        // 0x5875900C: and dl, 1
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x01
        // 0x5875900F: mov byte ptr [esi + eax + 0x18e], dl
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x8E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58759016: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58759019: mov edx, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875901F: mov edx, dword ptr [edx + 0x26c]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58759025: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58759027: shr edx, cl
        __asm _emit 0xD3
        __asm _emit 0xEA
        // 0x58759029: mov edi, 0x1c
        __asm _emit 0xBF
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875902E: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x58759030: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58759033: and dl, 1
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x01
        // 0x58759036: mov byte ptr [esi + eax + 0x1aa], dl
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0xAA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875903D: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58759040: mov edx, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58759046: mov edx, dword ptr [edx + 0x268]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875904C: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5875904E: shr edx, cl
        __asm _emit 0xD3
        __asm _emit 0xEA
        // 0x58759050: and dl, 1
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x01
        // 0x58759053: mov byte ptr [esi + eax + 0x18b], dl
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x8B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875905A: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5875905D: mov edx, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58759063: mov edx, dword ptr [edx + 0x26c]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58759069: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5875906B: shr edx, cl
        __asm _emit 0xD3
        __asm _emit 0xEA
        // 0x5875906D: and dl, 1
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x01
        // 0x58759070: cmp eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x20
        // 0x58759073: mov byte ptr [esi + eax + 0x1ab], dl
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0xAB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875907A: jl 0x58758f70
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xF0
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58759080: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58759082: call 0x58758870
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58759087: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58759089: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5875908D: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58759094: pop ecx
        __asm _emit 0x59
        // 0x58759095: pop edi
        __asm _emit 0x5F
        // 0x58759096: pop esi
        __asm _emit 0x5E
        // 0x58759097: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5875909A: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
