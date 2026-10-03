// Complete Ghidra body ranges; intervening unowned gaps are excluded.
// Total body size: 880 bytes across one range.

// Ghidra range: 0x588561F0 .. +0x370 bytes.
extern "C" __declspec(naked) void FUN_588561F0_segment_00() {
    __asm {
        // 0x588561F0: push ebx
        __asm _emit 0x53
        // 0x588561F1: push ebp
        __asm _emit 0x55
        // 0x588561F2: push esi
        __asm _emit 0x56
        // 0x588561F3: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588561F5: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588561F9: mov ecx, 0xe1ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588561FE: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x58856201: mov edx, 0x100
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856206: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x58856209: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5885620D: or word ptr [esi + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x58856212: mov ebx, 4
        __asm _emit 0xBB
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856217: or word ptr [esi + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x5E
        __asm _emit 0x24
        // 0x5885621B: mov dword ptr [esi + 0x2d8], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856225: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885622B: mov eax, dword ptr [ecx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x20
        // 0x5885622E: sub eax, dword ptr [ecx + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x41
        __asm _emit 0x18
        // 0x58856231: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58856234: sub eax, 0xa0
        __asm _emit 0x2D
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856239: push edi
        __asm _emit 0x57
        // 0x5885623A: mov dword ptr [esi + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x5885623D: mov dword ptr [esi + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x58856240: lea edi, [esi + 0x80]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856246: lea ebp, [esi + 0xf8]
        __asm _emit 0x8D
        __asm _emit 0xAE
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885624C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58856250: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58856253: mov ecx, dword ptr [edi - 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xFC
        // 0x58856256: add edx, 0x68
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x68
        // 0x58856259: push edx
        __asm _emit 0x52
        // 0x5885625A: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0xD1
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5885625F: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58856262: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58856264: add eax, 0x9a
        __asm _emit 0x05
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856269: push eax
        __asm _emit 0x50
        // 0x5885626A: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0xD0
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5885626F: cmp dword ptr [edi + 0x58], 0
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x58856273: je 0x58856288
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x58856275: mov dword ptr [ebp], 1
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885627C: mov ecx, dword ptr [edi - 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xFC
        // 0x5885627F: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58856281: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58856284: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58856286: jmp 0x588562be
        __asm _emit 0xEB
        __asm _emit 0x36
        // 0x58856288: cmp dword ptr [edi + 0x5c], 0
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0x5C
        __asm _emit 0x00
        // 0x5885628C: je 0x588562be
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x5885628E: mov dword ptr [ebp], 2
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856295: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58856298: add ecx, 0x68
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x68
        // 0x5885629B: push ecx
        __asm _emit 0x51
        // 0x5885629C: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5885629E: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0xD0
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588562A3: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588562A5: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588562A7: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588562AA: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588562AC: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588562AF: add ecx, 0x9a
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588562B5: push ecx
        __asm _emit 0x51
        // 0x588562B6: mov ecx, dword ptr [edi - 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xFC
        // 0x588562B9: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0xD0
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588562BE: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x588562C1: add edi, 8
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x08
        // 0x588562C4: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x588562C7: jne 0x58856250
        __asm _emit 0x75
        __asm _emit 0x87
        // 0x588562C9: mov eax, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588562CF: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x588562D2: mov dword ptr [eax + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x54
        // 0x588562D5: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588562DB: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588562DD: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588562E0: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588562E2: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588562E8: mov edx, dword ptr [ecx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x30
        // 0x588562EB: mov ecx, dword ptr [edx + 0x9a4]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588562F1: mov dword ptr [esi + 0x2e4], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588562F7: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588562F9: je 0x58856341
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x588562FB: call 0x5877c620
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0x63
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58856300: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58856303: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58856306: sub eax, 0x53
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x53
        // 0x58856309: add ecx, 0x3b6
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xB6
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885630F: push eax
        __asm _emit 0x50
        // 0x58856310: push ecx
        __asm _emit 0x51
        // 0x58856311: mov ecx, dword ptr [esi + 0x2e4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856317: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0xCF
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5885631C: mov eax, dword ptr [esi + 0x2e4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856322: mov edx, 0xdfff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xDF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856327: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5885632B: mov edi, dword ptr [esi + 0x2e4]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xE4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856331: push edi
        __asm _emit 0x57
        // 0x58856332: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58856334: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0xCB
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58856339: push edi
        __asm _emit 0x57
        // 0x5885633A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885633C: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0xCC
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58856341: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58856344: mov ecx, dword ptr [0x58a246d8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885634A: mov edx, 0x12c
        __asm _emit 0xBA
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885634F: sub edx, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58856352: mov ebp, 0xf
        __asm _emit 0xBD
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856357: sub eax, 0x190
        __asm _emit 0x2D
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885635C: cmp dword ptr [ecx + 0x170], ebp
        __asm _emit 0x39
        __asm _emit 0xA9
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856362: jle 0x58856377
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x58856364: cmp dword ptr [ecx + 0x194], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885636A: je 0x58856377
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5885636C: mov ecx, dword ptr [ecx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856372: mov ecx, dword ptr [ecx + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x3C
        // 0x58856375: jmp 0x58856379
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58856377: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58856379: mov edi, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885637F: push edi
        __asm _emit 0x57
        // 0x58856380: push edx
        __asm _emit 0x52
        // 0x58856381: push eax
        __asm _emit 0x50
        // 0x58856382: call 0x587b7400
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x10
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x58856387: mov edx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885638D: cmp dword ptr [edx + 4], 0x1ae
        __asm _emit 0x81
        __asm _emit 0x7A
        __asm _emit 0x04
        __asm _emit 0xAE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856394: jne 0x588563d0
        __asm _emit 0x75
        __asm _emit 0x3A
        // 0x58856396: mov eax, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885639C: mov dword ptr [eax + 0x50], 5
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588563A3: mov eax, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588563A9: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588563AE: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x588563B2: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588563B8: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588563BA: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588563BD: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588563BF: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588563C5: call 0x5885ce60
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0x6A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588563CA: mov dword ptr [esi + 0xac], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588563D0: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588563D6: cmp dword ptr [ecx + 4], 0x1c7
        __asm _emit 0x81
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0xC7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588563DD: jne 0x588563e6
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x588563DF: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588563E1: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588563E4: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588563E6: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588563EC: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588563EF: mov eax, dword ptr [edx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588563F5: movzx eax, word ptr [eax + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x588563F9: mov cl, al
        __asm _emit 0x8A
        __asm _emit 0xC8
        // 0x588563FB: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x588563FE: cmp cl, 7
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x07
        // 0x58856401: jne 0x5885641a
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x58856403: and eax, 0x3e0
        __asm _emit 0x25
        __asm _emit 0xE0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856408: cmp eax, 0x160
        __asm _emit 0x3D
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885640D: jne 0x5885641a
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x5885640F: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856415: call 0x5885ea00
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885641A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5885641C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885641E: mov dword ptr [esi + 0x2d8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xD8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856424: call 0x588542a0
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0xDE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58856429: mov eax, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885642F: mov edi, 2
        __asm _emit 0xBF
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856434: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x58856438: mov eax, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885643E: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x58856442: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856448: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x5885644C: mov eax, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856452: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x58856456: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885645C: push 0x500
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856461: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0xCE
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58856466: mov eax, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885646C: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5885646F: mov dword ptr [eax + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x58856472: mov dword ptr [eax + 0x54], 0x500
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856479: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885647E: cmp byte ptr [eax + 0x74], 1
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x74
        __asm _emit 0x01
        // 0x58856482: jne 0x588564ba
        __asm _emit 0x75
        __asm _emit 0x36
        // 0x58856484: cmp dword ptr [eax + 0x78], ebx
        __asm _emit 0x39
        __asm _emit 0x58
        __asm _emit 0x78
        // 0x58856487: jne 0x588564a9
        __asm _emit 0x75
        __asm _emit 0x20
        // 0x58856489: mov eax, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885648F: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58856492: mov dword ptr [eax + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x58856495: mov dword ptr [eax + 0x54], 0x268
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x54
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885649C: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588564A2: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588564A4: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588564A7: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588564A9: cmp dword ptr [esi + 0x2cc], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588564AF: jne 0x588564c7
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x588564B1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588564B3: call 0x58853b90
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0xD6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588564B8: jmp 0x588564c7
        __asm _emit 0xEB
        __asm _emit 0x0D
        // 0x588564BA: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588564C0: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588564C2: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x588564C5: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588564C7: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588564CD: cmp dword ptr [ecx + 0x21cc8], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0xC8
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588564D3: je 0x588564ff
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x588564D5: mov ecx, dword ptr [esi + 0x2f8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588564DB: push 0x201
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588564E0: push 0x347
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588564E5: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0xCD
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588564EA: mov ecx, dword ptr [esi + 0x2f4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588564F0: push 0x20d
        __asm _emit 0x68
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588564F5: push 0x38c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588564FA: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0xCD
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588564FF: mov ecx, dword ptr [0x58a245e4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856505: push ebx
        __asm _emit 0x53
        // 0x58856506: push 6
        __asm _emit 0x6A
        __asm _emit 0x06
        // 0x58856508: push edi
        __asm _emit 0x57
        // 0x58856509: call 0x588804f0
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0x9F
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5885650E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58856510: mov eax, dword ptr [esi + 0x2f4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856516: jle 0x58856528
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x58856518: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x5885651C: mov eax, dword ptr [esi + 0x2f8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856522: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x58856526: jmp 0x5885653d
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x58856528: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885652D: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58856531: mov eax, dword ptr [esi + 0x2f8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856537: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58856539: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5885653D: mov ecx, dword ptr [esi + 0x2e4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856543: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58856545: je 0x5885655b
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x58856547: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x5885654A: push 0x205
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885654F: add edx, 0x3b6
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xB6
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856555: push edx
        __asm _emit 0x52
        // 0x58856556: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0xCD
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5885655B: pop edi
        __asm _emit 0x5F
        // 0x5885655C: pop esi
        __asm _emit 0x5E
        // 0x5885655D: pop ebp
        __asm _emit 0x5D
        // 0x5885655E: pop ebx
        __asm _emit 0x5B
        // 0x5885655F: ret
        __asm _emit 0xC3
    }
}
