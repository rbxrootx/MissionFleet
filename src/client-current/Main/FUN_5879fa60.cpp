// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5879FA60 .. +0x5E8 bytes.
extern "C" __declspec(naked) void FUN_5879fa60() {
    __asm {
        // 0x5879FA60: push esi
        __asm _emit 0x56
        // 0x5879FA61: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5879FA63: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5879FA67: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x5879FA69: je 0x587a0041
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD2
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FA6F: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x5879FA72: push ebx
        __asm _emit 0x53
        // 0x5879FA73: mov ebx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5879FA77: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5879FA79: je 0x5879faa1
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x5879FA7B: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x34
        // 0x5879FA7E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5879FA80: je 0x5879fe35
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FA86: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5879FA88: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5879FA8A: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x5879FA8D: push ebx
        __asm _emit 0x53
        // 0x5879FA8E: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5879FA90: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x5879FA93: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x34
        // 0x5879FA96: je 0x5879faa1
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5879FA98: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5879FA9A: jne 0x5879fa86
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x5879FA9C: pop ebx
        __asm _emit 0x5B
        // 0x5879FA9D: pop esi
        __asm _emit 0x5E
        // 0x5879FA9E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5879FAA1: mov eax, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x5879FAA4: push ebp
        __asm _emit 0x55
        // 0x5879FAA5: push edi
        __asm _emit 0x57
        // 0x5879FAA6: cmp eax, 0x201
        __asm _emit 0x3D
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FAAB: ja 0x5879fee1
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FAB1: je 0x5879feaa
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FAB7: cmp eax, 0x100
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FABC: je 0x5879fd64
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FAC2: cmp eax, 0x200
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FAC7: jne 0x5879fe33
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FACD: mov ecx, dword ptr [esi + 0x2e8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FAD3: call 0x587a03a0
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FAD8: movzx eax, word ptr [esi + 0x26c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FADF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5879FAE1: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x5879FAE5: je 0x5879fafb
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x5879FAE7: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x5879FAEB: je 0x5879fafb
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5879FAED: mov ecx, dword ptr [esi + 0x1c0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FAF3: push edi
        __asm _emit 0x57
        // 0x5879FAF4: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x1A
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x5879FAF9: jmp 0x5879fb0d
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x5879FAFB: mov ecx, dword ptr [esi + 0x1b8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FB01: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5879FB03: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x5879FB08: mov edi, 2
        __asm _emit 0xBF
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FB0D: mov edx, dword ptr [esi + edi*4 + 0x1b8]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0xBE
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FB14: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x5879FB18: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x5879FB1A: jne 0x5879fb62
        __asm _emit 0x75
        __asm _emit 0x46
        // 0x5879FB1C: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5879FB22: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5879FB25: push ecx
        __asm _emit 0x51
        // 0x5879FB26: mov ecx, dword ptr [esi + edi*4 + 0x1b8]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xBE
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FB2D: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x1A
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x5879FB32: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5879FB34: je 0x5879fb85
        __asm _emit 0x74
        __asm _emit 0x4F
        // 0x5879FB36: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5879FB3C: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5879FB42: push edx
        __asm _emit 0x52
        // 0x5879FB43: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0x7E
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879FB48: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5879FB4E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5879FB50: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5879FB53: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5879FB55: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5879FB57: mov ecx, dword ptr [esi + edi*4 + 0x1b8]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xBE
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FB5E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5879FB60: jmp 0x5879fb80
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x5879FB62: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5879FB67: mov edi, dword ptr [esi + edi*4 + 0x1b8]
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0xBE
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FB6E: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x5879FB71: push eax
        __asm _emit 0x50
        // 0x5879FB72: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5879FB74: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0x19
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x5879FB79: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5879FB7B: jne 0x5879fb85
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5879FB7D: push eax
        __asm _emit 0x50
        // 0x5879FB7E: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5879FB80: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0x1A
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x5879FB85: cmp dword ptr [esi + 0x264], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FB8C: je 0x5879fc03
        __asm _emit 0x74
        __asm _emit 0x75
        // 0x5879FB8E: mov ecx, dword ptr [esi + 0x1bc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FB94: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x5879FB98: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x5879FB9B: jne 0x5879fbe0
        __asm _emit 0x75
        __asm _emit 0x43
        // 0x5879FB9D: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5879FBA2: mov ecx, dword ptr [esi + 0x1bc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FBA8: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x5879FBAB: push eax
        __asm _emit 0x50
        // 0x5879FBAC: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0x19
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x5879FBB1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5879FBB3: je 0x5879fc03
        __asm _emit 0x74
        __asm _emit 0x4E
        // 0x5879FBB5: mov ecx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5879FBBB: push ecx
        __asm _emit 0x51
        // 0x5879FBBC: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5879FBC2: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0x7D
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879FBC7: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5879FBCD: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5879FBCF: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5879FBD2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5879FBD4: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5879FBD6: mov ecx, dword ptr [esi + 0x1bc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FBDC: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5879FBDE: jmp 0x5879fbfe
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x5879FBE0: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5879FBE6: mov edi, dword ptr [esi + 0x1bc]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FBEC: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5879FBEF: push ecx
        __asm _emit 0x51
        // 0x5879FBF0: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5879FBF2: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0x19
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x5879FBF7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5879FBF9: jne 0x5879fc03
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5879FBFB: push eax
        __asm _emit 0x50
        // 0x5879FBFC: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5879FBFE: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0x19
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x5879FC03: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FC09: mov ebp, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xA9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FC0F: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5879FC11: je 0x5879fd4e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FC17: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5879FC1A: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5879FC20: mov edx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x04
        // 0x5879FC23: lea ebx, [eax + 0x2d]
        __asm _emit 0x8D
        __asm _emit 0x58
        __asm _emit 0x2D
        // 0x5879FC26: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x5879FC28: jle 0x5879fd4e
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FC2E: add eax, 0x25d
        __asm _emit 0x05
        __asm _emit 0x5D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FC33: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x5879FC35: jge 0x5879fd4e
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FC3B: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5879FC3E: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x5879FC41: lea edi, [edx + 0xe1]
        __asm _emit 0x8D
        __asm _emit 0xBA
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FC47: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5879FC49: jle 0x5879fd4e
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FC4F: lea edi, [edx + 0x148]
        __asm _emit 0x8D
        __asm _emit 0xBA
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FC55: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5879FC57: jge 0x5879fd4e
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xF1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FC5D: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5879FC5F: sub eax, 0xe1
        __asm _emit 0x2D
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FC64: cdq
        __asm _emit 0x99
        // 0x5879FC65: idiv dword ptr [ecx + 0x5c]
        __asm _emit 0xF7
        __asm _emit 0x79
        __asm _emit 0x5C
        // 0x5879FC68: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5879FC6A: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x85
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879FC6F: sub ebp, edi
        __asm _emit 0x2B
        __asm _emit 0xEF
        // 0x5879FC71: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x5879FC73: jge 0x5879fd4e
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xD5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FC79: mov edx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FC7F: mov ecx, dword ptr [edx + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x5C
        // 0x5879FC82: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5879FC85: imul ecx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCF
        // 0x5879FC88: mov eax, dword ptr [esi + 0x1c8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FC8E: lea ecx, [ecx + edx + 0xdd]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x11
        __asm _emit 0xDD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FC95: cmp ecx, dword ptr [eax + 8]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5879FC98: jne 0x5879fca7
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x5879FC9A: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5879FC9E: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x5879FCA1: jne 0x5879fe33
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FCA7: mov eax, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FCAD: mov ecx, dword ptr [eax + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x5C
        // 0x5879FCB0: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5879FCB3: imul ecx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCF
        // 0x5879FCB6: lea eax, [ecx + edx + 0xdd]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0xDD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FCBD: mov ecx, dword ptr [esi + 0x1c8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FCC3: push eax
        __asm _emit 0x50
        // 0x5879FCC4: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0x36
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879FCC9: mov ecx, dword ptr [esi + 0x1c8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FCCF: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5879FCD1: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0x19
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x5879FCD6: mov eax, dword ptr [0x58a246f0]
        __asm _emit 0xA1
        __asm _emit 0xF0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5879FCDB: mov esi, 2
        __asm _emit 0xBE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FCE0: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FCE6: jle 0x5879fcfc
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x5879FCE8: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FCEF: je 0x5879fcfc
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5879FCF1: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FCF7: mov ecx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x08
        // 0x5879FCFA: jmp 0x5879fcfe
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5879FCFC: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5879FCFE: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5879FD04: push edx
        __asm _emit 0x52
        // 0x5879FD05: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879FD0A: mov eax, dword ptr [0x58a246f0]
        __asm _emit 0xA1
        __asm _emit 0xF0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5879FD0F: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FD15: jle 0x5879fd3b
        __asm _emit 0x7E
        __asm _emit 0x24
        // 0x5879FD17: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FD1E: je 0x5879fd3b
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x5879FD20: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FD26: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5879FD29: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5879FD2B: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5879FD2E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5879FD30: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5879FD32: pop edi
        __asm _emit 0x5F
        // 0x5879FD33: pop ebp
        __asm _emit 0x5D
        // 0x5879FD34: pop ebx
        __asm _emit 0x5B
        // 0x5879FD35: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5879FD37: pop esi
        __asm _emit 0x5E
        // 0x5879FD38: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5879FD3B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5879FD3D: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5879FD3F: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5879FD42: push ecx
        __asm _emit 0x51
        // 0x5879FD43: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5879FD45: pop edi
        __asm _emit 0x5F
        // 0x5879FD46: pop ebp
        __asm _emit 0x5D
        // 0x5879FD47: pop ebx
        __asm _emit 0x5B
        // 0x5879FD48: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5879FD4A: pop esi
        __asm _emit 0x5E
        // 0x5879FD4B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5879FD4E: mov ecx, dword ptr [esi + 0x1c8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FD54: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5879FD56: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0x18
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x5879FD5B: pop edi
        __asm _emit 0x5F
        // 0x5879FD5C: pop ebp
        __asm _emit 0x5D
        // 0x5879FD5D: pop ebx
        __asm _emit 0x5B
        // 0x5879FD5E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5879FD60: pop esi
        __asm _emit 0x5E
        // 0x5879FD61: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5879FD64: mov eax, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x08
        // 0x5879FD67: add eax, -0xd
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xF3
        // 0x5879FD6A: cmp eax, 0x1b
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x1B
        // 0x5879FD6D: ja 0x5879fe33
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FD73: movzx ecx, byte ptr [eax + 0x587a006c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x88
        __asm _emit 0x6C
        __asm _emit 0x00
        __asm _emit 0x7A
        __asm _emit 0x58
        // 0x5879FD7A: jmp dword ptr [ecx*4 + 0x587a0048]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x7A
        __asm _emit 0x58
        // 0x5879FD81: cmp dword ptr [esi + 0x2fc], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xFC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FD88: je 0x5879fe33
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FD8E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5879FD90: call 0x58798850
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0x8A
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879FD95: pop edi
        __asm _emit 0x5F
        // 0x5879FD96: pop ebp
        __asm _emit 0x5D
        // 0x5879FD97: pop ebx
        __asm _emit 0x5B
        // 0x5879FD98: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5879FD9A: pop esi
        __asm _emit 0x5E
        // 0x5879FD9B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5879FD9E: cmp dword ptr [esi + 0x2c8], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xC8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FDA5: jne 0x5879fe33
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FDAB: mov eax, 0xffff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FDB0: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5879FDB2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5879FDB4: mov dword ptr [esi + 0x2b8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FDBA: mov dword ptr [esi + 0x2b4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FDC0: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5879FDC3: mov word ptr [esi + 0x2c6], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xC6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FDCA: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5879FDCC: mov word ptr [esi + 0x2c4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FDD3: mov dword ptr [esi + 0x2c0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FDD9: mov dword ptr [esi + 0x2bc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FDDF: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x5879FDE2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5879FDE4: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5879FDE6: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5879FDEC: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5879FDEE: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0x18
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x5879FDF3: pop edi
        __asm _emit 0x5F
        // 0x5879FDF4: pop ebp
        __asm _emit 0x5D
        // 0x5879FDF5: pop ebx
        __asm _emit 0x5B
        // 0x5879FDF6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5879FDF8: pop esi
        __asm _emit 0x5E
        // 0x5879FDF9: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5879FDFC: cmp dword ptr [esi + 0x264], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FE03: je 0x5879ff3e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FE09: jmp 0x5879ffca
        __asm _emit 0xE9
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FE0E: cmp dword ptr [esi + 0x264], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FE15: je 0x5879ff54
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FE1B: mov esi, dword ptr [esi + 0x1a0]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FE21: cmp dword ptr [esi + 0x80], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FE28: jle 0x5879fe33
        __asm _emit 0x7E
        __asm _emit 0x09
        // 0x5879FE2A: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5879FE2C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5879FE2E: call 0x5890b700
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0xB8
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879FE33: pop edi
        __asm _emit 0x5F
        // 0x5879FE34: pop ebp
        __asm _emit 0x5D
        // 0x5879FE35: pop ebx
        __asm _emit 0x5B
        // 0x5879FE36: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5879FE38: pop esi
        __asm _emit 0x5E
        // 0x5879FE39: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5879FE3C: cmp dword ptr [esi + 0x300], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FE43: je 0x5879fe33
        __asm _emit 0x74
        __asm _emit 0xEE
        // 0x5879FE45: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5879FE47: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5879FE49: call 0x5879d3f0
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0xD5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879FE4E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5879FE50: je 0x5879fe33
        __asm _emit 0x74
        __asm _emit 0xE1
        // 0x5879FE52: inc edi
        __asm _emit 0x47
        // 0x5879FE53: cmp edi, 8
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x08
        // 0x5879FE56: jb 0x5879fe47
        __asm _emit 0x72
        __asm _emit 0xEF
        // 0x5879FE58: pop edi
        __asm _emit 0x5F
        // 0x5879FE59: pop ebp
        __asm _emit 0x5D
        // 0x5879FE5A: pop ebx
        __asm _emit 0x5B
        // 0x5879FE5B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5879FE5D: pop esi
        __asm _emit 0x5E
        // 0x5879FE5E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5879FE61: cmp dword ptr [esi + 0x300], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FE68: je 0x5879fe33
        __asm _emit 0x74
        __asm _emit 0xC9
        // 0x5879FE6A: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5879FE6C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5879FE70: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5879FE72: call 0x5879d480
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0xD6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879FE77: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5879FE79: je 0x5879fe33
        __asm _emit 0x74
        __asm _emit 0xB8
        // 0x5879FE7B: inc edi
        __asm _emit 0x47
        // 0x5879FE7C: cmp edi, 8
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x08
        // 0x5879FE7F: jb 0x5879fe70
        __asm _emit 0x72
        __asm _emit 0xEF
        // 0x5879FE81: pop edi
        __asm _emit 0x5F
        // 0x5879FE82: pop ebp
        __asm _emit 0x5D
        // 0x5879FE83: pop ebx
        __asm _emit 0x5B
        // 0x5879FE84: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5879FE86: pop esi
        __asm _emit 0x5E
        // 0x5879FE87: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5879FE8A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5879FE8C: call 0x5879d450
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0xD5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879FE91: pop edi
        __asm _emit 0x5F
        // 0x5879FE92: pop ebp
        __asm _emit 0x5D
        // 0x5879FE93: pop ebx
        __asm _emit 0x5B
        // 0x5879FE94: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5879FE96: pop esi
        __asm _emit 0x5E
        // 0x5879FE97: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5879FE9A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5879FE9C: call 0x5879d520
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0xD6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879FEA1: pop edi
        __asm _emit 0x5F
        // 0x5879FEA2: pop ebp
        __asm _emit 0x5D
        // 0x5879FEA3: pop ebx
        __asm _emit 0x5B
        // 0x5879FEA4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5879FEA6: pop esi
        __asm _emit 0x5E
        // 0x5879FEA7: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5879FEAA: mov ecx, dword ptr [esi + 0x1c8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FEB0: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x5879FEB4: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x5879FEB7: je 0x5879fe33
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x76
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879FEBD: mov eax, dword ptr [esi + 0x1c8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FEC3: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5879FEC6: mov edx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FECC: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5879FECF: push ecx
        __asm _emit 0x51
        // 0x5879FED0: push eax
        __asm _emit 0x50
        // 0x5879FED1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5879FED3: call 0x5879d550
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0xD6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879FED8: pop edi
        __asm _emit 0x5F
        // 0x5879FED9: pop ebp
        __asm _emit 0x5D
        // 0x5879FEDA: pop ebx
        __asm _emit 0x5B
        // 0x5879FEDB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5879FEDD: pop esi
        __asm _emit 0x5E
        // 0x5879FEDE: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5879FEE1: sub eax, 0x202
        __asm _emit 0x2D
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FEE6: je 0x587a0007
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x1B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FEEC: sub eax, 8
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x5879FEEF: jne 0x5879fe33
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x3E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879FEF5: mov eax, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FEFB: mov ecx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x5879FEFE: mov ebp, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5879FF04: add ecx, dword ptr [eax + 4]
        __asm _emit 0x03
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5879FF07: mov edi, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x04
        // 0x5879FF0A: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x5879FF0C: jl 0x5879ff64
        __asm _emit 0x7C
        __asm _emit 0x56
        // 0x5879FF0E: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FF14: mov edx, dword ptr [ecx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x1C
        // 0x5879FF17: add edx, dword ptr [ecx + 4]
        __asm _emit 0x03
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5879FF1A: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x5879FF1C: jg 0x5879ff64
        __asm _emit 0x7F
        __asm _emit 0x46
        // 0x5879FF1E: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5879FF21: add edx, dword ptr [eax + 8]
        __asm _emit 0x03
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5879FF24: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x5879FF27: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x5879FF29: jl 0x5879ff64
        __asm _emit 0x7C
        __asm _emit 0x39
        // 0x5879FF2B: mov edx, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x20
        // 0x5879FF2E: add edx, dword ptr [eax + 8]
        __asm _emit 0x03
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5879FF31: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x5879FF33: jg 0x5879ff64
        __asm _emit 0x7F
        __asm _emit 0x2F
        // 0x5879FF35: movzx eax, word ptr [ebx + 0xa]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x43
        __asm _emit 0x0A
        // 0x5879FF39: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5879FF3C: jle 0x5879ff4e
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x5879FF3E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5879FF40: call 0x5879d3f0
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0xD4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879FF45: pop edi
        __asm _emit 0x5F
        // 0x5879FF46: pop ebp
        __asm _emit 0x5D
        // 0x5879FF47: pop ebx
        __asm _emit 0x5B
        // 0x5879FF48: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5879FF4A: pop esi
        __asm _emit 0x5E
        // 0x5879FF4B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5879FF4E: jge 0x5879fe33
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xDF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879FF54: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5879FF56: call 0x5879d480
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0xD5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879FF5B: pop edi
        __asm _emit 0x5F
        // 0x5879FF5C: pop ebp
        __asm _emit 0x5D
        // 0x5879FF5D: pop ebx
        __asm _emit 0x5B
        // 0x5879FF5E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5879FF60: pop esi
        __asm _emit 0x5E
        // 0x5879FF61: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5879FF64: cmp dword ptr [esi + 0x264], 1
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x5879FF6B: jne 0x5879fe33
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC2
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879FF71: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5879FF74: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5879FF77: lea edx, [eax + 0xa0]
        __asm _emit 0x8D
        __asm _emit 0x90
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FF7D: lea ebx, [ecx + 0x1e]
        __asm _emit 0x8D
        __asm _emit 0x59
        __asm _emit 0x1E
        // 0x5879FF80: add eax, 0x23a
        __asm _emit 0x05
        __asm _emit 0x3A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FF85: add ecx, 0xc8
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FF8B: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x5879FF8D: jle 0x5879fe33
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879FF93: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x08
        // 0x5879FF96: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x5879FF98: jle 0x5879fe33
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x95
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879FF9E: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x5879FFA0: jge 0x5879fe33
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879FFA6: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x5879FFA8: jge 0x5879fe33
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x85
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879FFAE: cmp dword ptr [esi + 0x2c8], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xC8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FFB5: jne 0x5879fe33
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879FFBB: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5879FFBF: cmp word ptr [eax + 0xa], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5879FFC4: jle 0x5879fe1b
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x51
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879FFCA: mov ecx, dword ptr [esi + 0x1a0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FFD0: cmp dword ptr [ecx + 0x80], 0xff
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879FFDA: jge 0x5879fe33
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879FFE0: cmp dword ptr [esi + 0x2cc], 1
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x5879FFE7: je 0x5879fff7
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5879FFE9: cmp word ptr [esi + 0x26c], 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0D
        // 0x5879FFF1: je 0x5879fe33
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x3C
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879FFF7: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5879FFF9: call 0x5890b700
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0xB7
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879FFFE: pop edi
        __asm _emit 0x5F
        // 0x5879FFFF: pop ebp
        __asm _emit 0x5D
        // 0x587A0000: pop ebx
        __asm _emit 0x5B
        // 0x587A0001: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A0003: pop esi
        __asm _emit 0x5E
        // 0x587A0004: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587A0007: movzx eax, word ptr [esi + 0x26c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A000E: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x587A0012: je 0x587a001e
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587A0014: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x587A0018: jne 0x5879fe33
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x15
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A001E: mov ecx, dword ptr [esi + 0x2e8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A0024: call 0x587a0350
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A0029: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x587A002B: jne 0x5879fe33
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A0031: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587A0033: call 0x5879d630
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0xD5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A0038: pop edi
        __asm _emit 0x5F
        // 0x587A0039: pop ebp
        __asm _emit 0x5D
        // 0x587A003A: pop ebx
        __asm _emit 0x5B
        // 0x587A003B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A003D: pop esi
        __asm _emit 0x5E
        // 0x587A003E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587A0041: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x587A0044: pop esi
        __asm _emit 0x5E
        // 0x587A0045: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
