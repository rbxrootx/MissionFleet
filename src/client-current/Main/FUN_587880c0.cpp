// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1353 bytes in 4 exact ranges.
// Source symbol alias: FUN_587880c0.

// Ghidra body range 0x587880C0..0x587880F5; 53 mapped bytes.
extern "C" __declspec(naked) void FUN_587880c0_segment_00() {
    __asm {
        // 0x587880C0: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x587880C3: push ebx
        __asm _emit 0x53
        // 0x587880C4: push ebp
        __asm _emit 0x55
        // 0x587880C5: push esi
        __asm _emit 0x56
        // 0x587880C6: mov esi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587880CA: cmp dword ptr [esi], 0
        __asm _emit 0x83
        __asm _emit 0x3E
        __asm _emit 0x00
        // 0x587880CD: push edi
        __asm _emit 0x57
        // 0x587880CE: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587880D0: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587880D4: je 0x587882fa
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587880DA: mov ebp, dword ptr [edi + 0x864]
        __asm _emit 0x8B
        __asm _emit 0xAF
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587880E0: cmp ebp, dword ptr [edi + 0x868]
        __asm _emit 0x3B
        __asm _emit 0xAF
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587880E6: jbe 0x587880ed
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587880E8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x4B
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x587880ED: mov ebx, dword ptr [edi + 0x858]
        __asm _emit 0x8B
        __asm _emit 0x9F
        __asm _emit 0x58
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587880F3: jmp 0x58788100
        __asm _emit 0xEB
        __asm _emit 0x0B
    }
}

// Ghidra body range 0x58788100..0x58788319; 537 mapped bytes.
extern "C" __declspec(naked) void FUN_587880c0_segment_01() {
    __asm {
        // 0x58788100: mov eax, dword ptr [edi + 0x868]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788106: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5878810A: cmp dword ptr [edi + 0x864], eax
        __asm _emit 0x39
        __asm _emit 0x87
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788110: jbe 0x58788117
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58788112: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0x4B
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58788117: mov eax, dword ptr [edi + 0x858]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x58
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878811D: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5878811F: je 0x58788125
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58788121: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x58788123: je 0x5878812a
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58788125: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0x4B
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x5878812A: cmp ebp, dword ptr [esp + 0x34]
        __asm _emit 0x3B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5878812E: je 0x587882fa
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788134: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58788136: jne 0x587881ef
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878813C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0x4B
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58788141: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58788143: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x58788146: jb 0x5878814d
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58788148: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0x4B
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x5878814D: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58788150: cmp dword ptr [eax + 0x50], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x58788154: jbe 0x587882c3
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878815A: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5878815C: jne 0x587881f6
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788162: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x4B
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58788167: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58788169: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x5878816C: jb 0x58788173
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5878816E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0x4A
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58788173: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58788176: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58788179: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5878817D: lea edi, [ecx - 0xa]
        __asm _emit 0x8D
        __asm _emit 0x79
        __asm _emit 0xF6
        // 0x58788180: cmp edx, edi
        __asm _emit 0x3B
        __asm _emit 0xD7
        // 0x58788182: jl 0x58788201
        __asm _emit 0x7C
        __asm _emit 0x7D
        // 0x58788184: add ecx, 0xa
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x0A
        // 0x58788187: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x58788189: jg 0x58788201
        __asm _emit 0x7F
        __asm _emit 0x76
        // 0x5878818B: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x5878818E: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58788192: lea edx, [eax - 0xa]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0xF6
        // 0x58788195: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x58788197: jl 0x58788201
        __asm _emit 0x7C
        __asm _emit 0x68
        // 0x58788199: add eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x0A
        // 0x5878819C: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5878819E: jg 0x58788201
        __asm _emit 0x7F
        __asm _emit 0x61
        // 0x587881A0: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587881A2: jne 0x587881fd
        __asm _emit 0x75
        __asm _emit 0x59
        // 0x587881A4: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0x4A
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x587881A9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587881AB: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x587881AE: jb 0x587881b5
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587881B0: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0x4A
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x587881B5: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587881B9: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x587881BC: push esi
        __asm _emit 0x56
        // 0x587881BD: push eax
        __asm _emit 0x50
        // 0x587881BE: call 0x58784b10
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0xC9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587881C3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587881C5: je 0x587882c3
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587881CB: cmp dword ptr [esp + 0x24], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587881D0: je 0x587882c3
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xED
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587881D6: cmp dword ptr [esi], 0xb
        __asm _emit 0x83
        __asm _emit 0x3E
        __asm _emit 0x0B
        // 0x587881D9: jne 0x587882c3
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587881DF: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587881E3: push 0xb
        __asm _emit 0x6A
        __asm _emit 0x0B
        // 0x587881E5: call 0x588d6c90
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0xEA
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587881EA: jmp 0x587882c3
        __asm _emit 0xE9
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587881EF: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587881F1: jmp 0x58788143
        __asm _emit 0xE9
        __asm _emit 0x4D
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587881F6: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587881F8: jmp 0x58788169
        __asm _emit 0xE9
        __asm _emit 0x6C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587881FD: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587881FF: jmp 0x587881ab
        __asm _emit 0xEB
        __asm _emit 0xAA
        // 0x58788201: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58788203: jne 0x587882e4
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xDB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788209: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0x4A
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x5878820E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58788210: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x58788213: jb 0x5878821a
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58788215: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0x4A
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x5878821A: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x5878821D: mov edi, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x04
        // 0x58788220: sub edi, dword ptr [esp + 0x28]
        __asm _emit 0x2B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58788224: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58788226: jne 0x587882eb
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878822C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0x4A
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58788231: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58788233: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x58788236: jb 0x5878823d
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58788238: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0x4A
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x5878823D: mov edx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x58788240: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58788243: sub eax, dword ptr [esp + 0x2c]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58788247: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58788249: imul ecx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCF
        // 0x5878824C: imul eax, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC0
        // 0x5878824F: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x58788251: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58788255: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58788257: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x5878825A: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x5878825C: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58788260: jge 0x587882c3
        __asm _emit 0x7D
        __asm _emit 0x61
        // 0x58788262: fild dword ptr [esp + 0x34]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58788266: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0x4A
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x5878826B: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x4A
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58788270: push eax
        __asm _emit 0x50
        // 0x58788271: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58788275: push eax
        __asm _emit 0x50
        // 0x58788276: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58788279: cdq
        __asm _emit 0x99
        // 0x5878827A: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5878827C: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x5878827E: push eax
        __asm _emit 0x50
        // 0x5878827F: call 0x5876bf80
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0x3C
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58788284: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58788286: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58788289: mov dword ptr [esi + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x5878828C: mov dword ptr [esi + 0x10], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x10
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58788293: mov dword ptr [esi + 0xc], 2
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878829A: mov dword ptr [esi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5878829D: mov dword ptr [esi + 4], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x587882A0: cmp ebx, edi
        __asm _emit 0x3B
        __asm _emit 0xDF
        // 0x587882A2: jne 0x587882f2
        __asm _emit 0x75
        __asm _emit 0x4E
        // 0x587882A4: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0x49
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x587882A9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587882AB: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x587882AE: jb 0x587882b5
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587882B0: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0x49
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x587882B5: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587882B9: push esi
        __asm _emit 0x56
        // 0x587882BA: push ecx
        __asm _emit 0x51
        // 0x587882BB: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x587882BE: call 0x58784b10
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0xC8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587882C3: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587882C5: jne 0x587882f6
        __asm _emit 0x75
        __asm _emit 0x2F
        // 0x587882C7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0x49
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x587882CC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587882CE: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x587882D1: jb 0x587882d8
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587882D3: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0x49
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x587882D8: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587882DC: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x587882DF: jmp 0x58788100
        __asm _emit 0xE9
        __asm _emit 0x1C
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587882E4: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587882E6: jmp 0x58788210
        __asm _emit 0xE9
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587882EB: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587882ED: jmp 0x58788233
        __asm _emit 0xE9
        __asm _emit 0x41
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587882F2: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587882F4: jmp 0x587882ab
        __asm _emit 0xEB
        __asm _emit 0xB5
        // 0x587882F6: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587882F8: jmp 0x587882ce
        __asm _emit 0xEB
        __asm _emit 0xD4
        // 0x587882FA: mov ebx, dword ptr [edi + 0x87c]
        __asm _emit 0x8B
        __asm _emit 0x9F
        __asm _emit 0x7C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788300: cmp ebx, dword ptr [edi + 0x880]
        __asm _emit 0x3B
        __asm _emit 0x9F
        __asm _emit 0x80
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788306: jbe 0x5878830d
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58788308: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0x49
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x5878830D: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58788311: mov ebp, dword ptr [edi + 0x870]
        __asm _emit 0x8B
        __asm _emit 0xAF
        __asm _emit 0x70
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788317: jmp 0x58788320
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x58788320..0x5878853D; 541 mapped bytes.
extern "C" __declspec(naked) void FUN_587880c0_segment_02() {
    __asm {
        // 0x58788320: mov eax, dword ptr [edi + 0x880]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788326: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5878832A: cmp dword ptr [edi + 0x87c], eax
        __asm _emit 0x39
        __asm _emit 0x87
        __asm _emit 0x7C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788330: jbe 0x58788337
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58788332: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x49
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58788337: mov eax, dword ptr [edi + 0x870]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x70
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878833D: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5878833F: je 0x58788345
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58788341: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x58788343: je 0x5878834a
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58788345: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0x49
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x5878834A: cmp ebx, dword ptr [esp + 0x34]
        __asm _emit 0x3B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5878834E: je 0x58788513
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788354: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58788356: jne 0x58788404
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878835C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0x49
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58788361: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58788363: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x58788366: jb 0x5878836d
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58788368: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x49
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x5878836D: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x5878836F: cmp dword ptr [edx + 0x68], 0
        __asm _emit 0x83
        __asm _emit 0x7A
        __asm _emit 0x68
        __asm _emit 0x00
        // 0x58788373: je 0x587884d8
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x5F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788379: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5878837B: jne 0x5878840c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788381: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0x48
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58788386: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58788388: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x5878838B: jb 0x58788392
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5878838D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0x48
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58788392: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x58788394: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x58788397: sub eax, dword ptr [esp + 0x28]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5878839B: cdq
        __asm _emit 0x99
        // 0x5878839C: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x5878839E: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587883A0: cmp eax, 0x19
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x19
        // 0x587883A3: jge 0x58788419
        __asm _emit 0x7D
        __asm _emit 0x74
        // 0x587883A5: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x587883A8: sub eax, dword ptr [esp + 0x2c]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587883AC: cdq
        __asm _emit 0x99
        // 0x587883AD: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x587883AF: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587883B1: cmp eax, 0x19
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x19
        // 0x587883B4: jge 0x58788419
        __asm _emit 0x7D
        __asm _emit 0x63
        // 0x587883B6: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587883B8: jne 0x58788414
        __asm _emit 0x75
        __asm _emit 0x5A
        // 0x587883BA: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0x48
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x587883BF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587883C1: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x587883C4: jb 0x587883cb
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587883C6: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x48
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x587883CB: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587883CF: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x587883D1: push esi
        __asm _emit 0x56
        // 0x587883D2: push eax
        __asm _emit 0x50
        // 0x587883D3: call 0x58784310
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0xBF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587883D8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587883DA: je 0x587884d8
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587883E0: cmp dword ptr [esp + 0x24], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587883E5: je 0x587884d8
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xED
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587883EB: cmp dword ptr [esi], 0xb
        __asm _emit 0x83
        __asm _emit 0x3E
        __asm _emit 0x0B
        // 0x587883EE: jne 0x587884d8
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587883F4: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587883F8: push 0xb
        __asm _emit 0x6A
        __asm _emit 0x0B
        // 0x587883FA: call 0x588d6c90
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587883FF: jmp 0x587884d8
        __asm _emit 0xE9
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788404: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58788407: jmp 0x58788363
        __asm _emit 0xE9
        __asm _emit 0x57
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5878840C: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x5878840F: jmp 0x58788388
        __asm _emit 0xE9
        __asm _emit 0x74
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58788414: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58788417: jmp 0x587883c1
        __asm _emit 0xEB
        __asm _emit 0xA8
        // 0x58788419: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5878841B: jne 0x587884f9
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788421: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0x48
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58788426: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58788428: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x5878842B: jb 0x58788432
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5878842D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x48
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58788432: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x58788434: mov edi, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x04
        // 0x58788437: sub edi, dword ptr [esp + 0x28]
        __asm _emit 0x2B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5878843B: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5878843D: jne 0x58788501
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788443: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x48
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58788448: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5878844A: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x5878844D: jb 0x58788454
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5878844F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0x48
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58788454: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x58788456: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58788459: sub eax, dword ptr [esp + 0x2c]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5878845D: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5878845F: imul ecx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCF
        // 0x58788462: imul eax, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC0
        // 0x58788465: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x58788467: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5878846B: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5878846D: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x58788470: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58788472: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58788476: jge 0x587884d8
        __asm _emit 0x7D
        __asm _emit 0x60
        // 0x58788478: fild dword ptr [esp + 0x34]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5878847C: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0x48
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58788481: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0x48
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58788486: push eax
        __asm _emit 0x50
        // 0x58788487: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5878848B: push eax
        __asm _emit 0x50
        // 0x5878848C: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5878848F: cdq
        __asm _emit 0x99
        // 0x58788490: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58788492: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x58788494: push eax
        __asm _emit 0x50
        // 0x58788495: call 0x5876bf80
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0x3A
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x5878849A: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5878849C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5878849F: mov dword ptr [esi + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x587884A2: mov dword ptr [esi + 0x10], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x10
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587884A9: mov dword ptr [esi + 0xc], 2
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587884B0: mov dword ptr [esi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587884B3: mov dword ptr [esi + 4], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x587884B6: cmp ebp, edi
        __asm _emit 0x3B
        __asm _emit 0xEF
        // 0x587884B8: jne 0x58788509
        __asm _emit 0x75
        __asm _emit 0x4F
        // 0x587884BA: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0x47
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x587884BF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587884C1: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x587884C4: jb 0x587884cb
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587884C6: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x47
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x587884CB: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587884CF: push esi
        __asm _emit 0x56
        // 0x587884D0: push ecx
        __asm _emit 0x51
        // 0x587884D1: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x587884D3: call 0x58784310
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0xBE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587884D8: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587884DA: jne 0x5878850e
        __asm _emit 0x75
        __asm _emit 0x32
        // 0x587884DC: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0x47
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x587884E1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587884E3: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x587884E6: jb 0x587884ed
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587884E8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x47
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x587884ED: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587884F1: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x587884F4: jmp 0x58788320
        __asm _emit 0xE9
        __asm _emit 0x27
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587884F9: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587884FC: jmp 0x58788428
        __asm _emit 0xE9
        __asm _emit 0x27
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58788501: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58788504: jmp 0x5878844a
        __asm _emit 0xE9
        __asm _emit 0x41
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58788509: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x5878850C: jmp 0x587884c1
        __asm _emit 0xEB
        __asm _emit 0xB3
        // 0x5878850E: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58788511: jmp 0x587884e3
        __asm _emit 0xEB
        __asm _emit 0xD0
        // 0x58788513: cmp dword ptr [esp + 0x20], 1
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x58788518: je 0x58788614
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878851E: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58788520: cmp byte ptr [edi + 0x88c], 0
        __asm _emit 0x80
        __asm _emit 0xBF
        __asm _emit 0x8C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788527: jbe 0x58788614
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0xE7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878852D: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58788531: mov edi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58788535: add ebx, 0x894
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878853B: jmp 0x58788540
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x58788540..0x5878861E; 222 mapped bytes.
extern "C" __declspec(naked) void FUN_587880c0_segment_03() {
    __asm {
        // 0x58788540: mov ecx, dword ptr [ebx - 4]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0xFC
        // 0x58788543: sub ecx, dword ptr [esp + 0x28]
        __asm _emit 0x2B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58788547: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58788549: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x5878854B: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5878854D: imul eax, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC0
        // 0x58788550: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x58788553: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58788557: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58788559: cmp eax, 0x258
        __asm _emit 0x3D
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878855E: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58788562: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58788566: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5878856A: jge 0x5878859b
        __asm _emit 0x7D
        __asm _emit 0x2F
        // 0x5878856C: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5878856F: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58788575: lea edx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58788579: push edx
        __asm _emit 0x52
        // 0x5878857A: push eax
        __asm _emit 0x50
        // 0x5878857B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5878857D: call 0x587ecab0
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0x45
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58788582: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58788585: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58788589: mov edx, dword ptr [ecx + 0x910]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878858F: mov ecx, dword ptr [edx + ebp*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0xAA
        // 0x58788592: push eax
        __asm _emit 0x50
        // 0x58788593: push eax
        __asm _emit 0x50
        // 0x58788594: call 0x58780330
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0x7D
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58788599: jmp 0x587885fd
        __asm _emit 0xEB
        __asm _emit 0x62
        // 0x5878859B: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5878859F: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x587885A1: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x587885A4: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587885A6: jge 0x587885fd
        __asm _emit 0x7D
        __asm _emit 0x55
        // 0x587885A8: fild dword ptr [esp + 0x24]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587885AC: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0x46
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x587885B1: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0x46
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x587885B6: push eax
        __asm _emit 0x50
        // 0x587885B7: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587885BB: push eax
        __asm _emit 0x50
        // 0x587885BC: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587885BF: cdq
        __asm _emit 0x99
        // 0x587885C0: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587885C2: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x587885C4: push eax
        __asm _emit 0x50
        // 0x587885C5: call 0x5876bf80
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0x39
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587885CA: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587885CD: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587885D1: push ecx
        __asm _emit 0x51
        // 0x587885D2: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587885D8: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587885DA: push edi
        __asm _emit 0x57
        // 0x587885DB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587885DD: call 0x587ecab0
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x587885E2: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x587885E5: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587885E9: mov ecx, dword ptr [eax + 0x910]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587885EF: mov ecx, dword ptr [ecx + ebp*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0xA9
        // 0x587885F2: push edx
        __asm _emit 0x52
        // 0x587885F3: push edi
        __asm _emit 0x57
        // 0x587885F4: call 0x58780330
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x7D
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587885F9: mov edi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587885FD: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58788601: movzx eax, byte ptr [edx + 0x88c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x82
        __asm _emit 0x8C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788608: inc ebp
        __asm _emit 0x45
        // 0x58788609: add ebx, 8
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x08
        // 0x5878860C: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x5878860E: jl 0x58788540
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x2C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58788614: pop edi
        __asm _emit 0x5F
        // 0x58788615: pop esi
        __asm _emit 0x5E
        // 0x58788616: pop ebp
        __asm _emit 0x5D
        // 0x58788617: pop ebx
        __asm _emit 0x5B
        // 0x58788618: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5878861B: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
