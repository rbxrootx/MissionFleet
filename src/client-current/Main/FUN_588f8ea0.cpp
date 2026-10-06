// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588F8EA0 .. +0x9F9 bytes.
// Source symbol alias: FUN_588f8ea0.
extern "C" __declspec(naked) void FUN_588f8ea0() {
    __asm {
        // 0x588F8EA0: mov eax, dword ptr [0x58a24734]
        __asm _emit 0xA1
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F8EA5: push ebx
        __asm _emit 0x53
        // 0x588F8EA6: push ebp
        __asm _emit 0x55
        // 0x588F8EA7: push esi
        __asm _emit 0x56
        // 0x588F8EA8: push edi
        __asm _emit 0x57
        // 0x588F8EA9: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588F8EAB: cmp dword ptr [eax + 0x164], 0xa
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0A
        // 0x588F8EB2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588F8EB4: jle 0x588f8ec9
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588F8EB6: cmp dword ptr [eax + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F8EBC: je 0x588f8ec9
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588F8EBE: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F8EC4: mov eax, dword ptr [eax + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x28
        // 0x588F8EC7: jmp 0x588f8ecb
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F8EC9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F8ECB: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F8ED1: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588F8ED4: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588F8ED6: je 0x588f8f00
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588F8ED8: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588F8EDB: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588F8EDE: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588F8EE1: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588F8EE4: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588F8EE7: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588F8EE9: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588F8EEC: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588F8EEE: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588F8EF1: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588F8EF4: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588F8EF7: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588F8EFA: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588F8EFD: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588F8F00: mov eax, dword ptr [0x58a24734]
        __asm _emit 0xA1
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F8F05: cmp dword ptr [eax + 0x164], 0xb
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0B
        // 0x588F8F0C: jle 0x588f8f21
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588F8F0E: cmp dword ptr [eax + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F8F14: je 0x588f8f21
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588F8F16: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F8F1C: mov eax, dword ptr [ecx + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x2C
        // 0x588F8F1F: jmp 0x588f8f23
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F8F21: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F8F23: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F8F29: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588F8F2C: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588F8F2E: je 0x588f8f58
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588F8F30: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588F8F33: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588F8F36: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588F8F39: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588F8F3C: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588F8F3F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588F8F41: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588F8F44: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588F8F46: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588F8F49: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588F8F4C: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588F8F4F: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588F8F52: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588F8F55: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588F8F58: movzx ecx, byte ptr [esi + 0x74]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588F8F5C: push ecx
        __asm _emit 0x51
        // 0x588F8F5D: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F8F63: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0xE3
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F8F68: cmp dword ptr [0x58a24ae0], edi
        __asm _emit 0x39
        __asm _emit 0x3D
        __asm _emit 0xE0
        __asm _emit 0x4A
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F8F6E: jne 0x588f8ff5
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F8F74: mov edx, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F8F7A: mov dword ptr [edx + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x54
        // 0x588F8F7D: mov eax, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F8F83: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F8F88: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F8F8C: mov edx, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F8F92: mov dword ptr [edx + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x54
        // 0x588F8F95: mov eax, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F8F9B: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F8F9F: mov edx, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F8FA5: mov dword ptr [edx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x50
        // 0x588F8FA8: mov eax, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F8FAE: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F8FB2: mov edx, dword ptr [esi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F8FB8: mov dword ptr [edx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x50
        // 0x588F8FBB: mov eax, dword ptr [esi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F8FC1: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F8FC5: mov edx, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F8FCB: mov dword ptr [edx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x50
        // 0x588F8FCE: mov eax, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F8FD4: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F8FD8: mov edx, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F8FDE: mov dword ptr [edx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x50
        // 0x588F8FE1: mov eax, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F8FE7: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F8FEB: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F8FF0: jmp 0x588f94bf
        __asm _emit 0xE9
        __asm _emit 0xCA
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F8FF5: movzx eax, byte ptr [esi + 0x6c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x588F8FF9: mov edx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x588F8FFC: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F8FFE: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x588F9001: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x588F9003: lea eax, [edx + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xCA
        // 0x588F9006: imul eax, eax, 0xe0
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F900C: mov eax, dword ptr [eax + 0x589cfd70]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x70
        __asm _emit 0xFD
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588F9012: cmp eax, 0x4b
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x4B
        // 0x588F9015: jge 0x588f91c5
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xAA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F901B: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F9021: add eax, 0x25a
        __asm _emit 0x05
        __asm _emit 0x5A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9026: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F902C: jle 0x588f9045
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588F902E: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588F9030: jl 0x588f9045
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x588F9032: cmp dword ptr [ecx + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9038: je 0x588f9045
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588F903A: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9040: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x81
        // 0x588F9043: jmp 0x588f9047
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F9045: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F9047: mov ecx, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F904D: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588F9050: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588F9052: je 0x588f907c
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588F9054: mov ebx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x588F9057: mov dword ptr [ecx + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x0C
        // 0x588F905A: mov ebx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x14
        // 0x588F905D: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588F9060: mov dword ptr [ecx + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x10
        // 0x588F9063: mov ebx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x18
        // 0x588F9065: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588F9068: mov dword ptr [ecx], ebx
        __asm _emit 0x89
        __asm _emit 0x19
        // 0x588F906A: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x588F906D: mov dword ptr [ecx + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x04
        // 0x588F9070: mov ebx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x08
        // 0x588F9073: mov dword ptr [ecx + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x08
        // 0x588F9076: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588F9079: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588F907C: movzx eax, byte ptr [esi + 0x6c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x588F9080: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F9082: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x588F9085: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x588F9087: lea eax, [edx + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xCA
        // 0x588F908A: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F9090: imul eax, eax, 0xe0
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9096: mov eax, dword ptr [eax + 0x589cfd70]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x70
        __asm _emit 0xFD
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588F909C: add eax, 0x2a5
        __asm _emit 0x05
        __asm _emit 0xA5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F90A1: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F90A7: jle 0x588f90c0
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588F90A9: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588F90AB: jl 0x588f90c0
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x588F90AD: cmp dword ptr [ecx + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F90B3: je 0x588f90c0
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588F90B5: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F90BB: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x81
        // 0x588F90BE: jmp 0x588f90c2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F90C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F90C2: mov ecx, dword ptr [esi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F90C8: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588F90CB: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588F90CD: je 0x588f90f7
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588F90CF: mov ebx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x588F90D2: mov dword ptr [ecx + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x0C
        // 0x588F90D5: mov ebx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x14
        // 0x588F90D8: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588F90DB: mov dword ptr [ecx + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x10
        // 0x588F90DE: mov ebx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x18
        // 0x588F90E0: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588F90E3: mov dword ptr [ecx], ebx
        __asm _emit 0x89
        __asm _emit 0x19
        // 0x588F90E5: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x588F90E8: mov dword ptr [ecx + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x04
        // 0x588F90EB: mov ebx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x08
        // 0x588F90EE: mov dword ptr [ecx + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x08
        // 0x588F90F1: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588F90F4: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588F90F7: movzx eax, byte ptr [esi + 0x6c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x588F90FB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F90FD: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x588F9100: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x588F9102: lea eax, [edx + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xCA
        // 0x588F9105: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F910B: imul eax, eax, 0xe0
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9111: mov eax, dword ptr [eax + 0x589cfd70]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x70
        __asm _emit 0xFD
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588F9117: add eax, 0x2f0
        __asm _emit 0x05
        __asm _emit 0xF0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F911C: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9122: jle 0x588f913b
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588F9124: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588F9126: jl 0x588f913b
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x588F9128: cmp dword ptr [ecx + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F912E: je 0x588f913b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588F9130: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9136: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x81
        // 0x588F9139: jmp 0x588f913d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F913B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F913D: mov ecx, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9143: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588F9146: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588F9148: je 0x588f9172
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588F914A: mov ebx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x588F914D: mov dword ptr [ecx + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x0C
        // 0x588F9150: mov ebx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x14
        // 0x588F9153: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588F9156: mov dword ptr [ecx + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x10
        // 0x588F9159: mov ebx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x18
        // 0x588F915B: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588F915E: mov dword ptr [ecx], ebx
        __asm _emit 0x89
        __asm _emit 0x19
        // 0x588F9160: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x588F9163: mov dword ptr [ecx + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x04
        // 0x588F9166: mov ebx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x08
        // 0x588F9169: mov dword ptr [ecx + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x08
        // 0x588F916C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588F916F: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588F9172: movzx eax, byte ptr [esi + 0x6c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x588F9176: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F9178: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x588F917B: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x588F917D: lea eax, [edx + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xCA
        // 0x588F9180: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F9186: imul eax, eax, 0xe0
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F918C: mov eax, dword ptr [eax + 0x589cfd70]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x70
        __asm _emit 0xFD
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588F9192: add eax, 0x33b
        __asm _emit 0x05
        __asm _emit 0x3B
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9197: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F919D: jle 0x588f9358
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xB5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F91A3: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588F91A5: jl 0x588f9358
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xAD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F91AB: cmp dword ptr [ecx + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F91B1: je 0x588f9358
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F91B7: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F91BD: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x81
        // 0x588F91C0: jmp 0x588f935a
        __asm _emit 0xE9
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F91C5: mov ecx, dword ptr [0x58a246c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F91CB: add eax, -0x19
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xE7
        // 0x588F91CE: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F91D4: jle 0x588f91ed
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588F91D6: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588F91D8: jl 0x588f91ed
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x588F91DA: cmp dword ptr [ecx + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F91E0: je 0x588f91ed
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588F91E2: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F91E8: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x81
        // 0x588F91EB: jmp 0x588f91ef
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F91ED: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F91EF: mov ecx, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F91F5: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588F91F8: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588F91FA: je 0x588f9224
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588F91FC: mov ebx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x588F91FF: mov dword ptr [ecx + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x0C
        // 0x588F9202: mov ebx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x14
        // 0x588F9205: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588F9208: mov dword ptr [ecx + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x10
        // 0x588F920B: mov ebx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x18
        // 0x588F920D: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588F9210: mov dword ptr [ecx], ebx
        __asm _emit 0x89
        __asm _emit 0x19
        // 0x588F9212: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x588F9215: mov dword ptr [ecx + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x04
        // 0x588F9218: mov ebx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x08
        // 0x588F921B: mov dword ptr [ecx + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x08
        // 0x588F921E: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588F9221: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588F9224: movzx eax, byte ptr [esi + 0x6c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x588F9228: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F922A: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x588F922D: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x588F922F: lea eax, [edx + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xCA
        // 0x588F9232: mov ecx, dword ptr [0x58a246c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F9238: imul eax, eax, 0xe0
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F923E: mov eax, dword ptr [eax + 0x589cfd70]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x70
        __asm _emit 0xFD
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588F9244: add eax, 0x19
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x19
        // 0x588F9247: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F924D: jle 0x588f9266
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588F924F: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588F9251: jl 0x588f9266
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x588F9253: cmp dword ptr [ecx + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9259: je 0x588f9266
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588F925B: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9261: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x81
        // 0x588F9264: jmp 0x588f9268
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F9266: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F9268: mov ecx, dword ptr [esi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F926E: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588F9271: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588F9273: je 0x588f929d
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588F9275: mov ebx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x588F9278: mov dword ptr [ecx + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x0C
        // 0x588F927B: mov ebx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x14
        // 0x588F927E: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588F9281: mov dword ptr [ecx + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x10
        // 0x588F9284: mov ebx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x18
        // 0x588F9286: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588F9289: mov dword ptr [ecx], ebx
        __asm _emit 0x89
        __asm _emit 0x19
        // 0x588F928B: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x588F928E: mov dword ptr [ecx + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x04
        // 0x588F9291: mov ebx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x08
        // 0x588F9294: mov dword ptr [ecx + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x08
        // 0x588F9297: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588F929A: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588F929D: movzx eax, byte ptr [esi + 0x6c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x588F92A1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F92A3: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x588F92A6: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x588F92A8: lea eax, [edx + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xCA
        // 0x588F92AB: mov ecx, dword ptr [0x58a246c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F92B1: imul eax, eax, 0xe0
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F92B7: mov eax, dword ptr [eax + 0x589cfd70]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x70
        __asm _emit 0xFD
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588F92BD: add eax, 0x4b
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x4B
        // 0x588F92C0: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F92C6: jle 0x588f92df
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588F92C8: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588F92CA: jl 0x588f92df
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x588F92CC: cmp dword ptr [ecx + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F92D2: je 0x588f92df
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588F92D4: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F92DA: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x81
        // 0x588F92DD: jmp 0x588f92e1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F92DF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F92E1: mov ecx, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F92E7: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588F92EA: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588F92EC: je 0x588f9316
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588F92EE: mov ebx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x588F92F1: mov dword ptr [ecx + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x0C
        // 0x588F92F4: mov ebx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x14
        // 0x588F92F7: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588F92FA: mov dword ptr [ecx + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x10
        // 0x588F92FD: mov ebx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x18
        // 0x588F92FF: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588F9302: mov dword ptr [ecx], ebx
        __asm _emit 0x89
        __asm _emit 0x19
        // 0x588F9304: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x588F9307: mov dword ptr [ecx + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x04
        // 0x588F930A: mov ebx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x08
        // 0x588F930D: mov dword ptr [ecx + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x08
        // 0x588F9310: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588F9313: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588F9316: movzx eax, byte ptr [esi + 0x6c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x588F931A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F931C: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x588F931F: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x588F9321: lea eax, [edx + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xCA
        // 0x588F9324: mov ecx, dword ptr [0x58a246c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F932A: imul eax, eax, 0xe0
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9330: mov eax, dword ptr [eax + 0x589cfd70]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x70
        __asm _emit 0xFD
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588F9336: add eax, 0x7d
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x7D
        // 0x588F9339: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F933F: jle 0x588f9358
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588F9341: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588F9343: jl 0x588f9358
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x588F9345: cmp dword ptr [ecx + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F934B: je 0x588f9358
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588F934D: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9353: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x81
        // 0x588F9356: jmp 0x588f935a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F9358: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F935A: mov ecx, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9360: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588F9363: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588F9365: je 0x588f9390
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x588F9367: mov ebx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x588F936A: mov dword ptr [ecx + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x0C
        // 0x588F936D: mov ebx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x14
        // 0x588F9370: mov dword ptr [ecx + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x10
        // 0x588F9373: mov ebx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x18
        // 0x588F9376: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588F9379: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588F937C: mov dword ptr [ecx], ebx
        __asm _emit 0x89
        __asm _emit 0x19
        // 0x588F937E: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x588F9381: mov dword ptr [ecx + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x04
        // 0x588F9384: mov ebx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x08
        // 0x588F9387: mov dword ptr [ecx + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x08
        // 0x588F938A: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588F938D: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588F9390: movzx eax, byte ptr [esi + 0x6c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x588F9394: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F9396: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x588F9399: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x588F939B: lea eax, [edx + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xCA
        // 0x588F939E: mov ecx, dword ptr [0x58a24ae0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE0
        __asm _emit 0x4A
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F93A4: imul eax, eax, 0xe0
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F93AA: mov eax, dword ptr [eax + 0x589cfd74]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x74
        __asm _emit 0xFD
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588F93B0: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F93B6: jle 0x588f93cf
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588F93B8: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588F93BA: jl 0x588f93cf
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x588F93BC: cmp dword ptr [ecx + 0x190], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F93C2: je 0x588f93cf
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588F93C4: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x588F93C7: add eax, dword ptr [ecx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F93CD: jmp 0x588f93d1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F93CF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F93D1: mov ecx, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F93D7: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x588F93DA: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588F93DC: je 0x588f9406
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588F93DE: mov ebx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x18
        // 0x588F93E1: mov dword ptr [ecx + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x0C
        // 0x588F93E4: mov ebx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x1C
        // 0x588F93E7: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x588F93EA: mov dword ptr [ecx + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x10
        // 0x588F93ED: mov ebx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x18
        // 0x588F93EF: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588F93F2: mov dword ptr [ecx], ebx
        __asm _emit 0x89
        __asm _emit 0x19
        // 0x588F93F4: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x588F93F7: mov dword ptr [ecx + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x04
        // 0x588F93FA: mov ebx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x08
        // 0x588F93FD: mov dword ptr [ecx + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x08
        // 0x588F9400: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588F9403: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588F9406: movzx eax, byte ptr [esi + 0x6c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x588F940A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F940C: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x588F940F: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x588F9411: lea edx, [edx + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xCA
        // 0x588F9414: mov ecx, dword ptr [0x58a24ae0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE0
        __asm _emit 0x4A
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F941A: imul edx, edx, 0xe0
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9420: mov eax, dword ptr [edx + 0x589cfd74]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x74
        __asm _emit 0xFD
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588F9426: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F942B: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x588F942D: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9433: jle 0x588f944c
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588F9435: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588F9437: jl 0x588f944c
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x588F9439: cmp dword ptr [ecx + 0x190], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F943F: je 0x588f944c
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588F9441: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x588F9444: add eax, dword ptr [ecx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F944A: jmp 0x588f944e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F944C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F944E: mov ecx, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9454: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x588F9457: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588F9459: je 0x588f9483
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588F945B: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588F945E: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588F9461: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x588F9464: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x588F9467: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588F946A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588F946C: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588F946F: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588F9471: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588F9474: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588F9477: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588F947A: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588F947D: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588F9480: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588F9483: mov eax, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9489: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x588F948D: mov eax, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9493: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x588F9497: mov eax, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F949D: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x588F94A1: mov eax, dword ptr [esi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F94A7: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x588F94AB: mov eax, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F94B1: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x588F94B5: mov eax, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F94BB: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x588F94BF: cmp byte ptr [esi + 0x6c], 0
        __asm _emit 0x80
        __asm _emit 0x7E
        __asm _emit 0x6C
        __asm _emit 0x00
        // 0x588F94C3: je 0x588f94e8
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x588F94C5: mov eax, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F94CB: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x588F94CF: movzx ecx, byte ptr [esi + 0x6c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588F94D3: mov edx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F94D9: mov dword ptr [edx + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x50
        // 0x588F94DC: mov eax, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F94E2: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x588F94E6: jmp 0x588f9503
        __asm _emit 0xEB
        __asm _emit 0x1B
        // 0x588F94E8: mov eax, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F94EE: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F94F3: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F94F7: mov eax, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F94FD: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588F94FF: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588F9503: mov edi, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9509: xor bl, bl
        __asm _emit 0x32
        __asm _emit 0xDB
        // 0x588F950B: cmp edi, 0xf
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x0F
        // 0x588F950E: jbe 0x588f9515
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588F9510: xor edi, 0x20
        __asm _emit 0x83
        __asm _emit 0xF7
        __asm _emit 0x20
        // 0x588F9513: mov bl, 1
        __asm _emit 0xB3
        __asm _emit 0x01
        // 0x588F9515: cmp edi, 0xe
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x0E
        // 0x588F9518: ja 0x588f95ed
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xCF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F951E: jmp dword ptr [edi*4 + 0x588f989c]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0xBD
        __asm _emit 0x9C
        __asm _emit 0x98
        __asm _emit 0x8F
        __asm _emit 0x58
        // 0x588F9525: mov eax, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F952B: mov dword ptr [eax + 0x60], 0xffffff
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588F9532: jmp 0x588f95ed
        __asm _emit 0xE9
        __asm _emit 0xB6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9537: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F953D: mov dword ptr [ecx + 0x60], 0xffff
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x60
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9544: jmp 0x588f95ed
        __asm _emit 0xE9
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9549: mov edx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F954F: mov dword ptr [edx + 0x60], 0xff00
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9556: jmp 0x588f95ed
        __asm _emit 0xE9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F955B: mov eax, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9561: mov dword ptr [eax + 0x60], 0xff6612
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x12
        __asm _emit 0x66
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588F9568: jmp 0x588f95ed
        __asm _emit 0xE9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F956D: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9573: mov dword ptr [ecx + 0x60], 0x96f0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x60
        __asm _emit 0xF0
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F957A: jmp 0x588f95ed
        __asm _emit 0xEB
        __asm _emit 0x71
        // 0x588F957C: mov edx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9582: mov dword ptr [edx + 0x60], 0xff2483
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x60
        __asm _emit 0x83
        __asm _emit 0x24
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588F9589: jmp 0x588f95ed
        __asm _emit 0xEB
        __asm _emit 0x62
        // 0x588F958B: mov eax, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9591: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x588F9595: mov eax, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F959B: mov dword ptr [eax + 0x50], 9
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F95A2: mov eax, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F95A8: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x588F95AC: jmp 0x588f95ed
        __asm _emit 0xEB
        __asm _emit 0x3F
        // 0x588F95AE: mov eax, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F95B4: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x588F95B8: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F95BE: mov dword ptr [ecx + 0x50], 0xa
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F95C5: mov eax, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F95CB: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x588F95CF: jmp 0x588f95ed
        __asm _emit 0xEB
        __asm _emit 0x1C
        // 0x588F95D1: mov edx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F95D7: mov dword ptr [edx + 0x60], 0xd00ff
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x60
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588F95DE: jmp 0x588f95ed
        __asm _emit 0xEB
        __asm _emit 0x0D
        // 0x588F95E0: mov eax, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F95E6: mov dword ptr [eax + 0x60], 0x239fc8
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0xC8
        __asm _emit 0x9F
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x588F95ED: lea ecx, [esi + 0x75]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x75
        // 0x588F95F0: push ecx
        __asm _emit 0x51
        // 0x588F95F1: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F95F7: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0x86
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x588F95FC: mov eax, dword ptr [esi + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9602: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9607: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588F960B: mov eax, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9611: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588F9613: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F9617: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F961D: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588F9621: mov eax, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9627: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F962B: lea eax, [edi - 2]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0xFE
        // 0x588F962E: cmp eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0C
        // 0x588F9631: ja 0x588f9847
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9637: movzx edx, byte ptr [eax + 0x588f98ec]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x90
        __asm _emit 0xEC
        __asm _emit 0x98
        __asm _emit 0x8F
        __asm _emit 0x58
        // 0x588F963E: jmp dword ptr [edx*4 + 0x588f98d8]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xD8
        __asm _emit 0x98
        __asm _emit 0x8F
        __asm _emit 0x58
        // 0x588F9645: mov eax, dword ptr [0x58a24730]
        __asm _emit 0xA1
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F964A: cmp dword ptr [eax + 0x164], 0x3d
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3D
        // 0x588F9651: jle 0x588f966a
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588F9653: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F965A: je 0x588f966a
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F965C: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9662: mov eax, dword ptr [eax + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9668: jmp 0x588f966c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F966A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F966C: mov ecx, dword ptr [esi + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9672: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588F9675: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F9677: je 0x588f96a1
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588F9679: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588F967C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588F967F: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588F9682: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588F9685: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588F9688: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588F968A: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588F968D: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588F968F: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588F9692: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588F9695: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588F9698: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588F969B: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588F969E: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588F96A1: mov eax, dword ptr [0x58a24730]
        __asm _emit 0xA1
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F96A6: cmp dword ptr [eax + 0x164], 0x3c
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3C
        // 0x588F96AD: jle 0x588f96c6
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588F96AF: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F96B6: je 0x588f96c6
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F96B8: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F96BE: mov eax, dword ptr [ecx + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F96C4: jmp 0x588f96c8
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F96C6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F96C8: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F96CE: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588F96D1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F96D3: je 0x588f9833
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x5A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F96D9: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588F96DC: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588F96DF: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588F96E2: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588F96E5: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588F96E8: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588F96EA: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588F96ED: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588F96EF: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588F96F2: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588F96F5: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588F96F8: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588F96FB: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588F96FE: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588F9701: jmp 0x588f9833
        __asm _emit 0xE9
        __asm _emit 0x2D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9706: mov eax, dword ptr [0x58a24730]
        __asm _emit 0xA1
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F970B: cmp dword ptr [eax + 0x164], 0x119
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9715: jle 0x588f972e
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588F9717: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F971E: je 0x588f972e
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F9720: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9726: mov eax, dword ptr [ecx + 0x464]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F972C: jmp 0x588f9730
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F972E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F9730: mov ecx, dword ptr [esi + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9736: push eax
        __asm _emit 0x50
        // 0x588F9737: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0x7F
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x588F973C: mov eax, dword ptr [0x58a24730]
        __asm _emit 0xA1
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F9741: cmp dword ptr [eax + 0x164], 0x11a
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F974B: jle 0x588f9825
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9751: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9758: je 0x588f9825
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F975E: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9764: mov eax, dword ptr [edx + 0x468]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F976A: jmp 0x588f9827
        __asm _emit 0xE9
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F976F: mov eax, dword ptr [0x58a24730]
        __asm _emit 0xA1
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F9774: cmp dword ptr [eax + 0x164], 0x11b
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F977E: jle 0x588f9797
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588F9780: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9787: je 0x588f9797
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F9789: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F978F: mov eax, dword ptr [eax + 0x46c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x6C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9795: jmp 0x588f9799
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F9797: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F9799: mov ecx, dword ptr [esi + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F979F: push eax
        __asm _emit 0x50
        // 0x588F97A0: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x7F
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x588F97A5: mov eax, dword ptr [0x58a24730]
        __asm _emit 0xA1
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F97AA: cmp dword ptr [eax + 0x164], 0x11c
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F97B4: jle 0x588f9825
        __asm _emit 0x7E
        __asm _emit 0x6F
        // 0x588F97B6: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F97BD: je 0x588f9825
        __asm _emit 0x74
        __asm _emit 0x66
        // 0x588F97BF: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F97C5: mov eax, dword ptr [ecx + 0x470]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x70
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F97CB: jmp 0x588f9827
        __asm _emit 0xEB
        __asm _emit 0x5A
        // 0x588F97CD: mov eax, dword ptr [0x58a24730]
        __asm _emit 0xA1
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F97D2: cmp dword ptr [eax + 0x164], 0x3d
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3D
        // 0x588F97D9: jle 0x588f97f2
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588F97DB: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F97E2: je 0x588f97f2
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F97E4: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F97EA: mov eax, dword ptr [edx + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F97F0: jmp 0x588f97f4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F97F2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F97F4: mov ecx, dword ptr [esi + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F97FA: push eax
        __asm _emit 0x50
        // 0x588F97FB: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0x7E
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x588F9800: mov eax, dword ptr [0x58a24730]
        __asm _emit 0xA1
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F9805: cmp dword ptr [eax + 0x164], 0x3c
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3C
        // 0x588F980C: jle 0x588f9825
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588F980E: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9815: je 0x588f9825
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F9817: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F981D: mov eax, dword ptr [eax + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9823: jmp 0x588f9827
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F9825: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F9827: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F982D: push eax
        __asm _emit 0x50
        // 0x588F982E: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x588F9833: mov eax, dword ptr [esi + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9839: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x588F983D: mov eax, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9843: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x588F9847: test bl, bl
        __asm _emit 0x84
        __asm _emit 0xDB
        // 0x588F9849: je 0x588f985f
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x588F984B: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9851: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x588F9855: mov eax, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F985B: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x588F985F: mov eax, dword ptr [esi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9865: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F986A: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F986E: mov eax, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9874: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588F9876: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588F987A: cmp byte ptr [esi + 0x69], 1
        __asm _emit 0x80
        __asm _emit 0x7E
        __asm _emit 0x69
        __asm _emit 0x01
        // 0x588F987E: jne 0x588f9894
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x588F9880: mov eax, dword ptr [esi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9886: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x588F988A: mov esi, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9890: or word ptr [esi + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x6E
        __asm _emit 0x24
        // 0x588F9894: pop edi
        __asm _emit 0x5F
        // 0x588F9895: pop esi
        __asm _emit 0x5E
        // 0x588F9896: pop ebp
        __asm _emit 0x5D
        // 0x588F9897: pop ebx
        __asm _emit 0x5B
        // 0x588F9898: ret
        __asm _emit 0xC3
    }
}
