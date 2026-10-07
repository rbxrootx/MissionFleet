// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 838 bytes in 2 exact ranges.
// Source symbol alias: FUN_588cb0e0.

// Ghidra body range 0x588CB0E0..0x588CB1AD; 205 mapped bytes.
extern "C" __declspec(naked) void FUN_588cb0e0_segment_00() {
    __asm {
        // 0x588CB0E0: mov eax, dword ptr [0x58a24690]
        __asm _emit 0xA1
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CB0E5: cmp dword ptr [eax + 0x164], 0x33
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x33
        // 0x588CB0EC: push esi
        __asm _emit 0x56
        // 0x588CB0ED: push edi
        __asm _emit 0x57
        // 0x588CB0EE: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588CB0F0: jle 0x588cb109
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588CB0F2: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB0F9: je 0x588cb109
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588CB0FB: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB101: mov eax, dword ptr [eax + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB107: jmp 0x588cb10b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CB109: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588CB10B: mov ecx, dword ptr [esi + 0x258]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB111: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588CB114: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588CB116: je 0x588cb140
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588CB118: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588CB11B: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588CB11E: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588CB121: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588CB124: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588CB127: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588CB129: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588CB12C: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588CB12E: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588CB131: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588CB134: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588CB137: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588CB13A: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588CB13D: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588CB140: mov eax, dword ptr [0x58a24690]
        __asm _emit 0xA1
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CB145: cmp dword ptr [eax + 0x164], 0x32
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x32
        // 0x588CB14C: jle 0x588cb165
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588CB14E: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB155: je 0x588cb165
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588CB157: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB15D: mov eax, dword ptr [ecx + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB163: jmp 0x588cb167
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CB165: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588CB167: mov ecx, dword ptr [esi + 0x25c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB16D: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588CB170: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588CB172: je 0x588cb19d
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x588CB174: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588CB177: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588CB17A: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588CB17D: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588CB180: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588CB183: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588CB186: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588CB189: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588CB18B: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588CB18E: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588CB191: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588CB194: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588CB197: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588CB19A: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588CB19D: lea edi, [esi + 0x264]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB1A3: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x588CB1A5: mov edx, 3
        __asm _emit 0xBA
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB1AA: push ebx
        __asm _emit 0x53
        // 0x588CB1AB: jmp 0x588cb1b0
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x588CB1B0..0x588CB429; 633 mapped bytes.
extern "C" __declspec(naked) void FUN_588cb0e0_segment_01() {
    __asm {
        // 0x588CB1B0: mov ecx, dword ptr [eax - 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0xFC
        // 0x588CB1B3: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588CB1B5: je 0x588cb1c0
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588CB1B7: mov ebx, 0xfff0
        __asm _emit 0xBB
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB1BC: and word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x59
        __asm _emit 0x24
        // 0x588CB1C0: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x588CB1C2: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588CB1C4: je 0x588cb1cf
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588CB1C6: mov ebx, 0xfff0
        __asm _emit 0xBB
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB1CB: and word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x59
        __asm _emit 0x24
        // 0x588CB1CF: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588CB1D2: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588CB1D4: je 0x588cb1df
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588CB1D6: mov ebx, 0xfff0
        __asm _emit 0xBB
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB1DB: and word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x59
        __asm _emit 0x24
        // 0x588CB1DF: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x588CB1E2: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588CB1E4: je 0x588cb1ef
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588CB1E6: mov ebx, 0xfff0
        __asm _emit 0xBB
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB1EB: and word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x59
        __asm _emit 0x24
        // 0x588CB1EF: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x588CB1F2: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588CB1F4: je 0x588cb1ff
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588CB1F6: mov ebx, 0xfff0
        __asm _emit 0xBB
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB1FB: and word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x59
        __asm _emit 0x24
        // 0x588CB1FF: add eax, 0x14
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x14
        // 0x588CB202: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x588CB205: jne 0x588cb1b0
        __asm _emit 0x75
        __asm _emit 0xA9
        // 0x588CB207: pop ebx
        __asm _emit 0x5B
        // 0x588CB208: cmp dword ptr [esi + 0x64], edx
        __asm _emit 0x39
        __asm _emit 0x56
        __asm _emit 0x64
        // 0x588CB20B: je 0x588cb236
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x588CB20D: mov ecx, dword ptr [esi + 0x17c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB213: mov dword ptr [ecx + 0x98], 1
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB21D: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x588CB21F: mov eax, dword ptr [esi + 0x260]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB225: mov edx, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x18
        // 0x588CB228: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588CB22A: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x588CB22C: push eax
        __asm _emit 0x50
        // 0x588CB22D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588CB22F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588CB231: pop edi
        __asm _emit 0x5F
        // 0x588CB232: pop esi
        __asm _emit 0x5E
        // 0x588CB233: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588CB236: mov al, byte ptr [esi + 0x2a8]
        __asm _emit 0x8A
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB23C: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x588CB23E: jne 0x588cb402
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xBE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB244: movzx eax, word ptr [esp + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588CB249: add eax, -7
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xF9
        // 0x588CB24C: cmp eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0C
        // 0x588CB24F: ja 0x588cb3ce
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB255: movzx eax, byte ptr [eax + 0x588cb438]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x80
        __asm _emit 0x38
        __asm _emit 0xB4
        __asm _emit 0x8C
        __asm _emit 0x58
        // 0x588CB25C: jmp dword ptr [eax*4 + 0x588cb42c]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x2C
        __asm _emit 0xB4
        __asm _emit 0x8C
        __asm _emit 0x58
        // 0x588CB263: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588CB265: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588CB26A: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x588CB26C: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588CB26E: mov edx, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x18
        // 0x588CB271: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588CB273: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x588CB275: push eax
        __asm _emit 0x50
        // 0x588CB276: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588CB278: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588CB27A: pop edi
        __asm _emit 0x5F
        // 0x588CB27B: pop esi
        __asm _emit 0x5E
        // 0x588CB27C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588CB27F: mov eax, dword ptr [0x58a24690]
        __asm _emit 0xA1
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CB284: cmp dword ptr [eax + 0x164], 0x67
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x67
        // 0x588CB28B: jle 0x588cb2a4
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588CB28D: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB294: je 0x588cb2a4
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588CB296: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB29C: mov eax, dword ptr [eax + 0x19c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB2A2: jmp 0x588cb2a6
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CB2A4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588CB2A6: mov ecx, dword ptr [esi + 0x258]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB2AC: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588CB2AF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588CB2B1: je 0x588cb2db
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588CB2B3: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588CB2B6: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588CB2B9: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588CB2BC: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588CB2BF: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588CB2C2: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588CB2C4: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588CB2C7: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588CB2C9: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588CB2CC: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588CB2CF: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588CB2D2: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588CB2D5: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588CB2D8: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588CB2DB: mov eax, dword ptr [0x58a24690]
        __asm _emit 0xA1
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CB2E0: cmp dword ptr [eax + 0x164], 0x66
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x66
        // 0x588CB2E7: jle 0x588cb300
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588CB2E9: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB2F0: je 0x588cb300
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588CB2F2: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB2F8: mov eax, dword ptr [ecx + 0x198]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB2FE: jmp 0x588cb302
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CB300: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588CB302: mov ecx, dword ptr [esi + 0x25c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB308: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588CB30B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588CB30D: je 0x588cb338
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x588CB30F: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588CB312: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588CB315: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588CB318: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588CB31B: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588CB31E: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588CB321: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588CB324: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588CB326: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588CB329: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588CB32C: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588CB32F: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588CB332: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588CB335: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588CB338: mov ecx, dword ptr [esi + 0x268]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB33E: mov eax, 0xf
        __asm _emit 0xB8
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB343: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x588CB347: mov ecx, dword ptr [esi + 0x26c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB34D: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x588CB351: mov ecx, dword ptr [esi + 0x270]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB357: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x588CB35B: mov ecx, dword ptr [esi + 0x274]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB361: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x588CB365: mov ecx, dword ptr [esi + 0x278]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB36B: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x588CB36F: mov ecx, dword ptr [esi + 0x27c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x7C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB375: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x588CB379: mov ecx, dword ptr [esi + 0x280]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB37F: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x588CB383: mov ecx, dword ptr [esi + 0x288]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB389: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x588CB38D: mov ecx, dword ptr [esi + 0x28c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB393: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x588CB397: mov ecx, dword ptr [esi + 0x290]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB39D: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x588CB3A1: mov ecx, dword ptr [esi + 0x294]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB3A7: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x588CB3AB: mov ecx, dword ptr [esi + 0x298]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB3B1: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x588CB3B5: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x588CB3B7: mov eax, dword ptr [esi + 0x268]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB3BD: mov edx, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x18
        // 0x588CB3C0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588CB3C2: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x588CB3C4: push eax
        __asm _emit 0x50
        // 0x588CB3C5: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588CB3C7: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588CB3C9: pop edi
        __asm _emit 0x5F
        // 0x588CB3CA: pop esi
        __asm _emit 0x5E
        // 0x588CB3CB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588CB3CE: mov eax, dword ptr [esi + 0x17c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB3D4: mov dword ptr [eax + 0x98], 0
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB3DE: mov eax, dword ptr [esi + 0x260]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB3E4: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588CB3E9: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x588CB3EB: mov eax, dword ptr [esi + 0x260]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB3F1: mov edx, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x18
        // 0x588CB3F4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588CB3F6: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x588CB3F8: push eax
        __asm _emit 0x50
        // 0x588CB3F9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588CB3FB: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588CB3FD: pop edi
        __asm _emit 0x5F
        // 0x588CB3FE: pop esi
        __asm _emit 0x5E
        // 0x588CB3FF: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588CB402: cmp al, 2
        __asm _emit 0x3C
        __asm _emit 0x02
        // 0x588CB404: jne 0x588cb40a
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x588CB406: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588CB408: jmp 0x588cb410
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x588CB40A: cmp al, 3
        __asm _emit 0x3C
        __asm _emit 0x03
        // 0x588CB40C: jne 0x588cb41d
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x588CB40E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588CB410: mov ecx, dword ptr [esi + 0x1a0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CB416: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588CB418: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x588CB41B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588CB41D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588CB41F: call 0x588c8a50
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0xD6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588CB424: pop edi
        __asm _emit 0x5F
        // 0x588CB425: pop esi
        __asm _emit 0x5E
        // 0x588CB426: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
