// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588ECEA0 .. +0x8A9 bytes.
// Source symbol alias: FUN_588ecea0.
extern "C" __declspec(naked) void FUN_588ecea0() {
    __asm {
        // 0x588ECEA0: sub esp, 0x184
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECEA6: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588ECEAB: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588ECEAD: mov dword ptr [esp + 0x180], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECEB4: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588ECEB9: push ebx
        __asm _emit 0x53
        // 0x588ECEBA: push ebp
        __asm _emit 0x55
        // 0x588ECEBB: push esi
        __asm _emit 0x56
        // 0x588ECEBC: push edi
        __asm _emit 0x57
        // 0x588ECEBD: mov edi, dword ptr [eax + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0xB8
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECEC3: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588ECEC5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588ECEC7: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x588ECEC9: je 0x588ed4c6
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF7
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECECF: mov eax, dword ptr [edi + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECED5: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x588ECED7: je 0x588ed4c6
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE9
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECEDD: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588ECEE1: mov edx, 0x3e0
        __asm _emit 0xBA
        __asm _emit 0xE0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECEE6: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588ECEE9: cmp cx, 0x40
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x40
        // 0x588ECEED: jne 0x588ecfb2
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECEF3: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECEF8: lea eax, [esp + 0x94]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECEFF: push ebp
        __asm _emit 0x55
        // 0x588ECF00: push eax
        __asm _emit 0x50
        // 0x588ECF01: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0xFD
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588ECF06: mov ecx, dword ptr [edi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECF0C: mov ebx, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588ECF12: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588ECF15: push ecx
        __asm _emit 0x51
        // 0x588ECF16: push 0x589a1730
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x17
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588ECF1B: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x588ECF1D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588ECF20: push eax
        __asm _emit 0x50
        // 0x588ECF21: lea edx, [esp + 0x98]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECF28: push edx
        __asm _emit 0x52
        // 0x588ECF29: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588ECF2F: mov ecx, dword ptr [esi + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECF35: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588ECF38: lea eax, [esp + 0x90]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECF3F: push eax
        __asm _emit 0x50
        // 0x588ECF40: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0x4D
        __asm _emit 0xE4
        __asm _emit 0xFF
        // 0x588ECF45: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECF4A: lea ecx, [esp + 0x94]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECF51: push ebp
        __asm _emit 0x55
        // 0x588ECF52: push ecx
        __asm _emit 0x51
        // 0x588ECF53: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0xFC
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588ECF58: push 0x7f
        __asm _emit 0x6A
        __asm _emit 0x7F
        // 0x588ECF5A: lea edx, [esp + 0x21]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x21
        // 0x588ECF5E: push ebp
        __asm _emit 0x55
        // 0x588ECF5F: push edx
        __asm _emit 0x52
        // 0x588ECF60: mov byte ptr [esp + 0x28], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x588ECF65: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0xFC
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588ECF6A: lea eax, [edi + 0xfc]
        __asm _emit 0x8D
        __asm _emit 0x87
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECF70: push eax
        __asm _emit 0x50
        // 0x588ECF71: lea ecx, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588ECF75: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECF7A: push ecx
        __asm _emit 0x51
        // 0x588ECF7B: call 0x5897d17a
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0x01
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588ECF80: add esp, 0x24
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x24
        // 0x588ECF83: lea edx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588ECF87: push edx
        __asm _emit 0x52
        // 0x588ECF88: push 0x589a170c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x17
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588ECF8D: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x588ECF8F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588ECF92: push eax
        __asm _emit 0x50
        // 0x588ECF93: lea eax, [esp + 0x98]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECF9A: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECF9F: push eax
        __asm _emit 0x50
        // 0x588ECFA0: call 0x5874ba60
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0xEA
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588ECFA5: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588ECFA8: lea ecx, [esp + 0x90]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECFAF: push ecx
        __asm _emit 0x51
        // 0x588ECFB0: jmp 0x588ecfc7
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x588ECFB2: mov ecx, dword ptr [esi + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECFB8: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588ECFBD: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0x4D
        __asm _emit 0xE4
        __asm _emit 0xFF
        // 0x588ECFC2: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588ECFC7: mov ecx, dword ptr [esi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECFCD: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x4D
        __asm _emit 0xE4
        __asm _emit 0xFF
        // 0x588ECFD2: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECFD8: lea edx, [edi + 0x54]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x54
        // 0x588ECFDB: push edx
        __asm _emit 0x52
        // 0x588ECFDC: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0x4C
        __asm _emit 0xE4
        __asm _emit 0xFF
        // 0x588ECFE1: mov eax, dword ptr [edi + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECFE7: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECFED: mov ebx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x59
        __asm _emit 0x6C
        // 0x588ECFF0: lea edx, [eax + 0x33c]
        __asm _emit 0x8D
        __asm _emit 0x90
        __asm _emit 0x3C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECFF6: movzx eax, word ptr [eax + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x588ECFFA: push edx
        __asm _emit 0x52
        // 0x588ECFFB: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x588ECFFE: push eax
        __asm _emit 0x50
        // 0x588ECFFF: call dword ptr [0x5898c040]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588ED005: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588ED008: push eax
        __asm _emit 0x50
        // 0x588ED009: push 0x5899fc1c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xFC
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588ED00E: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED013: push ebx
        __asm _emit 0x53
        // 0x588ED014: call 0x5874ba60
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0xEA
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588ED019: mov ecx, dword ptr [edi + 0xa50]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x50
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED01F: mov edx, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED025: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588ED02B: mov dword ptr [edx + 0x64], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x64
        // 0x588ED02E: mov eax, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED034: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED039: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x588ED03D: mov eax, dword ptr [edi + 0xa58]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x58
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED043: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED049: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588ED04E: mov dword ptr [ecx + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x64
        // 0x588ED051: mov eax, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED057: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x588ED05B: movzx edx, word ptr [edi + 0x88]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x97
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED062: mov eax, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED068: mov dword ptr [eax + 0x64], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x64
        // 0x588ED06B: mov eax, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED071: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x588ED075: mov ecx, dword ptr [edi + 0xa54]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x54
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED07B: mov edx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED081: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588ED087: mov dword ptr [edx + 0x64], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x64
        // 0x588ED08A: mov eax, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED090: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x588ED094: mov eax, dword ptr [edi + 0xa5c]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x5C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED09A: mov ecx, dword ptr [esi + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED0A0: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588ED0A5: mov dword ptr [ecx + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x64
        // 0x588ED0A8: mov eax, dword ptr [esi + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED0AE: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x588ED0B2: movzx edx, word ptr [edi + 0x8a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x97
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED0B9: mov eax, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED0BF: mov dword ptr [eax + 0x64], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x64
        // 0x588ED0C2: mov eax, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED0C8: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x588ED0CC: mov ecx, dword ptr [edi + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x4C
        // 0x588ED0CF: mov edx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED0D5: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588ED0DB: mov dword ptr [edx + 0x64], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x64
        // 0x588ED0DE: mov eax, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED0E4: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x588ED0E8: mov eax, dword ptr [edi + 0xa4c]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x4C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED0EE: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED0F4: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588ED0F9: mov dword ptr [ecx + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x64
        // 0x588ED0FC: mov eax, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED102: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x588ED106: mov eax, dword ptr [edi + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x4C
        // 0x588ED109: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED10F: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x588ED112: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588ED117: mov edx, 0
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED11C: setl dl
        __asm _emit 0x0F
        __asm _emit 0x9C
        __asm _emit 0xC2
        // 0x588ED11F: mov dword ptr [ecx + 0x60], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588ED126: dec edx
        __asm _emit 0x4A
        // 0x588ED127: and edx, eax
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x588ED129: mov dword ptr [ecx + 0x5c], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x5C
        // 0x588ED12C: mov eax, dword ptr [edi + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x4C
        // 0x588ED12F: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588ED134: push eax
        __asm _emit 0x50
        // 0x588ED135: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED13B: call 0x5877e740
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x16
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588ED140: mov ecx, dword ptr [edi + 0xa4c]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x4C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED146: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588ED14C: push ecx
        __asm _emit 0x51
        // 0x588ED14D: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED153: call 0x5877e770
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0x16
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588ED158: mov ecx, dword ptr [edi + 0xa6c]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x6C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED15E: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588ED164: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x588ED169: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588ED16B: mov ecx, dword ptr [esi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED171: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588ED174: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588ED176: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588ED179: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588ED17B: mov dword ptr [ecx + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x64
        // 0x588ED17E: mov edx, dword ptr [edi + 0xa68]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x68
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED184: mov eax, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED18A: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588ED190: mov dword ptr [eax + 0x64], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x64
        // 0x588ED193: mov eax, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED199: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x588ED19D: mov ecx, dword ptr [edi + 0xa70]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x70
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED1A3: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588ED1A9: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x588ED1AE: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588ED1B0: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x588ED1B3: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588ED1B5: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x588ED1B8: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588ED1BA: mov edx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED1C0: mov dword ptr [edx + 0x64], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x64
        // 0x588ED1C3: mov eax, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED1C9: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x588ED1CD: mov eax, dword ptr [edi + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED1D3: mov edx, dword ptr [eax + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x78
        // 0x588ED1D6: mov ecx, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED1DC: mov dword ptr [ecx + 0x64], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x64
        // 0x588ED1DF: mov ecx, dword ptr [edi + 0xa70]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x70
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED1E5: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588ED1EB: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x588ED1F0: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588ED1F2: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED1F8: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x588ED1FB: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588ED1FD: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588ED200: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588ED202: push eax
        __asm _emit 0x50
        // 0x588ED203: call 0x5877e740
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0x15
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588ED208: mov ecx, dword ptr [edi + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED20E: mov edx, dword ptr [ecx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x78
        // 0x588ED211: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED217: push edx
        __asm _emit 0x52
        // 0x588ED218: call 0x5877e770
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0x15
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588ED21D: mov ebx, dword ptr [edi + 0xccc]
        __asm _emit 0x8B
        __asm _emit 0x9F
        __asm _emit 0xCC
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED223: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588ED225: je 0x588ed2a4
        __asm _emit 0x74
        __asm _emit 0x7D
        // 0x588ED227: cmp byte ptr [ebx], 0
        __asm _emit 0x80
        __asm _emit 0x3B
        __asm _emit 0x00
        // 0x588ED22A: je 0x588ed2a4
        __asm _emit 0x74
        __asm _emit 0x78
        // 0x588ED22C: movzx eax, word ptr [ebx + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x588ED230: mov ecx, dword ptr [0x58a24654]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x54
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588ED236: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x588ED239: push eax
        __asm _emit 0x50
        // 0x588ED23A: call 0x587317e0
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0x45
        __asm _emit 0xE4
        __asm _emit 0xFF
        // 0x588ED23F: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x588ED242: push eax
        __asm _emit 0x50
        // 0x588ED243: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0x76
        __asm _emit 0xE4
        __asm _emit 0xFF
        // 0x588ED248: lea ecx, [ebx + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x78
        // 0x588ED24B: push ecx
        __asm _emit 0x51
        // 0x588ED24C: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED252: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0xE4
        __asm _emit 0xFF
        // 0x588ED257: mov edx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED25D: mov dword ptr [edx + 0x60], 0xffffff
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x60
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588ED264: mov eax, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED26A: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x588ED26E: movzx eax, word ptr [ebx + 0x9a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x83
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED275: mov ecx, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED27B: mov dword ptr [ecx + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x64
        // 0x588ED27E: mov eax, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED284: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x588ED288: movzx edx, word ptr [ebx + 0x98]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x93
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED28F: mov eax, dword ptr [esi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED295: mov dword ptr [eax + 0x64], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x64
        // 0x588ED298: mov eax, dword ptr [esi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED29E: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x588ED2A2: jmp 0x588ed2f0
        __asm _emit 0xEB
        __asm _emit 0x4C
        // 0x588ED2A4: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x588ED2A7: mov dword ptr [ecx + 0x54], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED2AE: mov edx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED2B4: push 0x589a16e4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0x16
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588ED2B9: mov dword ptr [edx + 0x60], 0xdddddd
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x60
        __asm _emit 0xDD
        __asm _emit 0xDD
        __asm _emit 0xDD
        __asm _emit 0x00
        // 0x588ED2C0: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588ED2C6: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED2CC: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588ED2CF: push eax
        __asm _emit 0x50
        // 0x588ED2D0: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x4A
        __asm _emit 0xE4
        __asm _emit 0xFF
        // 0x588ED2D5: mov eax, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED2DB: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED2E0: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588ED2E4: mov eax, dword ptr [esi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED2EA: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588ED2EC: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588ED2F0: mov ebx, dword ptr [edi + 0xcc8]
        __asm _emit 0x8B
        __asm _emit 0x9F
        __asm _emit 0xC8
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED2F6: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588ED2F8: je 0x588ed445
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED2FE: cmp byte ptr [ebx], 0
        __asm _emit 0x80
        __asm _emit 0x3B
        __asm _emit 0x00
        // 0x588ED301: je 0x588ed445
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x3E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED307: movzx eax, word ptr [ebx + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x588ED30B: mov ecx, dword ptr [0x58a24658]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x58
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588ED311: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x588ED314: push eax
        __asm _emit 0x50
        // 0x588ED315: call 0x587317e0
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0xE4
        __asm _emit 0xFF
        // 0x588ED31A: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x588ED31D: push eax
        __asm _emit 0x50
        // 0x588ED31E: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0x75
        __asm _emit 0xE4
        __asm _emit 0xFF
        // 0x588ED323: lea ecx, [ebx + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x78
        // 0x588ED326: push ecx
        __asm _emit 0x51
        // 0x588ED327: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED32D: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0x49
        __asm _emit 0xE4
        __asm _emit 0xFF
        // 0x588ED332: mov edx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED338: mov dword ptr [edx + 0x60], 0xffffff
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x60
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588ED33F: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED345: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x588ED349: mov eax, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED34F: mov ecx, dword ptr [ebx + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED355: mov dword ptr [eax + 0x64], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x64
        // 0x588ED358: mov eax, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED35E: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x588ED362: mov eax, dword ptr [esi + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED368: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x588ED36C: mov edx, dword ptr [edi + 0xa9c]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x9C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED372: mov eax, dword ptr [esi + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED378: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588ED37E: mov dword ptr [eax + 0x64], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x64
        // 0x588ED381: mov eax, dword ptr [esi + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED387: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x588ED38B: mov ecx, dword ptr [edi + 0xa98]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x98
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED391: mov edx, dword ptr [esi + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED397: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588ED39D: mov dword ptr [edx + 0x64], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x64
        // 0x588ED3A0: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED3A6: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588ED3AB: mov eax, dword ptr [edi + 0xa4c]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x4C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED3B1: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588ED3B6: je 0x588ed4b4
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED3BC: mov ecx, 0x64
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED3C1: sub ecx, dword ptr [edi + 0xaac]
        __asm _emit 0x2B
        __asm _emit 0x8F
        __asm _emit 0xAC
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED3C7: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x588ED3CA: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588ED3CF: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x588ED3D1: mov eax, dword ptr [edi + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x4C
        // 0x588ED3D4: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED3DA: shr edx, 5
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x588ED3DD: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588ED3E2: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588ED3E4: jl 0x588ed416
        __asm _emit 0x7C
        __asm _emit 0x30
        // 0x588ED3E6: push edx
        __asm _emit 0x52
        // 0x588ED3E7: call 0x5877e740
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0x13
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588ED3EC: mov edx, dword ptr [edi + 0xa4c]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x4C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED3F2: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED3F8: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588ED3FE: push edx
        __asm _emit 0x52
        // 0x588ED3FF: call 0x5877e770
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0x13
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588ED404: mov eax, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED40A: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588ED40F: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588ED411: jmp 0x588ed693
        __asm _emit 0xE9
        __asm _emit 0x7D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED416: push eax
        __asm _emit 0x50
        // 0x588ED417: call 0x5877e740
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0x13
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588ED41C: mov eax, dword ptr [edi + 0xa4c]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x4C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED422: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED428: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588ED42D: push eax
        __asm _emit 0x50
        // 0x588ED42E: call 0x5877e770
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0x13
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588ED433: mov eax, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED439: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588ED43E: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588ED440: jmp 0x588ed693
        __asm _emit 0xE9
        __asm _emit 0x4E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED445: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x588ED448: mov dword ptr [ecx + 0x54], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED44F: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED455: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x588ED459: mov edx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED45F: push 0x589a16bc
        __asm _emit 0x68
        __asm _emit 0xBC
        __asm _emit 0x16
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588ED464: mov dword ptr [edx + 0x60], 0xdddddd
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x60
        __asm _emit 0xDD
        __asm _emit 0xDD
        __asm _emit 0xDD
        __asm _emit 0x00
        // 0x588ED46B: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588ED471: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED477: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588ED47A: push eax
        __asm _emit 0x50
        // 0x588ED47B: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0x48
        __asm _emit 0xE4
        __asm _emit 0xFF
        // 0x588ED480: mov eax, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED486: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED48B: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588ED48F: mov eax, dword ptr [esi + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED495: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588ED497: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588ED49B: mov eax, dword ptr [esi + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED4A1: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588ED4A5: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED4AB: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED4B0: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588ED4B4: mov eax, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED4BA: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588ED4BF: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588ED4C1: jmp 0x588ed693
        __asm _emit 0xE9
        __asm _emit 0xCD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED4C6: mov ecx, dword ptr [esi + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED4CC: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588ED4D1: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0x48
        __asm _emit 0xE4
        __asm _emit 0xFF
        // 0x588ED4D6: mov ecx, dword ptr [esi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED4DC: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588ED4E1: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0x47
        __asm _emit 0xE4
        __asm _emit 0xFF
        // 0x588ED4E6: mov ebx, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588ED4EC: push 0x589a169c
        __asm _emit 0x68
        __asm _emit 0x9C
        __asm _emit 0x16
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588ED4F1: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x588ED4F3: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED4F9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588ED4FC: push eax
        __asm _emit 0x50
        // 0x588ED4FD: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0x47
        __asm _emit 0xE4
        __asm _emit 0xFF
        // 0x588ED502: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED508: push 0x5899aae4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0xAA
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588ED50D: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0x47
        __asm _emit 0xE4
        __asm _emit 0xFF
        // 0x588ED512: push 0x589980b8
        __asm _emit 0x68
        __asm _emit 0xB8
        __asm _emit 0x80
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588ED517: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x588ED519: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED51F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588ED522: push eax
        __asm _emit 0x50
        // 0x588ED523: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0x47
        __asm _emit 0xE4
        __asm _emit 0xFF
        // 0x588ED528: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED52E: push 0x589980b8
        __asm _emit 0x68
        __asm _emit 0xB8
        __asm _emit 0x80
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588ED533: mov dword ptr [eax + 0x60], 0xff
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED53A: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x588ED53C: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED542: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588ED545: push eax
        __asm _emit 0x50
        // 0x588ED546: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0x47
        __asm _emit 0xE4
        __asm _emit 0xFF
        // 0x588ED54B: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED551: mov eax, 0xff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED556: mov dword ptr [ecx + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x60
        // 0x588ED559: mov edx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED55F: mov dword ptr [edx + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x60
        // 0x588ED562: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED568: mov dword ptr [ecx + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x60
        // 0x588ED56B: mov eax, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED571: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED576: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588ED57A: mov eax, dword ptr [esi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED580: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588ED582: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588ED586: mov eax, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED58C: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588ED590: mov eax, dword ptr [esi + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED596: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588ED59A: mov eax, dword ptr [esi + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED5A0: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588ED5A4: mov eax, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED5AA: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588ED5AE: mov eax, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED5B4: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588ED5B8: mov eax, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED5BE: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588ED5C2: mov eax, dword ptr [esi + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED5C8: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588ED5CC: mov eax, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED5D2: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588ED5D6: mov eax, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED5DC: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588ED5E0: mov eax, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED5E6: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588ED5EA: mov ecx, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED5F0: push ebp
        __asm _emit 0x55
        // 0x588ED5F1: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0x9D
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588ED5F6: mov ecx, dword ptr [esi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED5FC: push ebp
        __asm _emit 0x55
        // 0x588ED5FD: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0x9D
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588ED602: mov eax, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED608: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED60D: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588ED611: mov eax, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED617: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588ED619: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588ED61D: mov eax, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED623: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588ED627: mov eax, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED62D: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588ED631: mov eax, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED637: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588ED63B: mov eax, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED641: mov dword ptr [eax + 0x5c], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x5C
        // 0x588ED644: mov dword ptr [eax + 0x60], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588ED64B: mov eax, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED651: mov dword ptr [eax + 0x58], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x58
        // 0x588ED654: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED65A: push ebp
        __asm _emit 0x55
        // 0x588ED65B: call 0x5877e740
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0x10
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588ED660: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED666: push ebp
        __asm _emit 0x55
        // 0x588ED667: call 0x5877e740
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0x10
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588ED66C: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED672: push ebp
        __asm _emit 0x55
        // 0x588ED673: call 0x5877e740
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0x10
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588ED678: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x588ED67B: mov dword ptr [ecx + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x54
        // 0x588ED67E: mov edx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x7C
        // 0x588ED681: mov dword ptr [edx + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588ED684: mov eax, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED68A: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED68F: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588ED693: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x588ED695: je 0x588ed6b3
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x588ED697: mov edi, dword ptr [edi + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0xBF
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED69D: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x588ED69F: je 0x588ed6b3
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x588ED6A1: mov dx, word ptr [edi + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x04
        // 0x588ED6A5: mov eax, 0x3e0
        __asm _emit 0xB8
        __asm _emit 0xE0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED6AA: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x588ED6AD: cmp dx, 0x40
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x40
        // 0x588ED6B1: je 0x588ed730
        __asm _emit 0x74
        __asm _emit 0x7D
        // 0x588ED6B3: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588ED6B9: call 0x588f42f0
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0x6C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED6BE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588ED6C0: je 0x588ed6c9
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x588ED6C2: push 0x589a167c
        __asm _emit 0x68
        __asm _emit 0x7C
        __asm _emit 0x16
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588ED6C7: jmp 0x588ed71b
        __asm _emit 0xEB
        __asm _emit 0x52
        // 0x588ED6C9: mov ecx, 0xa9
        __asm _emit 0xB9
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED6CE: cmp word ptr [esi + 0x13c], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED6D5: je 0x588ed6fc
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x588ED6D7: cmp dword ptr [0x58a0b4a0], ebp
        __asm _emit 0x39
        __asm _emit 0x2D
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x588ED6DD: je 0x588ed6fc
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x588ED6DF: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588ED6E5: call 0x587d6c00
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0x95
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588ED6EA: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x588ED6ED: cmp edx, dword ptr [0x58a0b4a0]
        __asm _emit 0x3B
        __asm _emit 0x15
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x588ED6F3: jne 0x588ed6fc
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x588ED6F5: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588ED6FA: jmp 0x588ed70b
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x588ED6FC: push 0x589a1658
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x16
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588ED701: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588ED707: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588ED70A: push eax
        __asm _emit 0x50
        // 0x588ED70B: mov ecx, dword ptr [esi + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED711: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0x45
        __asm _emit 0xE4
        __asm _emit 0xFF
        // 0x588ED716: push 0x589a1634
        __asm _emit 0x68
        __asm _emit 0x34
        __asm _emit 0x16
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588ED71B: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588ED721: mov ecx, dword ptr [esi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED727: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588ED72A: push eax
        __asm _emit 0x50
        // 0x588ED72B: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0x45
        __asm _emit 0xE4
        __asm _emit 0xFF
        // 0x588ED730: mov ecx, dword ptr [esp + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED737: pop edi
        __asm _emit 0x5F
        // 0x588ED738: pop esi
        __asm _emit 0x5E
        // 0x588ED739: pop ebp
        __asm _emit 0x5D
        // 0x588ED73A: pop ebx
        __asm _emit 0x5B
        // 0x588ED73B: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588ED73D: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0xF4
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588ED742: add esp, 0x184
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED748: ret
        __asm _emit 0xC3
    }
}
