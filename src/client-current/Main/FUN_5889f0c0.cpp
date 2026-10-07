// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5889F0C0 .. +0x89F bytes.
// Source symbol alias: FUN_5889f0c0.
extern "C" __declspec(naked) void FUN_5889f0c0() {
    __asm {
        // 0x5889F0C0: push ebx
        __asm _emit 0x53
        // 0x5889F0C1: push esi
        __asm _emit 0x56
        // 0x5889F0C2: push edi
        __asm _emit 0x57
        // 0x5889F0C3: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5889F0C5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889F0C7: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5889F0C9: cmp dword ptr [esp + 0x10], edi
        __asm _emit 0x39
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5889F0CD: je 0x5889f6b7
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F0D3: cmp dword ptr [0x589c9038], edi
        __asm _emit 0x39
        __asm _emit 0x3D
        __asm _emit 0x38
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889F0D9: mov ecx, dword ptr [esi + 0x364]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x64
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F0DF: setne al
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC0
        // 0x5889F0E2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5889F0E4: lea eax, [eax*4 + 1]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F0EB: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5889F0EE: cmp dword ptr [0x589c903c], edi
        __asm _emit 0x39
        __asm _emit 0x3D
        __asm _emit 0x3C
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889F0F4: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F0FA: setne dl
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC2
        // 0x5889F0FD: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5889F0FF: lea edx, [edx*4 + 1]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F106: mov dword ptr [eax + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x5889F109: cmp dword ptr [0x589c9040], edi
        __asm _emit 0x39
        __asm _emit 0x3D
        __asm _emit 0x40
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889F10F: mov edx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F115: setne cl
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC1
        // 0x5889F118: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889F11A: lea ecx, [ecx*4 + 1]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x8D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F121: mov dword ptr [edx + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x50
        // 0x5889F124: mov edx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F12A: mov ecx, 0xfffff060
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889F12F: cmp dword ptr [0x58a248d4], ecx
        __asm _emit 0x39
        __asm _emit 0x0D
        __asm _emit 0xD4
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889F135: setge al
        __asm _emit 0x0F
        __asm _emit 0x9D
        __asm _emit 0xC0
        // 0x5889F138: lea eax, [eax*4 + 1]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F13F: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x5889F142: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889F144: cmp dword ptr [0x589c9044], edi
        __asm _emit 0x39
        __asm _emit 0x3D
        __asm _emit 0x44
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889F14A: mov edx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F150: setne al
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC0
        // 0x5889F153: lea eax, [eax*4 + 1]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F15A: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x5889F15D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889F15F: cmp dword ptr [0x589c9048], edi
        __asm _emit 0x39
        __asm _emit 0x3D
        __asm _emit 0x48
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889F165: mov edx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F16B: setne al
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC0
        // 0x5889F16E: lea eax, [eax*4 + 1]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F175: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x5889F178: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889F17A: cmp dword ptr [0x589c904c], edi
        __asm _emit 0x39
        __asm _emit 0x3D
        __asm _emit 0x4C
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889F180: mov edx, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F186: setne al
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC0
        // 0x5889F189: lea eax, [eax*4 + 1]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F190: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x5889F193: mov edx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F199: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889F19B: cmp dword ptr [0x589c9050], edi
        __asm _emit 0x39
        __asm _emit 0x3D
        __asm _emit 0x50
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889F1A1: setne al
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC0
        // 0x5889F1A4: lea eax, [eax*4 + 1]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F1AB: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x5889F1AE: mov edx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F1B4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889F1B6: cmp dword ptr [0x589c9054], edi
        __asm _emit 0x39
        __asm _emit 0x3D
        __asm _emit 0x54
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889F1BC: setne al
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC0
        // 0x5889F1BF: lea eax, [eax*4 + 1]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F1C6: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x5889F1C9: mov edx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F1CF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889F1D1: cmp dword ptr [0x589c9058], edi
        __asm _emit 0x39
        __asm _emit 0x3D
        __asm _emit 0x58
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889F1D7: setne al
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC0
        // 0x5889F1DA: lea eax, [eax*4 + 1]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F1E1: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x5889F1E4: mov edx, dword ptr [esi + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F1EA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889F1EC: cmp dword ptr [0x589c905c], edi
        __asm _emit 0x39
        __asm _emit 0x3D
        __asm _emit 0x5C
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889F1F2: setne al
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC0
        // 0x5889F1F5: lea eax, [eax*4 + 1]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F1FC: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x5889F1FF: mov edx, dword ptr [esi + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F205: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889F207: cmp dword ptr [0x589c9060], edi
        __asm _emit 0x39
        __asm _emit 0x3D
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889F20D: setne al
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC0
        // 0x5889F210: lea eax, [eax*4 + 1]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F217: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x5889F21A: mov edx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F220: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889F222: cmp dword ptr [0x589c906c], edi
        __asm _emit 0x39
        __asm _emit 0x3D
        __asm _emit 0x6C
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889F228: setne al
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC0
        // 0x5889F22B: lea eax, [eax*4 + 1]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F232: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x5889F235: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889F237: cmp dword ptr [0x58a248f0], edi
        __asm _emit 0x39
        __asm _emit 0x3D
        __asm _emit 0xF0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889F23D: setne al
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC0
        // 0x5889F240: mov edx, dword ptr [esi + 0x128]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F246: lea eax, [eax*4 + 1]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F24D: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x5889F250: mov edx, dword ptr [esi + 0x12c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F256: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889F258: cmp dword ptr [0x589c9068], edi
        __asm _emit 0x39
        __asm _emit 0x3D
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889F25E: setne al
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC0
        // 0x5889F261: lea eax, [eax*4 + 1]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F268: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x5889F26B: mov edx, dword ptr [esi + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F271: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889F273: cmp dword ptr [0x58a248f4], edi
        __asm _emit 0x39
        __asm _emit 0x3D
        __asm _emit 0xF4
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889F279: setne al
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC0
        // 0x5889F27C: lea eax, [eax*4 + 1]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F283: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x5889F286: mov edx, dword ptr [esi + 0x138]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F28C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889F28E: cmp dword ptr [0x589c9070], edi
        __asm _emit 0x39
        __asm _emit 0x3D
        __asm _emit 0x70
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889F294: setne al
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC0
        // 0x5889F297: lea eax, [eax*4 + 1]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F29E: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x5889F2A1: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5889F2A3: mov ebx, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F2A9: mov eax, 0x19
        __asm _emit 0xB8
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F2AE: cmp dword ptr [0x58a248fc], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0xFC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889F2B4: setle dl
        __asm _emit 0x0F
        __asm _emit 0x9E
        __asm _emit 0xC2
        // 0x5889F2B7: lea edx, [edx*4 + 1]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F2BE: mov dword ptr [ebx + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x53
        __asm _emit 0x50
        // 0x5889F2C1: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5889F2C3: cmp dword ptr [0x58a248f8], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889F2C9: mov eax, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F2CF: setle dl
        __asm _emit 0x0F
        __asm _emit 0x9E
        __asm _emit 0xC2
        // 0x5889F2D2: lea ebx, [edi + 5]
        __asm _emit 0x8D
        __asm _emit 0x5F
        __asm _emit 0x05
        // 0x5889F2D5: lea edx, [edx*4 + 1]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F2DC: mov dword ptr [eax + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x5889F2DF: mov eax, dword ptr [esi + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F2E5: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5889F2E7: cmp dword ptr [0x58a248e0], edi
        __asm _emit 0x39
        __asm _emit 0x3D
        __asm _emit 0xE0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889F2ED: setne dl
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC2
        // 0x5889F2F0: lea edx, [edx*4 + 1]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F2F7: mov dword ptr [eax + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x5889F2FA: mov eax, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F300: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5889F302: cmp dword ptr [0x58a248e4], edi
        __asm _emit 0x39
        __asm _emit 0x3D
        __asm _emit 0xE4
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889F308: setne dl
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC2
        // 0x5889F30B: lea edx, [edx*4 + 1]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F312: mov dword ptr [eax + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x5889F315: mov eax, dword ptr [esi + 0x144]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F31B: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5889F31D: cmp dword ptr [0x58a248e8], edi
        __asm _emit 0x39
        __asm _emit 0x3D
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889F323: setne dl
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC2
        // 0x5889F326: lea edx, [edx*4 + 1]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F32D: mov dword ptr [eax + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x5889F330: mov eax, dword ptr [esi + 0x148]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F336: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5889F338: cmp dword ptr [0x58a248ec], edi
        __asm _emit 0x39
        __asm _emit 0x3D
        __asm _emit 0xEC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889F33E: setne dl
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC2
        // 0x5889F341: lea edx, [edx*4 + 1]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F348: mov dword ptr [eax + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x5889F34B: mov eax, dword ptr [esi + 0x14c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F351: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5889F353: cmp dword ptr [0x589c9064], edi
        __asm _emit 0x39
        __asm _emit 0x3D
        __asm _emit 0x64
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889F359: setne dl
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC2
        // 0x5889F35C: lea edx, [edx*4 + 1]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F363: mov dword ptr [eax + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x5889F366: mov eax, dword ptr [esi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F36C: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5889F36E: cmp dword ptr [0x58a248dc], edi
        __asm _emit 0x39
        __asm _emit 0x3D
        __asm _emit 0xDC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889F374: setne dl
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC2
        // 0x5889F377: lea edx, [edx*4 + 1]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F37E: mov dword ptr [eax + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x5889F381: mov eax, dword ptr [0x589c9074]
        __asm _emit 0xA1
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889F386: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5889F388: jne 0x5889f3a2
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x5889F38A: mov edx, dword ptr [esi + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F390: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x5889F393: mov eax, dword ptr [esi + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F399: mov dword ptr [eax + 0x50], 1
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F3A0: jmp 0x5889f3b9
        __asm _emit 0xEB
        __asm _emit 0x17
        // 0x5889F3A2: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5889F3A5: jne 0x5889f3b9
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x5889F3A7: mov edx, dword ptr [esi + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F3AD: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x5889F3B0: mov eax, dword ptr [esi + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F3B6: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x5889F3B9: mov edx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F3BF: cmp dword ptr [edx + 0x50], ebx
        __asm _emit 0x39
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x5889F3C2: jne 0x5889f470
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F3C8: mov eax, dword ptr [0x58a248d4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889F3CD: cmp eax, 0xfffffe70
        __asm _emit 0x3D
        __asm _emit 0x70
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889F3D2: jle 0x5889f3e5
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x5889F3D4: mov edi, 0x5f
        __asm _emit 0xBF
        __asm _emit 0x5F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F3D9: mov dword ptr [esi + 0xf8], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F3E3: jmp 0x5889f44b
        __asm _emit 0xEB
        __asm _emit 0x66
        // 0x5889F3E5: cmp eax, 0xfffffb50
        __asm _emit 0x3D
        __asm _emit 0x50
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889F3EA: jle 0x5889f3fd
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x5889F3EC: mov edi, 0x4c
        __asm _emit 0xBF
        __asm _emit 0x4C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F3F1: mov dword ptr [esi + 0xf8], 0xfffffce0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xE0
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889F3FB: jmp 0x5889f44b
        __asm _emit 0xEB
        __asm _emit 0x4E
        // 0x5889F3FD: cmp eax, 0xfffff830
        __asm _emit 0x3D
        __asm _emit 0x30
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889F402: jle 0x5889f415
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x5889F404: mov edi, 0x39
        __asm _emit 0xBF
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F409: mov dword ptr [esi + 0xf8], 0xfffff9c0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xC0
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889F413: jmp 0x5889f44b
        __asm _emit 0xEB
        __asm _emit 0x36
        // 0x5889F415: cmp eax, 0xfffff510
        __asm _emit 0x3D
        __asm _emit 0x10
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889F41A: jle 0x5889f42d
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x5889F41C: mov edi, 0x26
        __asm _emit 0xBF
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F421: mov dword ptr [esi + 0xf8], 0xfffff6a0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xA0
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889F42B: jmp 0x5889f44b
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x5889F42D: cmp eax, 0xfffff1f0
        __asm _emit 0x3D
        __asm _emit 0xF0
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889F432: jle 0x5889f445
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x5889F434: mov edi, 0x13
        __asm _emit 0xBF
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F439: mov dword ptr [esi + 0xf8], 0xfffff380
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889F443: jmp 0x5889f44b
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x5889F445: mov dword ptr [esi + 0xf8], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F44B: mov eax, dword ptr [esi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F451: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5889F454: add ecx, edi
        __asm _emit 0x03
        __asm _emit 0xCF
        // 0x5889F456: push ecx
        __asm _emit 0x51
        // 0x5889F457: mov ecx, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F45D: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0x3E
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889F462: mov edx, dword ptr [esi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F468: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5889F46B: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5889F46D: push eax
        __asm _emit 0x50
        // 0x5889F46E: jmp 0x5889f499
        __asm _emit 0xEB
        __asm _emit 0x29
        // 0x5889F470: mov ecx, dword ptr [esi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F476: mov dword ptr [esi + 0xf8], 0xffffd8f0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xF0
        __asm _emit 0xD8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889F480: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5889F483: mov ecx, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F489: push edx
        __asm _emit 0x52
        // 0x5889F48A: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0x3E
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889F48F: mov eax, dword ptr [esi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F495: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5889F498: push ecx
        __asm _emit 0x51
        // 0x5889F499: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F49F: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0x3E
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889F4A4: mov edx, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F4AA: cmp dword ptr [edx + 0x50], ebx
        __asm _emit 0x39
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x5889F4AD: jne 0x5889f581
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F4B3: mov eax, dword ptr [0x58a248fc]
        __asm _emit 0xA1
        __asm _emit 0xFC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889F4B8: cmp eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x10
        // 0x5889F4BB: jg 0x5889f50f
        __asm _emit 0x7F
        __asm _emit 0x52
        // 0x5889F4BD: je 0x5889f4fe
        __asm _emit 0x74
        __asm _emit 0x3F
        // 0x5889F4BF: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x5889F4C2: je 0x5889f4ed
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x5889F4C4: sub eax, 3
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x03
        // 0x5889F4C7: je 0x5889f4dc
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x5889F4C9: sub eax, ebx
        __asm _emit 0x2B
        __asm _emit 0xC3
        // 0x5889F4CB: jne 0x5889f51b
        __asm _emit 0x75
        __asm _emit 0x4E
        // 0x5889F4CD: lea edi, [eax + 0x26]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0x26
        // 0x5889F4D0: mov dword ptr [esi + 0xfc], 9
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F4DA: jmp 0x5889f538
        __asm _emit 0xEB
        __asm _emit 0x5C
        // 0x5889F4DC: mov edi, 0x39
        __asm _emit 0xBF
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F4E1: mov dword ptr [esi + 0xfc], 4
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F4EB: jmp 0x5889f538
        __asm _emit 0xEB
        __asm _emit 0x4B
        // 0x5889F4ED: mov edi, 0x4c
        __asm _emit 0xBF
        __asm _emit 0x4C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F4F2: mov dword ptr [esi + 0xfc], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F4FC: jmp 0x5889f538
        __asm _emit 0xEB
        __asm _emit 0x3A
        // 0x5889F4FE: mov edi, 0x13
        __asm _emit 0xBF
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F503: mov dword ptr [esi + 0xfc], 0x10
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F50D: jmp 0x5889f538
        __asm _emit 0xEB
        __asm _emit 0x29
        // 0x5889F50F: cmp eax, 0x19
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x19
        // 0x5889F512: je 0x5889f52c
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x5889F514: cmp eax, 0x3e8
        __asm _emit 0x3D
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F519: je 0x5889f52c
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5889F51B: mov edi, 0x5f
        __asm _emit 0xBF
        __asm _emit 0x5F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F520: mov dword ptr [esi + 0xfc], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F52A: jmp 0x5889f538
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x5889F52C: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5889F52E: mov dword ptr [esi + 0xfc], 0x19
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F538: mov eax, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F53E: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5889F541: add ecx, edi
        __asm _emit 0x03
        __asm _emit 0xCF
        // 0x5889F543: push ecx
        __asm _emit 0x51
        // 0x5889F544: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F54A: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0x3D
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889F54F: mov edx, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F555: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5889F558: mov ecx, dword ptr [esi + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F55E: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5889F560: push eax
        __asm _emit 0x50
        // 0x5889F561: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0x3D
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889F566: mov eax, dword ptr [esi + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F56C: mov ecx, 2
        __asm _emit 0xB9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F571: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5889F575: mov eax, dword ptr [esi + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F57B: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5889F57F: jmp 0x5889f5b5
        __asm _emit 0xEB
        __asm _emit 0x34
        // 0x5889F581: mov ecx, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F587: mov dword ptr [esi + 0xfc], 0x3e8
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F591: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5889F594: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F59A: push edx
        __asm _emit 0x52
        // 0x5889F59B: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x3D
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889F5A0: mov eax, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F5A6: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5889F5A9: push ecx
        __asm _emit 0x51
        // 0x5889F5AA: mov ecx, dword ptr [esi + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F5B0: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0x3D
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889F5B5: mov edx, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F5BB: cmp dword ptr [edx + 0x50], ebx
        __asm _emit 0x39
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x5889F5BE: jne 0x5889f67d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F5C4: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889F5C9: cmp eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x10
        // 0x5889F5CC: jg 0x5889f620
        __asm _emit 0x7F
        __asm _emit 0x52
        // 0x5889F5CE: je 0x5889f60f
        __asm _emit 0x74
        __asm _emit 0x3F
        // 0x5889F5D0: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x5889F5D3: je 0x5889f5fe
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x5889F5D5: sub eax, 3
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x03
        // 0x5889F5D8: je 0x5889f5ed
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x5889F5DA: sub eax, ebx
        __asm _emit 0x2B
        __asm _emit 0xC3
        // 0x5889F5DC: jne 0x5889f62c
        __asm _emit 0x75
        __asm _emit 0x4E
        // 0x5889F5DE: lea edi, [eax + 0x26]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0x26
        // 0x5889F5E1: mov dword ptr [esi + 0x100], 9
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F5EB: jmp 0x5889f649
        __asm _emit 0xEB
        __asm _emit 0x5C
        // 0x5889F5ED: mov edi, 0x39
        __asm _emit 0xBF
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F5F2: mov dword ptr [esi + 0x100], 4
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F5FC: jmp 0x5889f649
        __asm _emit 0xEB
        __asm _emit 0x4B
        // 0x5889F5FE: mov edi, 0x4c
        __asm _emit 0xBF
        __asm _emit 0x4C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F603: mov dword ptr [esi + 0x100], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F60D: jmp 0x5889f649
        __asm _emit 0xEB
        __asm _emit 0x3A
        // 0x5889F60F: mov edi, 0x13
        __asm _emit 0xBF
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F614: mov dword ptr [esi + 0x100], 0x10
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F61E: jmp 0x5889f649
        __asm _emit 0xEB
        __asm _emit 0x29
        // 0x5889F620: cmp eax, 0x19
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x19
        // 0x5889F623: je 0x5889f63d
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x5889F625: cmp eax, 0x3e8
        __asm _emit 0x3D
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F62A: je 0x5889f63d
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5889F62C: mov edi, 0x5f
        __asm _emit 0xBF
        __asm _emit 0x5F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F631: mov dword ptr [esi + 0x100], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F63B: jmp 0x5889f649
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x5889F63D: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5889F63F: mov dword ptr [esi + 0x100], 0x19
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F649: mov eax, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F64F: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5889F652: add ecx, edi
        __asm _emit 0x03
        __asm _emit 0xCF
        // 0x5889F654: push ecx
        __asm _emit 0x51
        // 0x5889F655: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F65B: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0x3C
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889F660: mov edx, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F666: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5889F669: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F66F: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5889F671: push eax
        __asm _emit 0x50
        // 0x5889F672: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0x3C
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889F677: pop edi
        __asm _emit 0x5F
        // 0x5889F678: pop esi
        __asm _emit 0x5E
        // 0x5889F679: pop ebx
        __asm _emit 0x5B
        // 0x5889F67A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5889F67D: mov ecx, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F683: mov dword ptr [esi + 0x100], 0x3e8
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F68D: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5889F690: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F696: push edx
        __asm _emit 0x52
        // 0x5889F697: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0x3C
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889F69C: mov eax, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F6A2: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5889F6A5: push ecx
        __asm _emit 0x51
        // 0x5889F6A6: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F6AC: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x3C
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889F6B1: pop edi
        __asm _emit 0x5F
        // 0x5889F6B2: pop esi
        __asm _emit 0x5E
        // 0x5889F6B3: pop ebx
        __asm _emit 0x5B
        // 0x5889F6B4: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5889F6B7: mov edx, dword ptr [esi + 0x364]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x64
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F6BD: mov ebx, 5
        __asm _emit 0xBB
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F6C2: cmp dword ptr [edx + 0x50], ebx
        __asm _emit 0x39
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x5889F6C5: sete al
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC0
        // 0x5889F6C8: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5889F6CA: mov dword ptr [0x589c9038], eax
        __asm _emit 0xA3
        __asm _emit 0x38
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889F6CF: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F6D5: cmp dword ptr [ecx + 0x50], ebx
        __asm _emit 0x39
        __asm _emit 0x59
        __asm _emit 0x50
        // 0x5889F6D8: sete dl
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC2
        // 0x5889F6DB: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5889F6DD: mov dword ptr [0x589c903c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x3C
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889F6E3: mov eax, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F6E9: cmp dword ptr [eax + 0x50], ebx
        __asm _emit 0x39
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x5889F6EC: sete cl
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC1
        // 0x5889F6EF: mov dword ptr [0x589c9040], ecx
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x40
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889F6F5: mov edx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F6FB: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5889F6FD: cmp dword ptr [edx + 0x50], ebx
        __asm _emit 0x39
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x5889F700: sete cl
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC1
        // 0x5889F703: mov dword ptr [0x58a244fc], ecx
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889F709: mov eax, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F70F: cmp dword ptr [eax + 0x50], ebx
        __asm _emit 0x39
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x5889F712: jne 0x5889f71c
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5889F714: mov eax, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F71A: jmp 0x5889f721
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x5889F71C: mov eax, 0xffffd8f0
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0xD8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889F721: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889F723: mov ecx, dword ptr [0x58a24780]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889F729: mov dword ptr [0x58a248d4], eax
        __asm _emit 0xA3
        __asm _emit 0xD4
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889F72E: je 0x5889f74d
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x5889F730: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889F732: je 0x5889f758
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x5889F734: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5889F736: push eax
        __asm _emit 0x50
        // 0x5889F737: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x5889F73A: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5889F73C: mov ecx, dword ptr [0x58a24780]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889F742: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5889F744: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5889F747: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889F749: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5889F74B: jmp 0x5889f758
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x5889F74D: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5889F74F: je 0x5889f758
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x5889F751: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5889F753: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x5889F756: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5889F758: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F75E: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5889F760: cmp dword ptr [ecx + 0x50], ebx
        __asm _emit 0x39
        __asm _emit 0x59
        __asm _emit 0x50
        // 0x5889F763: sete dl
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC2
        // 0x5889F766: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5889F768: mov dword ptr [0x589c9044], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889F76E: mov eax, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F774: cmp dword ptr [eax + 0x50], ebx
        __asm _emit 0x39
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x5889F777: sete cl
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC1
        // 0x5889F77A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889F77C: mov dword ptr [0x589c9048], ecx
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x48
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889F782: mov edx, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F788: cmp dword ptr [edx + 0x50], ebx
        __asm _emit 0x39
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x5889F78B: sete al
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC0
        // 0x5889F78E: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5889F790: mov dword ptr [0x589c904c], eax
        __asm _emit 0xA3
        __asm _emit 0x4C
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889F795: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F79B: cmp dword ptr [ecx + 0x50], ebx
        __asm _emit 0x39
        __asm _emit 0x59
        __asm _emit 0x50
        // 0x5889F79E: sete dl
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC2
        // 0x5889F7A1: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5889F7A3: mov dword ptr [0x589c9050], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889F7A9: mov eax, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F7AF: cmp dword ptr [eax + 0x50], ebx
        __asm _emit 0x39
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x5889F7B2: sete cl
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC1
        // 0x5889F7B5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889F7B7: mov dword ptr [0x589c9054], ecx
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x54
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889F7BD: mov edx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F7C3: cmp dword ptr [edx + 0x50], ebx
        __asm _emit 0x39
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x5889F7C6: sete al
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC0
        // 0x5889F7C9: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5889F7CB: mov dword ptr [0x589c9058], eax
        __asm _emit 0xA3
        __asm _emit 0x58
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889F7D0: mov ecx, dword ptr [esi + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F7D6: cmp dword ptr [ecx + 0x50], ebx
        __asm _emit 0x39
        __asm _emit 0x59
        __asm _emit 0x50
        // 0x5889F7D9: sete dl
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC2
        // 0x5889F7DC: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5889F7DE: mov dword ptr [0x589c905c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x5C
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889F7E4: mov eax, dword ptr [esi + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F7EA: cmp dword ptr [eax + 0x50], ebx
        __asm _emit 0x39
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x5889F7ED: sete cl
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC1
        // 0x5889F7F0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889F7F2: mov dword ptr [0x589c9060], ecx
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889F7F8: mov edx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F7FE: cmp dword ptr [edx + 0x50], ebx
        __asm _emit 0x39
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x5889F801: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889F807: sete al
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC0
        // 0x5889F80A: mov dword ptr [0x589c906c], eax
        __asm _emit 0xA3
        __asm _emit 0x6C
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889F80F: cmp dword ptr [0x58a24580], ecx
        __asm _emit 0x39
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889F815: jne 0x5889f827
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x5889F817: cmp word ptr [ecx + 0x105f0], 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x0A
        // 0x5889F81F: jne 0x5889f827
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x5889F821: push eax
        __asm _emit 0x50
        // 0x5889F822: call 0x587ecec0
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0xD6
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5889F827: mov eax, dword ptr [esi + 0x128]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F82D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5889F82F: cmp dword ptr [eax + 0x50], ebx
        __asm _emit 0x39
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x5889F832: sete cl
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC1
        // 0x5889F835: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889F837: mov dword ptr [0x58a248f0], ecx
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0xF0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889F83D: mov edx, dword ptr [esi + 0x12c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F843: cmp dword ptr [edx + 0x50], ebx
        __asm _emit 0x39
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x5889F846: sete al
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC0
        // 0x5889F849: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5889F84B: mov dword ptr [0x589c9068], eax
        __asm _emit 0xA3
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889F850: mov ecx, dword ptr [esi + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F856: cmp dword ptr [ecx + 0x50], ebx
        __asm _emit 0x39
        __asm _emit 0x59
        __asm _emit 0x50
        // 0x5889F859: sete dl
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC2
        // 0x5889F85C: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5889F85E: mov dword ptr [0x58a248f4], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xF4
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889F864: mov eax, dword ptr [esi + 0x138]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F86A: cmp dword ptr [eax + 0x50], ebx
        __asm _emit 0x39
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x5889F86D: sete cl
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC1
        // 0x5889F870: mov dword ptr [0x589c9070], ecx
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x70
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889F876: mov edx, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F87C: cmp dword ptr [edx + 0x50], ebx
        __asm _emit 0x39
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x5889F87F: jne 0x5889f88e
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x5889F881: mov eax, dword ptr [esi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F887: mov dword ptr [0x58a248fc], eax
        __asm _emit 0xA3
        __asm _emit 0xFC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889F88C: jmp 0x5889f898
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x5889F88E: mov dword ptr [0x58a248fc], 0x3e8
        __asm _emit 0xC7
        __asm _emit 0x05
        __asm _emit 0xFC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F898: mov ecx, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F89E: cmp dword ptr [ecx + 0x50], ebx
        __asm _emit 0x39
        __asm _emit 0x59
        __asm _emit 0x50
        // 0x5889F8A1: jne 0x5889f8b1
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x5889F8A3: mov edx, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F8A9: mov dword ptr [0x58a248f8], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889F8AF: jmp 0x5889f8bb
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x5889F8B1: mov dword ptr [0x58a248f8], 0x3e8
        __asm _emit 0xC7
        __asm _emit 0x05
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F8BB: mov eax, dword ptr [esi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F8C1: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5889F8C3: cmp dword ptr [eax + 0x50], ebx
        __asm _emit 0x39
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x5889F8C6: sete cl
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC1
        // 0x5889F8C9: mov dword ptr [0x58a248dc], ecx
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0xDC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889F8CF: mov edx, dword ptr [esi + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F8D5: cmp dword ptr [edx + 0x50], ebx
        __asm _emit 0x39
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x5889F8D8: jne 0x5889f8e2
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5889F8DA: mov dword ptr [0x589c9074], edi
        __asm _emit 0x89
        __asm _emit 0x3D
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889F8E0: jmp 0x5889f8f7
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x5889F8E2: mov eax, dword ptr [esi + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F8E8: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5889F8EA: cmp dword ptr [eax + 0x50], ebx
        __asm _emit 0x39
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x5889F8ED: setne cl
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC1
        // 0x5889F8F0: inc ecx
        __asm _emit 0x41
        // 0x5889F8F1: mov dword ptr [0x589c9074], ecx
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889F8F7: mov edx, dword ptr [esi + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F8FD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889F8FF: cmp dword ptr [edx + 0x50], ebx
        __asm _emit 0x39
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x5889F902: pop edi
        __asm _emit 0x5F
        // 0x5889F903: sete al
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC0
        // 0x5889F906: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5889F908: mov dword ptr [0x58a248e0], eax
        __asm _emit 0xA3
        __asm _emit 0xE0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889F90D: mov ecx, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F913: cmp dword ptr [ecx + 0x50], ebx
        __asm _emit 0x39
        __asm _emit 0x59
        __asm _emit 0x50
        // 0x5889F916: sete dl
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC2
        // 0x5889F919: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5889F91B: mov dword ptr [0x58a248e4], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xE4
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889F921: mov eax, dword ptr [esi + 0x144]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F927: cmp dword ptr [eax + 0x50], ebx
        __asm _emit 0x39
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x5889F92A: sete cl
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC1
        // 0x5889F92D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889F92F: mov dword ptr [0x58a248e8], ecx
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889F935: mov edx, dword ptr [esi + 0x148]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F93B: cmp dword ptr [edx + 0x50], ebx
        __asm _emit 0x39
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x5889F93E: sete al
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC0
        // 0x5889F941: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5889F943: mov dword ptr [0x58a248ec], eax
        __asm _emit 0xA3
        __asm _emit 0xEC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889F948: mov ecx, dword ptr [esi + 0x14c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F94E: cmp dword ptr [ecx + 0x50], ebx
        __asm _emit 0x39
        __asm _emit 0x59
        __asm _emit 0x50
        // 0x5889F951: pop esi
        __asm _emit 0x5E
        // 0x5889F952: sete dl
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC2
        // 0x5889F955: pop ebx
        __asm _emit 0x5B
        // 0x5889F956: mov dword ptr [0x589c9064], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889F95C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
