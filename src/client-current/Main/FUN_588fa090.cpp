// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 283 bytes in 3 exact ranges.
// Source symbol alias: FUN_588fa090.

// Ghidra body range 0x588FA090..0x588FA0C9; 57 mapped bytes.
extern "C" __declspec(naked) void FUN_588fa090_segment_00() {
    __asm {
        // 0x588FA090: sub esp, 0x108
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA096: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588FA09B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588FA09D: mov dword ptr [esp + 0x104], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA0A4: mov eax, dword ptr [esp + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA0AB: push ebx
        __asm _emit 0x53
        // 0x588FA0AC: push ebp
        __asm _emit 0x55
        // 0x588FA0AD: push esi
        __asm _emit 0x56
        // 0x588FA0AE: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x588FA0B0: push edi
        __asm _emit 0x57
        // 0x588FA0B1: mov edi, dword ptr [esp + 0x124]
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA0B8: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588FA0BC: lea esi, [ebp + 0xa8]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA0C2: mov ebx, 3
        __asm _emit 0xBB
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA0C7: jmp 0x588fa0d0
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x588FA0D0..0x588FA169; 153 mapped bytes.
extern "C" __declspec(naked) void FUN_588fa090_segment_01() {
    __asm {
        // 0x588FA0D0: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x588FA0D3: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x588FA0D5: add ecx, 0x11e
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x1E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA0DB: push ecx
        __asm _emit 0x51
        // 0x588FA0DC: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588FA0DE: add edx, 0x47
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x47
        // 0x588FA0E1: push edx
        __asm _emit 0x52
        // 0x588FA0E2: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA0E7: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588FA0E9: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588FA0EE: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588FA0F1: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x588FA0F4: jne 0x588fa0d0
        __asm _emit 0x75
        __asm _emit 0xDA
        // 0x588FA0F6: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x588FA0F9: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588FA0FB: add eax, 0x126
        __asm _emit 0x05
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA100: add ecx, 0x4f
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x4F
        // 0x588FA103: push eax
        __asm _emit 0x50
        // 0x588FA104: push ecx
        __asm _emit 0x51
        // 0x588FA105: mov ecx, dword ptr [ebp + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA10B: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA110: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA115: lea edx, [esp + 0x19]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x19
        // 0x588FA119: push ebx
        __asm _emit 0x53
        // 0x588FA11A: push edx
        __asm _emit 0x52
        // 0x588FA11B: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588FA11F: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0x2B
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FA124: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588FA128: mov ecx, dword ptr [esp + 0x128]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA12F: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588FA132: push eax
        __asm _emit 0x50
        // 0x588FA133: push ecx
        __asm _emit 0x51
        // 0x588FA134: call dword ptr [0x5898c040]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588FA13A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FA13D: push eax
        __asm _emit 0x50
        // 0x588FA13E: lea edx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588FA142: push 0x58998408
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588FA147: push edx
        __asm _emit 0x52
        // 0x588FA148: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588FA14E: mov eax, dword ptr [ebp + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA154: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x588FA157: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588FA15A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FA15C: je 0x588fa193
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x588FA15E: lea edx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588FA162: mov esi, 0x80
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA167: jmp 0x588fa170
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x588FA170..0x588FA1B9; 73 mapped bytes.
extern "C" __declspec(naked) void FUN_588fa090_segment_02() {
    __asm {
        // 0x588FA170: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x588FA176: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588FA178: je 0x588fa18b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588FA17A: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x588FA17C: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x588FA17E: je 0x588fa18b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588FA180: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x588FA182: inc eax
        __asm _emit 0x40
        // 0x588FA183: inc edx
        __asm _emit 0x42
        // 0x588FA184: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x588FA187: jne 0x588fa170
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x588FA189: jmp 0x588fa18f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x588FA18B: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588FA18D: jne 0x588fa190
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x588FA18F: dec eax
        __asm _emit 0x48
        // 0x588FA190: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA193: mov eax, dword ptr [ebp + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA199: mov ecx, dword ptr [esp + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA1A0: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588FA1A5: pop edi
        __asm _emit 0x5F
        // 0x588FA1A6: pop esi
        __asm _emit 0x5E
        // 0x588FA1A7: pop ebp
        __asm _emit 0x5D
        // 0x588FA1A8: pop ebx
        __asm _emit 0x5B
        // 0x588FA1A9: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588FA1AB: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x2A
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FA1B0: add esp, 0x108
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA1B6: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
