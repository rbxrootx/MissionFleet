// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5885C560 .. +0x281 bytes.
// Source symbol alias: FUN_5885c560.
extern "C" __declspec(naked) void FUN_5885c560() {
    __asm {
        // 0x5885C560: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5885C562: push 0x58985699
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x56
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5885C567: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C56D: push eax
        __asm _emit 0x50
        // 0x5885C56E: push ecx
        __asm _emit 0x51
        // 0x5885C56F: push ebp
        __asm _emit 0x55
        // 0x5885C570: push esi
        __asm _emit 0x56
        // 0x5885C571: push edi
        __asm _emit 0x57
        // 0x5885C572: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5885C577: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5885C579: push eax
        __asm _emit 0x50
        // 0x5885C57A: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5885C57E: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C584: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5885C586: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5885C58A: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5885C58E: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5885C592: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5885C596: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5885C59A: mov edi, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5885C59E: push eax
        __asm _emit 0x50
        // 0x5885C59F: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5885C5A3: push ecx
        __asm _emit 0x51
        // 0x5885C5A4: push edx
        __asm _emit 0x52
        // 0x5885C5A5: push ebp
        __asm _emit 0x55
        // 0x5885C5A6: push edi
        __asm _emit 0x57
        // 0x5885C5A7: push eax
        __asm _emit 0x50
        // 0x5885C5A8: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885C5AA: call 0x58857f30
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885C5AF: mov dword ptr [esi], 0x5899ea64
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x64
        __asm _emit 0xEA
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5885C5B5: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xA1
        __asm _emit 0xA0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885C5BA: cmp dword ptr [eax + 0x164], 0x12c
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C5C4: mov dword ptr [esp + 0x1c], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C5CC: jle 0x5885c5e5
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5885C5CE: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C5D5: je 0x5885c5e5
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5885C5D7: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C5DD: mov eax, dword ptr [ecx + 0x4b0]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xB0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C5E3: jmp 0x5885c5e7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5885C5E5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885C5E7: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C5ED: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5885C5F0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885C5F2: je 0x5885c61c
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5885C5F4: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5885C5F7: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5885C5FA: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5885C5FD: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5885C600: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5885C603: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5885C605: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5885C608: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5885C60A: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5885C60D: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5885C610: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5885C613: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5885C616: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5885C619: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5885C61C: push 0xcc
        __asm _emit 0x68
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C621: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5885C626: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5885C629: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5885C62D: mov byte ptr [esp + 0x1c], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x01
        // 0x5885C632: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885C634: je 0x5885c64e
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x5885C636: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5885C638: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885C63A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885C63C: lea ecx, [ebp + 0x13]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x13
        // 0x5885C63F: push ecx
        __asm _emit 0x51
        // 0x5885C640: lea edx, [edi + 0x27]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x27
        // 0x5885C643: push edx
        __asm _emit 0x52
        // 0x5885C644: push esi
        __asm _emit 0x56
        // 0x5885C645: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5885C647: call 0x587c7db0
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0xB7
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x5885C64C: jmp 0x5885c650
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5885C64E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885C650: push 0xcc
        __asm _emit 0x68
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C655: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5885C65A: mov dword ptr [esi + 0xac], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C660: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0x05
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5885C665: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5885C668: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5885C66C: mov byte ptr [esp + 0x1c], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x02
        // 0x5885C671: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885C673: je 0x5885c68d
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x5885C675: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5885C677: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885C679: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885C67B: lea ecx, [ebp + 0x25]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x25
        // 0x5885C67E: push ecx
        __asm _emit 0x51
        // 0x5885C67F: add edi, 0x27
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x27
        // 0x5885C682: push edi
        __asm _emit 0x57
        // 0x5885C683: push esi
        __asm _emit 0x56
        // 0x5885C684: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5885C686: call 0x587c7db0
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0xB7
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x5885C68B: jmp 0x5885c68f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5885C68D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885C68F: mov edi, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C695: mov dword ptr [esi + 0xb0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C69B: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x5885C69E: mov edx, 0x7d0
        __asm _emit 0xBA
        __asm _emit 0xD0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C6A3: mov byte ptr [esp + 0x1c], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x5885C6A8: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        // 0x5885C6AC: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5885C6AE: je 0x5885c6b6
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5885C6B0: push edi
        __asm _emit 0x57
        // 0x5885C6B1: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0x68
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5885C6B6: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x5885C6B9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5885C6BB: je 0x5885c6c3
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5885C6BD: push edi
        __asm _emit 0x57
        // 0x5885C6BE: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0x68
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5885C6C3: mov edi, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C6C9: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x5885C6CC: mov eax, 0x7d0
        __asm _emit 0xB8
        __asm _emit 0xD0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C6D1: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x5885C6D5: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5885C6D7: je 0x5885c6df
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5885C6D9: push edi
        __asm _emit 0x57
        // 0x5885C6DA: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5885C6DF: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x5885C6E2: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5885C6E4: je 0x5885c6ec
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5885C6E6: push edi
        __asm _emit 0x57
        // 0x5885C6E7: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0x67
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5885C6EC: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885C6F2: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5885C6F4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885C6F6: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x5885C6F8: push 0x14
        __asm _emit 0x6A
        __asm _emit 0x14
        // 0x5885C6FA: push ecx
        __asm _emit 0x51
        // 0x5885C6FB: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C701: call 0x587c7ed0
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0xB7
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x5885C706: mov edx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885C70C: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C712: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5885C714: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885C716: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x5885C718: push 0x14
        __asm _emit 0x6A
        __asm _emit 0x14
        // 0x5885C71A: push edx
        __asm _emit 0x52
        // 0x5885C71B: call 0x587c7ed0
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0xB7
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x5885C720: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x5885C722: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0x05
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5885C727: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5885C72A: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5885C72E: mov byte ptr [esp + 0x1c], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x03
        // 0x5885C733: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885C735: je 0x5885c77b
        __asm _emit 0x74
        __asm _emit 0x44
        // 0x5885C737: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885C73D: cmp dword ptr [ecx + 0x160], 0xb
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0B
        // 0x5885C744: jle 0x5885c75d
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5885C746: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C74D: je 0x5885c75d
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5885C74F: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C755: add ecx, 0x2c0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C75B: jmp 0x5885c75f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5885C75D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5885C75F: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5885C763: push 0xbb8
        __asm _emit 0x68
        __asm _emit 0xB8
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C768: add ebp, 0x16
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x16
        // 0x5885C76B: push ebp
        __asm _emit 0x55
        // 0x5885C76C: add edx, 6
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x06
        // 0x5885C76F: push edx
        __asm _emit 0x52
        // 0x5885C770: push ecx
        __asm _emit 0x51
        // 0x5885C771: push esi
        __asm _emit 0x56
        // 0x5885C772: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5885C774: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0x82
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x5885C779: jmp 0x5885c77d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5885C77B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885C77D: mov dword ptr [esi + 0xa8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C783: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C788: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5885C78C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885C78E: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5885C790: mov word ptr [esi + 0xa4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C797: mov word ptr [esi + 0xa6], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C79E: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885C7A3: cmp dword ptr [eax + 0x170], 0x21
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x21
        // 0x5885C7AA: jle 0x5885c7c2
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5885C7AC: cmp dword ptr [eax + 0x194], edx
        __asm _emit 0x39
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C7B2: je 0x5885c7c2
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5885C7B4: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C7BA: mov eax, dword ptr [ecx + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C7C0: jmp 0x5885c7c4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5885C7C2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885C7C4: mov dword ptr [esi + 0xb4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C7CA: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5885C7CC: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5885C7D0: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C7D7: pop ecx
        __asm _emit 0x59
        // 0x5885C7D8: pop edi
        __asm _emit 0x5F
        // 0x5885C7D9: pop esi
        __asm _emit 0x5E
        // 0x5885C7DA: pop ebp
        __asm _emit 0x5D
        // 0x5885C7DB: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5885C7DE: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
