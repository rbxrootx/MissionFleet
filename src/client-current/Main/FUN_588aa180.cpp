// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588AA180 .. +0x48D bytes.
extern "C" __declspec(naked) void FUN_588aa180() {
    __asm {
        // 0x588AA180: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588AA182: push 0x58987d20
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x7D
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588AA187: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA18D: push eax
        __asm _emit 0x50
        // 0x588AA18E: push ecx
        __asm _emit 0x51
        // 0x588AA18F: push ebx
        __asm _emit 0x53
        // 0x588AA190: push ebp
        __asm _emit 0x55
        // 0x588AA191: push esi
        __asm _emit 0x56
        // 0x588AA192: push edi
        __asm _emit 0x57
        // 0x588AA193: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588AA198: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588AA19A: push eax
        __asm _emit 0x50
        // 0x588AA19B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588AA19F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA1A5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588AA1A7: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588AA1AB: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588AA1AF: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588AA1B3: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588AA1B7: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588AA1BB: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588AA1BF: push eax
        __asm _emit 0x50
        // 0x588AA1C0: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588AA1C4: push ecx
        __asm _emit 0x51
        // 0x588AA1C5: push edx
        __asm _emit 0x52
        // 0x588AA1C6: push edi
        __asm _emit 0x57
        // 0x588AA1C7: push ebp
        __asm _emit 0x55
        // 0x588AA1C8: push eax
        __asm _emit 0x50
        // 0x588AA1C9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588AA1CB: call 0x587b62b0
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0xC0
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x588AA1D0: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588AA1D2: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA1D7: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588AA1DB: mov dword ptr [esi], 0x589a0750
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x50
        __asm _emit 0x07
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588AA1E1: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0x2A
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588AA1E6: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588AA1E9: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588AA1ED: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x588AA1F2: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588AA1F4: je 0x588aa207
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588AA1F6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588AA1F8: push ebx
        __asm _emit 0x53
        // 0x588AA1F9: push 0x589a076c
        __asm _emit 0x68
        __asm _emit 0x6C
        __asm _emit 0x07
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588AA1FE: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588AA200: call 0x588f3d70
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0x9B
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588AA205: jmp 0x588aa209
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AA207: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588AA209: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588AA20B: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588AA20F: mov dword ptr [esi + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA215: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x2A
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588AA21A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588AA21D: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588AA221: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x588AA226: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588AA228: je 0x588aa26a
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x588AA22A: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA230: cmp dword ptr [ecx + 0x164], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA236: jle 0x588aa256
        __asm _emit 0x7E
        __asm _emit 0x1E
        // 0x588AA238: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA23E: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588AA240: je 0x588aa256
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x588AA242: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588AA246: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x588AA248: push edx
        __asm _emit 0x52
        // 0x588AA249: push edi
        __asm _emit 0x57
        // 0x588AA24A: push ebp
        __asm _emit 0x55
        // 0x588AA24B: push ecx
        __asm _emit 0x51
        // 0x588AA24C: push esi
        __asm _emit 0x56
        // 0x588AA24D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588AA24F: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x7A
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588AA254: jmp 0x588aa26c
        __asm _emit 0xEB
        __asm _emit 0x16
        // 0x588AA256: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588AA25A: push edx
        __asm _emit 0x52
        // 0x588AA25B: push edi
        __asm _emit 0x57
        // 0x588AA25C: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588AA25E: push ebp
        __asm _emit 0x55
        // 0x588AA25F: push ecx
        __asm _emit 0x51
        // 0x588AA260: push esi
        __asm _emit 0x56
        // 0x588AA261: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588AA263: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0x79
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588AA268: jmp 0x588aa26c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AA26A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588AA26C: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588AA271: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588AA273: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588AA277: mov dword ptr [esi + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA27D: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0x8A
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AA282: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA288: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA28D: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588AA291: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA297: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA29C: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x8A
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AA2A1: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588AA2A3: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0x29
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588AA2A8: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588AA2AB: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588AA2AF: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x588AA2B4: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588AA2B6: je 0x588aa2fa
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x588AA2B8: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA2BE: cmp dword ptr [ecx + 0x164], 1
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588AA2C5: jle 0x588aa2e6
        __asm _emit 0x7E
        __asm _emit 0x1F
        // 0x588AA2C7: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA2CD: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588AA2CF: je 0x588aa2e6
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x588AA2D1: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588AA2D5: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x588AA2D8: push edx
        __asm _emit 0x52
        // 0x588AA2D9: push edi
        __asm _emit 0x57
        // 0x588AA2DA: push ebp
        __asm _emit 0x55
        // 0x588AA2DB: push ecx
        __asm _emit 0x51
        // 0x588AA2DC: push esi
        __asm _emit 0x56
        // 0x588AA2DD: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588AA2DF: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0x79
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588AA2E4: jmp 0x588aa2fc
        __asm _emit 0xEB
        __asm _emit 0x16
        // 0x588AA2E6: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588AA2EA: push edx
        __asm _emit 0x52
        // 0x588AA2EB: push edi
        __asm _emit 0x57
        // 0x588AA2EC: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588AA2EE: push ebp
        __asm _emit 0x55
        // 0x588AA2EF: push ecx
        __asm _emit 0x51
        // 0x588AA2F0: push esi
        __asm _emit 0x56
        // 0x588AA2F1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588AA2F3: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0x79
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588AA2F8: jmp 0x588aa2fc
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AA2FA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588AA2FC: push 0x8c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA301: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588AA303: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588AA307: mov dword ptr [esi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA30D: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0x89
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AA312: mov eax, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA318: mov ecx, 0xbfff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA31D: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588AA321: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588AA323: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0x29
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588AA328: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588AA32B: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588AA32F: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x588AA334: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588AA336: je 0x588aa37a
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x588AA338: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA33E: cmp dword ptr [ecx + 0x164], 2
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x588AA345: jle 0x588aa366
        __asm _emit 0x7E
        __asm _emit 0x1F
        // 0x588AA347: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA34D: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588AA34F: je 0x588aa366
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x588AA351: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588AA355: mov ecx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x08
        // 0x588AA358: push edx
        __asm _emit 0x52
        // 0x588AA359: push edi
        __asm _emit 0x57
        // 0x588AA35A: push ebp
        __asm _emit 0x55
        // 0x588AA35B: push ecx
        __asm _emit 0x51
        // 0x588AA35C: push esi
        __asm _emit 0x56
        // 0x588AA35D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588AA35F: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0x78
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588AA364: jmp 0x588aa37c
        __asm _emit 0xEB
        __asm _emit 0x16
        // 0x588AA366: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588AA36A: push edx
        __asm _emit 0x52
        // 0x588AA36B: push edi
        __asm _emit 0x57
        // 0x588AA36C: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588AA36E: push ebp
        __asm _emit 0x55
        // 0x588AA36F: push ecx
        __asm _emit 0x51
        // 0x588AA370: push esi
        __asm _emit 0x56
        // 0x588AA371: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588AA373: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588AA378: jmp 0x588aa37c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AA37A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588AA37C: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588AA381: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588AA383: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588AA387: mov dword ptr [esi + 0x90], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA38D: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0x89
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AA392: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA398: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA39D: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588AA3A1: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA3A7: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA3AC: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x89
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AA3B1: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588AA3B3: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0x28
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588AA3B8: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588AA3BB: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588AA3BF: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x588AA3C4: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588AA3C6: je 0x588aa40a
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x588AA3C8: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA3CE: cmp dword ptr [ecx + 0x164], 3
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x588AA3D5: jle 0x588aa3f6
        __asm _emit 0x7E
        __asm _emit 0x1F
        // 0x588AA3D7: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA3DD: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588AA3DF: je 0x588aa3f6
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x588AA3E1: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588AA3E5: mov ecx, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x0C
        // 0x588AA3E8: push edx
        __asm _emit 0x52
        // 0x588AA3E9: push edi
        __asm _emit 0x57
        // 0x588AA3EA: push ebp
        __asm _emit 0x55
        // 0x588AA3EB: push ecx
        __asm _emit 0x51
        // 0x588AA3EC: push esi
        __asm _emit 0x56
        // 0x588AA3ED: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588AA3EF: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0x78
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588AA3F4: jmp 0x588aa40c
        __asm _emit 0xEB
        __asm _emit 0x16
        // 0x588AA3F6: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588AA3FA: push edx
        __asm _emit 0x52
        // 0x588AA3FB: push edi
        __asm _emit 0x57
        // 0x588AA3FC: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588AA3FE: push ebp
        __asm _emit 0x55
        // 0x588AA3FF: push ecx
        __asm _emit 0x51
        // 0x588AA400: push esi
        __asm _emit 0x56
        // 0x588AA401: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588AA403: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0x78
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588AA408: jmp 0x588aa40c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AA40A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588AA40C: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA411: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588AA413: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588AA417: mov dword ptr [esi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA41D: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0x88
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AA422: mov eax, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA428: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA42D: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588AA431: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA437: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA43C: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0x88
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AA441: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA446: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x28
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588AA44B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588AA44E: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588AA452: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        // 0x588AA457: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588AA459: je 0x588aa4ae
        __asm _emit 0x74
        __asm _emit 0x53
        // 0x588AA45B: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AA461: cmp dword ptr [ecx + 0x160], 0x1e
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1E
        // 0x588AA468: jle 0x588aa480
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588AA46A: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA470: je 0x588aa480
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588AA472: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA478: add ecx, 0x780
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA47E: jmp 0x588aa482
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AA480: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588AA482: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588AA486: push edx
        __asm _emit 0x52
        // 0x588AA487: lea edx, [edi + 0xa0]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA48D: push edx
        __asm _emit 0x52
        // 0x588AA48E: lea edx, [ebp + 0x277]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA494: push edx
        __asm _emit 0x52
        // 0x588AA495: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AA49B: push ecx
        __asm _emit 0x51
        // 0x588AA49C: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AA4A2: push esi
        __asm _emit 0x56
        // 0x588AA4A3: push ecx
        __asm _emit 0x51
        // 0x588AA4A4: push edx
        __asm _emit 0x52
        // 0x588AA4A5: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588AA4A7: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0x38
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588AA4AC: jmp 0x588aa4b0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AA4AE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588AA4B0: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA4B5: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588AA4B7: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588AA4BB: mov dword ptr [esi + 0x98], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA4C1: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0x88
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AA4C6: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA4CC: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA4D1: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0x88
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AA4D6: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA4DB: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0x27
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588AA4E0: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588AA4E3: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588AA4E7: mov byte ptr [esp + 0x20], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x07
        // 0x588AA4EC: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588AA4EE: je 0x588aa543
        __asm _emit 0x74
        __asm _emit 0x53
        // 0x588AA4F0: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AA4F6: cmp dword ptr [ecx + 0x160], 0x1f
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1F
        // 0x588AA4FD: jle 0x588aa515
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588AA4FF: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA505: je 0x588aa515
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588AA507: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA50D: add ecx, 0x7c0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA513: jmp 0x588aa517
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AA515: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588AA517: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588AA51B: push edx
        __asm _emit 0x52
        // 0x588AA51C: lea edx, [edi + 0x1c9]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xC9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA522: push edx
        __asm _emit 0x52
        // 0x588AA523: lea edx, [ebp + 0x277]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA529: push edx
        __asm _emit 0x52
        // 0x588AA52A: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AA530: push ecx
        __asm _emit 0x51
        // 0x588AA531: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AA537: push esi
        __asm _emit 0x56
        // 0x588AA538: push ecx
        __asm _emit 0x51
        // 0x588AA539: push edx
        __asm _emit 0x52
        // 0x588AA53A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588AA53C: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0x38
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588AA541: jmp 0x588aa545
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AA543: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588AA545: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA54A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588AA54C: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588AA550: mov dword ptr [esi + 0x9c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA556: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0x87
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AA55B: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA561: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA566: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0x87
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AA56B: push 0x10c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA570: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0x26
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588AA575: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588AA578: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588AA57C: mov byte ptr [esp + 0x20], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x08
        // 0x588AA581: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588AA583: je 0x588aa5c0
        __asm _emit 0x74
        __asm _emit 0x3B
        // 0x588AA585: push ebx
        __asm _emit 0x53
        // 0x588AA586: push ebx
        __asm _emit 0x53
        // 0x588AA587: push 0xffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA58C: lea ecx, [edi + 0x1d9]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0xD9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA592: push ecx
        __asm _emit 0x51
        // 0x588AA593: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AA599: lea edx, [ebp + 0x265]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x65
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA59F: push edx
        __asm _emit 0x52
        // 0x588AA5A0: mov edx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA5A6: add edi, 0xac
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA5AC: push edi
        __asm _emit 0x57
        // 0x588AA5AD: add ebp, 0xad
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0xAD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA5B3: push ebp
        __asm _emit 0x55
        // 0x588AA5B4: push ecx
        __asm _emit 0x51
        // 0x588AA5B5: push ebx
        __asm _emit 0x53
        // 0x588AA5B6: push edx
        __asm _emit 0x52
        // 0x588AA5B7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588AA5B9: call 0x58761090
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0x6A
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588AA5BE: jmp 0x588aa5c2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588AA5C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588AA5C2: mov dword ptr [esi + 0xa8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA5C8: mov ecx, 0x47
        __asm _emit 0xB9
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA5CD: mov word ptr [eax + 0x9c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA5D4: mov eax, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA5DA: mov edx, 0xfffd
        __asm _emit 0xBA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA5DF: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588AA5E3: mov eax, 0xe0ff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA5E8: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588AA5EC: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA5F1: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588AA5F5: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588AA5F7: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588AA5FB: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA602: pop ecx
        __asm _emit 0x59
        // 0x588AA603: pop edi
        __asm _emit 0x5F
        // 0x588AA604: pop esi
        __asm _emit 0x5E
        // 0x588AA605: pop ebp
        __asm _emit 0x5D
        // 0x588AA606: pop ebx
        __asm _emit 0x5B
        // 0x588AA607: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588AA60A: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
