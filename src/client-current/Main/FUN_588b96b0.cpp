// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588B96B0 .. +0xAFC bytes.
extern "C" __declspec(naked) void FUN_588b96b0() {
    __asm {
        // 0x588B96B0: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x588B96B3: push ebx
        __asm _emit 0x53
        // 0x588B96B4: push ebp
        __asm _emit 0x55
        // 0x588B96B5: push esi
        __asm _emit 0x56
        // 0x588B96B6: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588B96B8: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588B96BC: push edi
        __asm _emit 0x57
        // 0x588B96BD: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x588B96BF: je 0x588ba19f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xDA
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B96C5: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x588B96C8: mov ebp, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588B96CC: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588B96CE: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B96D0: je 0x588b9702
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x588B96D2: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x34
        // 0x588B96D5: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B96D7: je 0x588b96f6
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x588B96D9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B96E0: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588B96E2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B96E4: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x588B96E7: push ebp
        __asm _emit 0x55
        // 0x588B96E8: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588B96EA: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x588B96ED: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x34
        // 0x588B96F0: je 0x588b9702
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x588B96F2: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B96F4: jne 0x588b96e0
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x588B96F6: pop edi
        __asm _emit 0x5F
        // 0x588B96F7: pop esi
        __asm _emit 0x5E
        // 0x588B96F8: pop ebp
        __asm _emit 0x5D
        // 0x588B96F9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B96FB: pop ebx
        __asm _emit 0x5B
        // 0x588B96FC: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B96FF: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B9702: cmp word ptr [esi + 0x19e], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x9E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9709: jne 0x588ba19f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B970F: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x588B9712: cmp eax, 0x200
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9717: ja 0x588b9ac5
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xA8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B971D: je 0x588b995b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9723: cmp eax, 0x100
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9728: jne 0x588ba19f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x71
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B972E: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x588B9731: cmp eax, 0x1b
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x1B
        // 0x588B9734: jne 0x588b9758
        __asm _emit 0x75
        __asm _emit 0x22
        // 0x588B9736: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x588B9738: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x588B973B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B973D: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588B973F: mov ecx, dword ptr [0x58a245a8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B9745: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588B9747: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0x7E
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B974C: pop edi
        __asm _emit 0x5F
        // 0x588B974D: pop esi
        __asm _emit 0x5E
        // 0x588B974E: pop ebp
        __asm _emit 0x5D
        // 0x588B974F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B9751: pop ebx
        __asm _emit 0x5B
        // 0x588B9752: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B9755: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B9758: cmp word ptr [esi + 0x19c], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x588B9760: jne 0x588ba19f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x39
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9766: add eax, -0x21
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xDF
        // 0x588B9769: cmp eax, 7
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x07
        // 0x588B976C: ja 0x588ba19f
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x2D
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9772: jmp dword ptr [eax*4 + 0x588ba1ac]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xAC
        __asm _emit 0xA1
        __asm _emit 0x8B
        __asm _emit 0x58
        // 0x588B9779: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B977F: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588B9783: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x588B9786: je 0x588b979f
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x588B9788: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588B978B: push 0xa
        __asm _emit 0x6A
        __asm _emit 0x0A
        // 0x588B978D: call 0x58907300
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0xDB
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B9792: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588B9795: pop edi
        __asm _emit 0x5F
        // 0x588B9796: pop esi
        __asm _emit 0x5E
        // 0x588B9797: pop ebp
        __asm _emit 0x5D
        // 0x588B9798: pop ebx
        __asm _emit 0x5B
        // 0x588B9799: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B979C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B979F: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B97A5: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588B97A9: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x588B97AC: je 0x588ba19f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xED
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B97B2: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588B97B5: push 0xa
        __asm _emit 0x6A
        __asm _emit 0x0A
        // 0x588B97B7: call 0x58907300
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0xDB
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B97BC: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588B97BF: pop edi
        __asm _emit 0x5F
        // 0x588B97C0: pop esi
        __asm _emit 0x5E
        // 0x588B97C1: pop ebp
        __asm _emit 0x5D
        // 0x588B97C2: pop ebx
        __asm _emit 0x5B
        // 0x588B97C3: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B97C6: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B97C9: mov edx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B97CF: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x588B97D3: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x588B97D5: je 0x588b97ed
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588B97D7: push 0xa
        __asm _emit 0x6A
        __asm _emit 0x0A
        // 0x588B97D9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B97DB: call 0x588b5dc0
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0xC5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B97E0: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588B97E3: pop edi
        __asm _emit 0x5F
        // 0x588B97E4: pop esi
        __asm _emit 0x5E
        // 0x588B97E5: pop ebp
        __asm _emit 0x5D
        // 0x588B97E6: pop ebx
        __asm _emit 0x5B
        // 0x588B97E7: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B97EA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B97ED: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B97F3: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588B97F7: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x588B97FA: je 0x588ba19f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9F
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9800: push 0xa
        __asm _emit 0x6A
        __asm _emit 0x0A
        // 0x588B9802: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B9804: call 0x588b5e30
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0xC6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B9809: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588B980C: pop edi
        __asm _emit 0x5F
        // 0x588B980D: pop esi
        __asm _emit 0x5E
        // 0x588B980E: pop ebp
        __asm _emit 0x5D
        // 0x588B980F: pop ebx
        __asm _emit 0x5B
        // 0x588B9810: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B9813: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B9816: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B981C: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588B9820: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x588B9823: je 0x588b983c
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x588B9825: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588B9828: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x588B982A: call 0x58907300
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0xDA
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B982F: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588B9832: pop edi
        __asm _emit 0x5F
        // 0x588B9833: pop esi
        __asm _emit 0x5E
        // 0x588B9834: pop ebp
        __asm _emit 0x5D
        // 0x588B9835: pop ebx
        __asm _emit 0x5B
        // 0x588B9836: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B9839: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B983C: mov edx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9842: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x588B9846: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x588B9848: je 0x588ba19f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x51
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B984E: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588B9851: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x588B9853: call 0x58907300
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0xDA
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B9858: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588B985B: pop edi
        __asm _emit 0x5F
        // 0x588B985C: pop esi
        __asm _emit 0x5E
        // 0x588B985D: pop ebp
        __asm _emit 0x5D
        // 0x588B985E: pop ebx
        __asm _emit 0x5B
        // 0x588B985F: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B9862: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B9865: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B986B: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588B986F: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x588B9872: je 0x588b988a
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588B9874: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x588B9876: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B9878: call 0x588b5dc0
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0xC5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B987D: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588B9880: pop edi
        __asm _emit 0x5F
        // 0x588B9881: pop esi
        __asm _emit 0x5E
        // 0x588B9882: pop ebp
        __asm _emit 0x5D
        // 0x588B9883: pop ebx
        __asm _emit 0x5B
        // 0x588B9884: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B9887: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B988A: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9890: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588B9894: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x588B9897: je 0x588ba19f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B989D: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x588B989F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B98A1: call 0x588b5e30
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0xC5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B98A6: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588B98A9: pop edi
        __asm _emit 0x5F
        // 0x588B98AA: pop esi
        __asm _emit 0x5E
        // 0x588B98AB: pop ebp
        __asm _emit 0x5D
        // 0x588B98AC: pop ebx
        __asm _emit 0x5B
        // 0x588B98AD: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B98B0: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B98B3: mov edx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B98B9: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x588B98BD: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x588B98BF: je 0x588b98db
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x588B98C1: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588B98C4: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B98C9: call 0x58907300
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0xDA
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B98CE: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588B98D1: pop edi
        __asm _emit 0x5F
        // 0x588B98D2: pop esi
        __asm _emit 0x5E
        // 0x588B98D3: pop ebp
        __asm _emit 0x5D
        // 0x588B98D4: pop ebx
        __asm _emit 0x5B
        // 0x588B98D5: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B98D8: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B98DB: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B98E1: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588B98E5: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x588B98E8: je 0x588ba19f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB1
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B98EE: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588B98F1: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B98F6: call 0x58907300
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0xDA
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B98FB: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588B98FE: pop edi
        __asm _emit 0x5F
        // 0x588B98FF: pop esi
        __asm _emit 0x5E
        // 0x588B9900: pop ebp
        __asm _emit 0x5D
        // 0x588B9901: pop ebx
        __asm _emit 0x5B
        // 0x588B9902: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B9905: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B9908: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B990E: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588B9912: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x588B9915: je 0x588b9930
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x588B9917: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B991C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B991E: call 0x588b5dc0
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0xC4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B9923: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588B9926: pop edi
        __asm _emit 0x5F
        // 0x588B9927: pop esi
        __asm _emit 0x5E
        // 0x588B9928: pop ebp
        __asm _emit 0x5D
        // 0x588B9929: pop ebx
        __asm _emit 0x5B
        // 0x588B992A: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B992D: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B9930: mov edx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9936: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x588B993A: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x588B993C: je 0x588ba19f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x5D
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9942: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9947: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B9949: call 0x588b5e30
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0xC4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B994E: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588B9951: pop edi
        __asm _emit 0x5F
        // 0x588B9952: pop esi
        __asm _emit 0x5E
        // 0x588B9953: pop ebp
        __asm _emit 0x5D
        // 0x588B9954: pop ebx
        __asm _emit 0x5B
        // 0x588B9955: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B9958: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B995B: cmp word ptr [esi + 0x19c], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x588B9963: jne 0x588b99ad
        __asm _emit 0x75
        __asm _emit 0x48
        // 0x588B9965: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B996B: mov edi, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x78
        // 0x588B996E: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x588B9971: push ecx
        __asm _emit 0x51
        // 0x588B9972: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588B9974: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0x7B
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B9979: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588B997B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B997D: je 0x588b9983
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x588B997F: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588B9981: jmp 0x588b9984
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x588B9983: push ebx
        __asm _emit 0x53
        // 0x588B9984: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0x7C
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B9989: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B998F: mov edi, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x7C
        // 0x588B9992: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x588B9995: push edx
        __asm _emit 0x52
        // 0x588B9996: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588B9998: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0x7B
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B999D: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588B999F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B99A1: je 0x588b99a7
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x588B99A3: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588B99A5: jmp 0x588b99a8
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x588B99A7: push ebx
        __asm _emit 0x53
        // 0x588B99A8: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x7C
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B99AD: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B99B2: mov edi, dword ptr [esi + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B99B8: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x588B99BB: push eax
        __asm _emit 0x50
        // 0x588B99BC: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588B99BE: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0x7B
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B99C3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B99C5: je 0x588b99f4
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x588B99C7: mov cx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x24
        // 0x588B99CB: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x588B99CE: jne 0x588b9a08
        __asm _emit 0x75
        __asm _emit 0x38
        // 0x588B99D0: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B99D6: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B99DC: push edx
        __asm _emit 0x52
        // 0x588B99DD: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0xDF
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B99E2: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B99E8: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588B99EA: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588B99ED: push ebx
        __asm _emit 0x53
        // 0x588B99EE: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588B99F0: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588B99F2: jmp 0x588b99fd
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x588B99F4: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x588B99F8: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x588B99FA: je 0x588b9a08
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x588B99FC: push ebx
        __asm _emit 0x53
        // 0x588B99FD: mov ecx, dword ptr [esi + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9A03: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B9A08: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B9A0E: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x588B9A11: push ecx
        __asm _emit 0x51
        // 0x588B9A12: mov ecx, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9A18: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0x7B
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B9A1D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B9A1F: je 0x588b9a61
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x588B9A21: mov edx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9A27: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x588B9A2B: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x588B9A2D: je 0x588b9a61
        __asm _emit 0x74
        __asm _emit 0x32
        // 0x588B9A2F: mov ecx, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9A35: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588B9A39: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x588B9A3C: jne 0x588b9a7c
        __asm _emit 0x75
        __asm _emit 0x3E
        // 0x588B9A3E: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B9A43: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B9A49: push eax
        __asm _emit 0x50
        // 0x588B9A4A: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0xDF
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B9A4F: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B9A55: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588B9A57: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588B9A5A: push ebx
        __asm _emit 0x53
        // 0x588B9A5B: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588B9A5D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588B9A5F: jmp 0x588b9a71
        __asm _emit 0xEB
        __asm _emit 0x10
        // 0x588B9A61: mov ecx, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9A67: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588B9A6B: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x588B9A6E: je 0x588b9a7c
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x588B9A70: push ebx
        __asm _emit 0x53
        // 0x588B9A71: mov ecx, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9A77: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0x7B
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B9A7C: cmp dword ptr [esi + 0x1c4], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9A82: je 0x588b9aa0
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x588B9A84: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B9A89: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x588B9A8C: push ecx
        __asm _emit 0x51
        // 0x588B9A8D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B9A8F: call 0x588b84b0
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0xEA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B9A94: pop edi
        __asm _emit 0x5F
        // 0x588B9A95: pop esi
        __asm _emit 0x5E
        // 0x588B9A96: pop ebp
        __asm _emit 0x5D
        // 0x588B9A97: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B9A99: pop ebx
        __asm _emit 0x5B
        // 0x588B9A9A: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B9A9D: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B9AA0: cmp dword ptr [esi + 0x1c8], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9AA6: je 0x588b9ab9
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588B9AA8: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B9AAE: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x588B9AB1: push eax
        __asm _emit 0x50
        // 0x588B9AB2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B9AB4: call 0x588b85a0
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0xEA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B9AB9: pop edi
        __asm _emit 0x5F
        // 0x588B9ABA: pop esi
        __asm _emit 0x5E
        // 0x588B9ABB: pop ebp
        __asm _emit 0x5D
        // 0x588B9ABC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B9ABE: pop ebx
        __asm _emit 0x5B
        // 0x588B9ABF: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B9AC2: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B9AC5: sub eax, 0x201
        __asm _emit 0x2D
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9ACA: cmp eax, 9
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x588B9ACD: ja 0x588ba19f
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xCC
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9AD3: jmp dword ptr [eax*4 + 0x588ba1cc]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xCC
        __asm _emit 0xA1
        __asm _emit 0x8B
        __asm _emit 0x58
        // 0x588B9ADA: cmp word ptr [esi + 0x19c], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x588B9AE2: jne 0x588b9b3f
        __asm _emit 0x75
        __asm _emit 0x5B
        // 0x588B9AE4: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588B9AE6: cmp word ptr [ebp + 0xa], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x5D
        __asm _emit 0x0A
        // 0x588B9AEA: jle 0x588b9af1
        __asm _emit 0x7E
        __asm _emit 0x05
        // 0x588B9AEC: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9AF1: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B9AF7: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x588B9AFA: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588B9AFD: push edi
        __asm _emit 0x57
        // 0x588B9AFE: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0x7A
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B9B03: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B9B05: je 0x588b9b1b
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x588B9B07: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588B9B09: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588B9B0B: je 0x588b9b16
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588B9B0D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B9B0F: call 0x588b5dc0
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0xC2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B9B14: jmp 0x588b9b3f
        __asm _emit 0xEB
        __asm _emit 0x29
        // 0x588B9B16: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588B9B19: jmp 0x588b9b3a
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x588B9B1B: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x588B9B1E: push edi
        __asm _emit 0x57
        // 0x588B9B1F: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x7A
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B9B24: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B9B26: je 0x588b9b3f
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x588B9B28: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588B9B2A: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588B9B2C: je 0x588b9b37
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588B9B2E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B9B30: call 0x588b5e30
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0xC2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B9B35: jmp 0x588b9b3f
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x588B9B37: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588B9B3A: call 0x58907300
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0xD7
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B9B3F: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B9B45: mov ecx, dword ptr [esi + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9B4B: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588B9B4E: push edi
        __asm _emit 0x57
        // 0x588B9B4F: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0x79
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B9B54: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B9B56: je 0x588b9b79
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x588B9B58: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B9B5A: cmp word ptr [ebp + 0xa], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0x0A
        // 0x588B9B5E: jle 0x588b9b65
        __asm _emit 0x7E
        __asm _emit 0x05
        // 0x588B9B60: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9B65: push eax
        __asm _emit 0x50
        // 0x588B9B66: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B9B68: call 0x588b9530
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B9B6D: pop edi
        __asm _emit 0x5F
        // 0x588B9B6E: pop esi
        __asm _emit 0x5E
        // 0x588B9B6F: pop ebp
        __asm _emit 0x5D
        // 0x588B9B70: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B9B72: pop ebx
        __asm _emit 0x5B
        // 0x588B9B73: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B9B76: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B9B79: mov ecx, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9B7F: push edi
        __asm _emit 0x57
        // 0x588B9B80: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0x79
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B9B85: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B9B87: je 0x588b9b9e
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x588B9B89: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B9B8B: cmp word ptr [ebp + 0xa], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0x0A
        // 0x588B9B8F: jle 0x588b9b96
        __asm _emit 0x7E
        __asm _emit 0x05
        // 0x588B9B91: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9B96: push eax
        __asm _emit 0x50
        // 0x588B9B97: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B9B99: call 0x588b95f0
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B9B9E: pop edi
        __asm _emit 0x5F
        // 0x588B9B9F: pop esi
        __asm _emit 0x5E
        // 0x588B9BA0: pop ebp
        __asm _emit 0x5D
        // 0x588B9BA1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B9BA3: pop ebx
        __asm _emit 0x5B
        // 0x588B9BA4: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B9BA7: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B9BAA: mov ecx, dword ptr [esi + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9BB0: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588B9BB4: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x588B9BB8: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x588B9BBB: cmp dl, 2
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588B9BBE: jne 0x588b9bcd
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x588B9BC0: mov ecx, dword ptr [esi + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9BC6: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588B9BC8: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588B9BCB: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588B9BCD: cmp word ptr [esi + 0x19c], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x588B9BD5: jne 0x588b9c77
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9BDB: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B9BE1: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x588B9BE4: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588B9BE7: push edi
        __asm _emit 0x57
        // 0x588B9BE8: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0x79
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B9BED: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B9BEF: je 0x588b9c1f
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x588B9BF1: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9BF7: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9BFC: push ebp
        __asm _emit 0x55
        // 0x588B9BFD: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0x79
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B9C02: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9C08: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588B9C0C: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x588B9C0F: je 0x588b9c7c
        __asm _emit 0x74
        __asm _emit 0x6B
        // 0x588B9C11: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9C17: push ebx
        __asm _emit 0x53
        // 0x588B9C18: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0x79
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B9C1D: jmp 0x588b9c7c
        __asm _emit 0xEB
        __asm _emit 0x5D
        // 0x588B9C1F: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x588B9C22: push edi
        __asm _emit 0x57
        // 0x588B9C23: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0x79
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B9C28: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9C2E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B9C30: je 0x588b9c47
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x588B9C32: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588B9C34: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0x79
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B9C39: mov edx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9C3F: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x588B9C43: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x588B9C45: jmp 0x588b9c69
        __asm _emit 0xEB
        __asm _emit 0x22
        // 0x588B9C47: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588B9C4B: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x588B9C4E: je 0x588b9c5c
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x588B9C50: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9C56: push ebx
        __asm _emit 0x53
        // 0x588B9C57: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0x79
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B9C5C: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9C62: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588B9C66: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x588B9C69: je 0x588b9c77
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x588B9C6B: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9C71: push ebx
        __asm _emit 0x53
        // 0x588B9C72: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x79
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B9C77: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9C7C: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B9C82: mov ecx, dword ptr [esi + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9C88: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588B9C8B: push edi
        __asm _emit 0x57
        // 0x588B9C8C: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0x78
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B9C91: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B9C93: je 0x588b9d1d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9C99: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B9C9E: mov edi, 0x24
        __asm _emit 0xBF
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9CA3: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9CA9: jle 0x588b9cc1
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588B9CAB: cmp dword ptr [eax + 0x194], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9CB1: je 0x588b9cc1
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588B9CB3: mov edx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9CB9: mov ecx, dword ptr [edx + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9CBF: jmp 0x588b9cc3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B9CC1: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B9CC3: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B9CC8: push eax
        __asm _emit 0x50
        // 0x588B9CC9: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0xDC
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B9CCE: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B9CD3: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9CD9: jle 0x588b9cf1
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588B9CDB: cmp dword ptr [eax + 0x194], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9CE1: je 0x588b9cf1
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588B9CE3: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9CE9: mov ecx, dword ptr [ecx + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9CEF: jmp 0x588b9cf3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B9CF1: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B9CF3: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588B9CF5: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588B9CF8: push ebx
        __asm _emit 0x53
        // 0x588B9CF9: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588B9CFB: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B9D01: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588B9D04: mov eax, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9D0A: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588B9D0D: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xCD
        // 0x588B9D0F: push edx
        __asm _emit 0x52
        // 0x588B9D10: push ecx
        __asm _emit 0x51
        // 0x588B9D11: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B9D13: call 0x588b8690
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0xE9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B9D18: jmp 0x588b9dc3
        __asm _emit 0xE9
        __asm _emit 0xA6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9D1D: mov ecx, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9D23: push edi
        __asm _emit 0x57
        // 0x588B9D24: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x78
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B9D29: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B9D2B: je 0x588b9dc3
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9D31: mov edx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9D37: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x588B9D3B: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x588B9D3D: je 0x588b9dc3
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9D43: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B9D48: mov edi, 0x24
        __asm _emit 0xBF
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9D4D: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9D53: jle 0x588b9d6b
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588B9D55: cmp dword ptr [eax + 0x194], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9D5B: je 0x588b9d6b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588B9D5D: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9D63: mov ecx, dword ptr [ecx + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9D69: jmp 0x588b9d6d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B9D6B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B9D6D: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B9D73: push edx
        __asm _emit 0x52
        // 0x588B9D74: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0xDC
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B9D79: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B9D7E: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9D84: jle 0x588b9d9c
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588B9D86: cmp dword ptr [eax + 0x194], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9D8C: je 0x588b9d9c
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588B9D8E: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9D94: mov ecx, dword ptr [eax + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9D9A: jmp 0x588b9d9e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B9D9C: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B9D9E: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588B9DA0: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588B9DA3: push ebx
        __asm _emit 0x53
        // 0x588B9DA4: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588B9DA6: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B9DAC: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588B9DAF: mov eax, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9DB5: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588B9DB8: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xCD
        // 0x588B9DBA: push edx
        __asm _emit 0x52
        // 0x588B9DBB: push ecx
        __asm _emit 0x51
        // 0x588B9DBC: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B9DBE: call 0x588b8800
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0xEA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B9DC3: mov edx, dword ptr [esi + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9DC9: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x588B9DCD: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x588B9DD1: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1F
        // 0x588B9DD3: cmp al, 4
        __asm _emit 0x3C
        __asm _emit 0x04
        // 0x588B9DD5: je 0x588b9df1
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x588B9DD7: mov ecx, dword ptr [esi + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9DDD: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588B9DE1: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x588B9DE5: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x588B9DE8: cmp dl, 5
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588B9DEB: jne 0x588b9ee4
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9DF1: mov eax, dword ptr [esi + 0x16c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9DF7: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588B9DFB: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x08
        // 0x588B9DFF: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x588B9E02: cmp cl, 1
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x01
        // 0x588B9E05: jne 0x588b9e14
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x588B9E07: mov ecx, dword ptr [esi + 0x16c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9E0D: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588B9E0F: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x588B9E12: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588B9E14: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B9E1A: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x588B9E1D: push ecx
        __asm _emit 0x51
        // 0x588B9E1E: mov ecx, dword ptr [esi + 0x144]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9E24: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x77
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B9E29: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B9E2B: je 0x588b9e82
        __asm _emit 0x74
        __asm _emit 0x55
        // 0x588B9E2D: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9E33: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0xE3
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B9E38: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B9E3A: jl 0x588b9e82
        __asm _emit 0x7C
        __asm _emit 0x46
        // 0x588B9E3C: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9E42: call 0x58759e90
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588B9E47: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x588B9E49: jne 0x588b9e82
        __asm _emit 0x75
        __asm _emit 0x37
        // 0x588B9E4B: mov ecx, dword ptr [esi + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9E51: push ebx
        __asm _emit 0x53
        // 0x588B9E52: call 0x58759e90
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588B9E57: mov ecx, dword ptr [esi + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9E5D: push eax
        __asm _emit 0x50
        // 0x588B9E5E: call 0x588bb220
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9E63: mov ecx, dword ptr [esi + 0x16c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9E69: push eax
        __asm _emit 0x50
        // 0x588B9E6A: call 0x5886ffa0
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0x61
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x588B9E6F: mov ecx, dword ptr [esi + 0x16c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9E75: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588B9E77: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588B9E7A: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588B9E7C: mov dword ptr [esi + 0x174], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9E82: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B9E88: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x588B9E8B: push ecx
        __asm _emit 0x51
        // 0x588B9E8C: mov ecx, dword ptr [esi + 0x148]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9E92: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x76
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B9E97: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B9E99: je 0x588b9ee4
        __asm _emit 0x74
        __asm _emit 0x49
        // 0x588B9E9B: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9EA1: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0xE3
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B9EA6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B9EA8: jl 0x588b9ee4
        __asm _emit 0x7C
        __asm _emit 0x3A
        // 0x588B9EAA: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9EB0: call 0x58759e90
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0xFF
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588B9EB5: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x588B9EB7: jne 0x588b9ee4
        __asm _emit 0x75
        __asm _emit 0x2B
        // 0x588B9EB9: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9EBF: push ebx
        __asm _emit 0x53
        // 0x588B9EC0: call 0x58759e90
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0xFF
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588B9EC5: mov ecx, dword ptr [esi + 0x16c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9ECB: push eax
        __asm _emit 0x50
        // 0x588B9ECC: call 0x5886ffa0
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0x60
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x588B9ED1: mov ecx, dword ptr [esi + 0x16c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9ED7: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588B9ED9: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588B9EDC: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588B9EDE: mov dword ptr [esi + 0x174], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9EE4: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B9EEA: mov ebx, dword ptr [esi + 0x15c]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9EF0: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588B9EF3: push edi
        __asm _emit 0x57
        // 0x588B9EF4: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x588B9EF6: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x76
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B9EFB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B9EFD: je 0x588b9f23
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x588B9EFF: mov cx, word ptr [ebx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x24
        // 0x588B9F03: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x588B9F06: je 0x588b9f4c
        __asm _emit 0x74
        __asm _emit 0x44
        // 0x588B9F08: mov edx, dword ptr [esi + 0x15c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9F0E: pop edi
        __asm _emit 0x5F
        // 0x588B9F0F: mov dword ptr [edx + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6A
        __asm _emit 0x50
        // 0x588B9F12: mov dword ptr [esi + 0x1c4], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9F18: pop esi
        __asm _emit 0x5E
        // 0x588B9F19: pop ebp
        __asm _emit 0x5D
        // 0x588B9F1A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B9F1C: pop ebx
        __asm _emit 0x5B
        // 0x588B9F1D: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B9F20: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B9F23: mov ebx, dword ptr [esi + 0x160]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9F29: push edi
        __asm _emit 0x57
        // 0x588B9F2A: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x588B9F2C: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0x76
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B9F31: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B9F33: je 0x588b9f4c
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x588B9F35: mov ax, word ptr [ebx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x24
        // 0x588B9F39: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x588B9F3B: je 0x588b9f4c
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x588B9F3D: mov ecx, dword ptr [esi + 0x160]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9F43: mov dword ptr [ecx + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x50
        // 0x588B9F46: mov dword ptr [esi + 0x1c8], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9F4C: pop edi
        __asm _emit 0x5F
        // 0x588B9F4D: pop esi
        __asm _emit 0x5E
        // 0x588B9F4E: pop ebp
        __asm _emit 0x5D
        // 0x588B9F4F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B9F51: pop ebx
        __asm _emit 0x5B
        // 0x588B9F52: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B9F55: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B9F58: cmp dword ptr [esi + 0x1c4], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9F5E: je 0x588b9f7c
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x588B9F60: mov edx, dword ptr [esi + 0x15c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9F66: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x588B9F69: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588B9F6C: pop edi
        __asm _emit 0x5F
        // 0x588B9F6D: mov dword ptr [esi + 0x1c4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9F73: pop esi
        __asm _emit 0x5E
        // 0x588B9F74: pop ebp
        __asm _emit 0x5D
        // 0x588B9F75: pop ebx
        __asm _emit 0x5B
        // 0x588B9F76: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B9F79: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B9F7C: cmp dword ptr [esi + 0x1c8], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9F82: je 0x588ba19f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9F88: mov eax, dword ptr [esi + 0x160]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9F8E: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x588B9F91: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588B9F94: pop edi
        __asm _emit 0x5F
        // 0x588B9F95: mov dword ptr [esi + 0x1c8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9F9B: pop esi
        __asm _emit 0x5E
        // 0x588B9F9C: pop ebp
        __asm _emit 0x5D
        // 0x588B9F9D: pop ebx
        __asm _emit 0x5B
        // 0x588B9F9E: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588B9FA1: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B9FA4: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588B9FA7: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B9FAD: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x588B9FB0: add ecx, 0x1cc
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xCC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9FB6: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588B9FBA: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x588B9FBD: add edx, 0x96
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9FC3: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588B9FC6: push edi
        __asm _emit 0x57
        // 0x588B9FC7: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588B9FCB: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0x75
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B9FD0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B9FD2: je 0x588ba032
        __asm _emit 0x74
        __asm _emit 0x5E
        // 0x588B9FD4: mov eax, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9FDA: mov cl, byte ptr [eax + 0x24]
        __asm _emit 0x8A
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588B9FDD: and cl, 0xf
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x0F
        // 0x588B9FE0: cmp cl, 0xf
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x0F
        // 0x588B9FE3: jne 0x588ba032
        __asm _emit 0x75
        __asm _emit 0x4D
        // 0x588B9FE5: mov edx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B9FEB: mov eax, dword ptr [edx + 0x4f4]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xF4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9FF1: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B9FF7: push eax
        __asm _emit 0x50
        // 0x588B9FF8: call 0x587c8190
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0xE1
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x588B9FFD: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588BA001: push ecx
        __asm _emit 0x51
        // 0x588BA002: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA008: push 0x589a0998
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x09
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588BA00D: push 0x77359400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x94
        __asm _emit 0x35
        __asm _emit 0x77
        // 0x588BA012: push esi
        __asm _emit 0x56
        // 0x588BA013: call 0x587c8910
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x588BA018: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA01E: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588BA020: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588BA023: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588BA025: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588BA028: pop edi
        __asm _emit 0x5F
        // 0x588BA029: pop esi
        __asm _emit 0x5E
        // 0x588BA02A: pop ebp
        __asm _emit 0x5D
        // 0x588BA02B: pop ebx
        __asm _emit 0x5B
        // 0x588BA02C: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588BA02F: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BA032: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x588BA035: push edi
        __asm _emit 0x57
        // 0x588BA036: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x75
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BA03B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588BA03D: je 0x588ba19f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA043: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA049: mov dl, byte ptr [ecx + 0x24]
        __asm _emit 0x8A
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588BA04C: and dl, 0xf
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x0F
        // 0x588BA04F: cmp dl, 0xf
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x0F
        // 0x588BA052: jne 0x588ba19f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA058: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xA1
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BA05D: mov ecx, dword ptr [eax + 0x4f4]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xF4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA063: push ecx
        __asm _emit 0x51
        // 0x588BA064: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA06A: call 0x587c8190
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0xE1
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x588BA06F: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA075: lea edx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588BA079: push edx
        __asm _emit 0x52
        // 0x588BA07A: push 0x589a0990
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x09
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588BA07F: push 0x77359400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x94
        __asm _emit 0x35
        __asm _emit 0x77
        // 0x588BA084: push esi
        __asm _emit 0x56
        // 0x588BA085: call 0x587c8910
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x588BA08A: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA090: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588BA092: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588BA095: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588BA097: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588BA09A: pop edi
        __asm _emit 0x5F
        // 0x588BA09B: pop esi
        __asm _emit 0x5E
        // 0x588BA09C: pop ebp
        __asm _emit 0x5D
        // 0x588BA09D: pop ebx
        __asm _emit 0x5B
        // 0x588BA09E: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588BA0A1: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BA0A4: mov eax, dword ptr [esi + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA0AA: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588BA0AE: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x588BA0B1: jne 0x588ba19f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA0B7: mov edx, dword ptr [esi + 0x16c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA0BD: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x588BA0C1: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x588BA0C5: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1F
        // 0x588BA0C7: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x588BA0C9: jne 0x588ba17c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA0CF: cmp dword ptr [esi + 0x174], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA0D5: je 0x588ba12c
        __asm _emit 0x74
        __asm _emit 0x55
        // 0x588BA0D7: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BA0DD: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x588BA0E0: push ecx
        __asm _emit 0x51
        // 0x588BA0E1: mov ecx, dword ptr [esi + 0x144]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA0E7: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0x74
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BA0EC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588BA0EE: je 0x588ba19f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA0F4: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BA0FA: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BA100: push edx
        __asm _emit 0x52
        // 0x588BA101: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0xD8
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BA106: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BA10C: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588BA10E: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588BA111: push ebx
        __asm _emit 0x53
        // 0x588BA112: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588BA114: mov ecx, dword ptr [esi + 0x16c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA11A: call 0x5886b9b0
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0x18
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x588BA11F: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588BA122: pop edi
        __asm _emit 0x5F
        // 0x588BA123: pop esi
        __asm _emit 0x5E
        // 0x588BA124: pop ebp
        __asm _emit 0x5D
        // 0x588BA125: pop ebx
        __asm _emit 0x5B
        // 0x588BA126: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588BA129: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BA12C: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BA131: mov ecx, dword ptr [esi + 0x148]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA137: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x588BA13A: push eax
        __asm _emit 0x50
        // 0x588BA13B: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x74
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BA140: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588BA142: je 0x588ba19f
        __asm _emit 0x74
        __asm _emit 0x5B
        // 0x588BA144: mov ecx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BA14A: push ecx
        __asm _emit 0x51
        // 0x588BA14B: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BA151: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0xD8
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BA156: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BA15C: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588BA15E: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588BA161: push ebx
        __asm _emit 0x53
        // 0x588BA162: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588BA164: mov ecx, dword ptr [esi + 0x16c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA16A: call 0x5886b9b0
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0x18
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x588BA16F: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588BA172: pop edi
        __asm _emit 0x5F
        // 0x588BA173: pop esi
        __asm _emit 0x5E
        // 0x588BA174: pop ebp
        __asm _emit 0x5D
        // 0x588BA175: pop ebx
        __asm _emit 0x5B
        // 0x588BA176: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588BA179: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BA17C: mov ecx, dword ptr [esi + 0x16c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA182: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588BA186: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x588BA18A: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x588BA18D: cmp dl, 1
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x01
        // 0x588BA190: jne 0x588ba19f
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x588BA192: mov ecx, dword ptr [esi + 0x16c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BA198: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588BA19A: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588BA19D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588BA19F: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588BA1A2: pop edi
        __asm _emit 0x5F
        // 0x588BA1A3: pop esi
        __asm _emit 0x5E
        // 0x588BA1A4: pop ebp
        __asm _emit 0x5D
        // 0x588BA1A5: pop ebx
        __asm _emit 0x5B
        // 0x588BA1A6: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588BA1A9: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
