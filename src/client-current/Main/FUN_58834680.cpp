// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1017 bytes in 1 exact ranges.
// Source symbol alias: FUN_58834680.

// Ghidra body range 0x58834680..0x58834A79; 1017 mapped bytes.
extern "C" __declspec(naked) void FUN_58834680_segment_00() {
    __asm {
        // 0x58834680: push esi
        __asm _emit 0x56
        // 0x58834681: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58834683: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58834687: push edi
        __asm _emit 0x57
        // 0x58834688: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x5883468A: je 0x58834a71
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834690: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x58834693: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58834697: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58834699: je 0x588346bf
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x5883469B: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x34
        // 0x5883469E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588346A0: je 0x588346b8
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588346A2: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588346A4: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588346A6: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x588346A9: push edi
        __asm _emit 0x57
        // 0x588346AA: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588346AC: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x588346AF: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x34
        // 0x588346B2: je 0x588346bf
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588346B4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588346B6: jne 0x588346a2
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x588346B8: pop edi
        __asm _emit 0x5F
        // 0x588346B9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588346BB: pop esi
        __asm _emit 0x5E
        // 0x588346BC: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588346BF: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x588346C2: cmp eax, 0x201
        __asm _emit 0x3D
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588346C7: ja 0x58834a46
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x79
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588346CD: je 0x588349ee
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x1B
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588346D3: cmp eax, 0x100
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588346D8: je 0x58834759
        __asm _emit 0x74
        __asm _emit 0x7F
        // 0x588346DA: cmp eax, 0x200
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588346DF: jne 0x58834a71
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588346E5: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588346EB: mov edi, dword ptr [esi + 0x214]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588346F1: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x588346F4: push edx
        __asm _emit 0x52
        // 0x588346F5: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588346F7: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0xCE
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x588346FC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588346FE: je 0x5883472a
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x58834700: cmp dword ptr [esi + 0x344], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x44
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834707: jne 0x5883472a
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x58834709: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x5883470D: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x5883470F: jne 0x58834a71
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834715: mov ecx, dword ptr [esi + 0x214]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883471B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883471D: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0xCE
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58834722: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x58834725: pop edi
        __asm _emit 0x5F
        // 0x58834726: pop esi
        __asm _emit 0x5E
        // 0x58834727: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5883472A: mov cx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x24
        // 0x5883472E: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x58834731: je 0x58834a71
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x3A
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834737: cmp dword ptr [esi + 0x344], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x44
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883473E: jne 0x58834a71
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x2D
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834744: mov ecx, dword ptr [esi + 0x214]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883474A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883474C: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0xCE
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58834751: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x58834754: pop edi
        __asm _emit 0x5F
        // 0x58834755: pop esi
        __asm _emit 0x5E
        // 0x58834756: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58834759: mov edi, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x08
        // 0x5883475C: lea eax, [edi - 0x21]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0xDF
        // 0x5883475F: cmp eax, 7
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x07
        // 0x58834762: ja 0x58834a71
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x09
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834768: jmp dword ptr [eax*4 + 0x58834a7c]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x7C
        __asm _emit 0x4A
        __asm _emit 0x83
        __asm _emit 0x58
        // 0x5883476F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58834771: call 0x587b6be0
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0x24
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58834776: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x58834779: pop edi
        __asm _emit 0x5F
        // 0x5883477A: pop esi
        __asm _emit 0x5E
        // 0x5883477B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5883477E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58834780: call 0x587b6c60
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0x24
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58834785: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x58834788: pop edi
        __asm _emit 0x5F
        // 0x58834789: pop esi
        __asm _emit 0x5E
        // 0x5883478A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5883478D: cmp dword ptr [esi + 0x344], 1
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x44
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58834794: jne 0x58834a71
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883479A: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588347A0: cmp dword ptr [ecx + 0x88], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588347A7: jle 0x58834a71
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588347AD: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x3A
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588347B2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588347B4: jle 0x58834a71
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xB7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588347BA: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588347C0: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0x39
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588347C5: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588347CB: dec eax
        __asm _emit 0x48
        // 0x588347CC: push eax
        __asm _emit 0x50
        // 0x588347CD: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0x40
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588347D2: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588347D8: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0x39
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588347DD: mov ecx, dword ptr [esi + 0x250]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588347E3: push eax
        __asm _emit 0x50
        // 0x588347E4: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0x40
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588347E9: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588347EF: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0x39
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588347F4: mov ecx, dword ptr [esi + 0x254]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588347FA: push eax
        __asm _emit 0x50
        // 0x588347FB: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x40
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58834800: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58834802: call 0x58834520
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58834807: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883480D: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0x39
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58834812: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834818: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5883481A: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0x39
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5883481F: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x58834821: jl 0x58834844
        __asm _emit 0x7C
        __asm _emit 0x21
        // 0x58834823: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834829: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0x39
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5883482E: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834834: lea edi, [eax + 4]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x58834837: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0x39
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5883483C: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5883483E: jl 0x588349df
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x9B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834844: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883484A: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0x39
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5883484F: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834855: push eax
        __asm _emit 0x50
        // 0x58834856: call 0x58908190
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0x39
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5883485B: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834861: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0x39
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58834866: mov ecx, dword ptr [esi + 0x250]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883486C: push eax
        __asm _emit 0x50
        // 0x5883486D: call 0x58908190
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0x39
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58834872: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834878: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x39
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5883487D: jmp 0x588349d3
        __asm _emit 0xE9
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834882: cmp dword ptr [esi + 0x344], 1
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x44
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58834889: jne 0x58834a71
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883488F: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834895: mov edi, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883489B: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5883489D: jle 0x58834a71
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xCE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588348A3: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0x39
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588348A8: dec edi
        __asm _emit 0x4F
        // 0x588348A9: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588348AB: jge 0x58834a71
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588348B1: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588348B7: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0x39
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588348BC: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588348C2: inc eax
        __asm _emit 0x40
        // 0x588348C3: push eax
        __asm _emit 0x50
        // 0x588348C4: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0x3F
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588348C9: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588348CF: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0x38
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588348D4: mov ecx, dword ptr [esi + 0x250]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588348DA: push eax
        __asm _emit 0x50
        // 0x588348DB: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x3F
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588348E0: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588348E6: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0x38
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588348EB: mov ecx, dword ptr [esi + 0x254]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588348F1: push eax
        __asm _emit 0x50
        // 0x588348F2: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0x3F
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588348F7: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588348F9: call 0x58834520
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588348FE: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834904: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0x38
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58834909: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883490F: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58834911: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0x38
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58834916: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x58834918: jl 0x58834937
        __asm _emit 0x7C
        __asm _emit 0x1D
        // 0x5883491A: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834920: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0x38
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58834925: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883492B: lea edi, [eax + 4]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x5883492E: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0x38
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58834933: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58834935: jl 0x5883497c
        __asm _emit 0x7C
        __asm _emit 0x45
        // 0x58834937: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883493D: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0x38
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58834942: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834948: push eax
        __asm _emit 0x50
        // 0x58834949: call 0x58908190
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0x38
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5883494E: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834954: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0x38
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58834959: mov ecx, dword ptr [esi + 0x250]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883495F: push eax
        __asm _emit 0x50
        // 0x58834960: call 0x58908190
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0x38
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58834965: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883496B: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x38
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58834970: mov ecx, dword ptr [esi + 0x254]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834976: push eax
        __asm _emit 0x50
        // 0x58834977: call 0x58908190
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0x38
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5883497C: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834982: mov edi, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834988: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0x37
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5883498D: add edi, -4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0xFC
        // 0x58834990: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x58834992: jge 0x588349df
        __asm _emit 0x7D
        __asm _emit 0x4B
        // 0x58834994: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883499A: mov edx, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588349A0: sub edx, 4
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x04
        // 0x588349A3: push edx
        __asm _emit 0x52
        // 0x588349A4: call 0x58908190
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x37
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588349A9: mov eax, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588349AF: mov ecx, dword ptr [eax + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588349B5: sub ecx, 4
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x04
        // 0x588349B8: push ecx
        __asm _emit 0x51
        // 0x588349B9: mov ecx, dword ptr [esi + 0x250]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588349BF: call 0x58908190
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0x37
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588349C4: mov edx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588349CA: mov eax, dword ptr [edx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588349D0: sub eax, 4
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x588349D3: mov ecx, dword ptr [esi + 0x254]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588349D9: push eax
        __asm _emit 0x50
        // 0x588349DA: call 0x58908190
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0x37
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588349DF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588349E1: call 0x58834030
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588349E6: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588349E9: pop edi
        __asm _emit 0x5F
        // 0x588349EA: pop esi
        __asm _emit 0x5E
        // 0x588349EB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588349EE: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588349F4: mov edi, dword ptr [esi + 0x214]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588349FA: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x588349FD: push ecx
        __asm _emit 0x51
        // 0x588349FE: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58834A00: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0xCB
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58834A05: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58834A07: je 0x58834a1f
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x58834A09: mov dword ptr [esi + 0x344], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834A13: mov dx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x24
        // 0x58834A17: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x58834A1A: jmp 0x5883470f
        __asm _emit 0xE9
        __asm _emit 0xF0
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58834A1F: mov dword ptr [esi + 0x344], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834A29: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x58834A2D: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x58834A2F: je 0x58834a71
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x58834A31: mov ecx, dword ptr [esi + 0x214]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834A37: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58834A39: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0xCB
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58834A3E: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x58834A41: pop edi
        __asm _emit 0x5F
        // 0x58834A42: pop esi
        __asm _emit 0x5E
        // 0x58834A43: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58834A46: cmp eax, 0x20a
        __asm _emit 0x3D
        __asm _emit 0x0A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834A4B: jne 0x58834a71
        __asm _emit 0x75
        __asm _emit 0x24
        // 0x58834A4D: mov ecx, dword ptr [esi + 0x214]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834A53: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x58834A57: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x58834A5A: je 0x58834a71
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x58834A5C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58834A5E: cmp word ptr [edi + 0xa], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x47
        __asm _emit 0x0A
        // 0x58834A62: jle 0x58834a69
        __asm _emit 0x7E
        __asm _emit 0x05
        // 0x58834A64: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834A69: push eax
        __asm _emit 0x50
        // 0x58834A6A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58834A6C: call 0x58834120
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58834A71: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x58834A74: pop edi
        __asm _emit 0x5F
        // 0x58834A75: pop esi
        __asm _emit 0x5E
        // 0x58834A76: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
