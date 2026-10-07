// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 208 bytes in 1 exact ranges.
// Source symbol alias: FUN_58899700.

// Ghidra body range 0x58899700..0x588997D0; 208 mapped bytes.
extern "C" __declspec(naked) void FUN_58899700_segment_00() {
    __asm {
        // 0x58899700: push ebp
        __asm _emit 0x55
        // 0x58899701: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58899703: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58899705: push 0x58987348
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x73
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889970A: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58899710: push eax
        __asm _emit 0x50
        // 0x58899711: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x58899714: push ebx
        __asm _emit 0x53
        // 0x58899715: push esi
        __asm _emit 0x56
        // 0x58899716: push edi
        __asm _emit 0x57
        // 0x58899717: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889971C: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xC5
        // 0x5889971E: push eax
        __asm _emit 0x50
        // 0x5889971F: lea eax, [ebp - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x58899722: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58899728: mov dword ptr [ebp - 0x10], esp
        __asm _emit 0x89
        __asm _emit 0x65
        __asm _emit 0xF0
        // 0x5889972B: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5889972D: mov dword ptr [ebp - 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x58899730: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x58899732: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x35
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58899737: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5889973A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889973C: je 0x58899742
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5889973E: mov dword ptr [eax], esi
        __asm _emit 0x89
        __asm _emit 0x30
        // 0x58899740: jmp 0x58899744
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58899742: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58899744: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x58899746: mov edi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x58899749: mov ecx, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x10
        // 0x5889974C: sub ecx, dword ptr [edi + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x5889974F: mov eax, 0x92492493
        __asm _emit 0xB8
        __asm _emit 0x93
        __asm _emit 0x24
        __asm _emit 0x49
        __asm _emit 0x92
        // 0x58899754: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58899756: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x58899758: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x5889975B: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5889975D: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58899760: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58899762: push eax
        __asm _emit 0x50
        // 0x58899763: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58899765: mov dword ptr [ebp - 4], 0
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889976C: call 0x58791ed0
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0x87
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58899771: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58899773: je 0x588997ba
        __asm _emit 0x74
        __asm _emit 0x45
        // 0x58899775: mov eax, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x10
        // 0x58899778: mov byte ptr [ebp - 4], 1
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0x01
        // 0x5889977C: mov dword ptr [ebp - 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x5889977F: cmp dword ptr [edi + 0xc], eax
        __asm _emit 0x39
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x58899782: jbe 0x58899789
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58899784: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0x34
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58899789: mov ebx, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5F
        __asm _emit 0x0C
        // 0x5889978C: cmp ebx, dword ptr [edi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x5F
        __asm _emit 0x10
        // 0x5889978F: jbe 0x58899796
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58899791: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0x34
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58899796: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x58899799: mov byte ptr [ebp + 8], 0
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5889979D: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x588997A0: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x08
        // 0x588997A3: push ecx
        __asm _emit 0x51
        // 0x588997A4: push edx
        __asm _emit 0x52
        // 0x588997A5: mov edx, dword ptr [ebp - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xEC
        // 0x588997A8: lea ecx, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588997AB: push ecx
        __asm _emit 0x51
        // 0x588997AC: push eax
        __asm _emit 0x50
        // 0x588997AD: push edx
        __asm _emit 0x52
        // 0x588997AE: push ebx
        __asm _emit 0x53
        // 0x588997AF: call 0x588995e0
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588997B4: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x588997B7: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x588997BA: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588997BC: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x588997BF: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588997C6: pop ecx
        __asm _emit 0x59
        // 0x588997C7: pop edi
        __asm _emit 0x5F
        // 0x588997C8: pop esi
        __asm _emit 0x5E
        // 0x588997C9: pop ebx
        __asm _emit 0x5B
        // 0x588997CA: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x588997CC: pop ebp
        __asm _emit 0x5D
        // 0x588997CD: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
