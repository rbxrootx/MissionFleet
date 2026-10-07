// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 631 bytes in 1 exact ranges.
// Source symbol alias: FUN_588b7f70.

// Ghidra body range 0x588B7F70..0x588B81E7; 631 mapped bytes.
extern "C" __declspec(naked) void FUN_588b7f70_segment_00() {
    __asm {
        // 0x588B7F70: push ebp
        __asm _emit 0x55
        // 0x588B7F71: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x588B7F73: and esp, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xF8
        // 0x588B7F76: sub esp, 0xbc
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B7F7C: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588B7F81: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588B7F83: mov dword ptr [esp + 0xb8], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B7F8A: push ebx
        __asm _emit 0x53
        // 0x588B7F8B: push esi
        __asm _emit 0x56
        // 0x588B7F8C: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588B7F8E: push edi
        __asm _emit 0x57
        // 0x588B7F8F: lea edi, [esi + 0xe4]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B7F95: mov ebx, 3
        __asm _emit 0xBB
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B7F9A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B7FA0: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588B7FA2: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B7FA7: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588B7FAA: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x588B7FAD: jne 0x588b7fa0
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x588B7FAF: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B7FB5: push ebx
        __asm _emit 0x53
        // 0x588B7FB6: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0xF3
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B7FBB: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B7FC1: push ebx
        __asm _emit 0x53
        // 0x588B7FC2: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0xF3
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B7FC7: mov eax, dword ptr [esi + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B7FCD: movzx cx, byte ptr [eax + 0x13a5]
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x88
        __asm _emit 0xA5
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B7FD5: mov ebx, dword ptr [0x5898c3c4]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588B7FDB: mov word ptr [esi + 0x178], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B7FE2: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588B7FE4: cmp byte ptr [eax + 0x13a5], 0
        __asm _emit 0x80
        __asm _emit 0xB8
        __asm _emit 0xA5
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B7FEB: jbe 0x588b80c8
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0xD7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B7FF1: mov ecx, dword ptr [esi + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B7FF7: push edi
        __asm _emit 0x57
        // 0x588B7FF8: call 0x588bb370
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B7FFD: push eax
        __asm _emit 0x50
        // 0x588B7FFE: lea edx, [esp + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x588B8002: push 0x589a0988
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0x09
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588B8007: push edx
        __asm _emit 0x52
        // 0x588B8008: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x588B800A: mov ecx, dword ptr [esi + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8010: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588B8013: push edi
        __asm _emit 0x57
        // 0x588B8014: call 0x588bb3d0
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8019: movzx eax, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC0
        // 0x588B801C: push eax
        __asm _emit 0x50
        // 0x588B801D: lea ecx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B8021: push 0x589a0984
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588B8026: push ecx
        __asm _emit 0x51
        // 0x588B8027: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x588B8029: mov ecx, dword ptr [esi + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B802F: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588B8032: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588B8037: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588B8039: push edi
        __asm _emit 0x57
        // 0x588B803A: call 0x588bb4a0
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B803F: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8045: push eax
        __asm _emit 0x50
        // 0x588B8046: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B804B: mov ecx, dword ptr [esi + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8051: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588B8056: push edi
        __asm _emit 0x57
        // 0x588B8057: call 0x588bb440
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B805C: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8062: push eax
        __asm _emit 0x50
        // 0x588B8063: lea edx, [esp + 0x48]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x588B8067: push edx
        __asm _emit 0x52
        // 0x588B8068: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B806D: mov ecx, dword ptr [esi + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8073: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588B8078: push edi
        __asm _emit 0x57
        // 0x588B8079: lea eax, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588B807D: push eax
        __asm _emit 0x50
        // 0x588B807E: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B8083: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8089: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x64
        // 0x588B808C: mov ecx, dword ptr [esi + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8092: push edi
        __asm _emit 0x57
        // 0x588B8093: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588B8097: call 0x588bb3d0
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B809C: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B80A2: movzx eax, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC0
        // 0x588B80A5: imul eax, eax, 0x32
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x32
        // 0x588B80A8: add eax, dword ptr [esp + 0xc]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588B80AC: push eax
        __asm _emit 0x50
        // 0x588B80AD: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0xF2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B80B2: mov ecx, dword ptr [esi + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B80B8: movzx edx, byte ptr [ecx + 0x13a5]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x91
        __asm _emit 0xA5
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B80BF: inc edi
        __asm _emit 0x47
        // 0x588B80C0: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x588B80C2: jl 0x588b7ff1
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x29
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B80C8: mov eax, dword ptr [esi + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B80CE: movzx ax, byte ptr [eax + 0xad]
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x80
        __asm _emit 0xAD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B80D6: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B80D8: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588B80DA: mov word ptr [esi + 0x17a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x7A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B80E1: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588B80E4: jae 0x588b81cb
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B80EA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B80F0: mov ecx, dword ptr [esi + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B80F6: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x588B80F8: push edi
        __asm _emit 0x57
        // 0x588B80F9: call 0x588bc980
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B80FE: push eax
        __asm _emit 0x50
        // 0x588B80FF: lea edx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588B8103: push edx
        __asm _emit 0x52
        // 0x588B8104: call dword ptr [0x5898c194]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588B810A: mov ecx, dword ptr [esi + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8110: push edi
        __asm _emit 0x57
        // 0x588B8111: call 0x588bcd20
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0x4C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8116: push eax
        __asm _emit 0x50
        // 0x588B8117: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588B811B: push 0x589a0984
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588B8120: push eax
        __asm _emit 0x50
        // 0x588B8121: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x588B8123: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588B8126: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588B812B: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x588B812D: lea ecx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588B8131: push ecx
        __asm _emit 0x51
        // 0x588B8132: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8138: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0x07
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B813D: mov ecx, dword ptr [esi + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8143: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588B8148: push edi
        __asm _emit 0x57
        // 0x588B8149: call 0x588bca40
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B814E: mov ecx, dword ptr [esi + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8154: push eax
        __asm _emit 0x50
        // 0x588B8155: push edi
        __asm _emit 0x57
        // 0x588B8156: call 0x588bc9e0
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B815B: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8161: push eax
        __asm _emit 0x50
        // 0x588B8162: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0x07
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B8167: mov ecx, dword ptr [esi + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B816D: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588B8172: push edi
        __asm _emit 0x57
        // 0x588B8173: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588B8177: push edx
        __asm _emit 0x52
        // 0x588B8178: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0x07
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B817D: mov eax, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8183: mov ecx, dword ptr [eax + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x64
        // 0x588B8186: mov dword ptr [esp + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588B818A: mov ecx, dword ptr [esi + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8190: push edi
        __asm _emit 0x57
        // 0x588B8191: call 0x588bcda0
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0x4C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8196: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B8198: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x588B819A: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588B819F: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588B81A1: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B81A7: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588B81AA: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588B81AC: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588B81AF: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588B81B1: add eax, dword ptr [esp + 0xc]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588B81B5: push eax
        __asm _emit 0x50
        // 0x588B81B6: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0xF1
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B81BB: movzx ecx, word ptr [esi + 0x17a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0x7A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B81C2: inc edi
        __asm _emit 0x47
        // 0x588B81C3: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x588B81C5: jl 0x588b80f0
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B81CB: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B81CD: call 0x588b5ea0
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0xDC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B81D2: mov ecx, dword ptr [esp + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B81D9: pop edi
        __asm _emit 0x5F
        // 0x588B81DA: pop esi
        __asm _emit 0x5E
        // 0x588B81DB: pop ebx
        __asm _emit 0x5B
        // 0x588B81DC: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588B81DE: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x49
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B81E3: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x588B81E5: pop ebp
        __asm _emit 0x5D
        // 0x588B81E6: ret
        __asm _emit 0xC3
    }
}
