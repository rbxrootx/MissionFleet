// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Complete contiguous mapped body: 711 bytes through 0x588078A6. Ghidra's
// disjoint body omits add esp, 4 at 0x58807882..0x58807884 because the prior
// callback is marked non-returning; linear decode includes it and the epilogue.
// Source symbol alias: FUN_588075e0.
extern "C" __declspec(naked) void FUN_588075e0() {
    __asm {
        // 0x588075E0: push ebp
        __asm _emit 0x55
        // 0x588075E1: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x588075E3: and esp, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xF8
        // 0x588075E6: sub esp, 0x15c
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588075EC: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588075F1: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588075F3: mov dword ptr [esp + 0x158], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588075FA: push ebx
        __asm _emit 0x53
        // 0x588075FB: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x588075FD: cmp dword ptr [ebx + 0x254], 0
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807604: push esi
        __asm _emit 0x56
        // 0x58807605: push edi
        __asm _emit 0x57
        // 0x58807606: jle 0x58807892
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x86
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880760C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58807610: mov esi, dword ptr [ebx + 0x25c]
        __asm _emit 0x8B
        __asm _emit 0xB3
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807616: cmp esi, dword ptr [ebx + 0x258]
        __asm _emit 0x3B
        __asm _emit 0xB3
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880761C: je 0x5880763c
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x5880761E: mov eax, dword ptr [ebx + 0x250]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807624: dec eax
        __asm _emit 0x48
        // 0x58807625: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x58807627: jne 0x5880762d
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58807629: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5880762B: jmp 0x58807630
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5880762D: lea eax, [esi + 1]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x01
        // 0x58807630: dec dword ptr [ebx + 0x254]
        __asm _emit 0xFF
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807636: mov dword ptr [ebx + 0x25c], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880763C: imul esi, esi, 0x13c
        __asm _emit 0x69
        __asm _emit 0xF6
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807642: add esi, dword ptr [ebx + 0x260]
        __asm _emit 0x03
        __asm _emit 0xB3
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807648: mov ecx, 0x4f
        __asm _emit 0xB9
        __asm _emit 0x4F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880764D: lea edi, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58807651: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58807653: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58807657: cmp eax, 0x50
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x50
        // 0x5880765A: ja 0x58807765
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807660: je 0x58807752
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807666: dec eax
        __asm _emit 0x48
        // 0x58807667: cmp eax, 0x3f
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x3F
        // 0x5880766A: ja 0x58807871
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807670: movzx ecx, byte ptr [eax + 0x588078c4]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x88
        __asm _emit 0xC4
        __asm _emit 0x78
        __asm _emit 0x80
        __asm _emit 0x58
        // 0x58807677: jmp dword ptr [ecx*4 + 0x588078a8]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x8D
        __asm _emit 0xA8
        __asm _emit 0x78
        __asm _emit 0x80
        __asm _emit 0x58
        // 0x5880767E: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58807682: mov ax, word ptr [esp + 0x28]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58807687: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5880768B: push ecx
        __asm _emit 0x51
        // 0x5880768C: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5880768E: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58807692: mov word ptr [esp + 0x20], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58807697: call 0x58807370
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5880769C: jmp 0x58807871
        __asm _emit 0xE9
        __asm _emit 0xD0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588076A1: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588076A5: push edx
        __asm _emit 0x52
        // 0x588076A6: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x588076A8: call 0x588051c0
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0xDB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588076AD: jmp 0x58807871
        __asm _emit 0xE9
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588076B2: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588076B6: push eax
        __asm _emit 0x50
        // 0x588076B7: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x588076B9: call 0x58805210
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0xDB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588076BE: jmp 0x58807871
        __asm _emit 0xE9
        __asm _emit 0xAE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588076C3: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588076C7: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588076C9: push ecx
        __asm _emit 0x51
        // 0x588076CA: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x588076CC: call 0x58805260
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0xDB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588076D1: jmp 0x58807871
        __asm _emit 0xE9
        __asm _emit 0x9B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588076D6: cmp dword ptr [ebx + 0x114], 0
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588076DD: jne 0x58807871
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588076E3: cmp word ptr [ebx + 0x110], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588076EB: jne 0x5880771f
        __asm _emit 0x75
        __asm _emit 0x32
        // 0x588076ED: mov edx, dword ptr [0x58a245a0]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588076F3: movzx eax, word ptr [edx + 0xa06]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x82
        __asm _emit 0x06
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588076FA: cmp ax, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x07
        // 0x588076FE: je 0x58807706
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58807700: cmp ax, 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0C
        // 0x58807704: jne 0x5880771f
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x58807706: cmp dword ptr [esp + 0x130], 3
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x5880770E: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58807710: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x58807712: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x58807714: push eax
        __asm _emit 0x50
        // 0x58807715: call 0x58805880
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5880771A: jmp 0x58807871
        __asm _emit 0xE9
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880771F: movzx ecx, word ptr [esp + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58807724: movzx edx, word ptr [esp + 0x154]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880772C: push ecx
        __asm _emit 0x51
        // 0x5880772D: push edx
        __asm _emit 0x52
        // 0x5880772E: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58807730: call 0x588058d0
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58807735: jmp 0x58807871
        __asm _emit 0xE9
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880773A: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5880773E: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58807742: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58807744: push eax
        __asm _emit 0x50
        // 0x58807745: push ecx
        __asm _emit 0x51
        // 0x58807746: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58807748: call 0x588059b0
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5880774D: jmp 0x58807871
        __asm _emit 0xE9
        __asm _emit 0x1F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807752: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58807756: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58807758: push edx
        __asm _emit 0x52
        // 0x58807759: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5880775B: call 0x58805260
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0xDB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58807760: jmp 0x58807871
        __asm _emit 0xE9
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807765: cmp eax, 0x400
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880776A: ja 0x5880783e
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807770: je 0x58807800
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807776: cmp eax, 0x70
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x70
        // 0x58807779: je 0x588077db
        __asm _emit 0x74
        __asm _emit 0x60
        // 0x5880777B: cmp eax, 0x100
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807780: jne 0x58807871
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807786: movzx eax, word ptr [esp + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5880778B: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807791: push eax
        __asm _emit 0x50
        // 0x58807792: call 0x5878a160
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0x29
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58807797: mov cx, word ptr [esp + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x26
        // 0x5880779C: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5880779E: mov word ptr [esi + 0x352], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x52
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588077A5: movzx edx, byte ptr [esp + 0x29]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x29
        // 0x588077AA: imul edx, edx, 0x64
        __asm _emit 0x6B
        __asm _emit 0xD2
        __asm _emit 0x64
        // 0x588077AD: push edx
        __asm _emit 0x52
        // 0x588077AE: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588077B0: call 0x588d81a0
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0x09
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588077B5: push esi
        __asm _emit 0x56
        // 0x588077B6: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x588077B8: call 0x58805100
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0xD9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588077BD: test byte ptr [ebx + 0x1bc], 1
        __asm _emit 0xF6
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588077C4: je 0x58807871
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588077CA: mov ecx, dword ptr [0x58a24828]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588077D0: push esi
        __asm _emit 0x56
        // 0x588077D1: call 0x587af370
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0x7B
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x588077D6: jmp 0x58807871
        __asm _emit 0xE9
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588077DB: cmp dword ptr [ebx + 0x114], 0
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588077E2: jne 0x58807871
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588077E8: movzx eax, word ptr [esp + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588077ED: movzx ecx, word ptr [esp + 0x154]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588077F5: push eax
        __asm _emit 0x50
        // 0x588077F6: push ecx
        __asm _emit 0x51
        // 0x588077F7: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x588077F9: call 0x58805940
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588077FE: jmp 0x58807871
        __asm _emit 0xEB
        __asm _emit 0x71
        // 0x58807800: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58807804: mov ax, word ptr [esp + 0x28]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58807809: lea ecx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5880780D: push ecx
        __asm _emit 0x51
        // 0x5880780E: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58807810: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58807814: mov word ptr [esp + 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58807819: call 0x58805150
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0xD9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5880781E: test byte ptr [ebx + 0x1bc], 1
        __asm _emit 0xF6
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58807825: je 0x58807871
        __asm _emit 0x74
        __asm _emit 0x4A
        // 0x58807827: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5880782B: mov eax, dword ptr [esp + 0x11]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x11
        // 0x5880782F: mov ecx, dword ptr [0x58a24828]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807835: push edx
        __asm _emit 0x52
        // 0x58807836: push eax
        __asm _emit 0x50
        // 0x58807837: call 0x587af390
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0x7B
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x5880783C: jmp 0x58807871
        __asm _emit 0xEB
        __asm _emit 0x33
        // 0x5880783E: sub eax, 0x4000008
        __asm _emit 0x2D
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x58807843: je 0x5880785b
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x58807845: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x58807848: jne 0x58807871
        __asm _emit 0x75
        __asm _emit 0x27
        // 0x5880784A: mov ecx, dword ptr [esp + 0x158]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807851: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58807853: push ecx
        __asm _emit 0x51
        // 0x58807854: lea edx, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58807858: push edx
        __asm _emit 0x52
        // 0x58807859: jmp 0x5880786a
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x5880785B: mov eax, dword ptr [esp + 0x158]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807862: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58807864: push eax
        __asm _emit 0x50
        // 0x58807865: lea ecx, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58807869: push ecx
        __asm _emit 0x51
        // 0x5880786A: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5880786C: call 0x58806f60
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58807871: mov eax, dword ptr [esp + 0x158]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807878: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880787A: je 0x58807885
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5880787C: push eax
        __asm _emit 0x50
        // 0x5880787D: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0x53
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58807882: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58807885: cmp dword ptr [ebx + 0x254], 0
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880788C: jg 0x58807610
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0x7E
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58807892: mov ecx, dword ptr [esp + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807899: pop edi
        __asm _emit 0x5F
        // 0x5880789A: pop esi
        __asm _emit 0x5E
        // 0x5880789B: pop ebx
        __asm _emit 0x5B
        // 0x5880789C: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5880789E: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x53
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x588078A3: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x588078A5: pop ebp
        __asm _emit 0x5D
        // 0x588078A6: ret
        __asm _emit 0xC3
    }
}
