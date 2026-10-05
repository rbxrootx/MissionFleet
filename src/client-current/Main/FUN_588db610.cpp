// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588DB610 .. +0x8F3 bytes.
// Source symbol alias: FUN_588db610.
// Behavior and evidence notes: docs/current-main-ship-map-visual-state-update-588db610.md.
// The caller's 0xF0000000 lifecycle gate and this function's 0x00FF0000 phase
// selector use different bits of +0x60B0; the semantic field type is unknown.
extern "C" __declspec(naked) void FUN_588db610() {
    __asm {
        // 0x588DB610: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588DB612: push 0x589894f1
        __asm _emit 0x68
        __asm _emit 0xF1
        __asm _emit 0x94
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588DB617: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB61D: push eax
        __asm _emit 0x50
        // 0x588DB61E: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x588DB621: push ebx
        __asm _emit 0x53
        // 0x588DB622: push ebp
        __asm _emit 0x55
        // 0x588DB623: push esi
        __asm _emit 0x56
        // 0x588DB624: push edi
        __asm _emit 0x57
        // 0x588DB625: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588DB62A: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588DB62C: push eax
        __asm _emit 0x50
        // 0x588DB62D: lea eax, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588DB631: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB637: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588DB639: mov eax, dword ptr [esi + 0x60b0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB63F: and eax, 0xff0000
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588DB644: cmp eax, 0x40000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588DB649: jne 0x588dba7a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x2B
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB64F: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DB655: mov edi, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588DB65B: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x588DB65E: mov eax, dword ptr [edi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x50
        // 0x588DB661: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588DB663: cdq
        __asm _emit 0x99
        // 0x588DB664: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x588DB666: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588DB668: cmp eax, 0x384
        __asm _emit 0x3D
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB66D: jge 0x588db683
        __asm _emit 0x7D
        __asm _emit 0x14
        // 0x588DB66F: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x588DB672: mov eax, dword ptr [edi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x54
        // 0x588DB675: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588DB677: cdq
        __asm _emit 0x99
        // 0x588DB678: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x588DB67A: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588DB67C: cmp eax, 0x2bc
        __asm _emit 0x3D
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB681: jl 0x588db68d
        __asm _emit 0x7C
        __asm _emit 0x0A
        // 0x588DB683: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DB688: cmp dword ptr [eax + 4], esi
        __asm _emit 0x39
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x588DB68B: jne 0x588db694
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x588DB68D: push 0x19
        __asm _emit 0x6A
        __asm _emit 0x19
        // 0x588DB68F: call 0x587e5a60
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0xA3
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x588DB694: cmp dword ptr [esi + 0x60b4], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xB4
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB69B: je 0x588dba50
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB6A1: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0x15
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588DB6A6: cdq
        __asm _emit 0x99
        // 0x588DB6A7: mov ecx, 3
        __asm _emit 0xB9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB6AC: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x588DB6AE: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588DB6B0: je 0x588dba01
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x4B
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB6B6: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588DB6B8: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588DB6BC: cmp word ptr [esi + 0x164], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB6C3: jne 0x588dba01
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB6C9: lea edi, [esi + 0x17c]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB6CF: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588DB6D3: mov dword ptr [esp + 0x1c], 0x20
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB6DB: cmp dword ptr [edi], 0
        __asm _emit 0x83
        __asm _emit 0x3F
        __asm _emit 0x00
        // 0x588DB6DE: je 0x588db83b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB6E4: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0x15
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588DB6E9: and eax, 0x80000001
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x588DB6EE: jns 0x588db6f5
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x588DB6F0: dec eax
        __asm _emit 0x48
        // 0x588DB6F1: or eax, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFE
        // 0x588DB6F4: inc eax
        __asm _emit 0x40
        // 0x588DB6F5: je 0x588db83b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB6FB: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x588DB6FD: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0x15
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588DB702: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588DB705: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588DB709: mov dword ptr [esp + 0x2c], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB711: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DB713: je 0x588db786
        __asm _emit 0x74
        __asm _emit 0x71
        // 0x588DB715: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588DB717: mov edi, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x588DB71A: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x588DB71D: mov eax, dword ptr [0x58a246f0]
        __asm _emit 0xA1
        __asm _emit 0xF0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DB722: cmp dword ptr [eax + 0x160], 0x12
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x12
        // 0x588DB729: jle 0x588db742
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588DB72B: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB732: je 0x588db742
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588DB734: mov ebp, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0xA8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB73A: add ebp, 0x480
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB740: jmp 0x588db744
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588DB742: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588DB744: mov dx, word ptr [esi + 0x42ac]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xAC
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB74B: add dx, 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x64
        // 0x588DB74F: movzx eax, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC2
        // 0x588DB752: push eax
        __asm _emit 0x50
        // 0x588DB753: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0x14
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588DB758: cdq
        __asm _emit 0x99
        // 0x588DB759: mov ecx, 0x14
        __asm _emit 0xB9
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB75E: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x588DB760: sub edi, edx
        __asm _emit 0x2B
        __asm _emit 0xFA
        // 0x588DB762: add edi, 0xa
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x0A
        // 0x588DB765: push edi
        __asm _emit 0x57
        // 0x588DB766: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0x14
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588DB76B: cdq
        __asm _emit 0x99
        // 0x588DB76C: mov ecx, 0x14
        __asm _emit 0xB9
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB771: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x588DB773: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588DB777: sub ebx, edx
        __asm _emit 0x2B
        __asm _emit 0xDA
        // 0x588DB779: add ebx, 0xa
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x0A
        // 0x588DB77C: push ebx
        __asm _emit 0x53
        // 0x588DB77D: push ebp
        __asm _emit 0x55
        // 0x588DB77E: push esi
        __asm _emit 0x56
        // 0x588DB77F: call 0x58907c80
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0xC4
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DB784: jmp 0x588db788
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588DB786: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588DB788: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x588DB78A: push 0x102
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB78F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588DB791: mov dword ptr [esp + 0x30], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588DB799: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588DB79D: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0x75
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DB7A2: cmp dword ptr [0x589c8edc], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xDC
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x588DB7A9: je 0x588db83b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB7AF: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DB7B5: mov ecx, dword ptr [edx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588DB7BB: mov eax, dword ptr [ecx + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB7C1: mov ebx, dword ptr [0x58a24580]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DB7C7: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588DB7CB: mov eax, dword ptr [ebx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x1C
        // 0x588DB7CE: sub eax, dword ptr [ebx + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x43
        __asm _emit 0x14
        // 0x588DB7D1: mov edi, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x588DB7D4: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x588DB7D6: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB7DC: cdq
        __asm _emit 0x99
        // 0x588DB7DD: idiv dword ptr [esp + 0x20]
        __asm _emit 0xF7
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588DB7E1: mov ebp, dword ptr [ecx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x69
        __asm _emit 0x50
        // 0x588DB7E4: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x588DB7E6: mov eax, dword ptr [ebx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x20
        // 0x588DB7E9: sub eax, dword ptr [ebx + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x43
        __asm _emit 0x18
        // 0x588DB7EC: sub edi, ebp
        __asm _emit 0x2B
        __asm _emit 0xFD
        // 0x588DB7EE: mov ebp, dword ptr [ecx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x69
        __asm _emit 0x54
        // 0x588DB7F1: mov ecx, dword ptr [ecx + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB7F7: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x588DB7F9: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB7FF: cdq
        __asm _emit 0x99
        // 0x588DB800: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x588DB802: mov ecx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DB808: push ecx
        __asm _emit 0x51
        // 0x588DB809: sub eax, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x588DB80C: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x588DB80E: push eax
        __asm _emit 0x50
        // 0x588DB80F: push edi
        __asm _emit 0x57
        // 0x588DB810: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0x14
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588DB815: and eax, 0x80000003
        __asm _emit 0x25
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x588DB81A: jns 0x588db821
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x588DB81C: dec eax
        __asm _emit 0x48
        // 0x588DB81D: or eax, 0xfffffffc
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFC
        // 0x588DB820: inc eax
        __asm _emit 0x40
        // 0x588DB821: mov ecx, dword ptr [0x58a246dc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xDC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DB827: add eax, 7
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x07
        // 0x588DB82A: push eax
        __asm _emit 0x50
        // 0x588DB82B: call 0x58731810
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0x5F
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588DB830: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588DB832: call 0x587b7400
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0xBB
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x588DB837: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588DB83B: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588DB83F: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588DB842: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB847: sub dword ptr [esp + 0x1c], ebp
        __asm _emit 0x29
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588DB84B: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588DB84F: jne 0x588db6db
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588DB855: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588DB857: je 0x588dba01
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB85D: cmp word ptr [esi + 0x164], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB865: jne 0x588dba01
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB86B: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x588DB86D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0x13
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588DB872: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588DB874: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588DB877: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588DB87B: mov dword ptr [esp + 0x2c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588DB87F: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588DB881: je 0x588db8cb
        __asm _emit 0x74
        __asm _emit 0x48
        // 0x588DB883: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DB889: mov ebp, dword ptr [edx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0xAA
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588DB88F: mov dx, word ptr [ebx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x26
        // 0x588DB893: mov eax, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x08
        // 0x588DB896: mov ecx, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x04
        // 0x588DB899: inc dx
        __asm _emit 0x66
        __asm _emit 0x42
        // 0x588DB89B: movzx edx, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD2
        // 0x588DB89E: push edx
        __asm _emit 0x52
        // 0x588DB89F: push eax
        __asm _emit 0x50
        // 0x588DB8A0: push ecx
        __asm _emit 0x51
        // 0x588DB8A1: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0x13
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588DB8A6: and eax, 0x80000003
        __asm _emit 0x25
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x588DB8AB: jns 0x588db8b2
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x588DB8AD: dec eax
        __asm _emit 0x48
        // 0x588DB8AE: or eax, 0xfffffffc
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFC
        // 0x588DB8B1: inc eax
        __asm _emit 0x40
        // 0x588DB8B2: mov ecx, dword ptr [0x58a246f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DB8B8: push eax
        __asm _emit 0x50
        // 0x588DB8B9: call 0x587317e0
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x5F
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588DB8BE: push eax
        __asm _emit 0x50
        // 0x588DB8BF: push ebp
        __asm _emit 0x55
        // 0x588DB8C0: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588DB8C2: call 0x58907c80
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0xC3
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DB8C7: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588DB8C9: jmp 0x588db8cd
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588DB8CB: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588DB8CD: push 0x102
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB8D2: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588DB8D4: mov dword ptr [esp + 0x30], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588DB8DC: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DB8E1: push 0x68
        __asm _emit 0x6A
        __asm _emit 0x68
        // 0x588DB8E3: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0x13
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588DB8E8: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588DB8EB: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588DB8EF: mov dword ptr [esp + 0x2c], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB8F7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DB8F9: je 0x588db952
        __asm _emit 0x74
        __asm _emit 0x57
        // 0x588DB8FB: mov edx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x04
        // 0x588DB8FE: mov ecx, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x08
        // 0x588DB901: mov dword ptr [esp + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588DB905: mov edx, dword ptr [0x58a246f0]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DB90B: cmp dword ptr [edx + 0x160], 0x17
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x17
        // 0x588DB912: jle 0x588db92b
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588DB914: cmp dword ptr [edx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB91B: je 0x588db92b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588DB91D: mov edx, dword ptr [edx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB923: add edx, 0x5c0
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xC0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB929: jmp 0x588db92d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588DB92B: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588DB92D: movzx edi, word ptr [edi + 0x26]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x7F
        __asm _emit 0x26
        // 0x588DB931: mov ebp, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DB937: mov ebp, dword ptr [ebp + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0xAD
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588DB93D: push edi
        __asm _emit 0x57
        // 0x588DB93E: add ecx, -5
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0xFB
        // 0x588DB941: push ecx
        __asm _emit 0x51
        // 0x588DB942: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588DB946: push ecx
        __asm _emit 0x51
        // 0x588DB947: push edx
        __asm _emit 0x52
        // 0x588DB948: push ebp
        __asm _emit 0x55
        // 0x588DB949: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588DB94B: call 0x58789040
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0xD6
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588DB950: jmp 0x588db954
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588DB952: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588DB954: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588DB959: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588DB95B: mov dword ptr [esp + 0x30], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588DB963: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0x73
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DB968: cmp dword ptr [0x589c8edc], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xDC
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x588DB96F: je 0x588db9d1
        __asm _emit 0x74
        __asm _emit 0x60
        // 0x588DB971: mov ebx, dword ptr [0x58a24580]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DB977: mov eax, dword ptr [ebx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x1C
        // 0x588DB97A: sub eax, dword ptr [ebx + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x43
        __asm _emit 0x14
        // 0x588DB97D: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DB983: mov edi, dword ptr [edx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0xBA
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588DB989: mov ebp, dword ptr [edi + 0x114]
        __asm _emit 0x8B
        __asm _emit 0xAF
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB98F: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x588DB991: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB997: cdq
        __asm _emit 0x99
        // 0x588DB998: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x588DB99A: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588DB99D: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x588DB99F: mov eax, dword ptr [ebx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x20
        // 0x588DB9A2: sub eax, dword ptr [ebx + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x43
        __asm _emit 0x18
        // 0x588DB9A5: sub ecx, dword ptr [edi + 0x50]
        __asm _emit 0x2B
        __asm _emit 0x4F
        __asm _emit 0x50
        // 0x588DB9A8: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x588DB9AA: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB9B0: cdq
        __asm _emit 0x99
        // 0x588DB9B1: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x588DB9B3: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DB9B9: push edx
        __asm _emit 0x52
        // 0x588DB9BA: sub eax, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x588DB9BD: add eax, dword ptr [edi + 0x54]
        __asm _emit 0x03
        __asm _emit 0x47
        __asm _emit 0x54
        // 0x588DB9C0: push eax
        __asm _emit 0x50
        // 0x588DB9C1: push ecx
        __asm _emit 0x51
        // 0x588DB9C2: mov ecx, dword ptr [esi + 0x604c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB9C8: call 0x587b7400
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0xBA
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x588DB9CD: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588DB9D1: cmp dword ptr [0x589c9040], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0x40
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x588DB9D8: je 0x588dba01
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x588DB9DA: mov eax, dword ptr [esi + 0x60d8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB9E0: mov cx, word ptr [eax + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x26
        // 0x588DB9E4: mov eax, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x08
        // 0x588DB9E7: inc cx
        __asm _emit 0x66
        __asm _emit 0x41
        // 0x588DB9E9: movzx edx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD1
        // 0x588DB9EC: mov ecx, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x04
        // 0x588DB9EF: push edx
        __asm _emit 0x52
        // 0x588DB9F0: push 7
        __asm _emit 0x6A
        __asm _emit 0x07
        // 0x588DB9F2: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x588DB9F4: push 0x28
        __asm _emit 0x6A
        __asm _emit 0x28
        // 0x588DB9F6: push 0xa
        __asm _emit 0x6A
        __asm _emit 0x0A
        // 0x588DB9F8: push eax
        __asm _emit 0x50
        // 0x588DB9F9: push ecx
        __asm _emit 0x51
        // 0x588DB9FA: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588DB9FC: call 0x588d7dc0
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0xC3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588DBA01: inc dword ptr [esi + 0x6058]
        __asm _emit 0xFF
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBA07: mov eax, dword ptr [esi + 0x6058]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBA0D: cmp eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x588DBA10: jge 0x588dba1a
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x588DBA12: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DBA14: jge 0x588dbeef
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xD5
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBA1A: mov edx, dword ptr [esi + 0x60b0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xB0
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBA20: and edx, 0xff08ffff
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x08
        __asm _emit 0xFF
        // 0x588DBA26: or edx, 0x80000
        __asm _emit 0x81
        __asm _emit 0xCA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588DBA2C: mov dword ptr [esi + 0x60b0], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xB0
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBA32: mov dword ptr [esi + 0x6058], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBA3C: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588DBA40: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBA47: pop ecx
        __asm _emit 0x59
        // 0x588DBA48: pop edi
        __asm _emit 0x5F
        // 0x588DBA49: pop esi
        __asm _emit 0x5E
        // 0x588DBA4A: pop ebp
        __asm _emit 0x5D
        // 0x588DBA4B: pop ebx
        __asm _emit 0x5B
        // 0x588DBA4C: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x588DBA4F: ret
        __asm _emit 0xC3
        // 0x588DBA50: mov eax, dword ptr [esi + 0x60b0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBA56: and eax, 0xff08ffff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x08
        __asm _emit 0xFF
        // 0x588DBA5B: or eax, 0x80000
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588DBA60: mov dword ptr [esi + 0x60b0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBA66: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588DBA6A: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBA71: pop ecx
        __asm _emit 0x59
        // 0x588DBA72: pop edi
        __asm _emit 0x5F
        // 0x588DBA73: pop esi
        __asm _emit 0x5E
        // 0x588DBA74: pop ebp
        __asm _emit 0x5D
        // 0x588DBA75: pop ebx
        __asm _emit 0x5B
        // 0x588DBA76: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x588DBA79: ret
        __asm _emit 0xC3
        // 0x588DBA7A: cmp eax, 0x80000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588DBA7F: jne 0x588dbd83
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xFE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBA85: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588DBA87: push edi
        __asm _emit 0x57
        // 0x588DBA88: call 0x588d9c40
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588DBA8D: mov eax, dword ptr [esi + 0x605c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x5C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBA93: cdq
        __asm _emit 0x99
        // 0x588DBA94: idiv dword ptr [esi + 0x6050]
        __asm _emit 0xF7
        __asm _emit 0xBE
        __asm _emit 0x50
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBA9A: cmp eax, 9
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x588DBA9D: mov dword ptr [esi + 0x6054], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBAA3: jl 0x588dbaa8
        __asm _emit 0x7C
        __asm _emit 0x03
        // 0x588DBAA5: add eax, -9
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xF7
        // 0x588DBAA8: mov edx, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBAAE: mov dword ptr [esi + 0x6054], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBAB4: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588DBAB6: test byte ptr [edx + 0xa], 7
        __asm _emit 0xF6
        __asm _emit 0x42
        __asm _emit 0x0A
        __asm _emit 0x07
        // 0x588DBABA: jbe 0x588dbae2
        __asm _emit 0x76
        __asm _emit 0x26
        // 0x588DBABC: lea edx, [esi + 0x60dc]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0xDC
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBAC2: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x588DBAC4: mov ebx, 0xfffe
        __asm _emit 0xBB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBAC9: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x588DBACD: mov eax, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBAD3: movzx eax, word ptr [eax + 0xa]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x0A
        // 0x588DBAD7: inc ecx
        __asm _emit 0x41
        // 0x588DBAD8: and eax, 7
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x07
        // 0x588DBADB: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x588DBADE: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588DBAE0: jb 0x588dbac2
        __asm _emit 0x72
        __asm _emit 0xE0
        // 0x588DBAE2: mov eax, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBAE8: mov cl, byte ptr [eax + 4]
        __asm _emit 0x8A
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588DBAEB: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x588DBAEE: cmp cl, 9
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x09
        // 0x588DBAF1: jne 0x588dbc28
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBAF7: cmp word ptr [esi + 0x164], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xBE
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBAFE: je 0x588dbc28
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBB04: mov eax, dword ptr [0x58a24724]
        __asm _emit 0xA1
        __asm _emit 0x24
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DBB09: cmp dword ptr [eax + 0x160], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBB0F: jle 0x588dbb21
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x588DBB11: cmp dword ptr [eax + 0x190], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBB17: je 0x588dbb21
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588DBB19: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBB1F: jmp 0x588dbb23
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588DBB21: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588DBB23: mov ecx, dword ptr [esi + 0x60d8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBB29: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x588DBB2C: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588DBB2E: je 0x588dbb58
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588DBB30: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588DBB33: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588DBB36: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x588DBB39: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x588DBB3C: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588DBB3F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588DBB41: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588DBB44: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588DBB46: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588DBB49: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588DBB4C: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588DBB4F: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588DBB52: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588DBB55: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588DBB58: mov ecx, dword ptr [esi + 0x60d8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBB5E: mov dword ptr [ecx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x50
        // 0x588DBB61: mov eax, dword ptr [0x58a24724]
        __asm _emit 0xA1
        __asm _emit 0x24
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DBB66: cmp dword ptr [eax + 0x160], 1
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588DBB6D: jle 0x588dbb82
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588DBB6F: cmp dword ptr [eax + 0x190], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBB75: je 0x588dbb82
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588DBB77: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBB7D: add eax, 0x40
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x40
        // 0x588DBB80: jmp 0x588dbb84
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588DBB82: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588DBB84: mov ecx, dword ptr [esi + 0x1470]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBB8A: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x588DBB8D: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588DBB8F: je 0x588dbbb9
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588DBB91: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588DBB94: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588DBB97: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x588DBB9A: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x588DBB9D: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588DBBA0: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588DBBA2: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588DBBA5: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588DBBA7: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588DBBAA: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588DBBAD: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588DBBB0: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588DBBB3: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588DBBB6: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588DBBB9: mov ecx, dword ptr [esi + 0x1470]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBBBF: mov dword ptr [ecx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x50
        // 0x588DBBC2: mov eax, dword ptr [0x58a24724]
        __asm _emit 0xA1
        __asm _emit 0x24
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DBBC7: cmp dword ptr [eax + 0x160], 2
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x588DBBCE: jle 0x588dbbe3
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588DBBD0: cmp dword ptr [eax + 0x190], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBBD6: je 0x588dbbe3
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588DBBD8: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBBDE: sub eax, -0x80
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x80
        // 0x588DBBE1: jmp 0x588dbbe5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588DBBE3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588DBBE5: mov ecx, dword ptr [esi + 0x178]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBBEB: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x588DBBEE: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588DBBF0: je 0x588dbc1a
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588DBBF2: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588DBBF5: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588DBBF8: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x588DBBFB: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x588DBBFE: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588DBC01: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588DBC03: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588DBC06: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588DBC08: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588DBC0B: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588DBC0E: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588DBC11: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588DBC14: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588DBC17: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588DBC1A: mov ecx, dword ptr [esi + 0x178]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBC20: mov dword ptr [ecx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x50
        // 0x588DBC23: jmp 0x588dbd03
        __asm _emit 0xE9
        __asm _emit 0xDB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBC28: movzx eax, word ptr [eax + 0xa]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x0A
        // 0x588DBC2C: mov ecx, dword ptr [esi + 0x60d0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBC32: and eax, 7
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x07
        // 0x588DBC35: inc eax
        __asm _emit 0x40
        // 0x588DBC36: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBC3C: jle 0x588dbc53
        __asm _emit 0x7E
        __asm _emit 0x15
        // 0x588DBC3E: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588DBC40: jl 0x588dbc53
        __asm _emit 0x7C
        __asm _emit 0x11
        // 0x588DBC42: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBC48: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588DBC4A: je 0x588dbc53
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x588DBC4C: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x588DBC4F: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x588DBC51: jmp 0x588dbc55
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588DBC53: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588DBC55: mov ecx, dword ptr [esi + 0x60d8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBC5B: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x588DBC5E: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588DBC60: je 0x588dbc8a
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588DBC62: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588DBC65: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588DBC68: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x588DBC6B: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x588DBC6E: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588DBC71: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588DBC73: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588DBC76: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588DBC78: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588DBC7B: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588DBC7E: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588DBC81: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588DBC84: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588DBC87: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588DBC8A: mov ecx, dword ptr [esi + 0x6054]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBC90: mov edx, dword ptr [esi + 0x60d8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xD8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBC96: imul ecx, ecx, 0x32
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x32
        // 0x588DBC99: mov dword ptr [edx + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x50
        // 0x588DBC9C: mov eax, dword ptr [esi + 0x60d4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBCA2: cmp dword ptr [eax + 0x160], 2
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x588DBCA9: jle 0x588dbcba
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x588DBCAB: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBCB1: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588DBCB3: je 0x588dbcba
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588DBCB5: sub eax, -0x80
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x80
        // 0x588DBCB8: jmp 0x588dbcbc
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588DBCBA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588DBCBC: mov ecx, dword ptr [esi + 0x1470]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBCC2: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x588DBCC5: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588DBCC7: je 0x588dbcf1
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588DBCC9: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588DBCCC: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588DBCCF: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x588DBCD2: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x588DBCD5: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588DBCD8: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588DBCDA: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588DBCDD: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588DBCDF: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588DBCE2: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588DBCE5: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588DBCE8: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588DBCEB: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588DBCEE: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588DBCF1: mov ecx, dword ptr [esi + 0x6054]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBCF7: mov edx, dword ptr [esi + 0x1470]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x70
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBCFD: imul ecx, ecx, 0x32
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x32
        // 0x588DBD00: mov dword ptr [edx + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x50
        // 0x588DBD03: mov ecx, dword ptr [esi + 0x60fc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBD09: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBD0E: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DBD13: mov eax, dword ptr [esi + 0x60fc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBD19: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBD1E: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588DBD22: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DBD28: cmp dword ptr [edx + 4], esi
        __asm _emit 0x39
        __asm _emit 0x72
        __asm _emit 0x04
        // 0x588DBD2B: je 0x588dbd3c
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x588DBD2D: mov eax, dword ptr [esi + 0x12f4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBD33: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBD38: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588DBD3C: mov eax, dword ptr [esi + 0x12f8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBD42: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBD47: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588DBD4B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588DBD4D: mov dword ptr [esi + 0x603c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBD53: mov dword ptr [esi + 0x6040], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBD59: mov eax, dword ptr [esi + 0x60b0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBD5F: and eax, 0xff10ffff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x10
        __asm _emit 0xFF
        // 0x588DBD64: or eax, 0x100000
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x588DBD69: mov dword ptr [esi + 0x60b0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBD6F: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588DBD73: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBD7A: pop ecx
        __asm _emit 0x59
        // 0x588DBD7B: pop edi
        __asm _emit 0x5F
        // 0x588DBD7C: pop esi
        __asm _emit 0x5E
        // 0x588DBD7D: pop ebp
        __asm _emit 0x5D
        // 0x588DBD7E: pop ebx
        __asm _emit 0x5B
        // 0x588DBD7F: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x588DBD82: ret
        __asm _emit 0xC3
        // 0x588DBD83: cmp eax, 0x100000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x588DBD88: jne 0x588dbde8
        __asm _emit 0x75
        __asm _emit 0x5E
        // 0x588DBD8A: mov ecx, dword ptr [esi + 0x6028]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x28
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBD90: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588DBD92: mov dword ptr [ecx + 0x9c], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBD98: mov edx, dword ptr [esi + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBD9E: mov dword ptr [edx + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x34
        // 0x588DBDA1: movzx eax, word ptr [esi + 0x350]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBDA8: movzx ecx, byte ptr [esi + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBDAF: mov ecx, dword ptr [ecx*4 + 0x58a0b1c4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x8D
        __asm _emit 0xC4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x588DBDB6: push eax
        __asm _emit 0x50
        // 0x588DBDB7: call 0x587898d0
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0xDB
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588DBDBC: mov edx, dword ptr [esi + 0x60b0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xB0
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBDC2: and edx, 0xff20ffff
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x20
        __asm _emit 0xFF
        // 0x588DBDC8: or edx, 0x200000
        __asm _emit 0x81
        __asm _emit 0xCA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x588DBDCE: mov dword ptr [esi + 0x60b0], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xB0
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBDD4: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588DBDD8: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBDDF: pop ecx
        __asm _emit 0x59
        // 0x588DBDE0: pop edi
        __asm _emit 0x5F
        // 0x588DBDE1: pop esi
        __asm _emit 0x5E
        // 0x588DBDE2: pop ebp
        __asm _emit 0x5D
        // 0x588DBDE3: pop ebx
        __asm _emit 0x5B
        // 0x588DBDE4: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x588DBDE7: ret
        __asm _emit 0xC3
        // 0x588DBDE8: cmp eax, 0x200000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x588DBDED: jne 0x588dbe6e
        __asm _emit 0x75
        __asm _emit 0x7F
        // 0x588DBDEF: mov eax, dword ptr [esi + 0x60d8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBDF5: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBDFA: add dword ptr [eax + 0x50], ecx
        __asm _emit 0x01
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x588DBDFD: mov eax, dword ptr [esi + 0x1470]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBE03: add dword ptr [eax + 0x50], ecx
        __asm _emit 0x01
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x588DBE06: mov eax, dword ptr [esi + 0x178]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBE0C: add dword ptr [eax + 0x50], ecx
        __asm _emit 0x01
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x588DBE0F: mov eax, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBE15: mov cl, byte ptr [eax + 4]
        __asm _emit 0x8A
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588DBE18: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x588DBE1B: cmp cl, 9
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x09
        // 0x588DBE1E: jne 0x588dbe4c
        __asm _emit 0x75
        __asm _emit 0x2C
        // 0x588DBE20: cmp word ptr [esi + 0x164], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBE28: je 0x588dbe4c
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x588DBE2A: push 0x400000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        __asm _emit 0x00
        // 0x588DBE2F: push 0x4f
        __asm _emit 0x6A
        __asm _emit 0x4F
        // 0x588DBE31: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588DBE33: call 0x588d65c0
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0xA7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588DBE38: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588DBE3C: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBE43: pop ecx
        __asm _emit 0x59
        // 0x588DBE44: pop edi
        __asm _emit 0x5F
        // 0x588DBE45: pop esi
        __asm _emit 0x5E
        // 0x588DBE46: pop ebp
        __asm _emit 0x5D
        // 0x588DBE47: pop ebx
        __asm _emit 0x5B
        // 0x588DBE48: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x588DBE4B: ret
        __asm _emit 0xC3
        // 0x588DBE4C: push 0x400000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        __asm _emit 0x00
        // 0x588DBE51: push 0x31
        __asm _emit 0x6A
        __asm _emit 0x31
        // 0x588DBE53: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588DBE55: call 0x588d65c0
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0xA7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588DBE5A: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588DBE5E: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBE65: pop ecx
        __asm _emit 0x59
        // 0x588DBE66: pop edi
        __asm _emit 0x5F
        // 0x588DBE67: pop esi
        __asm _emit 0x5E
        // 0x588DBE68: pop ebp
        __asm _emit 0x5D
        // 0x588DBE69: pop ebx
        __asm _emit 0x5B
        // 0x588DBE6A: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x588DBE6D: ret
        __asm _emit 0xC3
        // 0x588DBE6E: cmp eax, 0x400000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        __asm _emit 0x00
        // 0x588DBE73: jne 0x588dbeb0
        __asm _emit 0x75
        __asm _emit 0x3B
        // 0x588DBE75: mov ecx, dword ptr [esi + 0x60d8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBE7B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588DBE7D: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0x57
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588DBE82: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DBE88: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588DBE8A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588DBE8C: push esi
        __asm _emit 0x56
        // 0x588DBE8D: call 0x587f21e0
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0x63
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x588DBE92: or dword ptr [esi + 0x60b0], 0xff0000
        __asm _emit 0x81
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588DBE9C: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588DBEA0: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBEA7: pop ecx
        __asm _emit 0x59
        // 0x588DBEA8: pop edi
        __asm _emit 0x5F
        // 0x588DBEA9: pop esi
        __asm _emit 0x5E
        // 0x588DBEAA: pop ebp
        __asm _emit 0x5D
        // 0x588DBEAB: pop ebx
        __asm _emit 0x5B
        // 0x588DBEAC: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x588DBEAF: ret
        __asm _emit 0xC3
        // 0x588DBEB0: cmp eax, 0xff0000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588DBEB5: jne 0x588dbeef
        __asm _emit 0x75
        __asm _emit 0x38
        // 0x588DBEB7: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DBEBC: cmp dword ptr [eax + 0x21c34], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x34
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBEC3: jne 0x588dbeef
        __asm _emit 0x75
        __asm _emit 0x2A
        // 0x588DBEC5: cmp word ptr [eax + 0x105f0], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x588DBECD: jne 0x588dbeef
        __asm _emit 0x75
        __asm _emit 0x20
        // 0x588DBECF: cmp dword ptr [esi + 0x664c], 0x2710
        __asm _emit 0x81
        __asm _emit 0xBE
        __asm _emit 0x4C
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBED9: je 0x588dbeef
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x588DBEDB: mov dword ptr [esi + 0x6090], 0x60000
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x588DBEE5: mov dword ptr [esi + 0x6648], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBEEF: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588DBEF3: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBEFA: pop ecx
        __asm _emit 0x59
        // 0x588DBEFB: pop edi
        __asm _emit 0x5F
        // 0x588DBEFC: pop esi
        __asm _emit 0x5E
        // 0x588DBEFD: pop ebp
        __asm _emit 0x5D
        // 0x588DBEFE: pop ebx
        __asm _emit 0x5B
        // 0x588DBEFF: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x588DBF02: ret
        __asm _emit 0xC3
    }
}
