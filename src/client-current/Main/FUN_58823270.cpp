// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58823270 .. +0x6DC bytes.
// Source symbol alias: FUN_58823270.
extern "C" __declspec(naked) void FUN_58823270() {
    __asm {
        // 0x58823270: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58823272: push 0x5898385c
        __asm _emit 0x68
        __asm _emit 0x5C
        __asm _emit 0x38
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58823277: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882327D: push eax
        __asm _emit 0x50
        // 0x5882327E: push ecx
        __asm _emit 0x51
        // 0x5882327F: push ebx
        __asm _emit 0x53
        // 0x58823280: push ebp
        __asm _emit 0x55
        // 0x58823281: push esi
        __asm _emit 0x56
        // 0x58823282: push edi
        __asm _emit 0x57
        // 0x58823283: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58823288: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5882328A: push eax
        __asm _emit 0x50
        // 0x5882328B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5882328F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823295: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58823297: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5882329B: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5882329F: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588232A3: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588232A7: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588232AB: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588232AF: push eax
        __asm _emit 0x50
        // 0x588232B0: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588232B4: push ecx
        __asm _emit 0x51
        // 0x588232B5: push edx
        __asm _emit 0x52
        // 0x588232B6: push ebp
        __asm _emit 0x55
        // 0x588232B7: push ebx
        __asm _emit 0x53
        // 0x588232B8: push eax
        __asm _emit 0x50
        // 0x588232B9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588232BB: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0xFE
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588232C0: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588232C6: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588232CB: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588232CD: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x588232D0: mov dword ptr [esi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x54
        // 0x588232D3: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588232DA: mov dword ptr [esi + 0x5c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x5C
        // 0x588232DD: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588232DF: mov dword ptr [esp + 0x24], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588232E3: mov dword ptr [esi], 0x5899db64
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x64
        __asm _emit 0xDB
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588232E9: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0x99
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x588232EE: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588232F1: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588232F5: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x588232FA: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588232FC: je 0x5882333e
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x588232FE: mov ecx, dword ptr [0x58a2476c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x6C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58823304: cmp dword ptr [ecx + 0x164], 3
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x5882330B: jle 0x5882332d
        __asm _emit 0x7E
        __asm _emit 0x20
        // 0x5882330D: cmp dword ptr [ecx + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823313: je 0x5882332d
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x58823315: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882331B: mov ecx, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x0C
        // 0x5882331E: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58823320: push ebp
        __asm _emit 0x55
        // 0x58823321: push ebx
        __asm _emit 0x53
        // 0x58823322: push ecx
        __asm _emit 0x51
        // 0x58823323: push esi
        __asm _emit 0x56
        // 0x58823324: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58823326: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0xE9
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5882332B: jmp 0x58823340
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x5882332D: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5882332F: push ebp
        __asm _emit 0x55
        // 0x58823330: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58823332: push ebx
        __asm _emit 0x53
        // 0x58823333: push ecx
        __asm _emit 0x51
        // 0x58823334: push esi
        __asm _emit 0x56
        // 0x58823335: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58823337: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0xE9
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5882333C: jmp 0x58823340
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5882333E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58823340: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58823345: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58823347: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5882334C: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x5882334F: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0xF9
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58823354: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x58823357: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882335C: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58823360: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58823362: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x98
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x58823367: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5882336A: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5882336E: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x58823373: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58823375: je 0x588233b7
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x58823377: mov ecx, dword ptr [0x58a2476c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x6C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882337D: cmp dword ptr [ecx + 0x164], 4
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x58823384: jle 0x588233a6
        __asm _emit 0x7E
        __asm _emit 0x20
        // 0x58823386: cmp dword ptr [ecx + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882338C: je 0x588233a6
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x5882338E: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823394: mov ecx, dword ptr [ecx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x10
        // 0x58823397: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58823399: push ebp
        __asm _emit 0x55
        // 0x5882339A: push ebx
        __asm _emit 0x53
        // 0x5882339B: push ecx
        __asm _emit 0x51
        // 0x5882339C: push esi
        __asm _emit 0x56
        // 0x5882339D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5882339F: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x588233A4: jmp 0x588233b9
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x588233A6: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588233A8: push ebp
        __asm _emit 0x55
        // 0x588233A9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588233AB: push ebx
        __asm _emit 0x53
        // 0x588233AC: push ecx
        __asm _emit 0x51
        // 0x588233AD: push esi
        __asm _emit 0x56
        // 0x588233AE: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588233B0: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x588233B5: jmp 0x588233b9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588233B7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588233B9: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588233BB: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588233C0: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x588233C3: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x588233C8: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588233CB: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588233CF: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x588233D4: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588233D6: je 0x58823418
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x588233D8: mov ecx, dword ptr [0x58a2476c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x6C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588233DE: cmp dword ptr [ecx + 0x164], 5
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        // 0x588233E5: jle 0x58823407
        __asm _emit 0x7E
        __asm _emit 0x20
        // 0x588233E7: cmp dword ptr [ecx + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588233ED: je 0x58823407
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x588233EF: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588233F5: mov ecx, dword ptr [edx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x14
        // 0x588233F8: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588233FA: push ebp
        __asm _emit 0x55
        // 0x588233FB: push ebx
        __asm _emit 0x53
        // 0x588233FC: push ecx
        __asm _emit 0x51
        // 0x588233FD: push esi
        __asm _emit 0x56
        // 0x588233FE: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58823400: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58823405: jmp 0x5882341a
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x58823407: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58823409: push ebp
        __asm _emit 0x55
        // 0x5882340A: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5882340C: push ebx
        __asm _emit 0x53
        // 0x5882340D: push ecx
        __asm _emit 0x51
        // 0x5882340E: push esi
        __asm _emit 0x56
        // 0x5882340F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58823411: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58823416: jmp 0x5882341a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58823418: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882341A: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882341F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58823421: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58823426: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x58823429: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0xF8
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882342E: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x58823431: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823436: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5882343A: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5882343C: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x58823441: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58823444: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58823448: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x5882344D: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5882344F: je 0x58823491
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x58823451: mov ecx, dword ptr [0x58a2476c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x6C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58823457: cmp dword ptr [ecx + 0x164], 6
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        // 0x5882345E: jle 0x58823480
        __asm _emit 0x7E
        __asm _emit 0x20
        // 0x58823460: cmp dword ptr [ecx + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823466: je 0x58823480
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x58823468: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882346E: mov ecx, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x18
        // 0x58823471: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58823473: push ebp
        __asm _emit 0x55
        // 0x58823474: push ebx
        __asm _emit 0x53
        // 0x58823475: push ecx
        __asm _emit 0x51
        // 0x58823476: push esi
        __asm _emit 0x56
        // 0x58823477: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58823479: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0xE7
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5882347E: jmp 0x58823493
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x58823480: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58823482: push ebp
        __asm _emit 0x55
        // 0x58823483: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58823485: push ebx
        __asm _emit 0x53
        // 0x58823486: push ecx
        __asm _emit 0x51
        // 0x58823487: push esi
        __asm _emit 0x56
        // 0x58823488: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5882348A: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0xE7
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5882348F: jmp 0x58823493
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58823491: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58823493: push 0x10c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823498: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5882349D: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x588234A0: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x97
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x588234A5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588234A8: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588234AC: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x588234B1: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588234B3: je 0x588234eb
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x588234B5: push 0x646464
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x588234BA: push edi
        __asm _emit 0x57
        // 0x588234BB: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588234C0: lea ecx, [ebp + 0x9d]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x9D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588234C6: push ecx
        __asm _emit 0x51
        // 0x588234C7: lea edx, [ebx + 0x17e]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x7E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588234CD: push edx
        __asm _emit 0x52
        // 0x588234CE: lea ecx, [ebp + 0x8c]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588234D4: push ecx
        __asm _emit 0x51
        // 0x588234D5: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588234DB: lea edx, [ebx + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x14
        // 0x588234DE: push edx
        __asm _emit 0x52
        // 0x588234DF: push ecx
        __asm _emit 0x51
        // 0x588234E0: push edi
        __asm _emit 0x57
        // 0x588234E1: push esi
        __asm _emit 0x56
        // 0x588234E2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588234E4: call 0x58761090
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0xDB
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x588234E9: jmp 0x588234ed
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588234EB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588234ED: push 0x200
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588234F2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588234F4: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588234F9: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588234FC: call 0x58748e40
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x59
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58823501: push 0x90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823506: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x97
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5882350B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5882350E: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58823512: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        // 0x58823517: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58823519: je 0x58823546
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x5882351B: push edi
        __asm _emit 0x57
        // 0x5882351C: push edi
        __asm _emit 0x57
        // 0x5882351D: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58823522: lea edx, [ebp + 0x7d]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x7D
        // 0x58823525: push edx
        __asm _emit 0x52
        // 0x58823526: lea ecx, [ebx + 0x1aa]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xAA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882352C: push ecx
        __asm _emit 0x51
        // 0x5882352D: lea edx, [ebp + 0x22]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x22
        // 0x58823530: push edx
        __asm _emit 0x52
        // 0x58823531: mov edx, dword ptr [0x58a24538]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58823537: lea ecx, [ebx + 0x13]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x13
        // 0x5882353A: push ecx
        __asm _emit 0x51
        // 0x5882353B: push edx
        __asm _emit 0x52
        // 0x5882353C: push esi
        __asm _emit 0x56
        // 0x5882353D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5882353F: call 0x58907fd0
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0x4A
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58823544: jmp 0x58823548
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58823546: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58823548: mov dword ptr [esi + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x5882354B: mov dword ptr [eax + 0x5c], 0xd
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x5C
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823552: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x58823555: mov ecx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x18
        // 0x58823558: add ecx, 0x5b
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x5B
        // 0x5882355B: mov dword ptr [eax + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x20
        // 0x5882355E: mov dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x26
        // 0x58823562: mov edi, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x74
        // 0x58823565: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x58823568: add dx, 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x64
        // 0x5882356C: movzx eax, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC2
        // 0x5882356F: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58823574: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x58823578: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5882357A: je 0x58823582
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5882357C: push edi
        __asm _emit 0x57
        // 0x5882357D: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0xF9
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58823582: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x58823585: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58823587: je 0x5882358f
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58823589: push edi
        __asm _emit 0x57
        // 0x5882358A: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0xF9
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882358F: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x58823592: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823597: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5882359B: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588235A0: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x96
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x588235A5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588235A8: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588235AC: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588235AE: mov byte ptr [esp + 0x20], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x07
        // 0x588235B3: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588235B5: je 0x58823604
        __asm _emit 0x74
        __asm _emit 0x4D
        // 0x588235B7: mov ecx, dword ptr [0x58a2476c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x6C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588235BD: cmp dword ptr [ecx + 0x160], 1
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588235C4: jle 0x588235d9
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588235C6: cmp dword ptr [ecx + 0x190], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588235CC: je 0x588235d9
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588235CE: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588235D4: add edx, 0x40
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x40
        // 0x588235D7: jmp 0x588235db
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588235D9: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588235DB: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588235DD: lea ecx, [ebp + 0x95]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588235E3: push ecx
        __asm _emit 0x51
        // 0x588235E4: lea ecx, [ebx + 0x18a]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588235EA: push ecx
        __asm _emit 0x51
        // 0x588235EB: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588235F1: push edx
        __asm _emit 0x52
        // 0x588235F2: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588235F8: push esi
        __asm _emit 0x56
        // 0x588235F9: push edx
        __asm _emit 0x52
        // 0x588235FA: push ecx
        __asm _emit 0x51
        // 0x588235FB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588235FD: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0xA7
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58823602: jmp 0x58823606
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58823604: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58823606: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882360B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5882360D: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58823612: mov dword ptr [esi + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x58823615: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0xF7
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882361A: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x5882361D: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823622: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58823626: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882362B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0x96
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x58823630: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58823633: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58823637: mov byte ptr [esp + 0x20], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x08
        // 0x5882363C: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5882363E: je 0x5882368d
        __asm _emit 0x74
        __asm _emit 0x4D
        // 0x58823640: mov ecx, dword ptr [0x58a2476c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x6C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58823646: cmp dword ptr [ecx + 0x160], 2
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x5882364D: jle 0x58823662
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x5882364F: cmp dword ptr [ecx + 0x190], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823655: je 0x58823662
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58823657: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882365D: sub ecx, -0x80
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x80
        // 0x58823660: jmp 0x58823664
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58823662: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58823664: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58823666: lea edx, [ebp + 0x85]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882366C: push edx
        __asm _emit 0x52
        // 0x5882366D: lea edx, [ebx + 0x18a]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x8A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823673: push edx
        __asm _emit 0x52
        // 0x58823674: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882367A: push ecx
        __asm _emit 0x51
        // 0x5882367B: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58823681: push esi
        __asm _emit 0x56
        // 0x58823682: push ecx
        __asm _emit 0x51
        // 0x58823683: push edx
        __asm _emit 0x52
        // 0x58823684: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58823686: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0xA7
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5882368B: jmp 0x5882368f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5882368D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882368F: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823694: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58823696: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5882369B: mov dword ptr [esi + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x5882369E: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0xF6
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588236A3: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x588236A6: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588236AB: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588236AF: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588236B4: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0x95
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x588236B9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588236BC: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588236C0: mov byte ptr [esp + 0x20], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x09
        // 0x588236C5: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588236C7: je 0x58823716
        __asm _emit 0x74
        __asm _emit 0x4D
        // 0x588236C9: mov ecx, dword ptr [0x58a2476c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x6C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588236CF: cmp dword ptr [ecx + 0x160], 3
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x588236D6: jle 0x588236ee
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588236D8: cmp dword ptr [ecx + 0x190], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588236DE: je 0x588236ee
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588236E0: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588236E6: add ecx, 0xc0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588236EC: jmp 0x588236f0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588236EE: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588236F0: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588236F2: lea edx, [ebp + 0xa]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x0A
        // 0x588236F5: push edx
        __asm _emit 0x52
        // 0x588236F6: lea edx, [ebx + 0x1aa]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0xAA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588236FC: push edx
        __asm _emit 0x52
        // 0x588236FD: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58823703: push ecx
        __asm _emit 0x51
        // 0x58823704: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882370A: push esi
        __asm _emit 0x56
        // 0x5882370B: push ecx
        __asm _emit 0x51
        // 0x5882370C: push edx
        __asm _emit 0x52
        // 0x5882370D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5882370F: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0xA6
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58823714: jmp 0x58823718
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58823716: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58823718: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882371D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5882371F: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58823724: mov dword ptr [esi + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882372A: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0xF5
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882372F: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823735: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882373A: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5882373E: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x58823740: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0x95
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x58823745: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58823748: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5882374C: mov byte ptr [esp + 0x20], 0xa
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0A
        // 0x58823751: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58823753: je 0x58823797
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x58823755: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882375B: cmp dword ptr [ecx + 0x160], 0x20
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        // 0x58823762: jle 0x5882377a
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58823764: cmp dword ptr [ecx + 0x190], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882376A: je 0x5882377a
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5882376C: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823772: add ecx, 0x800
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823778: jmp 0x5882377c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5882377A: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5882377C: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823781: lea edx, [ebp + 0x25]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x25
        // 0x58823784: push edx
        __asm _emit 0x52
        // 0x58823785: lea edx, [ebx + 0x1b6]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0xB6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882378B: push edx
        __asm _emit 0x52
        // 0x5882378C: push ecx
        __asm _emit 0x51
        // 0x5882378D: push esi
        __asm _emit 0x56
        // 0x5882378E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58823790: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0x12
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58823795: jmp 0x58823799
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58823797: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58823799: mov dword ptr [esi + 0x98], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882379F: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588237A4: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588237A8: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588237AE: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588237B3: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588237B8: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0xF5
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588237BD: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588237C3: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588237C8: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588237CC: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588237D1: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0x94
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x588237D6: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588237D9: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588237DD: mov byte ptr [esp + 0x20], 0xb
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0B
        // 0x588237E2: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588237E4: je 0x58823836
        __asm _emit 0x74
        __asm _emit 0x50
        // 0x588237E6: mov ecx, dword ptr [0x58a24604]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x04
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588237EC: cmp dword ptr [ecx + 0x160], 0xc
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0C
        // 0x588237F3: jle 0x5882380b
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588237F5: cmp dword ptr [ecx + 0x190], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588237FB: je 0x5882380b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588237FD: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823803: add ecx, 0x300
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823809: jmp 0x5882380d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5882380B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5882380D: push 0x640
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823812: lea edx, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x18
        // 0x58823815: push edx
        __asm _emit 0x52
        // 0x58823816: lea edx, [ebx + 0x1b5]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0xB5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882381C: push edx
        __asm _emit 0x52
        // 0x5882381D: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58823823: push ecx
        __asm _emit 0x51
        // 0x58823824: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882382A: push esi
        __asm _emit 0x56
        // 0x5882382B: push ecx
        __asm _emit 0x51
        // 0x5882382C: push edx
        __asm _emit 0x52
        // 0x5882382D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5882382F: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0xA5
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58823834: jmp 0x58823838
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58823836: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58823838: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882383D: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58823842: mov dword ptr [esi + 0x9c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823848: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x94
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5882384D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58823850: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58823854: mov byte ptr [esp + 0x20], 0xc
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0C
        // 0x58823859: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5882385B: je 0x588238ad
        __asm _emit 0x74
        __asm _emit 0x50
        // 0x5882385D: mov ecx, dword ptr [0x58a24604]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x04
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58823863: cmp dword ptr [ecx + 0x160], 0xb
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0B
        // 0x5882386A: jle 0x58823882
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5882386C: cmp dword ptr [ecx + 0x190], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823872: je 0x58823882
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58823874: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882387A: add edx, 0x2c0
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823880: jmp 0x58823884
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58823882: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58823884: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882388A: push 0x640
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882388F: add ebp, 0x75
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x75
        // 0x58823892: push ebp
        __asm _emit 0x55
        // 0x58823893: add ebx, 0x1b5
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0xB5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823899: push ebx
        __asm _emit 0x53
        // 0x5882389A: push edx
        __asm _emit 0x52
        // 0x5882389B: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588238A1: push esi
        __asm _emit 0x56
        // 0x588238A2: push ecx
        __asm _emit 0x51
        // 0x588238A3: push edx
        __asm _emit 0x52
        // 0x588238A4: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588238A6: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0xA4
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x588238AB: jmp 0x588238af
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588238AD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588238AF: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588238B5: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588238BA: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588238BF: mov dword ptr [esi + 0xa0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588238C5: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0xF4
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588238CA: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588238D0: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588238D5: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0xF4
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588238DA: mov eax, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588238E0: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588238E5: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588238E9: mov eax, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588238EF: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588238F1: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588238F5: mov eax, 0xfff0
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588238FA: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588238FE: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58823902: mov edx, 0xe5ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823907: mov eax, 0x500
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882390C: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5882390F: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x58823912: mov dword ptr [esi + 0x84], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823918: mov dword ptr [esi + 0x88], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882391E: mov dword ptr [esi + 0x8c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823924: mov dword ptr [esi + 0x90], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882392A: mov dword ptr [esi + 0x94], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823930: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58823934: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58823936: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5882393A: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823941: pop ecx
        __asm _emit 0x59
        // 0x58823942: pop edi
        __asm _emit 0x5F
        // 0x58823943: pop esi
        __asm _emit 0x5E
        // 0x58823944: pop ebp
        __asm _emit 0x5D
        // 0x58823945: pop ebx
        __asm _emit 0x5B
        // 0x58823946: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58823949: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
