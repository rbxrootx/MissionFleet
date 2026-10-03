// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588EC5D0 .. +0x6AC bytes.
extern "C" __declspec(naked) void FUN_588ec5d0() {
    __asm {
        // 0x588EC5D0: sub esp, 0x134
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC5D6: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588EC5DB: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588EC5DD: mov dword ptr [esp + 0x130], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC5E4: mov eax, dword ptr [esp + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC5EB: push ebp
        __asm _emit 0x55
        // 0x588EC5EC: push esi
        __asm _emit 0x56
        // 0x588EC5ED: push edi
        __asm _emit 0x57
        // 0x588EC5EE: mov edi, dword ptr [esp + 0x144]
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC5F5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588EC5F7: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588EC5FA: jne 0x588ecb44
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC600: cmp edi, dword ptr [esi + 0x10c]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC606: je 0x588ec6b7
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC60C: cmp edi, dword ptr [esi + 0x114]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC612: jne 0x588ec6b7
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC618: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588EC61E: call 0x588f3fa0
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0x79
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC623: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588EC625: je 0x588ecc60
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC62B: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588EC631: mov ax, word ptr [ecx + 0xd54]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x54
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC638: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588EC63A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EC63C: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x588EC640: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC645: movzx ebp, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xE8
        // 0x588EC648: call 0x587d8e70
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0xC8
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588EC64D: movzx ecx, bp
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xCD
        // 0x588EC650: movzx edx, byte ptr [ecx + 0x58a0b4cb]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x91
        __asm _emit 0xCB
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x588EC657: add edx, 6
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x06
        // 0x588EC65A: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588EC65C: jl 0x588ec677
        __asm _emit 0x7C
        __asm _emit 0x19
        // 0x588EC65E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588EC660: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588EC662: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588EC664: push 0x2bd
        __asm _emit 0x68
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC669: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0xF4
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588EC66E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588EC670: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0x86
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588EC675: jmp 0x588ec6b7
        __asm _emit 0xEB
        __asm _emit 0x40
        // 0x588EC677: cmp dword ptr [0x58a248d8], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xD8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x588EC67E: jne 0x588ec6b7
        __asm _emit 0x75
        __asm _emit 0x37
        // 0x588EC680: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588EC685: mov ecx, dword ptr [eax + 0xdb0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xB0
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC68B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EC68D: call 0x58797600
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0xAF
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588EC692: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588EC698: mov ecx, dword ptr [ecx + 0xdb0]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC69E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EC6A0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588EC6A2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588EC6A4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588EC6A6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EC6A8: call 0x58798d60
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0xC6
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588EC6AD: mov dword ptr [0x58a248d8], 1
        __asm _emit 0xC7
        __asm _emit 0x05
        __asm _emit 0xD8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC6B7: cmp edi, dword ptr [esi + 0x118]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC6BD: jne 0x588ec923
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC6C3: mov esi, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588EC6C9: mov ecx, dword ptr [esi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC6CF: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588EC6D1: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x588EC6D3: je 0x588ecc60
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC6D9: cmp dword ptr [0x58a248d8], ebp
        __asm _emit 0x39
        __asm _emit 0x2D
        __asm _emit 0xD8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588EC6DF: jne 0x588ecc60
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x7B
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC6E5: mov edx, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC6EB: movzx edx, word ptr [edx + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x588EC6EF: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588EC6F1: shr eax, 5
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x05
        // 0x588EC6F4: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x588EC6F7: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x588EC6FB: jne 0x588ec808
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC701: movzx esi, word ptr [ecx + 0x90]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xB1
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC708: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588EC70E: push esi
        __asm _emit 0x56
        // 0x588EC70F: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EC711: call 0x58779890
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0xD1
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588EC716: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x588EC718: je 0x588ecc60
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x42
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC71E: cmp word ptr [eax + 8], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x588EC723: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588EC728: jne 0x588ec77c
        __asm _emit 0x75
        __asm _emit 0x52
        // 0x588EC72A: mov eax, dword ptr [eax + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC730: mov ecx, dword ptr [eax + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC736: push ecx
        __asm _emit 0x51
        // 0x588EC737: mov ecx, dword ptr [0x58a245e4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588EC73D: push esi
        __asm _emit 0x56
        // 0x588EC73E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EC740: call 0x588804f0
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0x3D
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x588EC745: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588EC74B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588EC74D: mov eax, dword ptr [edx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC753: mov edx, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC759: mov edi, dword ptr [edx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x7A
        __asm _emit 0x60
        // 0x588EC75C: mov eax, 0x57619f1
        __asm _emit 0xB8
        __asm _emit 0xF1
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588EC761: mul edi
        __asm _emit 0xF7
        __asm _emit 0xE7
        // 0x588EC763: shr edx, 7
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x07
        // 0x588EC766: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x588EC768: mov eax, 0x57619f1
        __asm _emit 0xB8
        __asm _emit 0xF1
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588EC76D: imul esi, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xF1
        // 0x588EC770: mul edi
        __asm _emit 0xF7
        __asm _emit 0xE7
        // 0x588EC772: shr edx, 8
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x588EC775: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x588EC777: imul edi, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xF9
        // 0x588EC77A: jmp 0x588ec7ad
        __asm _emit 0xEB
        __asm _emit 0x31
        // 0x588EC77C: mov ecx, dword ptr [eax + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC782: mov edx, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC788: mov ecx, dword ptr [edx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x60
        // 0x588EC78B: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588EC78D: imul edx, edx, 0x16
        __asm _emit 0x6B
        __asm _emit 0xD2
        __asm _emit 0x16
        // 0x588EC790: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588EC795: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x588EC797: lea ecx, [ecx + ecx*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x89
        // 0x588EC79A: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x588EC79C: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x588EC79E: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588EC7A3: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x588EC7A5: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x588EC7A7: shr esi, 5
        __asm _emit 0xC1
        __asm _emit 0xEE
        __asm _emit 0x05
        // 0x588EC7AA: shr edi, 5
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x05
        // 0x588EC7AD: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC7B2: lea edx, [esp + 0x41]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x41
        // 0x588EC7B6: push ebp
        __asm _emit 0x55
        // 0x588EC7B7: push edx
        __asm _emit 0x52
        // 0x588EC7B8: mov dword ptr [0x58a248d8], 1
        __asm _emit 0xC7
        __asm _emit 0x05
        __asm _emit 0xD8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC7C2: mov byte ptr [esp + 0x48], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x00
        // 0x588EC7C7: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EC7CC: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588EC7CF: push edi
        __asm _emit 0x57
        // 0x588EC7D0: push esi
        __asm _emit 0x56
        // 0x588EC7D1: push 0x589a160c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x16
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588EC7D6: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588EC7DC: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588EC7DF: push eax
        __asm _emit 0x50
        // 0x588EC7E0: lea eax, [esp + 0x48]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x588EC7E4: push eax
        __asm _emit 0x50
        // 0x588EC7E5: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588EC7EB: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588EC7EE: push ebp
        __asm _emit 0x55
        // 0x588EC7EF: push ebp
        __asm _emit 0x55
        // 0x588EC7F0: lea ecx, [esp + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x588EC7F4: push ecx
        __asm _emit 0x51
        // 0x588EC7F5: push 0xa
        __asm _emit 0x6A
        __asm _emit 0x0A
        // 0x588EC7F7: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0xF2
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588EC7FC: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588EC7FE: call 0x5876a570
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0xDD
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588EC803: jmp 0x588ecc60
        __asm _emit 0xE9
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC808: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x588EC80C: jne 0x588ec869
        __asm _emit 0x75
        __asm _emit 0x5B
        // 0x588EC80E: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588EC810: mov eax, dword ptr [edx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC816: mov esi, dword ptr [eax + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x60
        // 0x588EC819: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC81E: lea ecx, [esp + 0x41]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x41
        // 0x588EC822: push ebp
        __asm _emit 0x55
        // 0x588EC823: push ecx
        __asm _emit 0x51
        // 0x588EC824: mov byte ptr [esp + 0x48], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x00
        // 0x588EC829: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0x04
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EC82E: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588EC831: push esi
        __asm _emit 0x56
        // 0x588EC832: push 0x589a15e4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0x15
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588EC837: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588EC83D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588EC840: push eax
        __asm _emit 0x50
        // 0x588EC841: lea edx, [esp + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x588EC845: push edx
        __asm _emit 0x52
        // 0x588EC846: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588EC84C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588EC84F: push ebp
        __asm _emit 0x55
        // 0x588EC850: push ebp
        __asm _emit 0x55
        // 0x588EC851: lea eax, [esp + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x588EC855: push eax
        __asm _emit 0x50
        // 0x588EC856: push 0xa
        __asm _emit 0x6A
        __asm _emit 0x0A
        // 0x588EC858: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0xF2
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588EC85D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588EC85F: call 0x5876a570
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0xDD
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588EC864: jmp 0x588ecc60
        __asm _emit 0xE9
        __asm _emit 0xF7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC869: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588EC86D: jne 0x588ec879
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x588EC86F: push ebp
        __asm _emit 0x55
        // 0x588EC870: push ebp
        __asm _emit 0x55
        // 0x588EC871: push ebp
        __asm _emit 0x55
        // 0x588EC872: push 0x47f
        __asm _emit 0x68
        __asm _emit 0x7F
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC877: jmp 0x588ec8ae
        __asm _emit 0xEB
        __asm _emit 0x35
        // 0x588EC879: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x588EC87D: jne 0x588ec898
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x588EC87F: push ebp
        __asm _emit 0x55
        // 0x588EC880: push ebp
        __asm _emit 0x55
        // 0x588EC881: push ebp
        __asm _emit 0x55
        // 0x588EC882: push 0x4a3
        __asm _emit 0x68
        __asm _emit 0xA3
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC887: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0xF2
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588EC88C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588EC88E: call 0x5876a570
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0xDC
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588EC893: jmp 0x588ecc60
        __asm _emit 0xE9
        __asm _emit 0xC8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC898: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x588EC89B: cmp dl, 7
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x07
        // 0x588EC89E: jne 0x588ec8c5
        __asm _emit 0x75
        __asm _emit 0x25
        // 0x588EC8A0: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x588EC8A4: jne 0x588ec8c5
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x588EC8A6: push ebp
        __asm _emit 0x55
        // 0x588EC8A7: push ebp
        __asm _emit 0x55
        // 0x588EC8A8: push ebp
        __asm _emit 0x55
        // 0x588EC8A9: push 0x518
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC8AE: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0xF2
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588EC8B3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588EC8B5: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0x84
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588EC8BA: mov dword ptr [0x58a248d8], ebp
        __asm _emit 0x89
        __asm _emit 0x2D
        __asm _emit 0xD8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588EC8C0: jmp 0x588ecc60
        __asm _emit 0xE9
        __asm _emit 0x9B
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC8C5: mov ecx, dword ptr [0x58a245ec]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588EC8CB: movzx edx, word ptr [ecx + 0x128]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x91
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC8D2: cmp dx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x03
        // 0x588EC8D6: je 0x588ec90d
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x588EC8D8: cmp ax, bp
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x588EC8DB: je 0x588ec90d
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x588EC8DD: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588EC8E1: je 0x588ec90d
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x588EC8E3: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x588EC8E7: je 0x588ec90d
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x588EC8E9: cmp dx, bp
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xD5
        // 0x588EC8EC: je 0x588eca9a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC8F2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588EC8F4: mov word ptr [ecx + 0x12a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x2A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC8FB: mov ecx, dword ptr [0x58a245ec]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588EC901: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EC903: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588EC906: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EC908: jmp 0x588ecc60
        __asm _emit 0xE9
        __asm _emit 0x53
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC90D: push ebp
        __asm _emit 0x55
        // 0x588EC90E: push ebp
        __asm _emit 0x55
        // 0x588EC90F: push ebp
        __asm _emit 0x55
        // 0x588EC910: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x588EC912: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0xF1
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588EC917: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588EC919: call 0x5876a570
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0xDC
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588EC91E: jmp 0x588ecc60
        __asm _emit 0xE9
        __asm _emit 0x3D
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC923: cmp edi, dword ptr [esi + 0x11c]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC929: jne 0x588ec958
        __asm _emit 0x75
        __asm _emit 0x2D
        // 0x588EC92B: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588EC930: mov eax, dword ptr [eax + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC936: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588EC938: je 0x588ecc60
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC93E: mov ecx, dword ptr [eax + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x48
        // 0x588EC941: shr ecx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x0A
        // 0x588EC944: movzx edx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD1
        // 0x588EC947: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588EC94D: push edx
        __asm _emit 0x52
        // 0x588EC94E: call 0x587b99d0
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0xD0
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588EC953: jmp 0x588ecc60
        __asm _emit 0xE9
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC958: cmp edi, dword ptr [esi + 0x110]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC95E: jne 0x588ec9c9
        __asm _emit 0x75
        __asm _emit 0x69
        // 0x588EC960: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588EC966: cmp dword ptr [ecx + 0xd78], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC96D: je 0x588ecc60
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xED
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC973: mov eax, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC979: mov eax, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC97F: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588EC983: mov esi, 0x3e0
        __asm _emit 0xBE
        __asm _emit 0xE0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC988: and dx, si
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD6
        // 0x588EC98B: cmp dx, 0x40
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x40
        // 0x588EC98F: jne 0x588ec9b7
        __asm _emit 0x75
        __asm _emit 0x26
        // 0x588EC991: cmp word ptr [eax + 0x35e], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x5E
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC999: je 0x588ec9b7
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x588EC99B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588EC99D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588EC99F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588EC9A1: push 0x474
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC9A6: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0xF1
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588EC9AB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588EC9AD: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0x83
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588EC9B2: jmp 0x588ecc60
        __asm _emit 0xE9
        __asm _emit 0xA9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC9B7: mov ecx, dword ptr [ecx + 0xdd0]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xD0
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC9BD: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EC9BF: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588EC9C2: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EC9C4: jmp 0x588ecc60
        __asm _emit 0xE9
        __asm _emit 0x97
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC9C9: cmp edi, dword ptr [esi + 0x128]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC9CF: jne 0x588ecade
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC9D5: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588EC9DB: call 0x588f3fa0
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC9E0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588EC9E2: je 0x588ecc60
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC9E8: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588EC9EE: call 0x587d6c00
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0xA2
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588EC9F3: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588EC9F6: cmp eax, dword ptr [0x58a0b4a0]
        __asm _emit 0x3B
        __asm _emit 0x05
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x588EC9FC: jne 0x588ecac2
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECA02: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588ECA08: call 0x587d6c00
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0xA1
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588ECA0D: cmp dword ptr [eax + 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588ECA11: jbe 0x588ecac2
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0xAB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECA17: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588ECA1D: call 0x588f42f0
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECA22: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588ECA24: je 0x588eca42
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x588ECA26: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588ECA28: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588ECA2A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588ECA2C: push 0x47c
        __asm _emit 0x68
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECA31: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588ECA36: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588ECA38: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0x82
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588ECA3D: jmp 0x588ecc60
        __asm _emit 0xE9
        __asm _emit 0x1E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECA42: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588ECA47: mov ecx, dword ptr [eax + 0xdb0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xB0
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECA4D: movzx esi, word ptr [eax + 0x60]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x70
        __asm _emit 0x60
        // 0x588ECA51: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x588ECA53: call 0x58797600
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0xAB
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588ECA58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588ECA5E: mov ecx, dword ptr [ecx + 0xdb0]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECA64: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588ECA66: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588ECA68: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588ECA6A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588ECA6C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588ECA6E: call 0x58798d60
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0xC2
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588ECA73: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588ECA79: mov ecx, dword ptr [edx + 0xdb0]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xB0
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECA7F: shr esi, 8
        __asm _emit 0xC1
        __asm _emit 0xEE
        __asm _emit 0x08
        // 0x588ECA82: and esi, 0xf
        __asm _emit 0x83
        __asm _emit 0xE6
        __asm _emit 0x0F
        // 0x588ECA85: push esi
        __asm _emit 0x56
        // 0x588ECA86: call 0x587a0090
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x36
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588ECA8B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588ECA8D: je 0x588ecaa6
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x588ECA8F: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588ECA94: mov ecx, dword ptr [eax + 0xdb0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xB0
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECA9A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588ECA9C: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588ECA9F: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588ECAA1: jmp 0x588ecc60
        __asm _emit 0xE9
        __asm _emit 0xBA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECAA6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588ECAA8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588ECAAA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588ECAAC: push 0x479
        __asm _emit 0x68
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECAB1: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0xF0
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588ECAB6: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588ECAB8: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0x82
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588ECABD: jmp 0x588ecc60
        __asm _emit 0xE9
        __asm _emit 0x9E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECAC2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588ECAC4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588ECAC6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588ECAC8: push 0x476
        __asm _emit 0x68
        __asm _emit 0x76
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECACD: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0xF0
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588ECAD2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588ECAD4: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0x82
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588ECAD9: jmp 0x588ecc60
        __asm _emit 0xE9
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECADE: cmp edi, dword ptr [esi + 0x12c]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECAE4: jne 0x588ecc60
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECAEA: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588ECAF0: mov eax, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECAF6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588ECAF8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588ECAFA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588ECAFC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588ECAFE: je 0x588ecb2e
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x588ECB00: mov edx, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECB06: mov ax, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588ECB0A: mov ecx, 0x3e0
        __asm _emit 0xB9
        __asm _emit 0xE0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECB0F: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x588ECB12: cmp ax, 0x40
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x40
        // 0x588ECB16: jne 0x588ecb2e
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x588ECB18: push 0x144
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECB1D: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0xEF
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588ECB22: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588ECB24: call 0x5876a570
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0xDA
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588ECB29: jmp 0x588ecc60
        __asm _emit 0xE9
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECB2E: push 0x477
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECB33: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0xEF
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588ECB38: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588ECB3A: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0x81
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588ECB3F: jmp 0x588ecc60
        __asm _emit 0xE9
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECB44: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x588ECB47: jne 0x588ecc4f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECB4D: cmp edi, dword ptr [esi + 0x10c]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECB53: je 0x588ecc60
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECB59: cmp edi, dword ptr [esi + 0x118]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECB5F: jne 0x588ecb6b
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x588ECB61: push 0x589a15c4
        __asm _emit 0x68
        __asm _emit 0xC4
        __asm _emit 0x15
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588ECB66: jmp 0x588ecc30
        __asm _emit 0xE9
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECB6B: cmp edi, dword ptr [esi + 0x11c]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECB71: jne 0x588ecc14
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECB77: mov esi, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588ECB7D: cmp dword ptr [esi + 0xd78], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECB84: je 0x588ecc60
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECB8A: push 0x2f
        __asm _emit 0x6A
        __asm _emit 0x2F
        // 0x588ECB8C: lea edx, [esp + 0x11]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x11
        // 0x588ECB90: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588ECB92: push edx
        __asm _emit 0x52
        // 0x588ECB93: mov byte ptr [esp + 0x18], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x588ECB98: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0x00
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588ECB9D: mov ecx, dword ptr [esi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECBA3: mov eax, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECBA9: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x588ECBAD: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x588ECBB1: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588ECBB4: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588ECBB8: je 0x588ecbef
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x588ECBBA: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588ECBBE: je 0x588ecbef
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x588ECBC0: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x588ECBC4: je 0x588ecbef
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x588ECBC6: call 0x588e6ac0
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0x9E
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588ECBCB: push eax
        __asm _emit 0x50
        // 0x588ECBCC: push 0x589a15a4
        __asm _emit 0x68
        __asm _emit 0xA4
        __asm _emit 0x15
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588ECBD1: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588ECBD7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588ECBDA: push eax
        __asm _emit 0x50
        // 0x588ECBDB: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588ECBDF: push ecx
        __asm _emit 0x51
        // 0x588ECBE0: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588ECBE6: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588ECBE9: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588ECBED: jmp 0x588ecc39
        __asm _emit 0xEB
        __asm _emit 0x4A
        // 0x588ECBEF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588ECBF1: push 0x589a15a4
        __asm _emit 0x68
        __asm _emit 0xA4
        __asm _emit 0x15
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588ECBF6: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588ECBFC: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588ECBFF: push eax
        __asm _emit 0x50
        // 0x588ECC00: lea edx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588ECC04: push edx
        __asm _emit 0x52
        // 0x588ECC05: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588ECC0B: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588ECC0E: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588ECC12: jmp 0x588ecc39
        __asm _emit 0xEB
        __asm _emit 0x25
        // 0x588ECC14: cmp edi, dword ptr [esi + 0x114]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECC1A: jne 0x588ecc23
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x588ECC1C: push 0x589a1584
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588ECC21: jmp 0x588ecc30
        __asm _emit 0xEB
        __asm _emit 0x0D
        // 0x588ECC23: cmp edi, dword ptr [esi + 0x110]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECC29: jne 0x588ecc60
        __asm _emit 0x75
        __asm _emit 0x35
        // 0x588ECC2B: push 0x589a1564
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0x15
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588ECC30: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588ECC36: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588ECC39: mov ecx, dword ptr [0x58a24820]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588ECC3F: push eax
        __asm _emit 0x50
        // 0x588ECC40: push 0x32
        __asm _emit 0x6A
        __asm _emit 0x32
        // 0x588ECC42: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECC47: push edi
        __asm _emit 0x57
        // 0x588ECC48: call 0x587626c0
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0x5A
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588ECC4D: jmp 0x588ecc60
        __asm _emit 0xEB
        __asm _emit 0x11
        // 0x588ECC4F: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x588ECC52: jne 0x588ecc60
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x588ECC54: mov ecx, dword ptr [0x58a24820]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588ECC5A: push edi
        __asm _emit 0x57
        // 0x588ECC5B: call 0x58762610
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0x59
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588ECC60: mov ecx, dword ptr [esp + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECC67: pop edi
        __asm _emit 0x5F
        // 0x588ECC68: pop esi
        __asm _emit 0x5E
        // 0x588ECC69: pop ebp
        __asm _emit 0x5D
        // 0x588ECC6A: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588ECC6C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588ECC6E: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0xFF
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588ECC73: add esp, 0x134
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECC79: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
