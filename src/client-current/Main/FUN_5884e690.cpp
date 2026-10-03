// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5884E690 .. +0xA17 bytes.
extern "C" __declspec(naked) void FUN_5884e690() {
    __asm {
        // 0x5884E690: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5884E692: push 0x58985119
        __asm _emit 0x68
        __asm _emit 0x19
        __asm _emit 0x51
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5884E697: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E69D: push eax
        __asm _emit 0x50
        // 0x5884E69E: sub esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x14
        // 0x5884E6A1: push ebx
        __asm _emit 0x53
        // 0x5884E6A2: push ebp
        __asm _emit 0x55
        // 0x5884E6A3: push esi
        __asm _emit 0x56
        // 0x5884E6A4: push edi
        __asm _emit 0x57
        // 0x5884E6A5: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5884E6AA: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5884E6AC: push eax
        __asm _emit 0x50
        // 0x5884E6AD: lea eax, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5884E6B1: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E6B7: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5884E6B9: mov dword ptr [esp + 0x20], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5884E6BD: mov eax, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5884E6C1: mov ecx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5884E6C5: mov edx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5884E6C9: push eax
        __asm _emit 0x50
        // 0x5884E6CA: mov eax, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5884E6CE: push ecx
        __asm _emit 0x51
        // 0x5884E6CF: mov ecx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5884E6D3: push edx
        __asm _emit 0x52
        // 0x5884E6D4: mov edx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5884E6D8: push eax
        __asm _emit 0x50
        // 0x5884E6D9: push ecx
        __asm _emit 0x51
        // 0x5884E6DA: push edx
        __asm _emit 0x52
        // 0x5884E6DB: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5884E6DD: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0x4A
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884E6E2: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5884E6E8: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5884E6ED: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5884E6EF: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E6F4: mov dword ptr [esp + 0x34], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5884E6F8: mov dword ptr [esi], 0x5899e830
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x30
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5884E6FE: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0xE5
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5884E703: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884E706: mov dword ptr [esp + 0x4c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5884E70A: mov byte ptr [esp + 0x30], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        // 0x5884E70F: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5884E711: je 0x5884e724
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5884E713: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5884E715: push ebx
        __asm _emit 0x53
        // 0x5884E716: push 0x5899e87c
        __asm _emit 0x68
        __asm _emit 0x7C
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5884E71B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884E71D: call 0x588f3d70
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0x56
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5884E722: jmp 0x5884e726
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884E724: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884E726: push 0x5c
        __asm _emit 0x6A
        __asm _emit 0x5C
        // 0x5884E728: mov byte ptr [esp + 0x34], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x00
        // 0x5884E72D: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x5884E730: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0xE5
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5884E735: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884E738: mov dword ptr [esp + 0x4c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5884E73C: mov byte ptr [esp + 0x30], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x02
        // 0x5884E741: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5884E743: je 0x5884e755
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x5884E745: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5884E747: push ebx
        __asm _emit 0x53
        // 0x5884E748: push ebx
        __asm _emit 0x53
        // 0x5884E749: push ebx
        __asm _emit 0x53
        // 0x5884E74A: push ebx
        __asm _emit 0x53
        // 0x5884E74B: push esi
        __asm _emit 0x56
        // 0x5884E74C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884E74E: call 0x58759f60
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5884E753: jmp 0x5884e757
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884E755: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884E757: push esi
        __asm _emit 0x56
        // 0x5884E758: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884E75A: mov byte ptr [esp + 0x34], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x00
        // 0x5884E75F: mov dword ptr [esi + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x5884E762: call 0x58759f20
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0xB7
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5884E767: lea eax, [esi + 0x58]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x5884E76A: mov dword ptr [esp + 0x4c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5884E76E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5884E770: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5884E772: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0xE4
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5884E777: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5884E779: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884E77C: mov dword ptr [esp + 0x48], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5884E780: mov byte ptr [esp + 0x30], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x03
        // 0x5884E785: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5884E787: je 0x5884e7f9
        __asm _emit 0x74
        __asm _emit 0x70
        // 0x5884E789: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x5884E78C: cmp dword ptr [eax + 0x164], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E792: jle 0x5884e7a7
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x5884E794: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5884E796: jl 0x5884e7a7
        __asm _emit 0x7C
        __asm _emit 0x0F
        // 0x5884E798: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E79E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884E7A0: je 0x5884e7a7
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5884E7A2: mov ebp, dword ptr [eax + ebx*4]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x98
        // 0x5884E7A5: jmp 0x5884e7a9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884E7A7: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5884E7A9: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5884E7AD: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884E7B1: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x5884E7B4: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5884E7B6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884E7B8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884E7BA: push ecx
        __asm _emit 0x51
        // 0x5884E7BB: push edx
        __asm _emit 0x52
        // 0x5884E7BC: push eax
        __asm _emit 0x50
        // 0x5884E7BD: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5884E7BF: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0x49
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884E7C4: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5884E7CA: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x5884E7CD: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5884E7CF: je 0x5884e7fb
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x5884E7D1: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5884E7D4: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x5884E7D7: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x5884E7DA: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x5884E7DD: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x10
        // 0x5884E7E0: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5884E7E2: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        // 0x5884E7E5: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5884E7E8: mov dword ptr [edi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x5884E7EB: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5884E7EE: mov dword ptr [edi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x1C
        // 0x5884E7F1: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5884E7F4: mov dword ptr [edi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x20
        // 0x5884E7F7: jmp 0x5884e7fb
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884E7F9: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5884E7FB: mov eax, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5884E7FF: mov dword ptr [eax], edi
        __asm _emit 0x89
        __asm _emit 0x38
        // 0x5884E801: inc ebx
        __asm _emit 0x43
        // 0x5884E802: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x5884E805: cmp ebx, 2
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x02
        // 0x5884E808: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        // 0x5884E80D: mov dword ptr [esp + 0x4c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5884E811: jl 0x5884e770
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x59
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884E817: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E81C: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0xE4
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5884E821: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884E824: mov dword ptr [esp + 0x4c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5884E828: mov byte ptr [esp + 0x30], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x04
        // 0x5884E82D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884E82F: je 0x5884e875
        __asm _emit 0x74
        __asm _emit 0x44
        // 0x5884E831: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x5884E834: cmp dword ptr [ecx + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E83B: jle 0x5884e84b
        __asm _emit 0x7E
        __asm _emit 0x0E
        // 0x5884E83D: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E843: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5884E845: je 0x5884e84b
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5884E847: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5884E849: jmp 0x5884e84d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884E84B: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5884E84D: mov ebx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5884E851: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884E855: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5884E857: push ebx
        __asm _emit 0x53
        // 0x5884E858: push ecx
        __asm _emit 0x51
        // 0x5884E859: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884E85F: push edx
        __asm _emit 0x52
        // 0x5884E860: mov edx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x5884E863: push edx
        __asm _emit 0x52
        // 0x5884E864: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884E86A: push ecx
        __asm _emit 0x51
        // 0x5884E86B: push edx
        __asm _emit 0x52
        // 0x5884E86C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884E86E: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0xF5
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5884E873: jmp 0x5884e87b
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x5884E875: mov ebx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5884E879: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884E87B: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x5884E87E: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884E883: mov byte ptr [esp + 0x34], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x00
        // 0x5884E888: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x5884E88B: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0x44
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884E890: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x5884E893: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E898: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884E89D: push 0x5c
        __asm _emit 0x6A
        __asm _emit 0x5C
        // 0x5884E89F: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0xE3
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5884E8A4: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884E8A7: mov dword ptr [esp + 0x4c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5884E8AB: mov byte ptr [esp + 0x30], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x05
        // 0x5884E8B0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884E8B2: je 0x5884e8ca
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x5884E8B4: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884E8B8: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5884E8BA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884E8BC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884E8BE: push ebx
        __asm _emit 0x53
        // 0x5884E8BF: push ecx
        __asm _emit 0x51
        // 0x5884E8C0: push esi
        __asm _emit 0x56
        // 0x5884E8C1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884E8C3: call 0x58759f60
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0xB6
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5884E8C8: jmp 0x5884e8cc
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884E8CA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884E8CC: push esi
        __asm _emit 0x56
        // 0x5884E8CD: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884E8CF: mov byte ptr [esp + 0x34], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x00
        // 0x5884E8D4: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5884E8D7: call 0x58759f20
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0xB6
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5884E8DC: mov ecx, 2
        __asm _emit 0xB9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E8E1: lea eax, [esi + 0x68]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x5884E8E4: mov dword ptr [esp + 0x48], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5884E8E8: mov dword ptr [esp + 0x4c], 8
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E8F0: mov dword ptr [esp + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5884E8F4: mov dword ptr [esp + 0x38], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5884E8F8: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5884E8FA: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0xE3
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5884E8FF: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5884E901: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884E904: mov dword ptr [esp + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5884E908: mov byte ptr [esp + 0x30], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x06
        // 0x5884E90D: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5884E90F: je 0x5884e986
        __asm _emit 0x74
        __asm _emit 0x75
        // 0x5884E911: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x5884E914: mov ecx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5884E918: cmp dword ptr [eax + 0x164], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E91E: jle 0x5884e937
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5884E920: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5884E922: jl 0x5884e937
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x5884E924: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E92A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884E92C: je 0x5884e937
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5884E92E: mov edx, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5884E932: mov ebp, dword ptr [edx + eax]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x02
        // 0x5884E935: jmp 0x5884e939
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884E937: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5884E939: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884E93D: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5884E940: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5884E942: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884E944: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884E946: push ebx
        __asm _emit 0x53
        // 0x5884E947: push ecx
        __asm _emit 0x51
        // 0x5884E948: push eax
        __asm _emit 0x50
        // 0x5884E949: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5884E94B: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x48
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884E950: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5884E956: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x5884E959: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5884E95B: je 0x5884e988
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x5884E95D: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x5884E960: mov dword ptr [edi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x0C
        // 0x5884E963: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x5884E966: mov dword ptr [edi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x10
        // 0x5884E969: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x5884E96C: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x5884E96F: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x5884E972: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5884E975: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x5884E978: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5884E97B: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x1C
        // 0x5884E97E: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5884E981: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x5884E984: jmp 0x5884e988
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884E986: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5884E988: mov eax, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5884E98C: add dword ptr [esp + 0x4c], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        __asm _emit 0x04
        // 0x5884E991: mov dword ptr [eax], edi
        __asm _emit 0x89
        __asm _emit 0x38
        // 0x5884E993: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x5884E996: mov dword ptr [esp + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5884E99A: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E99F: add dword ptr [esp + 0x48], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5884E9A3: sub dword ptr [esp + 0x38], eax
        __asm _emit 0x29
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5884E9A7: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        // 0x5884E9AC: jne 0x5884e8f8
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x46
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884E9B2: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x5884E9B5: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884E9BA: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0x43
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884E9BF: push 0x90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E9C4: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0xE2
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5884E9C9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884E9CC: mov dword ptr [esp + 0x4c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5884E9D0: mov edi, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884E9D4: mov byte ptr [esp + 0x30], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x07
        // 0x5884E9D9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884E9DB: je 0x5884ea10
        __asm _emit 0x74
        __asm _emit 0x33
        // 0x5884E9DD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884E9DF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884E9E1: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5884E9E6: lea ecx, [ebx + 0xca]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xCA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E9EC: push ecx
        __asm _emit 0x51
        // 0x5884E9ED: lea edx, [edi + 0x8e]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E9F3: push edx
        __asm _emit 0x52
        // 0x5884E9F4: lea ecx, [ebx + 0x47]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x47
        // 0x5884E9F7: push ecx
        __asm _emit 0x51
        // 0x5884E9F8: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884E9FE: lea edx, [edi + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x2C
        // 0x5884EA01: push edx
        __asm _emit 0x52
        // 0x5884EA02: mov edx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x64
        // 0x5884EA05: push ecx
        __asm _emit 0x51
        // 0x5884EA06: push edx
        __asm _emit 0x52
        // 0x5884EA07: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884EA09: call 0x58907fd0
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0x95
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884EA0E: jmp 0x5884ea12
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884EA10: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884EA12: push 0x90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EA17: mov byte ptr [esp + 0x34], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x00
        // 0x5884EA1C: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x5884EA1F: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0xE2
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5884EA24: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884EA27: mov dword ptr [esp + 0x4c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5884EA2B: mov byte ptr [esp + 0x30], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x08
        // 0x5884EA30: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884EA32: je 0x5884ea67
        __asm _emit 0x74
        __asm _emit 0x33
        // 0x5884EA34: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884EA36: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884EA38: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5884EA3D: lea ecx, [ebx + 0xd8]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EA43: push ecx
        __asm _emit 0x51
        // 0x5884EA44: lea edx, [edi + 0x8e]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EA4A: push edx
        __asm _emit 0x52
        // 0x5884EA4B: lea ecx, [ebx + 0x55]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x55
        // 0x5884EA4E: push ecx
        __asm _emit 0x51
        // 0x5884EA4F: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884EA55: lea edx, [edi + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x2C
        // 0x5884EA58: push edx
        __asm _emit 0x52
        // 0x5884EA59: mov edx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x64
        // 0x5884EA5C: push ecx
        __asm _emit 0x51
        // 0x5884EA5D: push edx
        __asm _emit 0x52
        // 0x5884EA5E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884EA60: call 0x58907fd0
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0x95
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884EA65: jmp 0x5884ea69
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884EA67: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884EA69: push 0x90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EA6E: mov byte ptr [esp + 0x34], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x00
        // 0x5884EA73: mov dword ptr [esi + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x5884EA76: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0xE1
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5884EA7B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884EA7E: mov dword ptr [esp + 0x4c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5884EA82: mov byte ptr [esp + 0x30], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x09
        // 0x5884EA87: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884EA89: je 0x5884eac1
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x5884EA8B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884EA8D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884EA8F: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5884EA94: lea ecx, [ebx + 0xcb]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xCB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EA9A: push ecx
        __asm _emit 0x51
        // 0x5884EA9B: lea edx, [edi + 0xb8]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EAA1: push edx
        __asm _emit 0x52
        // 0x5884EAA2: lea ecx, [ebx + 0x48]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x48
        // 0x5884EAA5: push ecx
        __asm _emit 0x51
        // 0x5884EAA6: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884EAAC: lea edx, [edi + 0x95]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EAB2: push edx
        __asm _emit 0x52
        // 0x5884EAB3: mov edx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x64
        // 0x5884EAB6: push ecx
        __asm _emit 0x51
        // 0x5884EAB7: push edx
        __asm _emit 0x52
        // 0x5884EAB8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884EABA: call 0x58907fd0
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0x95
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884EABF: jmp 0x5884eac3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884EAC1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884EAC3: push 0x90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EAC8: mov byte ptr [esp + 0x34], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x00
        // 0x5884EACD: mov dword ptr [esi + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x5884EAD0: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0xE1
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5884EAD5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884EAD8: mov dword ptr [esp + 0x4c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5884EADC: mov byte ptr [esp + 0x30], 0xa
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x0A
        // 0x5884EAE1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884EAE3: je 0x5884eb1b
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x5884EAE5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884EAE7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884EAE9: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5884EAEE: lea ecx, [ebx + 0xd8]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EAF4: push ecx
        __asm _emit 0x51
        // 0x5884EAF5: lea edx, [edi + 0xb8]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EAFB: push edx
        __asm _emit 0x52
        // 0x5884EAFC: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884EB02: lea ecx, [ebx + 0x55]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x55
        // 0x5884EB05: push ecx
        __asm _emit 0x51
        // 0x5884EB06: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5884EB09: add edi, 0x95
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EB0F: push edi
        __asm _emit 0x57
        // 0x5884EB10: push edx
        __asm _emit 0x52
        // 0x5884EB11: push ecx
        __asm _emit 0x51
        // 0x5884EB12: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884EB14: call 0x58907fd0
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0x94
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884EB19: jmp 0x5884eb1d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884EB1B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884EB1D: mov dword ptr [esi + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x5884EB20: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x5884EB23: mov ecx, 0x1e
        __asm _emit 0xB9
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EB28: mov dword ptr [eax + 0x5c], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x5C
        // 0x5884EB2B: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x5884EB2E: mov dword ptr [eax + 0x5c], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x5C
        // 0x5884EB31: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x5884EB34: mov dword ptr [eax + 0x5c], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x5C
        // 0x5884EB37: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x5884EB3A: mov dword ptr [eax + 0x5c], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x5C
        // 0x5884EB3D: lea edx, [esi + 0x80]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EB43: lea eax, [esi + 0x94]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EB49: add ebx, 0x4c
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x4C
        // 0x5884EB4C: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        // 0x5884EB51: mov dword ptr [esp + 0x38], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5884EB55: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5884EB59: mov dword ptr [esp + 0x4c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5884EB5D: mov dword ptr [esp + 0x1c], 5
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EB65: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5884EB67: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0xE0
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5884EB6C: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5884EB6E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884EB71: mov dword ptr [esp + 0x48], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5884EB75: mov byte ptr [esp + 0x30], 0xb
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x0B
        // 0x5884EB7A: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5884EB7C: je 0x5884ebf1
        __asm _emit 0x74
        __asm _emit 0x73
        // 0x5884EB7E: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x5884EB81: cmp dword ptr [eax + 0x164], 0x19
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x19
        // 0x5884EB88: jle 0x5884eb99
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x5884EB8A: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EB90: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884EB92: je 0x5884eb99
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5884EB94: mov ebp, dword ptr [eax + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x64
        // 0x5884EB97: jmp 0x5884eb9b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884EB99: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5884EB9B: mov ecx, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5884EB9F: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884EBA3: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5884EBA6: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5884EBA8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884EBAA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884EBAC: add ecx, -7
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0xF9
        // 0x5884EBAF: push ecx
        __asm _emit 0x51
        // 0x5884EBB0: add edx, 0x29
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x29
        // 0x5884EBB3: push edx
        __asm _emit 0x52
        // 0x5884EBB4: push eax
        __asm _emit 0x50
        // 0x5884EBB5: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5884EBB7: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0x45
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884EBBC: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5884EBC2: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x5884EBC5: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5884EBC7: je 0x5884ebf3
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x5884EBC9: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5884EBCC: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x5884EBCF: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x5884EBD2: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x5884EBD5: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x10
        // 0x5884EBD8: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5884EBDA: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        // 0x5884EBDD: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5884EBE0: mov dword ptr [edi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x5884EBE3: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5884EBE6: mov dword ptr [edi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x1C
        // 0x5884EBE9: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5884EBEC: mov dword ptr [edi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x20
        // 0x5884EBEF: jmp 0x5884ebf3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884EBF1: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5884EBF3: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5884EBF7: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5884EBFB: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        // 0x5884EC00: mov dword ptr [ecx], edi
        __asm _emit 0x89
        __asm _emit 0x39
        // 0x5884EC02: mov dword ptr [esp + 0x44], 5
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EC0A: mov dword ptr [esp + 0x48], 0x140
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EC12: mov dword ptr [esp + 0x18], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EC1A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EC20: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x5884EC22: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0xE0
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5884EC27: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5884EC29: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884EC2C: mov dword ptr [esp + 0x24], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5884EC30: mov byte ptr [esp + 0x30], 0xc
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x0C
        // 0x5884EC35: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5884EC37: je 0x5884ecbf
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EC3D: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x5884EC40: mov ecx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5884EC44: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EC4A: jle 0x5884ec63
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5884EC4C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5884EC4E: jl 0x5884ec63
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x5884EC50: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EC56: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884EC58: je 0x5884ec63
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5884EC5A: mov edx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5884EC5E: lea ebp, [edx + eax]
        __asm _emit 0x8D
        __asm _emit 0x2C
        __asm _emit 0x02
        // 0x5884EC61: jmp 0x5884ec65
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884EC63: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5884EC65: mov ecx, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5884EC69: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884EC6D: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5884EC70: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5884EC72: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884EC74: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884EC76: push ecx
        __asm _emit 0x51
        // 0x5884EC77: add edx, 0x18
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x18
        // 0x5884EC7A: push edx
        __asm _emit 0x52
        // 0x5884EC7B: push eax
        __asm _emit 0x50
        // 0x5884EC7C: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5884EC7E: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0x45
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884EC83: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5884EC89: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EC90: mov dword ptr [edi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x54
        // 0x5884EC93: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5884EC95: je 0x5884ecc1
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x5884EC97: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x5884EC9A: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x5884EC9D: mov ecx, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x1C
        // 0x5884ECA0: lea eax, [ebp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x20
        // 0x5884ECA3: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x10
        // 0x5884ECA6: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5884ECA8: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        // 0x5884ECAB: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5884ECAE: mov dword ptr [edi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x5884ECB1: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5884ECB4: mov dword ptr [edi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x1C
        // 0x5884ECB7: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5884ECBA: mov dword ptr [edi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x20
        // 0x5884ECBD: jmp 0x5884ecc1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884ECBF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5884ECC1: add dword ptr [esp + 0x48], 0x40
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x40
        // 0x5884ECC6: mov dword ptr [ebx], edi
        __asm _emit 0x89
        __asm _emit 0x3B
        // 0x5884ECC8: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884ECCD: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4F
        __asm _emit 0x24
        // 0x5884ECD1: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x5884ECD3: mov dword ptr [eax + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884ECDA: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884ECDF: add dword ptr [esp + 0x44], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5884ECE3: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x5884ECE6: sub dword ptr [esp + 0x18], eax
        __asm _emit 0x29
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5884ECEA: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        // 0x5884ECEF: jne 0x5884ec20
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x2B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884ECF5: mov edi, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5884ECF9: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5884ECFB: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884ED00: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884ED05: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5884ED09: mov ecx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x0A
        // 0x5884ED0B: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884ED10: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884ED15: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5884ED17: add dword ptr [esp + 0x4c], 0x1e
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        __asm _emit 0x1E
        // 0x5884ED1C: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884ED21: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5884ED25: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5884ED28: sub dword ptr [esp + 0x1c], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x01
        // 0x5884ED2D: mov dword ptr [esp + 0x38], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5884ED31: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5884ED35: jne 0x5884eb65
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x2A
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884ED3B: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884ED40: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0xDF
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5884ED45: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884ED48: mov dword ptr [esp + 0x4c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5884ED4C: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5884ED4E: mov byte ptr [esp + 0x30], 0xd
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x0D
        // 0x5884ED53: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x5884ED55: je 0x5884eda5
        __asm _emit 0x74
        __asm _emit 0x4E
        // 0x5884ED57: mov edx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x50
        // 0x5884ED5A: cmp dword ptr [edx + 0x160], 1
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x5884ED61: jle 0x5884ed72
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x5884ED63: mov edx, dword ptr [edx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884ED69: cmp edx, ebp
        __asm _emit 0x3B
        __asm _emit 0xD5
        // 0x5884ED6B: je 0x5884ed72
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5884ED6D: add edx, 0x40
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x40
        // 0x5884ED70: jmp 0x5884ed74
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884ED72: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5884ED74: mov edi, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5884ED78: mov ebx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884ED7C: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5884ED7E: lea ecx, [edi + 0xe6]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0xE6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884ED84: push ecx
        __asm _emit 0x51
        // 0x5884ED85: lea ecx, [ebx + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x18
        // 0x5884ED88: push ecx
        __asm _emit 0x51
        // 0x5884ED89: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884ED8F: push edx
        __asm _emit 0x52
        // 0x5884ED90: mov edx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x64
        // 0x5884ED93: push edx
        __asm _emit 0x52
        // 0x5884ED94: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884ED9A: push ecx
        __asm _emit 0x51
        // 0x5884ED9B: push edx
        __asm _emit 0x52
        // 0x5884ED9C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884ED9E: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0xEF
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5884EDA3: jmp 0x5884edaf
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x5884EDA5: mov ebx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884EDA9: mov edi, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5884EDAD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884EDAF: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EDB4: mov byte ptr [esp + 0x34], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x00
        // 0x5884EDB9: mov dword ptr [esi + 0xbc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EDBF: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0xDE
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5884EDC4: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884EDC7: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884EDCB: mov byte ptr [esp + 0x30], 0xe
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x0E
        // 0x5884EDD0: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x5884EDD2: je 0x5884ee1a
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x5884EDD4: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x5884EDD7: cmp dword ptr [ecx + 0x160], 2
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x5884EDDE: jle 0x5884edef
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x5884EDE0: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EDE6: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5884EDE8: je 0x5884edef
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5884EDEA: sub ecx, -0x80
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x80
        // 0x5884EDED: jmp 0x5884edf1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884EDEF: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5884EDF1: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5884EDF3: lea edx, [edi + 0xe6]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xE6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EDF9: push edx
        __asm _emit 0x52
        // 0x5884EDFA: lea edx, [ebx + 0x43]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x43
        // 0x5884EDFD: push edx
        __asm _emit 0x52
        // 0x5884EDFE: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884EE04: push ecx
        __asm _emit 0x51
        // 0x5884EE05: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5884EE08: push ecx
        __asm _emit 0x51
        // 0x5884EE09: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884EE0F: push edx
        __asm _emit 0x52
        // 0x5884EE10: push ecx
        __asm _emit 0x51
        // 0x5884EE11: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884EE13: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0xEF
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5884EE18: jmp 0x5884ee1c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884EE1A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884EE1C: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EE21: mov byte ptr [esp + 0x34], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x00
        // 0x5884EE26: mov dword ptr [esi + 0xc0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EE2C: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0xDE
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5884EE31: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884EE34: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884EE38: mov byte ptr [esp + 0x30], 0xf
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x0F
        // 0x5884EE3D: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x5884EE3F: je 0x5884ee8a
        __asm _emit 0x74
        __asm _emit 0x49
        // 0x5884EE41: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x5884EE44: cmp dword ptr [ecx + 0x160], 3
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x5884EE4B: jle 0x5884ee5f
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5884EE4D: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EE53: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5884EE55: je 0x5884ee5f
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5884EE57: add ecx, 0xc0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EE5D: jmp 0x5884ee61
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884EE5F: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5884EE61: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5884EE63: lea edx, [edi + 0xe6]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xE6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EE69: push edx
        __asm _emit 0x52
        // 0x5884EE6A: lea edx, [ebx + 0x6e]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x6E
        // 0x5884EE6D: push edx
        __asm _emit 0x52
        // 0x5884EE6E: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884EE74: push ecx
        __asm _emit 0x51
        // 0x5884EE75: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5884EE78: push ecx
        __asm _emit 0x51
        // 0x5884EE79: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884EE7F: push edx
        __asm _emit 0x52
        // 0x5884EE80: push ecx
        __asm _emit 0x51
        // 0x5884EE81: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884EE83: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0xEF
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5884EE88: jmp 0x5884ee8c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884EE8A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884EE8C: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EE91: mov byte ptr [esp + 0x34], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x00
        // 0x5884EE96: mov dword ptr [esi + 0xc4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EE9C: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0xDD
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5884EEA1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884EEA4: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884EEA8: mov byte ptr [esp + 0x30], 0x10
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x10
        // 0x5884EEAD: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x5884EEAF: je 0x5884eefd
        __asm _emit 0x74
        __asm _emit 0x4C
        // 0x5884EEB1: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x5884EEB4: cmp dword ptr [ecx + 0x160], 4
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x5884EEBB: jle 0x5884eecf
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5884EEBD: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EEC3: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5884EEC5: je 0x5884eecf
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5884EEC7: add ecx, 0x100
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EECD: jmp 0x5884eed1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884EECF: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5884EED1: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5884EED3: lea edx, [edi + 0xe6]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xE6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EED9: push edx
        __asm _emit 0x52
        // 0x5884EEDA: lea edx, [ebx + 0x99]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EEE0: push edx
        __asm _emit 0x52
        // 0x5884EEE1: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884EEE7: push ecx
        __asm _emit 0x51
        // 0x5884EEE8: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5884EEEB: push ecx
        __asm _emit 0x51
        // 0x5884EEEC: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884EEF2: push edx
        __asm _emit 0x52
        // 0x5884EEF3: push ecx
        __asm _emit 0x51
        // 0x5884EEF4: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884EEF6: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0xEE
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5884EEFB: jmp 0x5884eeff
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884EEFD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884EEFF: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EF04: mov byte ptr [esp + 0x34], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x00
        // 0x5884EF09: mov dword ptr [esi + 0xc8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EF0F: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0xDD
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5884EF14: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884EF17: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884EF1B: mov byte ptr [esp + 0x30], 0x11
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x11
        // 0x5884EF20: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x5884EF22: je 0x5884ef6d
        __asm _emit 0x74
        __asm _emit 0x49
        // 0x5884EF24: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x5884EF27: cmp dword ptr [ecx + 0x160], 7
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x5884EF2E: jle 0x5884ef42
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5884EF30: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EF36: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5884EF38: je 0x5884ef42
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5884EF3A: add ecx, 0x1c0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EF40: jmp 0x5884ef44
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884EF42: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5884EF44: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5884EF46: lea edx, [edi + 0x100]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EF4C: push edx
        __asm _emit 0x52
        // 0x5884EF4D: lea edx, [ebx + 0x70]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x70
        // 0x5884EF50: push edx
        __asm _emit 0x52
        // 0x5884EF51: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884EF57: push ecx
        __asm _emit 0x51
        // 0x5884EF58: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5884EF5B: push ecx
        __asm _emit 0x51
        // 0x5884EF5C: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884EF62: push edx
        __asm _emit 0x52
        // 0x5884EF63: push ecx
        __asm _emit 0x51
        // 0x5884EF64: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884EF66: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0xEE
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5884EF6B: jmp 0x5884ef6f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884EF6D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884EF6F: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EF74: mov byte ptr [esp + 0x34], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x00
        // 0x5884EF79: mov dword ptr [esi + 0xcc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EF7F: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0xDC
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5884EF84: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884EF87: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884EF8B: mov byte ptr [esp + 0x30], 0x12
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x12
        // 0x5884EF90: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x5884EF92: je 0x5884efe0
        __asm _emit 0x74
        __asm _emit 0x4C
        // 0x5884EF94: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x5884EF97: cmp dword ptr [ecx + 0x160], 8
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        // 0x5884EF9E: jle 0x5884efb2
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5884EFA0: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EFA6: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5884EFA8: je 0x5884efb2
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5884EFAA: add ecx, 0x200
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EFB0: jmp 0x5884efb4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884EFB2: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5884EFB4: mov edx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x64
        // 0x5884EFB7: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5884EFB9: add edi, 0x100
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EFBF: push edi
        __asm _emit 0x57
        // 0x5884EFC0: add ebx, 0x9b
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EFC6: push ebx
        __asm _emit 0x53
        // 0x5884EFC7: push ecx
        __asm _emit 0x51
        // 0x5884EFC8: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884EFCE: push edx
        __asm _emit 0x52
        // 0x5884EFCF: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884EFD5: push ecx
        __asm _emit 0x51
        // 0x5884EFD6: push edx
        __asm _emit 0x52
        // 0x5884EFD7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884EFD9: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0xED
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5884EFDE: jmp 0x5884efe2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884EFE0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884EFE2: mov dword ptr [esi + 0xd0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EFE8: mov eax, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EFEE: mov dword ptr [eax + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x50
        // 0x5884EFF1: mov eax, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884EFF7: push 0x6c
        __asm _emit 0x6A
        __asm _emit 0x6C
        // 0x5884EFF9: mov byte ptr [esp + 0x34], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x00
        // 0x5884EFFE: mov dword ptr [eax + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x50
        // 0x5884F001: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0xDC
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5884F006: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884F009: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884F00D: mov byte ptr [esp + 0x30], 0x13
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x13
        // 0x5884F012: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x5884F014: je 0x5884f02b
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x5884F016: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5884F018: push ebp
        __asm _emit 0x55
        // 0x5884F019: push ebp
        __asm _emit 0x55
        // 0x5884F01A: push 0x62
        __asm _emit 0x6A
        __asm _emit 0x62
        // 0x5884F01C: push 0x107
        __asm _emit 0x68
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F021: push esi
        __asm _emit 0x56
        // 0x5884F022: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884F024: call 0x588752d0
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x62
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5884F029: jmp 0x5884f02d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884F02B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884F02D: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x5884F030: push ecx
        __asm _emit 0x51
        // 0x5884F031: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884F033: mov byte ptr [esp + 0x34], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x00
        // 0x5884F038: mov dword ptr [esi + 0xe0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F03E: call 0x58875190
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0x61
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5884F043: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5884F046: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCF
        __asm _emit 0xFF
        // 0x5884F049: push 0x406
        __asm _emit 0x68
        __asm _emit 0x06
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F04E: mov dword ptr [esi + 0xdc], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F054: mov dword ptr [esi + 0xe4], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F05A: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0x42
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884F05F: mov edx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x60
        // 0x5884F062: mov dword ptr [edx + 0x50], 1
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F069: mov eax, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F06F: mov byte ptr [esi + 0xd4], 3
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x5884F076: mov dword ptr [esi + 0xdc], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F07C: mov dword ptr [eax + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x50
        // 0x5884F07F: mov ecx, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F085: mov dword ptr [ecx + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x50
        // 0x5884F088: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5884F08A: call 0x5884e210
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884F08F: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5884F091: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5884F095: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F09C: pop ecx
        __asm _emit 0x59
        // 0x5884F09D: pop edi
        __asm _emit 0x5F
        // 0x5884F09E: pop esi
        __asm _emit 0x5E
        // 0x5884F09F: pop ebp
        __asm _emit 0x5D
        // 0x5884F0A0: pop ebx
        __asm _emit 0x5B
        // 0x5884F0A1: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x5884F0A4: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
