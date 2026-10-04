// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587871C0 .. +0x1A3 bytes.
// Source symbol alias: FUN_587871c0.
extern "C" __declspec(naked) void FUN_587871c0() {
    __asm {
        // 0x587871C0: sub esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x14
        // 0x587871C3: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587871C8: push ebx
        __asm _emit 0x53
        // 0x587871C9: push ebp
        __asm _emit 0x55
        // 0x587871CA: push esi
        __asm _emit 0x56
        // 0x587871CB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587871CD: cmp word ptr [eax + 0x105f0], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x0F
        // 0x587871D5: movzx eax, byte ptr [ecx + 0x88c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x81
        __asm _emit 0x8C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587871DC: push edi
        __asm _emit 0x57
        // 0x587871DD: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587871E1: mov ebp, 0x989680
        __asm _emit 0xBD
        __asm _emit 0x80
        __asm _emit 0x96
        __asm _emit 0x98
        __asm _emit 0x00
        // 0x587871E6: mov byte ptr [esp + 0x12], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587871EB: jne 0x587872a9
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587871F1: mov byte ptr [esp + 0x13], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x13
        // 0x587871F5: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587871F9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587871FB: jle 0x58787268
        __asm _emit 0x7E
        __asm _emit 0x6B
        // 0x587871FD: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58787201: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58787204: mov ebp, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x28
        // 0x58787206: mov edi, dword ptr [ecx + 0x910]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878720C: mov dword ptr [esp + 0x28], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58787210: mov esi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x37
        // 0x58787212: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x58787214: sub eax, dword ptr [esi + 4]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58787217: cdq
        __asm _emit 0x99
        // 0x58787218: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5878721A: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5878721E: sub eax, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58787221: xor ecx, edx
        __asm _emit 0x33
        __asm _emit 0xCA
        // 0x58787223: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x58787225: cdq
        __asm _emit 0x99
        // 0x58787226: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x58787228: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5878722A: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5878722C: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x5878722F: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58787231: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x58787234: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x58787236: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5878723A: fild dword ptr [esp + 0x18]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5878723E: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0x5A
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58787243: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0x5A
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58787248: cmp eax, 0x320
        __asm _emit 0x3D
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878724D: jle 0x5878725b
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x5878724F: inc ebx
        __asm _emit 0x43
        // 0x58787250: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58787253: cmp ebx, dword ptr [esp + 0x1c]
        __asm _emit 0x3B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58787257: jl 0x58787210
        __asm _emit 0x7C
        __asm _emit 0xB7
        // 0x58787259: jmp 0x58787264
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x5878725B: mov byte ptr [esp + 0x12], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x12
        // 0x5878725F: mov byte ptr [esp + 0x13], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x13
        __asm _emit 0x01
        // 0x58787264: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58787268: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5878726C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5878726E: je 0x58787287
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x58787270: cmp byte ptr [esp + 0x13], 0
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58787275: je 0x5878729d
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x58787277: movzx edx, byte ptr [esp + 0x12]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x12
        // 0x5878727C: mov ecx, dword ptr [ecx + 0x910]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787282: mov edx, dword ptr [ecx + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x91
        // 0x58787285: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x58787287: cmp byte ptr [esp + 0x13], 0
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5878728C: je 0x5878729d
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x5878728E: pop edi
        __asm _emit 0x5F
        // 0x5878728F: pop esi
        __asm _emit 0x5E
        // 0x58787290: pop ebp
        __asm _emit 0x5D
        // 0x58787291: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787296: pop ebx
        __asm _emit 0x5B
        // 0x58787297: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x5878729A: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5878729D: pop edi
        __asm _emit 0x5F
        // 0x5878729E: pop esi
        __asm _emit 0x5E
        // 0x5878729F: pop ebp
        __asm _emit 0x5D
        // 0x587872A0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587872A2: pop ebx
        __asm _emit 0x5B
        // 0x587872A3: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587872A6: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587872A9: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587872AD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587872AF: jle 0x58787336
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587872B5: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587872B9: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587872BB: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587872BE: mov edi, dword ptr [ecx + 0x910]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587872C4: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587872C8: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587872CC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587872D0: mov esi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x37
        // 0x587872D2: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587872D6: sub eax, dword ptr [esi + 4]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587872D9: cdq
        __asm _emit 0x99
        // 0x587872DA: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587872DC: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587872E0: sub eax, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587872E3: xor ecx, edx
        __asm _emit 0x33
        __asm _emit 0xCA
        // 0x587872E5: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x587872E7: cdq
        __asm _emit 0x99
        // 0x587872E8: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x587872EA: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587872EC: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x587872EE: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x587872F1: imul edx, edx, 0x75
        __asm _emit 0x6B
        __asm _emit 0xD2
        __asm _emit 0x75
        // 0x587872F4: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587872F9: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587872FB: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587872FE: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58787300: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58787303: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58787305: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58787307: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x5878730A: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5878730C: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58787310: fild dword ptr [esp + 0x18]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58787314: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0x59
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58787319: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0x59
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x5878731E: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x58787320: jle 0x58787328
        __asm _emit 0x7E
        __asm _emit 0x06
        // 0x58787322: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x58787324: mov byte ptr [esp + 0x12], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x12
        // 0x58787328: inc ebx
        __asm _emit 0x43
        // 0x58787329: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5878732C: cmp ebx, dword ptr [esp + 0x20]
        __asm _emit 0x3B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58787330: jl 0x587872d0
        __asm _emit 0x7C
        __asm _emit 0x9E
        // 0x58787332: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58787336: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5878733A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5878733C: je 0x5878734e
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x5878733E: movzx edx, byte ptr [esp + 0x12]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x12
        // 0x58787343: mov ecx, dword ptr [ecx + 0x910]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787349: mov edx, dword ptr [ecx + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x91
        // 0x5878734C: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x5878734E: pop edi
        __asm _emit 0x5F
        // 0x5878734F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58787351: pop esi
        __asm _emit 0x5E
        // 0x58787352: cmp ebp, 0x320
        __asm _emit 0x81
        __asm _emit 0xFD
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787358: pop ebp
        __asm _emit 0x5D
        // 0x58787359: setl al
        __asm _emit 0x0F
        __asm _emit 0x9C
        __asm _emit 0xC0
        // 0x5878735C: pop ebx
        __asm _emit 0x5B
        // 0x5878735D: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58787360: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
