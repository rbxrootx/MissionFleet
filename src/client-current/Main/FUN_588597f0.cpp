// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588597F0 .. +0x2A5 bytes.
// Source symbol alias: FUN_588597f0.
extern "C" __declspec(naked) void FUN_588597f0() {
    __asm {
        // 0x588597F0: push ecx
        __asm _emit 0x51
        // 0x588597F1: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588597F5: push ebx
        __asm _emit 0x53
        // 0x588597F6: push ebp
        __asm _emit 0x55
        // 0x588597F7: push esi
        __asm _emit 0x56
        // 0x588597F8: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588597FA: push edi
        __asm _emit 0x57
        // 0x588597FB: mov dword ptr [esi + 0xf0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859801: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859806: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58859808: jle 0x58859887
        __asm _emit 0x7E
        __asm _emit 0x7D
        // 0x5885980A: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5885980C: lea edi, [esi + 0xa20]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x20
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859812: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58859816: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58859818: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x5885981D: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58859820: lea ecx, [ebx + eax + 0xf]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x0F
        // 0x58859824: push ecx
        __asm _emit 0x51
        // 0x58859825: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58859827: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0x9A
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5885982C: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x5885982F: mov ecx, dword ptr [edi - 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xC0
        // 0x58859832: lea eax, [ebx + edx + 5]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x13
        __asm _emit 0x05
        // 0x58859836: push eax
        __asm _emit 0x50
        // 0x58859837: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0x9A
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5885983C: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5885983F: lea edx, [ebx + ecx + 5]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x0B
        __asm _emit 0x05
        // 0x58859843: mov ecx, dword ptr [edi - 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xA0
        // 0x58859846: push edx
        __asm _emit 0x52
        // 0x58859847: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0x9A
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5885984C: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5885984F: lea ecx, [ebx + eax + 8]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x08
        // 0x58859853: push ecx
        __asm _emit 0x51
        // 0x58859854: mov ecx, dword ptr [edi - 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xE0
        // 0x58859857: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0x9A
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5885985C: mov eax, dword ptr [edi - 0x20]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0xE0
        // 0x5885985F: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x58859864: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58859867: mov ecx, dword ptr [edi - 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x58
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885986D: lea eax, [ebx + edx + 5]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x13
        __asm _emit 0x05
        // 0x58859871: push eax
        __asm _emit 0x50
        // 0x58859872: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0x9A
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58859877: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5885987A: add ebx, 0x27
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x27
        // 0x5885987D: sub dword ptr [esp + 0x10], ebp
        __asm _emit 0x29
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58859881: jne 0x58859816
        __asm _emit 0x75
        __asm _emit 0x93
        // 0x58859883: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58859887: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x5885988A: jge 0x58859901
        __asm _emit 0x7D
        __asm _emit 0x75
        // 0x5885988C: mov ebx, 8
        __asm _emit 0xBB
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859891: lea edi, [esi + eax*4 + 0xa20]
        __asm _emit 0x8D
        __asm _emit 0xBC
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859898: sub ebx, eax
        __asm _emit 0x2B
        __asm _emit 0xD8
        // 0x5885989A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588598A0: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588598A2: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588598A7: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588598AB: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588598AD: push 0x500
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588598B2: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0x9A
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588598B7: mov ecx, dword ptr [edi - 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xC0
        // 0x588598BA: push 0x500
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588598BF: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x9A
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588598C4: mov ecx, dword ptr [edi - 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xA0
        // 0x588598C7: push 0x500
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588598CC: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0x9A
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588598D1: mov ecx, dword ptr [edi - 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xE0
        // 0x588598D4: push 0x500
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588598D9: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x9A
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588598DE: mov eax, dword ptr [edi - 0x20]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0xE0
        // 0x588598E1: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588598E6: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588598EA: mov ecx, dword ptr [edi - 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x58
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588598F0: push 0x500
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588598F5: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0x99
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588598FA: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588598FD: sub ebx, ebp
        __asm _emit 0x2B
        __asm _emit 0xDD
        // 0x588598FF: jne 0x588598a0
        __asm _emit 0x75
        __asm _emit 0x9F
        // 0x58859901: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58859903: lea edi, [esi + 0x8a8]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xA8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859909: mov dword ptr [esp + 0x18], 4
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859911: mov eax, dword ptr [edi + 0x1a8]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xA8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859917: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885991C: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58859920: mov eax, dword ptr [edi - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0xF0
        // 0x58859923: push eax
        __asm _emit 0x50
        // 0x58859924: mov dword ptr [edi], eax
        __asm _emit 0x89
        __asm _emit 0x07
        // 0x58859926: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885992C: push edi
        __asm _emit 0x57
        // 0x5885992D: call 0x587a15e0
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0x7C
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58859932: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x58859934: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885993A: je 0x5885993e
        __asm _emit 0x74
        __asm _emit 0x02
        // 0x5885993C: mov ebx, ebp
        __asm _emit 0x8B
        __asm _emit 0xDD
        // 0x5885993E: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58859941: sub dword ptr [esp + 0x18], ebp
        __asm _emit 0x29
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58859945: jne 0x58859911
        __asm _emit 0x75
        __asm _emit 0xCA
        // 0x58859947: mov eax, dword ptr [esi + 0xa50]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885994D: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x58859951: mov ecx, dword ptr [esi + 0xa44]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x44
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859957: push ebp
        __asm _emit 0x55
        // 0x58859958: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0xDA
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5885995D: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58859962: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58859965: mov edx, dword ptr [ecx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885996B: movzx eax, word ptr [edx + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x5885996F: mov ecx, dword ptr [esi + 0xa4c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859975: and eax, 0xff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885997A: push eax
        __asm _emit 0x50
        // 0x5885997B: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0xD9
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58859980: mov eax, dword ptr [esi + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859986: add eax, dword ptr [esi + 0x18c]
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885998C: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58859992: add eax, dword ptr [esi + 0x184]
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859998: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5885999B: add eax, dword ptr [esi + 0x17c]
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588599A1: mov ecx, dword ptr [edx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588599A7: add eax, dword ptr [esi + 0x174]
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588599AD: movzx edx, word ptr [ecx + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588599B1: add eax, dword ptr [esi + 0x16c]
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588599B7: mov ecx, dword ptr [esi + 0xa60]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x60
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588599BD: add eax, dword ptr [esi + 0x164]
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588599C3: and edx, 0xff
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588599C9: add eax, dword ptr [esi + 0x15c]
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588599CF: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x588599D1: push edx
        __asm _emit 0x52
        // 0x588599D2: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x89
        __asm _emit 0xD9
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588599D7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588599D9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588599DB: call 0x588592c0
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588599E0: mov eax, dword ptr [esi + 0xa68]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588599E6: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588599E8: je 0x58859a3c
        __asm _emit 0x74
        __asm _emit 0x52
        // 0x588599EA: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x588599EE: mov eax, dword ptr [esi + 0xa6c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588599F4: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x588599F8: mov eax, dword ptr [esi + 0xa70]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588599FE: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x58859A02: mov eax, dword ptr [esi + 0xa8c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859A08: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x58859A0C: mov eax, dword ptr [esi + 0xa98]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859A12: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x58859A16: mov eax, dword ptr [esi + 0xa9c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859A1C: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x58859A20: mov eax, dword ptr [esi + 0xaa0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859A26: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x58859A2A: mov esi, dword ptr [esi + 0xaa4]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0xA4
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859A30: or word ptr [esi + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x6E
        __asm _emit 0x24
        // 0x58859A34: pop edi
        __asm _emit 0x5F
        // 0x58859A35: pop esi
        __asm _emit 0x5E
        // 0x58859A36: pop ebp
        __asm _emit 0x5D
        // 0x58859A37: pop ebx
        __asm _emit 0x5B
        // 0x58859A38: pop ecx
        __asm _emit 0x59
        // 0x58859A39: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58859A3C: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859A41: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58859A45: mov eax, dword ptr [esi + 0xa6c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859A4B: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58859A4D: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58859A51: mov eax, dword ptr [esi + 0xa70]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859A57: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58859A5B: mov eax, dword ptr [esi + 0xa8c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859A61: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58859A65: mov eax, dword ptr [esi + 0xa98]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859A6B: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58859A6F: mov eax, dword ptr [esi + 0xa9c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859A75: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58859A79: mov eax, dword ptr [esi + 0xaa0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859A7F: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58859A83: mov esi, dword ptr [esi + 0xaa4]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0xA4
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859A89: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x58859A8D: pop edi
        __asm _emit 0x5F
        // 0x58859A8E: pop esi
        __asm _emit 0x5E
        // 0x58859A8F: pop ebp
        __asm _emit 0x5D
        // 0x58859A90: pop ebx
        __asm _emit 0x5B
        // 0x58859A91: pop ecx
        __asm _emit 0x59
        // 0x58859A92: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
