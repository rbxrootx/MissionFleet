// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5881DE10 .. +0x132 bytes.
// Source symbol alias: FUN_5881de10.
extern "C" __declspec(naked) void FUN_5881de10() {
    __asm {
        // 0x5881DE10: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5881DE12: push 0x58981a81
        __asm _emit 0x68
        __asm _emit 0x81
        __asm _emit 0x1A
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5881DE17: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881DE1D: push eax
        __asm _emit 0x50
        // 0x5881DE1E: push ecx
        __asm _emit 0x51
        // 0x5881DE1F: push esi
        __asm _emit 0x56
        // 0x5881DE20: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5881DE25: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5881DE27: push eax
        __asm _emit 0x50
        // 0x5881DE28: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5881DE2C: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881DE32: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5881DE34: cmp dword ptr [esi + 0xd8], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881DE3B: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5881DE3E: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x5881DE41: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x5881DE44: mov dword ptr [esi + 0x80], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881DE4A: jne 0x5881de9a
        __asm _emit 0x75
        __asm _emit 0x4E
        // 0x5881DE4C: push 0x120
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881DE51: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0xED
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5881DE56: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881DE59: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5881DE5D: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881DE65: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5881DE67: je 0x5881de8a
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x5881DE69: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5881DE6C: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5881DE6F: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5881DE71: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5881DE73: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5881DE75: sub edx, 0xa0
        __asm _emit 0x81
        __asm _emit 0xEA
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881DE7B: push edx
        __asm _emit 0x52
        // 0x5881DE7C: add ecx, 0x37
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x37
        // 0x5881DE7F: push ecx
        __asm _emit 0x51
        // 0x5881DE80: push esi
        __asm _emit 0x56
        // 0x5881DE81: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881DE83: call 0x58849b70
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5881DE88: jmp 0x5881de8c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881DE8A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5881DE8C: mov dword ptr [esp + 0x14], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5881DE94: mov dword ptr [esi + 0xd8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881DE9A: cmp dword ptr [esi + 0xdc], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881DEA1: jne 0x5881dee4
        __asm _emit 0x75
        __asm _emit 0x41
        // 0x5881DEA3: push 0x18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881DEA8: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0xED
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5881DEAD: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881DEB0: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5881DEB4: mov dword ptr [esp + 0x14], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881DEBC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5881DEBE: je 0x5881ded4
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x5881DEC0: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5881DEC2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5881DEC4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5881DEC6: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x5881DEC8: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x5881DECA: push esi
        __asm _emit 0x56
        // 0x5881DECB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881DECD: call 0x58843380
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5881DED2: jmp 0x5881ded6
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881DED4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5881DED6: mov dword ptr [esp + 0x14], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5881DEDE: mov dword ptr [esi + 0xdc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881DEE4: cmp dword ptr [esi + 0xe0], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881DEEB: jne 0x5881df2c
        __asm _emit 0x75
        __asm _emit 0x3F
        // 0x5881DEED: push 0xa4
        __asm _emit 0x68
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881DEF2: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0xED
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5881DEF7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881DEFA: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5881DEFE: mov dword ptr [esp + 0x14], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881DF06: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5881DF08: je 0x5881df24
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x5881DF0A: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5881DF0C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5881DF0E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5881DF10: push 0xbe
        __asm _emit 0x68
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881DF15: push 0xd2
        __asm _emit 0x68
        __asm _emit 0xD2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881DF1A: push esi
        __asm _emit 0x56
        // 0x5881DF1B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881DF1D: call 0x58847ab0
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0x9B
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5881DF22: jmp 0x5881df26
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881DF24: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5881DF26: mov dword ptr [esi + 0xe0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881DF2C: or word ptr [esi + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x5881DF31: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5881DF35: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881DF3C: pop ecx
        __asm _emit 0x59
        // 0x5881DF3D: pop esi
        __asm _emit 0x5E
        // 0x5881DF3E: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5881DF41: ret
        __asm _emit 0xC3
    }
}
