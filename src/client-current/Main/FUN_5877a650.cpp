// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 850 bytes in 1 exact ranges.
// Source symbol alias: FUN_5877a650.

// Ghidra body range 0x5877A650..0x5877A9A2; 850 mapped bytes.
extern "C" __declspec(naked) void FUN_5877a650_segment_00() {
    __asm {
        // 0x5877A650: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5877A654: push esi
        __asm _emit 0x56
        // 0x5877A655: push edi
        __asm _emit 0x57
        // 0x5877A656: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5877A658: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5877A65B: jne 0x5877a8b6
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x55
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A661: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5877A665: cmp eax, dword ptr [esi + 0x210]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A66B: jne 0x5877a71e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A671: test dword ptr [esp + 0x14], 0xffff0000
        __asm _emit 0xF7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877A679: jne 0x5877a99b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A67F: cmp dword ptr [esi + 0xb8], -1
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        // 0x5877A686: je 0x5877a6af
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x5877A688: movzx eax, word ptr [esi + 0x5e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0x5E
        // 0x5877A68C: shr eax, 0xc
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0C
        // 0x5877A68F: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5877A692: je 0x5877a6af
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x5877A694: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877A696: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877A698: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877A69A: push 0x34
        __asm _emit 0x6A
        __asm _emit 0x34
        // 0x5877A69C: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x14
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877A6A1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5877A6A3: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0xA6
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x5877A6A8: pop edi
        __asm _emit 0x5F
        // 0x5877A6A9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877A6AB: pop esi
        __asm _emit 0x5E
        // 0x5877A6AC: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5877A6AF: test dword ptr [esi + 0xb4], 0x10000000
        __asm _emit 0xF7
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        // 0x5877A6B9: je 0x5877a6fb
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x5877A6BB: test byte ptr [esi + 0x5e], 0xf
        __asm _emit 0xF6
        __asm _emit 0x46
        __asm _emit 0x5E
        __asm _emit 0x0F
        // 0x5877A6BF: je 0x5877a6fb
        __asm _emit 0x74
        __asm _emit 0x3A
        // 0x5877A6C1: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877A6C6: mov ecx, dword ptr [eax + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A6CC: mov ecx, dword ptr [ecx + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A6D2: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5877A6D4: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5877A6D7: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5877A6D9: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877A6DF: mov edx, dword ptr [ecx + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A6E5: mov ecx, dword ptr [edx + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A6EB: add esi, 0x50
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x50
        // 0x5877A6EE: push esi
        __asm _emit 0x56
        // 0x5877A6EF: call 0x588aefb0
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0x48
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5877A6F4: pop edi
        __asm _emit 0x5F
        // 0x5877A6F5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877A6F7: pop esi
        __asm _emit 0x5E
        // 0x5877A6F8: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5877A6FB: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x5877A6FE: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877A704: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877A706: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877A708: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877A70A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877A70C: push eax
        __asm _emit 0x50
        // 0x5877A70D: push 0x8001020d
        __asm _emit 0x68
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x5877A712: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0x65
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x5877A717: pop edi
        __asm _emit 0x5F
        // 0x5877A718: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877A71A: pop esi
        __asm _emit 0x5E
        // 0x5877A71B: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5877A71E: cmp eax, dword ptr [esi + 0x214]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A724: jne 0x5877a76f
        __asm _emit 0x75
        __asm _emit 0x49
        // 0x5877A726: test dword ptr [esp + 0x14], 0xffff0000
        __asm _emit 0xF7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877A72E: jne 0x5877a99b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x67
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A734: mov ecx, dword ptr [0x58a245ec]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877A73A: cmp word ptr [ecx + 0x128], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A742: je 0x5877a761
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x5877A744: mov edx, 1
        __asm _emit 0xBA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A749: mov word ptr [ecx + 0x12a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x2A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A750: mov eax, dword ptr [0x58a245ec]
        __asm _emit 0xA1
        __asm _emit 0xEC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877A755: mov dword ptr [eax + 0xec], esi
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A75B: mov ecx, dword ptr [0x58a245ec]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877A761: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5877A763: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5877A766: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5877A768: pop edi
        __asm _emit 0x5F
        // 0x5877A769: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877A76B: pop esi
        __asm _emit 0x5E
        // 0x5877A76C: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5877A76F: cmp eax, dword ptr [esi + 0x20c]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A775: jne 0x5877a7a4
        __asm _emit 0x75
        __asm _emit 0x2D
        // 0x5877A777: test dword ptr [esp + 0x14], 0xffff0000
        __asm _emit 0xF7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877A77F: jne 0x5877a99b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x16
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A785: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877A78B: mov edx, dword ptr [ecx + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A791: mov ecx, dword ptr [edx + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A797: push esi
        __asm _emit 0x56
        // 0x5877A798: call 0x58869cf0
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0xF5
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5877A79D: pop edi
        __asm _emit 0x5F
        // 0x5877A79E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877A7A0: pop esi
        __asm _emit 0x5E
        // 0x5877A7A1: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5877A7A4: cmp eax, dword ptr [esi + 0x218]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A7AA: je 0x5877a99b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xEB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A7B0: cmp eax, dword ptr [esi + 0x21c]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A7B6: jne 0x5877a842
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A7BC: test dword ptr [esp + 0x14], 0xffff0000
        __asm _emit 0xF7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877A7C4: jne 0x5877a99b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A7CA: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877A7CF: cmp dword ptr [eax + 0xd78], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A7D6: je 0x5877a99b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A7DC: mov ecx, dword ptr [eax + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A7E2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877A7E4: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x6E
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x5877A7E9: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877A7EE: mov ecx, dword ptr [eax + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A7F4: mov ecx, dword ptr [ecx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A7FA: push esi
        __asm _emit 0x56
        // 0x5877A7FB: call 0x588c08a0
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0x60
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5877A800: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877A805: mov edx, dword ptr [eax + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A80B: mov eax, dword ptr [eax + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A811: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A817: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877A819: add edx, 0x54
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x54
        // 0x5877A81C: push edx
        __asm _emit 0x52
        // 0x5877A81D: call 0x588c08b0
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0x60
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5877A822: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877A828: mov edx, dword ptr [ecx + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A82E: mov ecx, dword ptr [edx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A834: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5877A836: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5877A839: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5877A83B: pop edi
        __asm _emit 0x5F
        // 0x5877A83C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877A83E: pop esi
        __asm _emit 0x5E
        // 0x5877A83F: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5877A842: cmp eax, dword ptr [esi + 0x248]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A848: jne 0x5877a99b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x4D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A84E: mov eax, dword ptr [0x58a24580]
        __asm _emit 0xA1
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877A853: cmp eax, dword ptr [0x58a24598]
        __asm _emit 0x3B
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877A859: jne 0x5877a99b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A85F: cmp dword ptr [esi + 0xb8], -1
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        // 0x5877A866: jne 0x5877a99b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x2F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A86C: mov ecx, dword ptr [0x58a245f0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877A872: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x5877A876: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x5877A879: jne 0x5877a99b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A87F: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877A884: mov ecx, dword ptr [eax + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A88A: mov ecx, dword ptr [ecx + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A890: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5877A892: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5877A895: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5877A897: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877A89D: mov edx, dword ptr [ecx + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A8A3: mov ecx, dword ptr [edx + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A8A9: push esi
        __asm _emit 0x56
        // 0x5877A8AA: call 0x58874310
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0x9A
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5877A8AF: pop edi
        __asm _emit 0x5F
        // 0x5877A8B0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877A8B2: pop esi
        __asm _emit 0x5E
        // 0x5877A8B3: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5877A8B6: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x5877A8B9: jne 0x5877a952
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A8BF: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5877A8C3: cmp edi, dword ptr [esi + 0x210]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A8C9: jne 0x5877a8ef
        __asm _emit 0x75
        __asm _emit 0x24
        // 0x5877A8CB: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A8D1: and eax, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0xFE
        // 0x5877A8D4: cmp eax, 0x80000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x5877A8D9: jne 0x5877a8e8
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x5877A8DB: test byte ptr [esi + 0x5e], 0xf
        __asm _emit 0xF6
        __asm _emit 0x46
        __asm _emit 0x5E
        __asm _emit 0x0F
        // 0x5877A8DF: je 0x5877a8e8
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x5877A8E1: push 0x58996948
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x69
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5877A8E6: jmp 0x5877a92e
        __asm _emit 0xEB
        __asm _emit 0x46
        // 0x5877A8E8: push 0x58996924
        __asm _emit 0x68
        __asm _emit 0x24
        __asm _emit 0x69
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5877A8ED: jmp 0x5877a92e
        __asm _emit 0xEB
        __asm _emit 0x3F
        // 0x5877A8EF: cmp edi, dword ptr [esi + 0x214]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A8F5: jne 0x5877a8fe
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x5877A8F7: push 0x58996900
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x69
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5877A8FC: jmp 0x5877a92e
        __asm _emit 0xEB
        __asm _emit 0x30
        // 0x5877A8FE: cmp edi, dword ptr [esi + 0x20c]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A904: jne 0x5877a90d
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x5877A906: push 0x589968e0
        __asm _emit 0x68
        __asm _emit 0xE0
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5877A90B: jmp 0x5877a92e
        __asm _emit 0xEB
        __asm _emit 0x21
        // 0x5877A90D: cmp edi, dword ptr [esi + 0x218]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A913: je 0x5877a99b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A919: cmp edi, dword ptr [esi + 0x21c]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A91F: je 0x5877a99b
        __asm _emit 0x74
        __asm _emit 0x7A
        // 0x5877A921: cmp edi, dword ptr [esi + 0x248]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A927: jne 0x5877a99b
        __asm _emit 0x75
        __asm _emit 0x72
        // 0x5877A929: push 0x589968b8
        __asm _emit 0x68
        __asm _emit 0xB8
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5877A92E: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5877A934: mov ecx, dword ptr [0x58a24820]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877A93A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5877A93D: push eax
        __asm _emit 0x50
        // 0x5877A93E: push 0x32
        __asm _emit 0x6A
        __asm _emit 0x32
        // 0x5877A940: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A945: push edi
        __asm _emit 0x57
        // 0x5877A946: call 0x587626c0
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0x7D
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x5877A94B: pop edi
        __asm _emit 0x5F
        // 0x5877A94C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877A94E: pop esi
        __asm _emit 0x5E
        // 0x5877A94F: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5877A952: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x5877A955: jne 0x5877a96e
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x5877A957: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5877A95B: push ecx
        __asm _emit 0x51
        // 0x5877A95C: mov ecx, dword ptr [0x58a24820]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877A962: call 0x58762610
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x7C
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x5877A967: pop edi
        __asm _emit 0x5F
        // 0x5877A968: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877A96A: pop esi
        __asm _emit 0x5E
        // 0x5877A96B: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5877A96E: cmp eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0C
        // 0x5877A971: je 0x5877a99b
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5877A973: cmp eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0F
        // 0x5877A976: jne 0x5877a99b
        __asm _emit 0x75
        __asm _emit 0x23
        // 0x5877A978: cmp dword ptr [esp + 0x14], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5877A97D: jne 0x5877a99b
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x5877A97F: mov edx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x50
        // 0x5877A982: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877A988: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877A98A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877A98C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877A98E: push edx
        __asm _emit 0x52
        // 0x5877A98F: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5877A991: push 0x80011034
        __asm _emit 0x68
        __asm _emit 0x34
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x5877A996: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0x62
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x5877A99B: pop edi
        __asm _emit 0x5F
        // 0x5877A99C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877A99E: pop esi
        __asm _emit 0x5E
        // 0x5877A99F: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
