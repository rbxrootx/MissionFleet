// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1015 bytes in 1 exact ranges.
// Source symbol alias: FUN_58770130.

// Ghidra body range 0x58770130..0x58770527; 1015 mapped bytes.
extern "C" __declspec(naked) void FUN_58770130_segment_00() {
    __asm {
        // 0x58770130: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58770132: push 0x5897ef46
        __asm _emit 0x68
        __asm _emit 0x46
        __asm _emit 0xEF
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58770137: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877013D: push eax
        __asm _emit 0x50
        // 0x5877013E: sub esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x1C
        // 0x58770141: push ebx
        __asm _emit 0x53
        // 0x58770142: push ebp
        __asm _emit 0x55
        // 0x58770143: push esi
        __asm _emit 0x56
        // 0x58770144: push edi
        __asm _emit 0x57
        // 0x58770145: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5877014A: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5877014C: push eax
        __asm _emit 0x50
        // 0x5877014D: lea eax, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58770151: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770157: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x58770159: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5877015B: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5877015F: lea esi, [ebp + 0x5c]
        __asm _emit 0x8D
        __asm _emit 0x75
        __asm _emit 0x5C
        // 0x58770162: jmp 0x58770168
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x58770164: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58770168: movzx eax, byte ptr [ebp + 0x78]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x45
        __asm _emit 0x78
        // 0x5877016C: mov ecx, dword ptr [ebp + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x6C
        // 0x5877016F: imul eax, eax, 0x83
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770175: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x58770177: cmp dword ptr [esi + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5877017B: lea ebx, [ecx + eax*8 - 0x14]
        __asm _emit 0x8D
        __asm _emit 0x5C
        __asm _emit 0xC1
        __asm _emit 0xEC
        // 0x5877017F: jne 0x5877020f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770185: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x58770187: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0xCA
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877018C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5877018F: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58770193: mov dword ptr [esp + 0x38], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877019B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877019D: je 0x587701d4
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x5877019F: mov edx, dword ptr [ebp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x50
        // 0x587701A2: cmp dword ptr [edx + 0x160], 2
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x587701A9: jle 0x587701ba
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x587701AB: mov edx, dword ptr [edx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587701B1: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587701B3: je 0x587701ba
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587701B5: sub edx, -0x80
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x80
        // 0x587701B8: jmp 0x587701bc
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587701BA: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587701BC: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x587701BF: push 0x7cff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x7C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587701C4: push ecx
        __asm _emit 0x51
        // 0x587701C5: mov ecx, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x04
        // 0x587701C8: push ecx
        __asm _emit 0x51
        // 0x587701C9: push edx
        __asm _emit 0x52
        // 0x587701CA: push ebp
        __asm _emit 0x55
        // 0x587701CB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587701CD: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0x48
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587701D2: jmp 0x587701d6
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587701D4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587701D6: mov dword ptr [esi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587701D9: mov edx, 0xfffb
        __asm _emit 0xBA
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587701DE: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587701E2: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587701E5: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587701EA: mov dword ptr [esp + 0x3c], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587701F2: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0x2B
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587701F7: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587701FA: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587701FF: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58770203: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58770206: mov edx, 0xbfff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877020B: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5877020F: cmp dword ptr [esi], 0
        __asm _emit 0x83
        __asm _emit 0x3E
        __asm _emit 0x00
        // 0x58770212: jne 0x587702aa
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770218: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x5877021A: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0xCA
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877021F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58770222: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58770226: mov dword ptr [esp + 0x38], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877022E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58770230: je 0x5877026a
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x58770232: mov edx, dword ptr [ebp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x50
        // 0x58770235: cmp dword ptr [edx + 0x160], 3
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x5877023C: jle 0x58770250
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5877023E: mov edx, dword ptr [edx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770244: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58770246: je 0x58770250
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58770248: add edx, 0xc0
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877024E: jmp 0x58770252
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58770250: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58770252: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x58770255: push 0x7d00
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x7D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877025A: push ecx
        __asm _emit 0x51
        // 0x5877025B: mov ecx, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x04
        // 0x5877025E: push ecx
        __asm _emit 0x51
        // 0x5877025F: push edx
        __asm _emit 0x52
        // 0x58770260: push ebp
        __asm _emit 0x55
        // 0x58770261: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58770263: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0x47
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x58770268: jmp 0x5877026c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5877026A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877026C: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x5877026E: mov edx, 0xfffb
        __asm _emit 0xBA
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770273: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58770277: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58770279: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877027E: mov dword ptr [esp + 0x3c], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58770286: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0x2A
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5877028B: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5877028D: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770292: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58770296: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58770298: mov edx, 0xbfff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877029D: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587702A1: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x587702A3: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x587702A5: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0x2A
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587702AA: cmp dword ptr [ebx], 0
        __asm _emit 0x83
        __asm _emit 0x3B
        __asm _emit 0x00
        // 0x587702AD: jne 0x58770454
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587702B3: cmp dword ptr [ebx + 4], 0
        __asm _emit 0x83
        __asm _emit 0x7B
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587702B7: jne 0x58770454
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587702BD: cmp edi, 1
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x01
        // 0x587702C0: je 0x587704fe
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587702C6: movzx eax, byte ptr [ebp + 0x78]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x45
        __asm _emit 0x78
        // 0x587702CA: mov ecx, dword ptr [ebp + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x6C
        // 0x587702CD: imul eax, eax, 0x418
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587702D3: mov edi, dword ptr [eax + ecx - 4]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x08
        __asm _emit 0xFC
        // 0x587702D7: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587702D9: je 0x58770415
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587702DF: mov edx, dword ptr [edi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x14
        // 0x587702E2: mov ecx, dword ptr [edi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x20
        // 0x587702E5: mov eax, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x587702E8: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587702EC: mov eax, dword ptr [edi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x1C
        // 0x587702EF: mov dword ptr [esp + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587702F3: mov dword ptr [esp + 0x2c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587702F7: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587702F9: mov edx, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x587702FC: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58770300: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58770302: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58770304: mov dword ptr [esp + 0x28], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58770308: mov edx, dword ptr [edi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x5877030B: mov dword ptr [esp + 0x2c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5877030F: cdq
        __asm _emit 0x99
        // 0x58770310: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58770312: mov edx, dword ptr [edi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x1C
        // 0x58770315: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58770317: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58770319: mov ecx, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x5877031C: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58770320: mov eax, dword ptr [edi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x20
        // 0x58770323: mov dword ptr [esp + 0x24], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58770327: mov ecx, dword ptr [edi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x5877032A: mov dword ptr [esp + 0x28], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5877032E: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58770332: mov ecx, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x58770335: mov dword ptr [esp + 0x28], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58770339: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5877033B: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x5877033D: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5877033F: mov dword ptr [esp + 0x2c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58770343: cdq
        __asm _emit 0x99
        // 0x58770344: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58770346: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x58770348: sar ebx, 1
        __asm _emit 0xD1
        __asm _emit 0xFB
        // 0x5877034A: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5877034E: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58770352: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0x28
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58770357: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5877035B: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x29
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58770360: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x58770362: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58770364: jg 0x5877036b
        __asm _emit 0x7F
        __asm _emit 0x05
        // 0x58770366: mov eax, 0xa
        __asm _emit 0xB8
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877036B: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x5877036E: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x58770370: push ecx
        __asm _emit 0x51
        // 0x58770371: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58770373: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0x2F
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58770378: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5877037C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877037E: jg 0x58770385
        __asm _emit 0x7F
        __asm _emit 0x05
        // 0x58770380: mov eax, 0xa
        __asm _emit 0xB8
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770385: mov edx, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x08
        // 0x58770388: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5877038A: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x5877038C: push edx
        __asm _emit 0x52
        // 0x5877038D: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0x2F
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58770392: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58770394: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x58770399: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5877039B: push eax
        __asm _emit 0x50
        // 0x5877039C: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5877039E: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587703A2: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0x2B
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587703A7: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587703AB: push eax
        __asm _emit 0x50
        // 0x587703AC: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587703AE: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x2B
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587703B3: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587703B6: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587703BA: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0x28
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587703BF: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587703C3: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0x28
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587703C8: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587703CA: jg 0x587703d1
        __asm _emit 0x7F
        __asm _emit 0x05
        // 0x587703CC: mov ebx, 0xa
        __asm _emit 0xBB
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587703D1: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x587703D4: add ecx, ebx
        __asm _emit 0x03
        __asm _emit 0xCB
        // 0x587703D6: push ecx
        __asm _emit 0x51
        // 0x587703D7: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587703DA: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x2F
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587703DF: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587703E3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587703E5: jg 0x587703ec
        __asm _emit 0x7F
        __asm _emit 0x05
        // 0x587703E7: mov eax, 0xa
        __asm _emit 0xB8
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587703EC: mov edx, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x08
        // 0x587703EF: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587703F2: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x587703F4: push edx
        __asm _emit 0x52
        // 0x587703F5: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0x2F
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587703FA: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587703FD: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x58770402: mov ebx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x08
        // 0x58770405: push ebx
        __asm _emit 0x53
        // 0x58770406: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58770408: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0x2A
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5877040D: push ebx
        __asm _emit 0x53
        // 0x5877040E: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58770410: jmp 0x587704d0
        __asm _emit 0xE9
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770415: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58770417: push -0x64
        __asm _emit 0x6A
        __asm _emit 0x9C
        // 0x58770419: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0x2E
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5877041E: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58770420: push -0x64
        __asm _emit 0x6A
        __asm _emit 0x9C
        // 0x58770422: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0x2F
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58770427: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5877042A: push -0x64
        __asm _emit 0x6A
        __asm _emit 0x9C
        // 0x5877042C: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0x2E
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58770431: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58770434: push -0x64
        __asm _emit 0x6A
        __asm _emit 0x9C
        // 0x58770436: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0x2F
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5877043B: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5877043D: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770442: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58770446: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58770449: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5877044B: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5877044F: jmp 0x587704d5
        __asm _emit 0xE9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770454: mov edi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x3E
        // 0x58770456: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58770458: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0x27
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5877045D: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5877045F: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x28
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58770464: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58770466: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58770468: push eax
        __asm _emit 0x50
        // 0x58770469: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0x2E
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5877046E: mov ecx, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x04
        // 0x58770471: push ecx
        __asm _emit 0x51
        // 0x58770472: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58770474: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x2E
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58770479: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5877047B: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x58770480: mov edi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x3E
        // 0x58770482: push edi
        __asm _emit 0x57
        // 0x58770483: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58770485: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0x2A
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5877048A: push edi
        __asm _emit 0x57
        // 0x5877048B: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x5877048D: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0x2A
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58770492: mov edi, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x58770495: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58770497: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0x27
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5877049C: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5877049E: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0x27
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587704A3: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x587704A5: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587704A8: push edx
        __asm _emit 0x52
        // 0x587704A9: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0x2E
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587704AE: mov eax, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x587704B1: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587704B4: push eax
        __asm _emit 0x50
        // 0x587704B5: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0x2E
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587704BA: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587704BD: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x587704C2: mov edi, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x587704C5: push edi
        __asm _emit 0x57
        // 0x587704C6: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587704C8: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0x2A
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587704CD: push edi
        __asm _emit 0x57
        // 0x587704CE: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587704D0: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x2A
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587704D5: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587704D9: inc eax
        __asm _emit 0x40
        // 0x587704DA: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x587704DD: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587704E1: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587704E4: jne 0x58770164
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x7A
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587704EA: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587704EE: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587704F5: pop ecx
        __asm _emit 0x59
        // 0x587704F6: pop edi
        __asm _emit 0x5F
        // 0x587704F7: pop esi
        __asm _emit 0x5E
        // 0x587704F8: pop ebp
        __asm _emit 0x5D
        // 0x587704F9: pop ebx
        __asm _emit 0x5B
        // 0x587704FA: add esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x28
        // 0x587704FD: ret
        __asm _emit 0xC3
        // 0x587704FE: mov eax, dword ptr [ebp + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x60
        // 0x58770501: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770506: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5877050A: mov ebp, dword ptr [ebp + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x6D
        __asm _emit 0x68
        // 0x5877050D: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5877050F: and word ptr [ebp + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x55
        __asm _emit 0x24
        // 0x58770513: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58770517: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877051E: pop ecx
        __asm _emit 0x59
        // 0x5877051F: pop edi
        __asm _emit 0x5F
        // 0x58770520: pop esi
        __asm _emit 0x5E
        // 0x58770521: pop ebp
        __asm _emit 0x5D
        // 0x58770522: pop ebx
        __asm _emit 0x5B
        // 0x58770523: add esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x28
        // 0x58770526: ret
        __asm _emit 0xC3
    }
}
