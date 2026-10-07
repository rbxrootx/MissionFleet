// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 363 bytes in 1 exact ranges.
// Source symbol alias: FUN_588946b0.

// Ghidra body range 0x588946B0..0x5889481B; 363 mapped bytes.
extern "C" __declspec(naked) void FUN_588946b0_segment_00() {
    __asm {
        // 0x588946B0: push esi
        __asm _emit 0x56
        // 0x588946B1: push 0x220000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x588946B6: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588946B8: call 0x58893860
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588946BD: mov eax, dword ptr [esi + 0x150]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588946C3: mov eax, dword ptr [eax + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588946C9: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x588946CC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588946D0: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x588946D2: inc eax
        __asm _emit 0x40
        // 0x588946D3: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x588946D5: jne 0x588946d0
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x588946D7: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588946D9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588946DB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588946DD: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588946DF: jle 0x58894705
        __asm _emit 0x7E
        __asm _emit 0x24
        // 0x588946E1: mov edx, dword ptr [esi + 0x150]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588946E7: mov edx, dword ptr [edx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588946ED: mov byte ptr [edx], 0
        __asm _emit 0xC6
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588946F0: mov edx, dword ptr [esi + 0x150]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588946F6: mov edx, dword ptr [edx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588946FC: mov byte ptr [eax + edx], 0
        __asm _emit 0xC6
        __asm _emit 0x04
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58894700: inc eax
        __asm _emit 0x40
        // 0x58894701: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58894703: jl 0x588946e1
        __asm _emit 0x7C
        __asm _emit 0xDC
        // 0x58894705: mov ecx, dword ptr [esi + 0x150]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889470B: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0xB2
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x58894710: mov eax, dword ptr [esi + 0x150]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894716: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889471B: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5889471F: mov eax, dword ptr [esi + 0x154]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894725: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58894727: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5889472B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889472D: mov dword ptr [esi + 0xf8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894733: mov dword ptr [esi + 0xfc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894739: mov dword ptr [esi + 0x100], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889473F: mov dword ptr [esi + 0x104], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894745: mov ecx, dword ptr [esi + 0x498]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889474B: push eax
        __asm _emit 0x50
        // 0x5889474C: mov dword ptr [esi + 0xb4], 0x100000
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58894756: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x2C
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5889475B: mov dword ptr [esi + 0x10c], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894765: mov dword ptr [esi + 0x4ac], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889476F: mov eax, dword ptr [0x58a24580]
        __asm _emit 0xA1
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58894774: cmp eax, dword ptr [0x58a245a4]
        __asm _emit 0x3B
        __asm _emit 0x05
        __asm _emit 0xA4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889477A: je 0x588947ab
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x5889477C: cmp eax, dword ptr [0x58a245a8]
        __asm _emit 0x3B
        __asm _emit 0x05
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58894782: je 0x588947ab
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x58894784: mov eax, dword ptr [esi + 0x4c8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889478A: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889478F: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58894793: mov eax, dword ptr [esi + 0x4cc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894799: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5889479B: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5889479F: mov eax, dword ptr [esi + 0x4c4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588947A5: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588947A9: jmp 0x588947f4
        __asm _emit 0xEB
        __asm _emit 0x49
        // 0x588947AB: mov ecx, dword ptr [esi + 0x4c8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588947B1: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0x40
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588947B6: mov ecx, dword ptr [esi + 0x4cc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588947BC: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x40
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588947C1: mov ecx, dword ptr [esi + 0x4c0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588947C7: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588947CC: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x588947CF: mov ecx, dword ptr [esi + 0x4c0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588947D5: sub edx, 0x32
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x32
        // 0x588947D8: push edx
        __asm _emit 0x52
        // 0x588947D9: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0xEB
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x588947DE: mov eax, dword ptr [0x58a245a8]
        __asm _emit 0xA1
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588947E3: mov ecx, dword ptr [eax + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588947E9: mov ecx, dword ptr [ecx + 0x204]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588947EF: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0x3F
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588947F4: mov ecx, dword ptr [esi + 0x16c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588947FA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588947FC: call 0x58793da0
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0xF5
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58894801: mov ecx, dword ptr [esi + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894807: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58894809: call 0x58793da0
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0xF5
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x5889480E: mov esi, dword ptr [esi + 0x4fc]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0xFC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58894814: or word ptr [esi + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x58894819: pop esi
        __asm _emit 0x5E
        // 0x5889481A: ret
        __asm _emit 0xC3
    }
}
