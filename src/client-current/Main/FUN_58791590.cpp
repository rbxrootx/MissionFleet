// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 2120 bytes in 2 exact ranges.
// Source symbol alias: FUN_58791590.

// Ghidra body range 0x58791590..0x587917F9; 617 mapped bytes.
extern "C" __declspec(naked) void FUN_58791590_segment_00() {
    __asm {
        // 0x58791590: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58791592: push 0x58980346
        __asm _emit 0x68
        __asm _emit 0x46
        __asm _emit 0x03
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58791597: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879159D: push eax
        __asm _emit 0x50
        // 0x5879159E: push ecx
        __asm _emit 0x51
        // 0x5879159F: push ebx
        __asm _emit 0x53
        // 0x587915A0: push ebp
        __asm _emit 0x55
        // 0x587915A1: push esi
        __asm _emit 0x56
        // 0x587915A2: push edi
        __asm _emit 0x57
        // 0x587915A3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587915A8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587915AA: push eax
        __asm _emit 0x50
        // 0x587915AB: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587915AF: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587915B5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587915B7: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587915BB: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x587915BD: je 0x58791dcb
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587915C3: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x587915C7: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587915CC: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x587915CF: mov eax, 0x100
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587915D4: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587915D6: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x587915D9: je 0x58791b1f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587915DF: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x587915E3: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x587915E6: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587915EB: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x587915EE: je 0x58791b1f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x2B
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587915F4: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x587915F8: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x587915FB: mov eax, 0xe00
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791600: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58791603: je 0x58791b1f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791609: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5879160D: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58791610: mov eax, 0x700
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791615: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58791618: jne 0x58791834
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x16
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879161E: mov eax, dword ptr [esi + 0x12138]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58791624: cmp eax, 9
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x58791627: jne 0x5879174c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x1F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879162D: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58791631: mov edx, 0xe1ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791636: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58791639: mov eax, 0x100
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879163E: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x58791641: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58791645: mov dword ptr [esi + 0x12138], 0x10
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879164F: mov dword ptr [esi + 0x9c], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58791659: cmp dword ptr [0x589c9034], ebp
        __asm _emit 0x39
        __asm _emit 0x2D
        __asm _emit 0x34
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5879165F: je 0x5879166f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58791661: mov ecx, dword ptr [0x58a0adb0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB0
        __asm _emit 0xAD
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58791667: mov dword ptr [esi + 0x84], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879166D: jmp 0x587916a8
        __asm _emit 0xEB
        __asm _emit 0x39
        // 0x5879166F: mov eax, dword ptr [0x58a2470c]
        __asm _emit 0xA1
        __asm _emit 0x0C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58791674: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58791676: je 0x587916a2
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x58791678: cmp dword ptr [eax + 0x170], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879167E: jle 0x58791698
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x58791680: cmp dword ptr [eax + 0x194], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791686: je 0x58791698
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x58791688: mov edx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879168E: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58791690: mov dword ptr [esi + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791696: jmp 0x587916a8
        __asm _emit 0xEB
        __asm _emit 0x10
        // 0x58791698: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5879169A: mov dword ptr [esi + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587916A0: jmp 0x587916a8
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x587916A2: mov dword ptr [esi + 0x84], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587916A8: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587916AE: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x587916B0: je 0x587916e3
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x587916B2: cmp dword ptr [0x58a244fc], ebp
        __asm _emit 0x39
        __asm _emit 0x2D
        __asm _emit 0xFC
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587916B8: je 0x587916d7
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x587916BA: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587916BC: mov edx, dword ptr [0x58a248d4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xD4
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587916C2: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587916C5: push edx
        __asm _emit 0x52
        // 0x587916C6: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587916C8: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587916CE: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587916D0: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587916D3: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587916D5: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587916D7: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587916DD: mov dword ptr [0x58a24780], ecx
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587916E3: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587916E9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587916EB: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587916F0: mov ecx, dword ptr [0x58a247fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587916F6: push 0x20000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587916FB: call 0x588c0bd0
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0xF4
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x58791700: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x58791703: cmp dword ptr [eax + 0x164], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791709: jle 0x58791719
        __asm _emit 0x7E
        __asm _emit 0x0E
        // 0x5879170B: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791711: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58791713: je 0x58791719
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58791715: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58791717: jmp 0x5879171b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58791719: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5879171B: mov ecx, dword ptr [esi + 0x121a0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58791721: push eax
        __asm _emit 0x50
        // 0x58791722: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0xFF
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x58791727: mov ecx, dword ptr [esi + 0x121a0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5879172D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5879172F: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0xFE
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x58791734: mov ecx, dword ptr [0x58a2456c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x6C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5879173A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5879173C: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0xFE
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x58791741: mov dword ptr [0x58a24580], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58791747: jmp 0x58791b42
        __asm _emit 0xE9
        __asm _emit 0xF6
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879174C: cmp eax, 0x11
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x11
        // 0x5879174F: jne 0x58791b42
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xED
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791755: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58791757: mov eax, dword ptr [edx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x1C
        // 0x5879175A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5879175C: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5879175E: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791764: mov eax, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x28
        // 0x58791767: lea edx, [eax + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5879176A: cmp edx, 0x100
        __asm _emit 0x81
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791770: jge 0x587917d2
        __asm _emit 0x7D
        __asm _emit 0x60
        // 0x58791772: add eax, 6
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x06
        // 0x58791775: push eax
        __asm _emit 0x50
        // 0x58791776: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0x15
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x5879177B: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791781: mov eax, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x28
        // 0x58791784: add eax, 6
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x06
        // 0x58791787: push eax
        __asm _emit 0x50
        // 0x58791788: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0x15
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x5879178D: lea edi, [esi + 0xc0]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791793: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791798: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5879179A: mov edx, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x28
        // 0x5879179D: add edx, 6
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x06
        // 0x587917A0: push edx
        __asm _emit 0x52
        // 0x587917A1: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0x15
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587917A6: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587917A9: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x587917AC: jne 0x58791798
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x587917AE: mov ecx, dword ptr [esi + 0x121a8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587917B4: mov eax, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x28
        // 0x587917B7: add eax, 6
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x06
        // 0x587917BA: push eax
        __asm _emit 0x50
        // 0x587917BB: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0x15
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587917C0: mov ecx, dword ptr [esi + 0x121ac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587917C6: mov edx, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x28
        // 0x587917C9: add edx, 6
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x06
        // 0x587917CC: push edx
        __asm _emit 0x52
        // 0x587917CD: jmp 0x58791b3d
        __asm _emit 0xE9
        __asm _emit 0x6B
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587917D2: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587917D7: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0x15
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587917DC: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587917E2: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587917E7: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0x14
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587917EC: lea edi, [esi + 0xc0]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587917F2: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587917F7: jmp 0x58791800
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x58791800..0x58791DDF; 1503 mapped bytes.
extern "C" __declspec(naked) void FUN_58791590_segment_01() {
    __asm {
        // 0x58791800: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58791802: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791807: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0x14
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x5879180C: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5879180F: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x58791812: jne 0x58791800
        __asm _emit 0x75
        __asm _emit 0xEC
        // 0x58791814: mov ecx, dword ptr [esi + 0x121a8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5879181A: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879181F: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0x14
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58791824: mov ecx, dword ptr [esi + 0x121ac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5879182A: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879182F: jmp 0x58791b3d
        __asm _emit 0xE9
        __asm _emit 0x09
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791834: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58791838: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5879183A: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5879183D: mov edx, 0x800
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791842: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58791845: jne 0x58791879
        __asm _emit 0x75
        __asm _emit 0x32
        // 0x58791847: cmp dword ptr [esi + 0x9c], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879184D: jne 0x58791b42
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xEF
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791853: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58791857: mov ecx, 0xe5ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879185C: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5879185F: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791864: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x58791867: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5879186B: mov eax, 0xfffb
        __asm _emit 0xB8
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791870: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58791874: jmp 0x58791b42
        __asm _emit 0xE9
        __asm _emit 0xC9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791879: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5879187D: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791882: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58791885: mov eax, 0x200
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879188A: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5879188D: jne 0x58791961
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791893: cmp dword ptr [esi + 0x1213c], 0x16
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x3C
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x16
        // 0x5879189A: jne 0x58791b42
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587918A0: mov ecx, dword ptr [esi + 0x121a0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587918A6: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x587918A9: add eax, -2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xFE
        // 0x587918AC: push eax
        __asm _emit 0x50
        // 0x587918AD: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0x1A
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587918B2: cmp dword ptr [esi + 0xa0], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587918B8: jne 0x587918c1
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x587918BA: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587918BC: call 0x5878d0a0
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0xB7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587918C1: mov eax, dword ptr [esi + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x2C
        // 0x587918C4: cmp eax, 0x28
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x28
        // 0x587918C7: jge 0x587918cc
        __asm _emit 0x7D
        __asm _emit 0x03
        // 0x587918C9: inc eax
        __asm _emit 0x40
        // 0x587918CA: jmp 0x587918cf
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x587918CC: add eax, 7
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x07
        // 0x587918CF: cmp eax, 0xff
        __asm _emit 0x3D
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587918D4: jle 0x58791954
        __asm _emit 0x7E
        __asm _emit 0x7E
        // 0x587918D6: push 0x600
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587918DB: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0xB3
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x587918E0: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587918E3: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587918E7: mov dword ptr [esp + 0x20], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587918EF: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x587918F1: je 0x58791903
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x587918F3: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x587918F5: push ebp
        __asm _emit 0x55
        // 0x587918F6: push ebp
        __asm _emit 0x55
        // 0x587918F7: push ebp
        __asm _emit 0x55
        // 0x587918F8: push ebp
        __asm _emit 0x55
        // 0x587918F9: push ebp
        __asm _emit 0x55
        // 0x587918FA: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587918FC: call 0x58756f80
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0x56
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x58791901: jmp 0x58791905
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58791903: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58791905: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5879190B: push eax
        __asm _emit 0x50
        // 0x5879190C: mov dword ptr [esp + 0x24], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58791914: mov dword ptr [0x58a24590], eax
        __asm _emit 0xA3
        __asm _emit 0x90
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58791919: call 0x5874a7f0
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0x8E
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x5879191E: mov ecx, dword ptr [0x58a24590]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x90
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58791924: push 0x2af8
        __asm _emit 0x68
        __asm _emit 0xF8
        __asm _emit 0x2A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791929: call 0x58731590
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0xFC
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x5879192E: mov ecx, dword ptr [0x58a24590]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x90
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58791934: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58791936: call 0x58758150
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x5879193B: push 0x589977c8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x77
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58791940: call dword ptr [0x5898c17c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x7C
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58791946: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58791948: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x5879194B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5879194D: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5879194F: jmp 0x58791b42
        __asm _emit 0xE9
        __asm _emit 0xEE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791954: push eax
        __asm _emit 0x50
        // 0x58791955: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58791957: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0x13
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x5879195C: jmp 0x58791b42
        __asm _emit 0xE9
        __asm _emit 0xE1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791961: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58791965: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58791968: mov eax, 0xd00
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879196D: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58791970: jne 0x58791b42
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xCC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791976: cmp dword ptr [esi + 0x12150], 0x64
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x50
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x64
        // 0x5879197D: jne 0x587919f2
        __asm _emit 0x75
        __asm _emit 0x73
        // 0x5879197F: push 0x589977b8
        __asm _emit 0x68
        __asm _emit 0xB8
        __asm _emit 0x77
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58791984: call dword ptr [0x5898c17c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x7C
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5879198A: mov ecx, dword ptr [esi + 0x12148]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x48
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58791990: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58791992: push ecx
        __asm _emit 0x51
        // 0x58791993: call dword ptr [0x5898c128]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58791999: mov edx, dword ptr [esi + 0x12148]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x48
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5879199F: push edx
        __asm _emit 0x52
        // 0x587919A0: call dword ptr [0x5898c184]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587919A6: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587919A8: call 0x58790990
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0xEF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587919AD: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x587919B2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587919B4: mov dword ptr [esi + 0x12138], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x38
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587919BA: call 0x5878cd60
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0xB3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587919BF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587919C1: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587919C3: cmp ax, word ptr [esi + 0x120]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587919CA: jae 0x58791b42
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587919D0: lea ebx, [esi + 0xe0]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587919D6: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x587919D8: push ebp
        __asm _emit 0x55
        // 0x587919D9: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0xFC
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587919DE: movzx ecx, word ptr [esi + 0x120]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587919E5: inc edi
        __asm _emit 0x47
        // 0x587919E6: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x587919E9: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x587919EB: jl 0x587919d6
        __asm _emit 0x7C
        __asm _emit 0xE9
        // 0x587919ED: jmp 0x58791b42
        __asm _emit 0xE9
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587919F2: mov eax, dword ptr [esi + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587919F8: cmp eax, 0x64
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x64
        // 0x587919FB: jae 0x58791a09
        __asm _emit 0x73
        __asm _emit 0x0C
        // 0x587919FD: inc eax
        __asm _emit 0x40
        // 0x587919FE: mov dword ptr [esi + 0x124], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791A04: jmp 0x58791b42
        __asm _emit 0xE9
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791A09: movzx edx, word ptr [esi + 0x120]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x96
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791A10: mov eax, dword ptr [esi + 0x12c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791A16: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791A1B: sub edx, ebx
        __asm _emit 0x2B
        __asm _emit 0xD3
        // 0x58791A1D: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58791A1F: jge 0x58791b42
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x1D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791A25: mov ecx, dword ptr [esi + eax*4 + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791A2C: cmp dword ptr [ecx + 0x28], ebp
        __asm _emit 0x39
        __asm _emit 0x69
        __asm _emit 0x28
        // 0x58791A2F: jne 0x58791a37
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x58791A31: push ebx
        __asm _emit 0x53
        // 0x58791A32: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x58791A37: mov eax, dword ptr [esi + 0x12c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791A3D: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58791A3F: jl 0x58791a7d
        __asm _emit 0x7C
        __asm _emit 0x3C
        // 0x58791A41: mov ecx, dword ptr [esi + eax*4 + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791A48: mov edx, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x28
        // 0x58791A4B: sub edx, 0xa
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x0A
        // 0x58791A4E: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58791A50: jle 0x58791a64
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x58791A52: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58791A54: mov ecx, dword ptr [eax + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x28
        // 0x58791A57: sub ecx, 0xa
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x0A
        // 0x58791A5A: push ecx
        __asm _emit 0x51
        // 0x58791A5B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58791A5D: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0x12
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58791A62: jmp 0x58791a7d
        __asm _emit 0xEB
        __asm _emit 0x19
        // 0x58791A64: push ebp
        __asm _emit 0x55
        // 0x58791A65: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0x12
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58791A6A: mov edx, dword ptr [esi + 0x12c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791A70: mov ecx, dword ptr [esi + edx*4 + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x96
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791A77: push ebp
        __asm _emit 0x55
        // 0x58791A78: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0xFB
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x58791A7D: cmp dword ptr [esi + 0x128], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791A83: jbe 0x58791ad8
        __asm _emit 0x76
        __asm _emit 0x53
        // 0x58791A85: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCF
        __asm _emit 0xFF
        // 0x58791A88: cmp dword ptr [esi + 0x12c], edi
        __asm _emit 0x39
        __asm _emit 0xBE
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791A8E: jne 0x58791ad8
        __asm _emit 0x75
        __asm _emit 0x48
        // 0x58791A90: mov ecx, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791A96: mov eax, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x28
        // 0x58791A99: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x58791A9C: cmp eax, 0x100
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791AA1: jge 0x58791aba
        __asm _emit 0x7D
        __asm _emit 0x17
        // 0x58791AA3: mov edx, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x28
        // 0x58791AA6: add edx, 2
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x02
        // 0x58791AA9: push edx
        __asm _emit 0x52
        // 0x58791AAA: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0x12
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58791AAF: add dword ptr [esi + 0x128], edi
        __asm _emit 0x01
        __asm _emit 0xBE
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791AB5: jmp 0x58791b42
        __asm _emit 0xE9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791ABA: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791ABF: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x12
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58791AC4: add dword ptr [esi + 0x12c], ebx
        __asm _emit 0x01
        __asm _emit 0x9E
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791ACA: mov dword ptr [esi + 0x124], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791AD0: mov dword ptr [esi + 0x128], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791AD6: jmp 0x58791b42
        __asm _emit 0xEB
        __asm _emit 0x6A
        // 0x58791AD8: mov eax, dword ptr [esi + 0x12c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791ADE: mov ecx, dword ptr [esi + eax*4 + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791AE5: mov edx, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x28
        // 0x58791AE8: lea eax, [esi + eax*4 + 0xe4]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791AEF: add edx, 0xa
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x0A
        // 0x58791AF2: cmp edx, 0x100
        __asm _emit 0x81
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791AF8: jge 0x58791b07
        __asm _emit 0x7D
        __asm _emit 0x0D
        // 0x58791AFA: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58791AFC: mov ecx, dword ptr [eax + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x28
        // 0x58791AFF: add ecx, 0xa
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x0A
        // 0x58791B02: push ecx
        __asm _emit 0x51
        // 0x58791B03: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58791B05: jmp 0x58791b3d
        __asm _emit 0xEB
        __asm _emit 0x36
        // 0x58791B07: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791B0C: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0x11
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58791B11: add dword ptr [esi + 0x12c], ebx
        __asm _emit 0x01
        __asm _emit 0x9E
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791B17: mov dword ptr [esi + 0x124], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791B1D: jmp 0x58791b42
        __asm _emit 0xEB
        __asm _emit 0x23
        // 0x58791B1F: mov eax, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x58791B22: mov ecx, dword ptr [esi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x28
        // 0x58791B25: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58791B27: je 0x58791b92
        __asm _emit 0x74
        __asm _emit 0x69
        // 0x58791B29: jle 0x58791b81
        __asm _emit 0x7E
        __asm _emit 0x56
        // 0x58791B2B: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58791B2D: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x58791B2F: cmp edx, 0x24
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x24
        // 0x58791B32: jg 0x58791b37
        __asm _emit 0x7F
        __asm _emit 0x03
        // 0x58791B34: push eax
        __asm _emit 0x50
        // 0x58791B35: jmp 0x58791b3b
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x58791B37: add ecx, 0x24
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x24
        // 0x58791B3A: push ecx
        __asm _emit 0x51
        // 0x58791B3B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58791B3D: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0x11
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58791B42: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58791B44: call 0x5878ab00
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0x8F
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58791B49: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x58791B4C: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x58791B4E: je 0x58791dcb
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791B54: mov edi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x38
        // 0x58791B57: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58791B59: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58791B5C: cmp edi, dword ptr [esi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x58791B5F: je 0x58791dc9
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791B65: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58791B67: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58791B69: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x58791B6B: jne 0x58791b54
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x58791B6D: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58791B71: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791B78: pop ecx
        __asm _emit 0x59
        // 0x58791B79: pop edi
        __asm _emit 0x5F
        // 0x58791B7A: pop esi
        __asm _emit 0x5E
        // 0x58791B7B: pop ebp
        __asm _emit 0x5D
        // 0x58791B7C: pop ebx
        __asm _emit 0x5B
        // 0x58791B7D: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58791B80: ret
        __asm _emit 0xC3
        // 0x58791B81: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58791B83: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x58791B85: cmp edx, 0x24
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x24
        // 0x58791B88: jg 0x58791b8d
        __asm _emit 0x7F
        __asm _emit 0x03
        // 0x58791B8A: push eax
        __asm _emit 0x50
        // 0x58791B8B: jmp 0x58791b3b
        __asm _emit 0xEB
        __asm _emit 0xAE
        // 0x58791B8D: add ecx, -0x24
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0xDC
        // 0x58791B90: jmp 0x58791b3a
        __asm _emit 0xEB
        __asm _emit 0xA8
        // 0x58791B92: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58791B96: mov ecx, 0x1f00
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791B9B: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x58791B9E: mov edx, 0x100
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791BA3: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58791BA6: jne 0x58791cd3
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791BAC: cmp dword ptr [esi + 0x12138], 8
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x38
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x08
        // 0x58791BB3: jae 0x58791bf5
        __asm _emit 0x73
        __asm _emit 0x40
        // 0x58791BB5: mov eax, dword ptr [esi + 0x12144]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58791BBB: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58791BBD: jne 0x58791be9
        __asm _emit 0x75
        __asm _emit 0x2A
        // 0x58791BBF: inc dword ptr [esi + 0x68]
        __asm _emit 0xFF
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x58791BC2: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x58791BC5: and eax, 0x80000001
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x58791BCA: jns 0x58791bd1
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x58791BCC: dec eax
        __asm _emit 0x48
        // 0x58791BCD: or eax, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFE
        // 0x58791BD0: inc eax
        __asm _emit 0x40
        // 0x58791BD1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58791BD3: je 0x58791bdf
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58791BD5: call 0x5878aac0
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0x8E
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58791BDA: jmp 0x58791cb0
        __asm _emit 0xE9
        __asm _emit 0xD1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791BDF: call 0x5878cd60
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0xB1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58791BE4: jmp 0x58791cb0
        __asm _emit 0xE9
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791BE9: dec eax
        __asm _emit 0x48
        // 0x58791BEA: mov dword ptr [esi + 0x12144], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58791BF0: jmp 0x58791cb0
        __asm _emit 0xE9
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791BF5: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58791BF9: mov edx, 0xe7ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE7
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791BFE: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58791C01: mov eax, 0x700
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791C06: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x58791C09: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58791C0D: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x58791C12: mov eax, dword ptr [esi + 0x12138]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58791C18: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x58791C1B: jne 0x58791ca1
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791C21: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58791C25: inc dword ptr [esi + 0x12138]
        __asm _emit 0xFF
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58791C2B: mov edx, 0xe1ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791C30: mov eax, 0x100
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791C35: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58791C38: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x58791C3B: push 0x158
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791C40: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58791C44: mov dword ptr [esi + 0x28], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x28
        // 0x58791C47: mov dword ptr [esi + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x58791C4A: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xAF
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x58791C4F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58791C52: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58791C56: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58791C5A: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58791C5C: je 0x58791c7b
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x58791C5E: push 0x2af8
        __asm _emit 0x68
        __asm _emit 0xF8
        __asm _emit 0x2A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791C63: push 0x300
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791C68: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791C6D: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58791C6F: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x58791C71: push esi
        __asm _emit 0x56
        // 0x58791C72: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58791C74: call 0x5889ab20
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58791C79: jmp 0x58791c7d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58791C7B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58791C7D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58791C7F: mov dword ptr [esp + 0x20], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58791C87: mov dword ptr [esi + 0x12198], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58791C8D: call 0x5889a080
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0x83
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58791C92: mov ecx, dword ptr [esi + 0x12198]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58791C98: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58791C9A: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58791C9D: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58791C9F: jmp 0x58791cb0
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x58791CA1: cmp eax, 0x14
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x14
        // 0x58791CA4: jne 0x58791cb0
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x58791CA6: mov dword ptr [esi + 0x12138], 0x15
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791CB0: cmp dword ptr [esi + 0x12138], 5
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x38
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x05
        // 0x58791CB7: jbe 0x58791b42
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x85
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58791CBD: mov eax, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791CC3: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58791CC5: je 0x58791b42
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x77
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58791CCB: mov dword ptr [eax + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x54
        // 0x58791CCE: jmp 0x58791b42
        __asm _emit 0xE9
        __asm _emit 0x6F
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58791CD3: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58791CD7: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791CDC: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58791CDF: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791CE4: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58791CE7: jne 0x58791d44
        __asm _emit 0x75
        __asm _emit 0x5B
        // 0x58791CE9: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58791CED: mov edx, 0xe8ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791CF2: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58791CF5: mov eax, 0x800
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791CFA: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x58791CFD: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58791D01: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791D06: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58791D0A: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791D0F: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x58791D13: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58791D15: call 0x5878d490
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0xB7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58791D1A: mov ecx, dword ptr [0x58a245bc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xBC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58791D20: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58791D22: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58791D25: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58791D27: mov ecx, dword ptr [0x58a245bc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xBC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58791D2D: call 0x58888960
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0x6C
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58791D32: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58791D38: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58791D3A: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58791D3D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58791D3F: jmp 0x58791b42
        __asm _emit 0xE9
        __asm _emit 0xFE
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58791D44: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58791D48: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58791D4A: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x58791D4D: mov edx, 0xe00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791D52: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58791D55: jne 0x58791b42
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE7
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58791D5B: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58791D61: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58791D63: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x58791D65: je 0x58791d85
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x58791D67: call 0x58970ae0
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0xED
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x58791D6C: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58791D72: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x58791D74: je 0x58791d85
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x58791D76: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58791D78: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58791D7B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58791D7D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58791D7F: mov dword ptr [0x58a24588], ebp
        __asm _emit 0x89
        __asm _emit 0x2D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58791D85: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58791D8B: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x58791D8D: je 0x58791dad
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x58791D8F: call 0x58970ae0
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0xED
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x58791D94: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58791D9A: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x58791D9C: je 0x58791dad
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x58791D9E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58791DA0: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58791DA3: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58791DA5: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58791DA7: mov dword ptr [0x58a2458c], ebp
        __asm _emit 0x89
        __asm _emit 0x2D
        __asm _emit 0x8C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58791DAD: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58791DAF: call dword ptr [0x5898c3c8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58791DB5: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58791DB9: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791DC0: pop ecx
        __asm _emit 0x59
        // 0x58791DC1: pop edi
        __asm _emit 0x5F
        // 0x58791DC2: pop esi
        __asm _emit 0x5E
        // 0x58791DC3: pop ebp
        __asm _emit 0x5D
        // 0x58791DC4: pop ebx
        __asm _emit 0x5B
        // 0x58791DC5: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58791DC8: ret
        __asm _emit 0xC3
        // 0x58791DC9: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58791DCB: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58791DCF: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791DD6: pop ecx
        __asm _emit 0x59
        // 0x58791DD7: pop edi
        __asm _emit 0x5F
        // 0x58791DD8: pop esi
        __asm _emit 0x5E
        // 0x58791DD9: pop ebp
        __asm _emit 0x5D
        // 0x58791DDA: pop ebx
        __asm _emit 0x5B
        // 0x58791DDB: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58791DDE: ret
        __asm _emit 0xC3
    }
}
