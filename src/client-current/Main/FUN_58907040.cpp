// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58907040 .. +0xBF bytes.
extern "C" __declspec(naked) void FUN_58907040() {
    __asm {
        // 0x58907040: push esi
        __asm _emit 0x56
        // 0x58907041: mov esi, dword ptr [ecx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x60
        // 0x58907044: push edi
        __asm _emit 0x57
        // 0x58907045: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58907047: jge 0x5890704b
        __asm _emit 0x7D
        __asm _emit 0x02
        // 0x58907049: neg esi
        __asm _emit 0xF7
        __asm _emit 0xDE
        // 0x5890704B: mov eax, dword ptr [ecx + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x5C
        // 0x5890704E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58907050: jle 0x5890705a
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x58907052: mov dword ptr [ecx + 0xe8], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58907058: jmp 0x5890708c
        __asm _emit 0xEB
        __asm _emit 0x32
        // 0x5890705A: mov dword ptr [ecx + 0xe8], 0
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58907064: mov edx, esi
        __asm _emit 0x8B
        __asm _emit 0xD6
        // 0x58907066: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58907068: je 0x5890708c
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x5890706A: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5890706C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58907070: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x58907075: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58907077: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5890707A: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5890707C: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5890707F: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x58907081: inc edi
        __asm _emit 0x47
        // 0x58907082: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58907084: jne 0x58907070
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x58907086: mov dword ptr [ecx + 0xe8], edi
        __asm _emit 0x89
        __asm _emit 0xB9
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890708C: mov edi, dword ptr [ecx + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58907092: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x58907095: js 0x589070ee
        __asm _emit 0x78
        __asm _emit 0x57
        // 0x58907097: push ebx
        __asm _emit 0x53
        // 0x58907098: lea ebx, [ecx + edi*4 + 0x68]
        __asm _emit 0x8D
        __asm _emit 0x5C
        __asm _emit 0xB9
        __asm _emit 0x68
        // 0x5890709C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x589070A0: mov edx, dword ptr [ecx + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589070A6: dec edx
        __asm _emit 0x4A
        // 0x589070A7: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x589070A9: je 0x589070b4
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x589070AB: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x589070AD: jne 0x589070b4
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x589070AF: lea eax, [esi + 0xa]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x0A
        // 0x589070B2: jmp 0x589070d0
        __asm _emit 0xEB
        __asm _emit 0x1C
        // 0x589070B4: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x589070B9: imul esi
        __asm _emit 0xF7
        __asm _emit 0xEE
        // 0x589070BB: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x589070BE: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x589070C0: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x589070C3: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x589070C5: lea eax, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x80
        // 0x589070C8: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x589070CA: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x589070CC: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x589070CE: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x589070D0: mov dword ptr [ebx], eax
        __asm _emit 0x89
        __asm _emit 0x03
        // 0x589070D2: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x589070D7: imul esi
        __asm _emit 0xF7
        __asm _emit 0xEE
        // 0x589070D9: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x589070DC: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x589070DE: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x589070E1: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x589070E3: dec edi
        __asm _emit 0x4F
        // 0x589070E4: sub ebx, 4
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x589070E7: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x589070E9: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x589070EB: jge 0x589070a0
        __asm _emit 0x7D
        __asm _emit 0xB3
        // 0x589070ED: pop ebx
        __asm _emit 0x5B
        // 0x589070EE: cmp dword ptr [ecx + 0x60], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x60
        __asm _emit 0x00
        // 0x589070F2: jge 0x589070fc
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x589070F4: mov dword ptr [ecx + edi*4 + 0x68], 0xb
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0xB9
        __asm _emit 0x68
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589070FC: pop edi
        __asm _emit 0x5F
        // 0x589070FD: pop esi
        __asm _emit 0x5E
        // 0x589070FE: ret
        __asm _emit 0xC3
    }
}
