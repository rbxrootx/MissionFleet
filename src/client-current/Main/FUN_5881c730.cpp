// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5881C730 .. +0x9F5 bytes.
// Source symbol alias: FUN_5881c730.
extern "C" __declspec(naked) void FUN_5881c730() {
    __asm {
        // 0x5881C730: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5881C732: push 0x589835ed
        __asm _emit 0x68
        __asm _emit 0xED
        __asm _emit 0x35
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5881C737: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881C73D: push eax
        __asm _emit 0x50
        // 0x5881C73E: push ecx
        __asm _emit 0x51
        // 0x5881C73F: push ebx
        __asm _emit 0x53
        // 0x5881C740: push ebp
        __asm _emit 0x55
        // 0x5881C741: push esi
        __asm _emit 0x56
        // 0x5881C742: push edi
        __asm _emit 0x57
        // 0x5881C743: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5881C748: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5881C74A: push eax
        __asm _emit 0x50
        // 0x5881C74B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5881C74F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881C755: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5881C757: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5881C75B: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5881C75F: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5881C763: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5881C767: mov edi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5881C76B: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5881C76F: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5881C771: push eax
        __asm _emit 0x50
        // 0x5881C772: push ecx
        __asm _emit 0x51
        // 0x5881C773: push ebp
        __asm _emit 0x55
        // 0x5881C774: push edi
        __asm _emit 0x57
        // 0x5881C775: push edx
        __asm _emit 0x52
        // 0x5881C776: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5881C778: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0x6A
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881C77D: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5881C783: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5881C788: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5881C78A: mov dword ptr [esi + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x50
        // 0x5881C78D: mov dword ptr [esi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x54
        // 0x5881C790: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881C797: mov dword ptr [esi + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x5C
        // 0x5881C79A: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5881C79C: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5881C7A0: mov dword ptr [esi], 0x5899d934
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x34
        __asm _emit 0xD9
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5881C7A6: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0x04
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5881C7AB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881C7AE: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5881C7B2: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x5881C7B7: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5881C7B9: je 0x5881c7f1
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x5881C7BB: mov ecx, dword ptr [0x58a24610]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881C7C1: cmp dword ptr [ecx + 0x164], 8
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        // 0x5881C7C8: jle 0x5881c7dd
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x5881C7CA: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881C7D0: je 0x5881c7dd
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5881C7D2: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881C7D8: mov ecx, dword ptr [ecx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x20
        // 0x5881C7DB: jmp 0x5881c7df
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881C7DD: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5881C7DF: push 0x61a8
        __asm _emit 0x68
        __asm _emit 0xA8
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881C7E4: push ebp
        __asm _emit 0x55
        // 0x5881C7E5: push edi
        __asm _emit 0x57
        // 0x5881C7E6: push ecx
        __asm _emit 0x51
        // 0x5881C7E7: push esi
        __asm _emit 0x56
        // 0x5881C7E8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881C7EA: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0x54
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5881C7EF: jmp 0x5881c7f3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881C7F1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5881C7F3: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5881C7F5: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5881C7F9: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x5881C7FC: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0x04
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5881C801: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881C804: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5881C808: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x5881C80D: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5881C80F: je 0x5881c847
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x5881C811: mov ecx, dword ptr [0x58a24610]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881C817: cmp dword ptr [ecx + 0x164], 9
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x09
        // 0x5881C81E: jle 0x5881c833
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x5881C820: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881C826: je 0x5881c833
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5881C828: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881C82E: mov ecx, dword ptr [edx + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x24
        // 0x5881C831: jmp 0x5881c835
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881C833: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5881C835: push 0x61a8
        __asm _emit 0x68
        __asm _emit 0xA8
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881C83A: push ebp
        __asm _emit 0x55
        // 0x5881C83B: push edi
        __asm _emit 0x57
        // 0x5881C83C: push ecx
        __asm _emit 0x51
        // 0x5881C83D: push esi
        __asm _emit 0x56
        // 0x5881C83E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881C840: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x54
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5881C845: jmp 0x5881c849
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881C847: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5881C849: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5881C84E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881C850: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5881C854: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5881C857: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0x64
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881C85C: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5881C85F: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881C864: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5881C868: push 0x184
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881C86D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0x03
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5881C872: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881C875: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5881C879: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x5881C87E: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5881C880: je 0x5881c8b2
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x5881C882: push 0x505050
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x5881C887: push ebx
        __asm _emit 0x53
        // 0x5881C888: push 0xdcdcdc
        __asm _emit 0x68
        __asm _emit 0xDC
        __asm _emit 0xDC
        __asm _emit 0xDC
        __asm _emit 0x00
        // 0x5881C88D: lea edx, [ebp + 0xc8]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881C893: push edx
        __asm _emit 0x52
        // 0x5881C894: lea ecx, [edi + 0x1b8]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881C89A: push ecx
        __asm _emit 0x51
        // 0x5881C89B: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881C8A1: lea edx, [ebp + 0x3a]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x3A
        // 0x5881C8A4: push edx
        __asm _emit 0x52
        // 0x5881C8A5: push edi
        __asm _emit 0x57
        // 0x5881C8A6: push ecx
        __asm _emit 0x51
        // 0x5881C8A7: push ebx
        __asm _emit 0x53
        // 0x5881C8A8: push esi
        __asm _emit 0x56
        // 0x5881C8A9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881C8AB: call 0x5875f420
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0x2B
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5881C8B0: jmp 0x5881c8b4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881C8B2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5881C8B4: lea edi, [esi + 0x98]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881C8BA: push 0x184
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881C8BF: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5881C8C3: mov dword ptr [edi], eax
        __asm _emit 0x89
        __asm _emit 0x07
        // 0x5881C8C5: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5881C8CA: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881C8CD: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5881C8D1: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x5881C8D6: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5881C8D8: je 0x5881c90e
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x5881C8DA: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5881C8DE: push 0x505050
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x5881C8E3: push ebx
        __asm _emit 0x53
        // 0x5881C8E4: push 0xdcdcdc
        __asm _emit 0x68
        __asm _emit 0xDC
        __asm _emit 0xDC
        __asm _emit 0xDC
        __asm _emit 0x00
        // 0x5881C8E9: lea edx, [ebp + 0xc8]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881C8EF: push edx
        __asm _emit 0x52
        // 0x5881C8F0: lea edx, [ecx + 0x1b8]
        __asm _emit 0x8D
        __asm _emit 0x91
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881C8F6: push edx
        __asm _emit 0x52
        // 0x5881C8F7: lea edx, [ebp + 0x4e]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x4E
        // 0x5881C8FA: push edx
        __asm _emit 0x52
        // 0x5881C8FB: push ecx
        __asm _emit 0x51
        // 0x5881C8FC: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881C902: push ecx
        __asm _emit 0x51
        // 0x5881C903: push ebx
        __asm _emit 0x53
        // 0x5881C904: push esi
        __asm _emit 0x56
        // 0x5881C905: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881C907: call 0x5875f420
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0x2B
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5881C90C: jmp 0x5881c910
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881C90E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5881C910: push 0x184
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881C915: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5881C919: mov dword ptr [esi + 0x9c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881C91F: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x03
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5881C924: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881C927: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5881C92B: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x5881C930: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5881C932: je 0x5881c96b
        __asm _emit 0x74
        __asm _emit 0x37
        // 0x5881C934: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5881C938: push 0x505050
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x5881C93D: push ebx
        __asm _emit 0x53
        // 0x5881C93E: push 0xdcdcdc
        __asm _emit 0x68
        __asm _emit 0xDC
        __asm _emit 0xDC
        __asm _emit 0xDC
        __asm _emit 0x00
        // 0x5881C943: lea edx, [ebp + 0xc8]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881C949: push edx
        __asm _emit 0x52
        // 0x5881C94A: lea edx, [ecx + 0x1b8]
        __asm _emit 0x8D
        __asm _emit 0x91
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881C950: push edx
        __asm _emit 0x52
        // 0x5881C951: add ebp, 0x8a
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881C957: push ebp
        __asm _emit 0x55
        // 0x5881C958: push ecx
        __asm _emit 0x51
        // 0x5881C959: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881C95F: push ecx
        __asm _emit 0x51
        // 0x5881C960: push ebx
        __asm _emit 0x53
        // 0x5881C961: push esi
        __asm _emit 0x56
        // 0x5881C962: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881C964: call 0x5875f420
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0x2A
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5881C969: jmp 0x5881c96d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881C96B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5881C96D: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5881C971: mov dword ptr [esi + 0xa0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881C977: mov dword ptr [esp + 0x38], 3
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881C97F: nop
        __asm _emit 0x90
        // 0x5881C980: mov ebp, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x2F
        // 0x5881C982: mov ecx, dword ptr [ebp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x40
        // 0x5881C985: mov edx, 0x61bc
        __asm _emit 0xBA
        __asm _emit 0xBC
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881C98A: mov word ptr [ebp + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x26
        // 0x5881C98E: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5881C990: je 0x5881c998
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5881C992: push ebp
        __asm _emit 0x55
        // 0x5881C993: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0x65
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881C998: mov ecx, dword ptr [ebp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x30
        // 0x5881C99B: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5881C99D: je 0x5881c9a5
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5881C99F: push ebp
        __asm _emit 0x55
        // 0x5881C9A0: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x65
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881C9A5: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5881C9A7: mov dword ptr [eax + 0x5c], 0x14
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x5C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881C9AE: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5881C9B0: mov dword ptr [eax + 0x68], 1
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881C9B7: mov eax, dword ptr [0x58a246f0]
        __asm _emit 0xA1
        __asm _emit 0xF0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881C9BC: cmp dword ptr [eax + 0x170], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881C9C2: jle 0x5881c9d6
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5881C9C4: cmp dword ptr [eax + 0x194], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881C9CA: je 0x5881c9d6
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5881C9CC: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881C9D2: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x5881C9D4: jmp 0x5881c9d8
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881C9D6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5881C9D8: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5881C9DA: push eax
        __asm _emit 0x50
        // 0x5881C9DB: call 0x5875f0e0
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x27
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5881C9E0: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5881C9E3: sub dword ptr [esp + 0x38], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        // 0x5881C9E8: jne 0x5881c980
        __asm _emit 0x75
        __asm _emit 0x96
        // 0x5881C9EA: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5881C9EC: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0x02
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5881C9F1: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5881C9F3: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881C9F6: mov dword ptr [esp + 0x38], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5881C9FA: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        // 0x5881C9FF: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x5881CA01: je 0x5881ca7a
        __asm _emit 0x74
        __asm _emit 0x77
        // 0x5881CA03: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881CA08: cmp dword ptr [eax + 0x164], 0x9db
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xDB
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CA12: jle 0x5881ca2a
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5881CA14: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CA1A: je 0x5881ca2a
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5881CA1C: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CA22: mov ebp, dword ptr [ecx + 0x276c]
        __asm _emit 0x8B
        __asm _emit 0xA9
        __asm _emit 0x6C
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CA28: jmp 0x5881ca2c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881CA2A: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5881CA2C: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5881CA30: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5881CA34: push 0x61b7
        __asm _emit 0x68
        __asm _emit 0xB7
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CA39: push ebx
        __asm _emit 0x53
        // 0x5881CA3A: push ebx
        __asm _emit 0x53
        // 0x5881CA3B: push edx
        __asm _emit 0x52
        // 0x5881CA3C: push eax
        __asm _emit 0x50
        // 0x5881CA3D: push esi
        __asm _emit 0x56
        // 0x5881CA3E: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5881CA40: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0x67
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881CA45: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5881CA4B: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x5881CA4E: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x5881CA50: je 0x5881ca7c
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x5881CA52: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x5881CA55: mov dword ptr [edi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x5881CA58: mov edx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x14
        // 0x5881CA5B: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x5881CA5E: mov dword ptr [edi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x10
        // 0x5881CA61: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5881CA63: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x5881CA66: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5881CA69: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x5881CA6C: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5881CA6F: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x1C
        // 0x5881CA72: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5881CA75: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x5881CA78: jmp 0x5881ca7c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881CA7A: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5881CA7C: mov eax, 0xfffe
        __asm _emit 0xB8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CA81: mov dword ptr [esi + 0x78], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x78
        // 0x5881CA84: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x5881CA88: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5881CA8A: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5881CA8E: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5881CA93: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5881CA95: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881CA98: mov dword ptr [esp + 0x38], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5881CA9C: mov byte ptr [esp + 0x20], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x07
        // 0x5881CAA1: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x5881CAA3: je 0x5881cb1e
        __asm _emit 0x74
        __asm _emit 0x79
        // 0x5881CAA5: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881CAAA: cmp dword ptr [eax + 0x164], 0x9da
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xDA
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CAB4: jle 0x5881cacc
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5881CAB6: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CABC: je 0x5881cacc
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5881CABE: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CAC4: mov ebp, dword ptr [ecx + 0x2768]
        __asm _emit 0x8B
        __asm _emit 0xA9
        __asm _emit 0x68
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CACA: jmp 0x5881cace
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881CACC: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5881CACE: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5881CAD2: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5881CAD6: push 0x61b7
        __asm _emit 0x68
        __asm _emit 0xB7
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CADB: push ebx
        __asm _emit 0x53
        // 0x5881CADC: push ebx
        __asm _emit 0x53
        // 0x5881CADD: push edx
        __asm _emit 0x52
        // 0x5881CADE: push eax
        __asm _emit 0x50
        // 0x5881CADF: push esi
        __asm _emit 0x56
        // 0x5881CAE0: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5881CAE2: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0x66
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881CAE7: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5881CAED: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x5881CAF0: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x5881CAF2: je 0x5881cb1a
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x5881CAF4: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x5881CAF7: mov dword ptr [edi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x5881CAFA: mov edx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x14
        // 0x5881CAFD: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x5881CB00: mov dword ptr [edi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x10
        // 0x5881CB03: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5881CB05: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x5881CB08: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5881CB0B: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x5881CB0E: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5881CB11: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x1C
        // 0x5881CB14: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5881CB17: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x5881CB1A: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5881CB1C: jmp 0x5881cb20
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881CB1E: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5881CB20: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5881CB25: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5881CB29: mov dword ptr [esi + 0x7c], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x5881CB2C: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0x61
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881CB31: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x5881CB34: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CB39: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5881CB3D: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x5881CB40: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CB45: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5881CB49: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CB4E: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0x00
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5881CB53: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881CB56: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5881CB5A: mov byte ptr [esp + 0x20], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x08
        // 0x5881CB5F: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5881CB61: je 0x5881cb72
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x5881CB63: push ebx
        __asm _emit 0x53
        // 0x5881CB64: push 0x58997010
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x70
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5881CB69: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881CB6B: call 0x58906de0
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0xA2
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881CB70: jmp 0x5881cb74
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881CB72: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5881CB74: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CB79: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5881CB7D: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x5881CB80: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0x00
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5881CB85: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881CB88: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5881CB8C: mov byte ptr [esp + 0x20], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x09
        // 0x5881CB91: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5881CB93: je 0x5881cbdd
        __asm _emit 0x74
        __asm _emit 0x48
        // 0x5881CB95: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x5881CB98: cmp dword ptr [ecx + 0x160], 0x11
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x11
        // 0x5881CB9F: jle 0x5881cbb3
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5881CBA1: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CBA7: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5881CBA9: je 0x5881cbb3
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5881CBAB: add ecx, 0x440
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CBB1: jmp 0x5881cbb5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881CBB3: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5881CBB5: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5881CBB9: push 0xaaaaaaaa
        __asm _emit 0x68
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5881CBBE: lea edx, [ebp + 0xc8]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CBC4: push edx
        __asm _emit 0x52
        // 0x5881CBC5: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5881CBC9: add edx, 0xed
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xED
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CBCF: push edx
        __asm _emit 0x52
        // 0x5881CBD0: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5881CBD2: push ecx
        __asm _emit 0x51
        // 0x5881CBD3: push esi
        __asm _emit 0x56
        // 0x5881CBD4: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881CBD6: call 0x5875f4b0
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0x28
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5881CBDB: jmp 0x5881cbe3
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x5881CBDD: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5881CBE1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5881CBE3: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CBE8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881CBEA: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5881CBEE: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5881CBF1: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x61
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881CBF6: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5881CBF9: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CBFE: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5881CC02: mov edi, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x6C
        // 0x5881CC05: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x5881CC08: mov edx, 0x61bc
        __asm _emit 0xBA
        __asm _emit 0xBC
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CC0D: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        // 0x5881CC11: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5881CC13: je 0x5881cc1b
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5881CC15: push edi
        __asm _emit 0x57
        // 0x5881CC16: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0x63
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881CC1B: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x5881CC1E: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5881CC20: je 0x5881cc28
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5881CC22: push edi
        __asm _emit 0x57
        // 0x5881CC23: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0x62
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881CC28: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CC2D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5881CC32: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881CC35: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5881CC39: mov byte ptr [esp + 0x20], 0xa
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0A
        // 0x5881CC3E: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5881CC40: je 0x5881cc81
        __asm _emit 0x74
        __asm _emit 0x3F
        // 0x5881CC42: mov edx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x68
        // 0x5881CC45: cmp dword ptr [edx + 0x160], 0x12
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x12
        // 0x5881CC4C: jle 0x5881cc60
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5881CC4E: mov edx, dword ptr [edx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CC54: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x5881CC56: je 0x5881cc60
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5881CC58: add edx, 0x480
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CC5E: jmp 0x5881cc62
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881CC60: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5881CC62: lea ecx, [ebp + 0xc8]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CC68: push ecx
        __asm _emit 0x51
        // 0x5881CC69: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5881CC6D: add ecx, 0xed
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xED
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CC73: push ecx
        __asm _emit 0x51
        // 0x5881CC74: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5881CC76: push edx
        __asm _emit 0x52
        // 0x5881CC77: push esi
        __asm _emit 0x56
        // 0x5881CC78: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881CC7A: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0xA4
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881CC7F: jmp 0x5881cc83
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881CC81: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5881CC83: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CC88: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881CC8A: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5881CC8E: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x5881CC91: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0x60
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881CC96: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x5881CC99: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CC9E: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0x60
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881CCA3: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x5881CCA6: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CCAB: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5881CCAF: mov edi, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x70
        // 0x5881CCB2: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x5881CCB5: mov eax, 0x61bc
        __asm _emit 0xB8
        __asm _emit 0xBC
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CCBA: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x5881CCBE: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5881CCC0: je 0x5881ccc8
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5881CCC2: push edi
        __asm _emit 0x57
        // 0x5881CCC3: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0x62
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881CCC8: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x5881CCCB: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5881CCCD: je 0x5881ccd5
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5881CCCF: push edi
        __asm _emit 0x57
        // 0x5881CCD0: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x62
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881CCD5: push 0x10c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CCDA: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5881CCDF: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881CCE2: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5881CCE6: mov byte ptr [esp + 0x20], 0xb
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0B
        // 0x5881CCEB: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5881CCED: je 0x5881cd29
        __asm _emit 0x74
        __asm _emit 0x3A
        // 0x5881CCEF: push 0x646464
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x5881CCF4: push ebx
        __asm _emit 0x53
        // 0x5881CCF5: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5881CCFA: lea ecx, [ebp + 0xc8]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CD00: push ecx
        __asm _emit 0x51
        // 0x5881CD01: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5881CD05: lea edx, [ecx + 0x190]
        __asm _emit 0x8D
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CD0B: push edx
        __asm _emit 0x52
        // 0x5881CD0C: lea edx, [ebp + 0x76]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x76
        // 0x5881CD0F: push edx
        __asm _emit 0x52
        // 0x5881CD10: add ecx, 0x15e
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x5E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CD16: push ecx
        __asm _emit 0x51
        // 0x5881CD17: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881CD1D: push ecx
        __asm _emit 0x51
        // 0x5881CD1E: push ebx
        __asm _emit 0x53
        // 0x5881CD1F: push esi
        __asm _emit 0x56
        // 0x5881CD20: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881CD22: call 0x58761090
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0x43
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5881CD27: jmp 0x5881cd2b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881CD29: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5881CD2B: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x5881CD2D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881CD2F: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5881CD33: mov dword ptr [esi + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x5881CD36: call 0x58748e40
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0xC1
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5881CD3B: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x5881CD3E: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CD43: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5881CD47: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x5881CD4A: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CD4F: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5881CD53: mov edi, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x74
        // 0x5881CD56: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x5881CD59: mov edx, 0x61bc
        __asm _emit 0xBA
        __asm _emit 0xBC
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CD5E: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        // 0x5881CD62: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5881CD64: je 0x5881cd6c
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5881CD66: push edi
        __asm _emit 0x57
        // 0x5881CD67: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0x61
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881CD6C: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x5881CD6F: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5881CD71: je 0x5881cd79
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5881CD73: push edi
        __asm _emit 0x57
        // 0x5881CD74: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0x61
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881CD79: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x5881CD7B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0xFE
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5881CD80: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881CD83: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5881CD87: mov byte ptr [esp + 0x20], 0xc
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0C
        // 0x5881CD8C: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5881CD8E: je 0x5881cdc6
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x5881CD90: push 0x505050
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x5881CD95: push ebx
        __asm _emit 0x53
        // 0x5881CD96: push 0xffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CD9B: lea ecx, [ebp + 0xc8]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CDA1: push ecx
        __asm _emit 0x51
        // 0x5881CDA2: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5881CDA6: lea edx, [ecx + 0x1b8]
        __asm _emit 0x8D
        __asm _emit 0x91
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CDAC: push edx
        __asm _emit 0x52
        // 0x5881CDAD: lea edx, [ebp + 0x76]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x76
        // 0x5881CDB0: push edx
        __asm _emit 0x52
        // 0x5881CDB1: push ecx
        __asm _emit 0x51
        // 0x5881CDB2: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881CDB8: push ecx
        __asm _emit 0x51
        // 0x5881CDB9: push ebx
        __asm _emit 0x53
        // 0x5881CDBA: push esi
        __asm _emit 0x56
        // 0x5881CDBB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881CDBD: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0x64
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5881CDC2: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5881CDC4: jmp 0x5881cdc8
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881CDC6: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5881CDC8: mov dword ptr [esi + 0x84], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CDCE: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x5881CDD1: mov edx, 0x61bc
        __asm _emit 0xBA
        __asm _emit 0xBC
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CDD6: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5881CDDA: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        // 0x5881CDDE: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5881CDE0: je 0x5881cde8
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5881CDE2: push edi
        __asm _emit 0x57
        // 0x5881CDE3: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0x61
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881CDE8: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x5881CDEB: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5881CDED: je 0x5881cdf5
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5881CDEF: push edi
        __asm _emit 0x57
        // 0x5881CDF0: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0x60
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881CDF5: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CDFB: mov dword ptr [eax + 0x5c], 0x14
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x5C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CE02: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CE08: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5881CE0A: mov dword ptr [eax + 0x68], 1
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CE11: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0xFE
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5881CE16: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5881CE18: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881CE1B: mov dword ptr [esp + 0x38], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5881CE1F: mov byte ptr [esp + 0x20], 0xd
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0D
        // 0x5881CE24: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x5881CE26: je 0x5881ceaf
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CE2C: mov eax, dword ptr [0x58a24610]
        __asm _emit 0xA1
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881CE31: cmp dword ptr [eax + 0x164], 0x53
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x53
        // 0x5881CE38: jle 0x5881ce50
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5881CE3A: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CE40: je 0x5881ce50
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5881CE42: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CE48: mov ebp, dword ptr [eax + 0x14c]
        __asm _emit 0x8B
        __asm _emit 0xA8
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CE4E: jmp 0x5881ce52
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881CE50: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5881CE52: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5881CE56: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5881CE5A: push 0x61bc
        __asm _emit 0x68
        __asm _emit 0xBC
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CE5F: push ebx
        __asm _emit 0x53
        // 0x5881CE60: push ebx
        __asm _emit 0x53
        // 0x5881CE61: add ecx, 0x75
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x75
        // 0x5881CE64: push ecx
        __asm _emit 0x51
        // 0x5881CE65: add edx, 0x17c
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CE6B: push edx
        __asm _emit 0x52
        // 0x5881CE6C: push esi
        __asm _emit 0x56
        // 0x5881CE6D: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5881CE6F: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0x63
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881CE74: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5881CE7A: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x5881CE7D: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x5881CE7F: je 0x5881cea7
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x5881CE81: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5881CE84: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x5881CE87: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x5881CE8A: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x5881CE8D: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x10
        // 0x5881CE90: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5881CE92: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        // 0x5881CE95: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5881CE98: mov dword ptr [edi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x5881CE9B: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5881CE9E: mov dword ptr [edi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x1C
        // 0x5881CEA1: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5881CEA4: mov dword ptr [edi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x20
        // 0x5881CEA7: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5881CEAB: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5881CEAD: jmp 0x5881ceb1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881CEAF: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5881CEB1: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CEB6: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5881CEBA: mov dword ptr [esi + 0x88], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CEC0: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0x5E
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881CEC5: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CECB: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CED0: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5881CED4: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CEDA: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CEDF: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5881CEE3: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5881CEE5: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5881CEE9: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CEEE: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5881CEF2: mov edx, 0xfffd
        __asm _emit 0xBA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CEF7: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5881CEFB: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5881CEFF: mov ecx, 0xe5ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CF04: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5881CF07: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CF0C: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x5881CF0F: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CF14: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5881CF18: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0xFD
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5881CF1D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881CF20: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5881CF24: mov edi, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5881CF28: mov byte ptr [esp + 0x20], 0xe
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0E
        // 0x5881CF2D: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5881CF2F: je 0x5881cf57
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x5881CF31: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5881CF35: push edi
        __asm _emit 0x57
        // 0x5881CF36: lea ecx, [ebp + 0x6c]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x6C
        // 0x5881CF39: push ecx
        __asm _emit 0x51
        // 0x5881CF3A: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881CF40: add edx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x64
        // 0x5881CF43: push edx
        __asm _emit 0x52
        // 0x5881CF44: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881CF4A: push ebx
        __asm _emit 0x53
        // 0x5881CF4B: push esi
        __asm _emit 0x56
        // 0x5881CF4C: push ecx
        __asm _emit 0x51
        // 0x5881CF4D: push edx
        __asm _emit 0x52
        // 0x5881CF4E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881CF50: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0x0E
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5881CF55: jmp 0x5881cf59
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881CF57: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5881CF59: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CF5E: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5881CF62: mov dword ptr [esi + 0xa4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CF68: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0xFC
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5881CF6D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881CF70: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5881CF74: mov byte ptr [esp + 0x20], 0xf
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0F
        // 0x5881CF79: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5881CF7B: je 0x5881cfa6
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x5881CF7D: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5881CF81: mov edx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881CF87: push edi
        __asm _emit 0x57
        // 0x5881CF88: add ebp, 0x6c
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x6C
        // 0x5881CF8B: push ebp
        __asm _emit 0x55
        // 0x5881CF8C: add ecx, 0xc8
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CF92: push ecx
        __asm _emit 0x51
        // 0x5881CF93: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881CF99: push ebx
        __asm _emit 0x53
        // 0x5881CF9A: push esi
        __asm _emit 0x56
        // 0x5881CF9B: push edx
        __asm _emit 0x52
        // 0x5881CF9C: push ecx
        __asm _emit 0x51
        // 0x5881CF9D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881CF9F: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5881CFA4: jmp 0x5881cfa8
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881CFA6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5881CFA8: mov edi, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CFAE: mov dword ptr [esi + 0xa8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CFB4: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x5881CFB7: mov edx, 0x620c
        __asm _emit 0xBA
        __asm _emit 0x0C
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CFBC: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5881CFC0: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        // 0x5881CFC4: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5881CFC6: je 0x5881cfce
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5881CFC8: push edi
        __asm _emit 0x57
        // 0x5881CFC9: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0x5F
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881CFCE: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x5881CFD1: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5881CFD3: je 0x5881cfdb
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5881CFD5: push edi
        __asm _emit 0x57
        // 0x5881CFD6: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x5F
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881CFDB: mov edi, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CFE1: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x5881CFE4: mov eax, 0x620c
        __asm _emit 0xB8
        __asm _emit 0x0C
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881CFE9: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x5881CFED: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5881CFEF: je 0x5881cff7
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5881CFF1: push edi
        __asm _emit 0x57
        // 0x5881CFF2: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0x5F
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881CFF7: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x5881CFFA: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5881CFFC: je 0x5881d004
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5881CFFE: push edi
        __asm _emit 0x57
        // 0x5881CFFF: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0x5E
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881D004: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D00A: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D00F: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x5D
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881D014: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D01A: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D01F: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0x5C
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881D024: mov eax, dword ptr [0x58a24610]
        __asm _emit 0xA1
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881D029: cmp dword ptr [eax + 0x160], 3
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x5881D030: jle 0x5881d047
        __asm _emit 0x7E
        __asm _emit 0x15
        // 0x5881D032: cmp dword ptr [eax + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D038: je 0x5881d047
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x5881D03A: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D040: add eax, 0xc0
        __asm _emit 0x05
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D045: jmp 0x5881d049
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881D047: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5881D049: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D04F: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5881D052: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5881D054: je 0x5881d07e
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5881D056: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5881D059: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5881D05C: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5881D05F: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5881D062: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5881D065: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5881D067: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5881D06A: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5881D06C: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5881D06F: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5881D072: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5881D075: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5881D078: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5881D07B: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5881D07E: mov eax, dword ptr [0x58a24610]
        __asm _emit 0xA1
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881D083: cmp dword ptr [eax + 0x160], 5
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        // 0x5881D08A: jle 0x5881d0a1
        __asm _emit 0x7E
        __asm _emit 0x15
        // 0x5881D08C: cmp dword ptr [eax + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D092: je 0x5881d0a1
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x5881D094: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D09A: add eax, 0x140
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D09F: jmp 0x5881d0a3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881D0A1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5881D0A3: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D0A9: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5881D0AC: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5881D0AE: je 0x5881d0d8
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5881D0B0: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5881D0B3: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5881D0B6: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5881D0B9: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5881D0BC: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5881D0BF: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5881D0C1: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5881D0C4: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5881D0C6: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5881D0C9: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5881D0CC: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5881D0CF: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5881D0D2: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5881D0D5: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5881D0D8: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D0DE: mov ecx, 2
        __asm _emit 0xB9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D0E3: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5881D0E7: mov eax, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D0ED: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5881D0F1: mov dword ptr [esi + 0xac], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D0F7: mov dword ptr [esi + 0xb0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D0FD: mov dword ptr [esi + 0xb8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D103: mov dword ptr [esi + 0xb4], 0x177
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D10D: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5881D10F: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5881D113: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D11A: pop ecx
        __asm _emit 0x59
        // 0x5881D11B: pop edi
        __asm _emit 0x5F
        // 0x5881D11C: pop esi
        __asm _emit 0x5E
        // 0x5881D11D: pop ebp
        __asm _emit 0x5D
        // 0x5881D11E: pop ebx
        __asm _emit 0x5B
        // 0x5881D11F: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5881D122: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
