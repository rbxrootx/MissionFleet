// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58901870 .. +0x19C bytes.
// Source symbol alias: FUN_58901870.
extern "C" __declspec(naked) void FUN_58901870() {
    __asm {
        // 0x58901870: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x58901873: push ebx
        __asm _emit 0x53
        // 0x58901874: push ebp
        __asm _emit 0x55
        // 0x58901875: push esi
        __asm _emit 0x56
        // 0x58901876: push edi
        __asm _emit 0x57
        // 0x58901877: push 0x18
        __asm _emit 0x6A
        __asm _emit 0x18
        // 0x58901879: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5890187D: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0xFC
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58901882: mov edi, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58901886: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x58901888: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5890188A: mov dword ptr [ebp], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x5890188D: mov dword ptr [ebp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x58901890: mov dword ptr [ebp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x58901893: mov dword ptr [ebp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x58901896: mov dword ptr [ebp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x58901899: mov dword ptr [ebp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x5890189C: mov eax, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x10
        // 0x5890189F: sub eax, dword ptr [edi + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x589018A2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x589018A5: sar eax, 3
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x589018A8: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x589018AA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x589018AC: jbe 0x5890197a
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589018B2: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x589018B4: jb 0x589018bb
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x589018B6: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0xB3
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x589018BB: mov ecx, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x589018BE: mov edx, dword ptr [ecx + esi*8 + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0xF1
        __asm _emit 0x04
        // 0x589018C2: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x589018C7: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x589018C9: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x589018CC: mov ebx, edx
        __asm _emit 0x8B
        __asm _emit 0xDA
        // 0x589018CE: shr ebx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x589018D1: add ebx, edx
        __asm _emit 0x03
        __asm _emit 0xDA
        // 0x589018D3: cmp ebx, 3
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x03
        // 0x589018D6: jge 0x58901968
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589018DC: mov eax, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x10
        // 0x589018DF: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x589018E1: sar eax, 3
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x589018E4: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x589018E6: jb 0x589018ed
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x589018E8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0xB3
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x589018ED: mov eax, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x589018F0: mov ecx, dword ptr [eax + esi*8]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0xF0
        // 0x589018F3: cmp ecx, dword ptr [ebp + ebx*8]
        __asm _emit 0x3B
        __asm _emit 0x4C
        __asm _emit 0xDD
        __asm _emit 0x00
        // 0x589018F7: jle 0x58901926
        __asm _emit 0x7E
        __asm _emit 0x2D
        // 0x589018F9: mov edx, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x10
        // 0x589018FC: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x589018FE: sar edx, 3
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x03
        // 0x58901901: cmp esi, edx
        __asm _emit 0x3B
        __asm _emit 0xF2
        // 0x58901903: jb 0x5890190a
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58901905: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0xB3
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5890190A: mov eax, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x5890190D: mov eax, dword ptr [eax + esi*8 + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0xF0
        __asm _emit 0x04
        // 0x58901911: cdq
        __asm _emit 0x99
        // 0x58901912: mov ecx, 0x32
        __asm _emit 0xB9
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58901917: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x58901919: cmp edx, 0x28
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x28
        // 0x5890191C: jl 0x58901926
        __asm _emit 0x7C
        __asm _emit 0x08
        // 0x5890191E: mov edx, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x10
        // 0x58901921: sub edx, dword ptr [edi + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x57
        __asm _emit 0x0C
        // 0x58901924: jmp 0x5890194a
        __asm _emit 0xEB
        __asm _emit 0x24
        // 0x58901926: mov eax, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x10
        // 0x58901929: sub eax, dword ptr [edi + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x5890192C: sar eax, 3
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x5890192F: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x58901931: jb 0x58901938
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58901933: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0xB3
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58901938: mov eax, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x5890193B: mov ecx, dword ptr [ebp + ebx*8 + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0xDD
        __asm _emit 0x04
        // 0x5890193F: cmp ecx, dword ptr [eax + esi*8 + 4]
        __asm _emit 0x3B
        __asm _emit 0x4C
        __asm _emit 0xF0
        __asm _emit 0x04
        // 0x58901943: jge 0x58901968
        __asm _emit 0x7D
        __asm _emit 0x23
        // 0x58901945: mov edx, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x10
        // 0x58901948: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5890194A: sar edx, 3
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x03
        // 0x5890194D: cmp esi, edx
        __asm _emit 0x3B
        __asm _emit 0xF2
        // 0x5890194F: jb 0x58901956
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58901951: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0xB3
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58901956: mov eax, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x58901959: mov ecx, dword ptr [eax + esi*8]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0xF0
        // 0x5890195C: mov dword ptr [ebp + ebx*8], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0xDD
        __asm _emit 0x00
        // 0x58901960: mov edx, dword ptr [eax + esi*8 + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0xF0
        __asm _emit 0x04
        // 0x58901964: mov dword ptr [ebp + ebx*8 + 4], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0xDD
        __asm _emit 0x04
        // 0x58901968: mov eax, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x10
        // 0x5890196B: sub eax, dword ptr [edi + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x5890196E: inc esi
        __asm _emit 0x46
        // 0x5890196F: sar eax, 3
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x58901972: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x58901974: jb 0x589018bb
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0x41
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5890197A: lea eax, [ebp + 4]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x5890197D: mov dword ptr [esp + 0x10], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58901985: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58901989: mov dword ptr [esp + 0x14], 3
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58901991: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58901995: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58901997: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58901999: je 0x589019ed
        __asm _emit 0x74
        __asm _emit 0x52
        // 0x5890199B: sub eax, dword ptr [esp + 0x10]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5890199F: inc eax
        __asm _emit 0x40
        // 0x589019A0: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x589019A2: lea edi, [ebx + 1]
        __asm _emit 0x8D
        __asm _emit 0x7B
        __asm _emit 0x01
        // 0x589019A5: push edi
        __asm _emit 0x57
        // 0x589019A6: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x589019AB: push edi
        __asm _emit 0x57
        // 0x589019AC: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x589019AE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x589019B0: push esi
        __asm _emit 0x56
        // 0x589019B1: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0xB2
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x589019B6: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x589019BA: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x589019BE: push edi
        __asm _emit 0x57
        // 0x589019BF: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x589019C1: push edx
        __asm _emit 0x52
        // 0x589019C2: push esi
        __asm _emit 0x56
        // 0x589019C3: call 0x5897cd4c
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0xB3
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x589019C8: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x589019CC: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x589019CF: push esi
        __asm _emit 0x56
        // 0x589019D0: mov byte ptr [esi + ebx], 0
        __asm _emit 0xC6
        __asm _emit 0x04
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x589019D4: call 0x589017f0
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589019D9: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x589019DD: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x589019DF: inc edx
        __asm _emit 0x42
        // 0x589019E0: push esi
        __asm _emit 0x56
        // 0x589019E1: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x589019E5: call 0x5897ce26
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0xB4
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x589019EA: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x589019ED: add dword ptr [esp + 0x24], 8
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x589019F2: sub dword ptr [esp + 0x14], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x589019F7: jne 0x58901991
        __asm _emit 0x75
        __asm _emit 0x98
        // 0x589019F9: push ebp
        __asm _emit 0x55
        // 0x589019FA: call 0x5897ce26
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0xB4
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x589019FF: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58901A02: pop edi
        __asm _emit 0x5F
        // 0x58901A03: pop esi
        __asm _emit 0x5E
        // 0x58901A04: pop ebp
        __asm _emit 0x5D
        // 0x58901A05: pop ebx
        __asm _emit 0x5B
        // 0x58901A06: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58901A09: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
