// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 649 bytes in 1 exact ranges.
// Source symbol alias: FUN_588424d0.

// Ghidra body range 0x588424D0..0x58842759; 649 mapped bytes.
extern "C" __declspec(naked) void FUN_588424d0_segment_00() {
    __asm {
        // 0x588424D0: sub esp, 0x38
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x38
        // 0x588424D3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588424D8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588424DA: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588424DE: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588424E3: mov eax, dword ptr [eax + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588424E9: push esi
        __asm _emit 0x56
        // 0x588424EA: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588424EC: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x588424EF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588424F1: je 0x58842749
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x52
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588424F7: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x588424FA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588424FC: je 0x58842749
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842502: push ebx
        __asm _emit 0x53
        // 0x58842503: mov ebx, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58842509: push ebp
        __asm _emit 0x55
        // 0x5884250A: push edi
        __asm _emit 0x57
        // 0x5884250B: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x5884250D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58842510: cmp word ptr [ebp + 0x9e], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842518: je 0x58842529
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x5884251A: mov ecx, dword ptr [ebp + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x70
        // 0x5884251D: mov edx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x6C
        // 0x58842520: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58842525: push ebp
        __asm _emit 0x55
        // 0x58842526: push edx
        __asm _emit 0x52
        // 0x58842527: jmp 0x58842536
        __asm _emit 0xEB
        __asm _emit 0x0D
        // 0x58842529: mov eax, dword ptr [ebp + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x70
        // 0x5884252C: mov ecx, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x6C
        // 0x5884252F: push 0x777777
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x00
        // 0x58842534: push ebp
        __asm _emit 0x55
        // 0x58842535: push ecx
        __asm _emit 0x51
        // 0x58842536: mov ecx, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884253C: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0x63
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58842541: movsx eax, word ptr [ebp + 0x9e]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x85
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842548: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x5884254B: ja 0x588425b7
        __asm _emit 0x77
        __asm _emit 0x6A
        // 0x5884254D: jmp dword ptr [eax*4 + 0x5884275c]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x5C
        __asm _emit 0x27
        __asm _emit 0x84
        __asm _emit 0x58
        // 0x58842554: push 0x777777
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x00
        // 0x58842559: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884255B: push 0x5899e4f8
        __asm _emit 0x68
        __asm _emit 0xF8
        __asm _emit 0xE4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58842560: jmp 0x588425a6
        __asm _emit 0xEB
        __asm _emit 0x44
        // 0x58842562: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58842567: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58842569: push 0x5899e4dc
        __asm _emit 0x68
        __asm _emit 0xDC
        __asm _emit 0xE4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5884256E: jmp 0x588425a6
        __asm _emit 0xEB
        __asm _emit 0x36
        // 0x58842570: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58842575: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58842577: push 0x5899e4b8
        __asm _emit 0x68
        __asm _emit 0xB8
        __asm _emit 0xE4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5884257C: jmp 0x588425a6
        __asm _emit 0xEB
        __asm _emit 0x28
        // 0x5884257E: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58842583: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58842585: push 0x5899e49c
        __asm _emit 0x68
        __asm _emit 0x9C
        __asm _emit 0xE4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5884258A: jmp 0x588425a6
        __asm _emit 0xEB
        __asm _emit 0x1A
        // 0x5884258C: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58842591: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58842593: push 0x5899e47c
        __asm _emit 0x68
        __asm _emit 0x7C
        __asm _emit 0xE4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58842598: jmp 0x588425a6
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x5884259A: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5884259F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588425A1: push 0x5899e45c
        __asm _emit 0x68
        __asm _emit 0x5C
        __asm _emit 0xE4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588425A6: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x588425A8: mov ecx, dword ptr [esi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588425AE: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588425B1: push eax
        __asm _emit 0x50
        // 0x588425B2: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0x63
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588425B7: cmp word ptr [ebp + 0x80], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588425BF: je 0x588426e2
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x1D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588425C5: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588425CB: lea edi, [ebp + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x7D
        __asm _emit 0x78
        // 0x588425CE: push edi
        __asm _emit 0x57
        // 0x588425CF: call 0x58753e60
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0x18
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x588425D4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588425D6: je 0x588426b3
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588425DC: movzx eax, word ptr [ebp + 0x80]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588425E3: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x588425E7: jne 0x58842606
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x588425E9: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x588425EB: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588425F1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588425F3: push edx
        __asm _emit 0x52
        // 0x588425F4: call 0x587538b0
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0x12
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x588425F9: push eax
        __asm _emit 0x50
        // 0x588425FA: push 0x5899e454
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0xE4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588425FF: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58842603: push eax
        __asm _emit 0x50
        // 0x58842604: jmp 0x5884267f
        __asm _emit 0xEB
        __asm _emit 0x79
        // 0x58842606: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x5884260A: jne 0x5884262b
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x5884260C: mov ecx, dword ptr [ebp + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x7C
        // 0x5884260F: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x58842611: push ecx
        __asm _emit 0x51
        // 0x58842612: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58842618: push edx
        __asm _emit 0x52
        // 0x58842619: call 0x587538b0
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0x12
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5884261E: push eax
        __asm _emit 0x50
        // 0x5884261F: push 0x5899e44c
        __asm _emit 0x68
        __asm _emit 0x4C
        __asm _emit 0xE4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58842624: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58842628: push eax
        __asm _emit 0x50
        // 0x58842629: jmp 0x5884267f
        __asm _emit 0xEB
        __asm _emit 0x54
        // 0x5884262B: mov eax, dword ptr [ebp + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x7C
        // 0x5884262E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58842630: jne 0x5884264e
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x58842632: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58842634: push eax
        __asm _emit 0x50
        // 0x58842635: push ecx
        __asm _emit 0x51
        // 0x58842636: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884263C: call 0x587538b0
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0x12
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58842641: push eax
        __asm _emit 0x50
        // 0x58842642: push 0x5899e444
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0xE4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58842647: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5884264B: push edx
        __asm _emit 0x52
        // 0x5884264C: jmp 0x5884267f
        __asm _emit 0xEB
        __asm _emit 0x31
        // 0x5884264E: mov edi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x3F
        // 0x58842650: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58842656: push eax
        __asm _emit 0x50
        // 0x58842657: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58842659: jne 0x5884266e
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x5884265B: push edi
        __asm _emit 0x57
        // 0x5884265C: call 0x587538b0
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x12
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58842661: push eax
        __asm _emit 0x50
        // 0x58842662: push 0x5899e43c
        __asm _emit 0x68
        __asm _emit 0x3C
        __asm _emit 0xE4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58842667: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5884266B: push eax
        __asm _emit 0x50
        // 0x5884266C: jmp 0x5884267f
        __asm _emit 0xEB
        __asm _emit 0x11
        // 0x5884266E: push edi
        __asm _emit 0x57
        // 0x5884266F: call 0x587538b0
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0x12
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58842674: push eax
        __asm _emit 0x50
        // 0x58842675: push 0x5899e434
        __asm _emit 0x68
        __asm _emit 0x34
        __asm _emit 0xE4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5884267A: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5884267E: push ecx
        __asm _emit 0x51
        // 0x5884267F: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58842685: mov ecx, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884268B: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5884268E: cmp word ptr [ebp + 0x9e], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842696: je 0x588426a6
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58842698: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5884269D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884269F: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588426A3: push edx
        __asm _emit 0x52
        // 0x588426A4: jmp 0x5884270b
        __asm _emit 0xEB
        __asm _emit 0x65
        // 0x588426A6: push 0x777777
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x00
        // 0x588426AB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588426AD: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588426B1: jmp 0x5884270a
        __asm _emit 0xEB
        __asm _emit 0x57
        // 0x588426B3: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588426B9: push edi
        __asm _emit 0x57
        // 0x588426BA: call 0x587b9270
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0x6B
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x588426BF: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588426C1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588426C3: push ecx
        __asm _emit 0x51
        // 0x588426C4: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588426CA: call 0x587538b0
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0x11
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x588426CF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588426D1: jne 0x588426e2
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x588426D3: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x588426D5: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588426DB: push eax
        __asm _emit 0x50
        // 0x588426DC: push edx
        __asm _emit 0x52
        // 0x588426DD: call 0x587b9290
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0x6B
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x588426E2: cmp word ptr [ebp + 0x9e], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588426EA: je 0x588426f3
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x588426EC: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588426F1: jmp 0x588426f8
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x588426F3: push 0x777777
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x00
        // 0x588426F8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588426FA: push 0x5899e41c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xE4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588426FF: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58842701: mov ecx, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842707: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884270A: push eax
        __asm _emit 0x50
        // 0x5884270B: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0x61
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58842710: mov eax, dword ptr [ebp + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x74
        // 0x58842713: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x58842716: mov ecx, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884271C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884271E: je 0x5884272a
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58842720: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58842725: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58842727: push eax
        __asm _emit 0x50
        // 0x58842728: jmp 0x58842736
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x5884272A: push 0x777777
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x00
        // 0x5884272F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58842731: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58842736: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0x61
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5884273B: mov ebp, dword ptr [ebp + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x6D
        __asm _emit 0x54
        // 0x5884273E: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58842740: jne 0x58842510
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xCA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58842746: pop edi
        __asm _emit 0x5F
        // 0x58842747: pop ebp
        __asm _emit 0x5D
        // 0x58842748: pop ebx
        __asm _emit 0x5B
        // 0x58842749: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5884274D: pop esi
        __asm _emit 0x5E
        // 0x5884274E: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58842750: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0xA4
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58842755: add esp, 0x38
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x38
        // 0x58842758: ret
        __asm _emit 0xC3
    }
}
