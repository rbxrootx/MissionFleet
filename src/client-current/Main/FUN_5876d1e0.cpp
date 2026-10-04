// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5876D1E0 .. +0x14D bytes.
// Source symbol alias: FUN_5876d1e0.
extern "C" __declspec(naked) void FUN_5876d1e0() {
    __asm {
        // 0x5876D1E0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5876D1E2: push 0x5897ef13
        __asm _emit 0x68
        __asm _emit 0x13
        __asm _emit 0xEF
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5876D1E7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D1ED: push eax
        __asm _emit 0x50
        // 0x5876D1EE: push ecx
        __asm _emit 0x51
        // 0x5876D1EF: push ebx
        __asm _emit 0x53
        // 0x5876D1F0: push ebp
        __asm _emit 0x55
        // 0x5876D1F1: push esi
        __asm _emit 0x56
        // 0x5876D1F2: push edi
        __asm _emit 0x57
        // 0x5876D1F3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5876D1F8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5876D1FA: push eax
        __asm _emit 0x50
        // 0x5876D1FB: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876D1FF: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D205: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5876D207: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876D20B: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5876D20F: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5876D213: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5876D217: mov ebx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5876D21B: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5876D21F: push eax
        __asm _emit 0x50
        // 0x5876D220: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5876D224: push ecx
        __asm _emit 0x51
        // 0x5876D225: push edx
        __asm _emit 0x52
        // 0x5876D226: push ebx
        __asm _emit 0x53
        // 0x5876D227: push ebp
        __asm _emit 0x55
        // 0x5876D228: push eax
        __asm _emit 0x50
        // 0x5876D229: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5876D22B: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0x5F
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5876D230: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5876D232: mov dword ptr [esi + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x08
        // 0x5876D235: mov dword ptr [esi + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x5C
        // 0x5876D238: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D23D: mov dword ptr [esi], 0x58995b78
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x78
        __asm _emit 0x5B
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876D243: mov dword ptr [esi + 4], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x04
        // 0x5876D246: mov dword ptr [esi + 0x58], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x58
        // 0x5876D249: mov dword ptr [esi + 0x9c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D24F: mov dword ptr [esi + 0xa0], 0x14
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D259: mov dword ptr [esi + 0x6c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x6C
        // 0x5876D25C: mov dword ptr [esi + 0x70], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x70
        // 0x5876D25F: mov dword ptr [esi + 0x74], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x74
        // 0x5876D262: mov dword ptr [esi + 0x78], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x78
        // 0x5876D265: mov dword ptr [esi + 0x80], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D26B: mov dword ptr [esi + 0x88], 0x22
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D275: mov dword ptr [esi + 0x8c], 0x55
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D27F: mov dword ptr [esi + 0x94], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D285: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876D28A: cmp dword ptr [eax + 0x170], 0xe
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0E
        // 0x5876D291: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5876D295: jle 0x5876d2aa
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x5876D297: cmp dword ptr [eax + 0x194], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D29D: je 0x5876d2aa
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5876D29F: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D2A5: mov eax, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x38
        // 0x5876D2A8: jmp 0x5876d2ac
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5876D2AA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5876D2AC: push 0x20
        __asm _emit 0x6A
        __asm _emit 0x20
        // 0x5876D2AE: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x5876D2B1: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0xF9
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5876D2B6: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5876D2B9: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5876D2BD: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5876D2C1: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5876D2C3: je 0x5876d2ef
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x5876D2C5: mov ecx, dword ptr [0x58a246d8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876D2CB: cmp dword ptr [ecx + 0x170], 0x12
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x12
        // 0x5876D2D2: jle 0x5876d2e5
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x5876D2D4: cmp dword ptr [ecx + 0x194], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D2DA: je 0x5876d2e5
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5876D2DC: mov edx, dword ptr [ecx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D2E2: mov edi, dword ptr [edx + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x7A
        __asm _emit 0x48
        // 0x5876D2E5: push edi
        __asm _emit 0x57
        // 0x5876D2E6: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5876D2E8: call 0x58907ac0
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0xA7
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5876D2ED: jmp 0x5876d2f1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5876D2EF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5876D2F1: mov dword ptr [esi + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x5876D2F4: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5876D2F8: mov ecx, 0xe5ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D2FD: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5876D300: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D305: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x5876D308: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5876D30C: mov eax, 0xfff0
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D311: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5876D315: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5876D317: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876D31B: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D322: pop ecx
        __asm _emit 0x59
        // 0x5876D323: pop edi
        __asm _emit 0x5F
        // 0x5876D324: pop esi
        __asm _emit 0x5E
        // 0x5876D325: pop ebp
        __asm _emit 0x5D
        // 0x5876D326: pop ebx
        __asm _emit 0x5B
        // 0x5876D327: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5876D32A: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
