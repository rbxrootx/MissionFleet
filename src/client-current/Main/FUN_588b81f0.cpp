// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 682 bytes in 2 exact ranges.
// Source symbol alias: FUN_588b81f0.

// Ghidra body range 0x588B81F0..0x588B83F7; 519 mapped bytes.
extern "C" __declspec(naked) void FUN_588b81f0_segment_00() {
    __asm {
        // 0x588B81F0: push ebp
        __asm _emit 0x55
        // 0x588B81F1: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x588B81F3: and esp, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xF8
        // 0x588B81F6: sub esp, 0xbc
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B81FC: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588B8201: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588B8203: mov dword ptr [esp + 0xb8], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B820A: push ebx
        __asm _emit 0x53
        // 0x588B820B: push esi
        __asm _emit 0x56
        // 0x588B820C: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588B820E: push edi
        __asm _emit 0x57
        // 0x588B820F: lea edi, [esi + 0xf0]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8215: mov ebx, 3
        __asm _emit 0xBB
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B821A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8220: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588B8222: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B8227: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588B822A: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x588B822D: jne 0x588b8220
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x588B822F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B8231: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588B8233: cmp ax, word ptr [esi + 0x17e]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x7E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B823A: jae 0x588b8310
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8240: mov ecx, dword ptr [esi + 0x188]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8246: mov edx, dword ptr [ecx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0xB9
        // 0x588B8249: mov ebx, dword ptr [0x5898c3c4]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588B824F: add edx, 0xdc
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8255: push edx
        __asm _emit 0x52
        // 0x588B8256: lea eax, [esp + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x588B825A: push 0x589a0988
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0x09
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588B825F: push eax
        __asm _emit 0x50
        // 0x588B8260: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x588B8262: mov ecx, dword ptr [esi + 0x188]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8268: mov edx, dword ptr [ecx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0xB9
        // 0x588B826B: movzx eax, word ptr [edx + 0x5e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x42
        __asm _emit 0x5E
        // 0x588B826F: shr eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x588B8272: xor eax, 0xffffffaa
        __asm _emit 0x83
        __asm _emit 0xF0
        __asm _emit 0xAA
        // 0x588B8275: and eax, 0xff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B827A: push eax
        __asm _emit 0x50
        // 0x588B827B: lea ecx, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588B827F: push 0x589a0984
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588B8284: push ecx
        __asm _emit 0x51
        // 0x588B8285: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x588B8287: mov edx, dword ptr [esi + 0x188]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B828D: mov ecx, dword ptr [edx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0xBA
        // 0x588B8290: movzx eax, word ptr [ecx + 0x5e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x41
        __asm _emit 0x5E
        // 0x588B8294: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x588B8297: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x588B8299: shl edx, 4
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x04
        // 0x588B829C: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x588B829E: mov eax, dword ptr [ecx + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B82A4: shr eax, 1
        __asm _emit 0xD1
        __asm _emit 0xE8
        // 0x588B82A6: lea ecx, [eax + edx*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xD0
        // 0x588B82A9: imul ecx, ecx, 0xe0
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B82AF: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x588B82B2: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588B82B7: add ecx, 0x589cfca8
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xA8
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588B82BD: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588B82BF: push ecx
        __asm _emit 0x51
        // 0x588B82C0: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B82C6: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x06
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B82CB: mov edx, dword ptr [esi + 0x188]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B82D1: mov eax, dword ptr [edx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xBA
        // 0x588B82D4: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588B82D9: push eax
        __asm _emit 0x50
        // 0x588B82DA: lea ecx, [esp + 0x48]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x588B82DE: push ecx
        __asm _emit 0x51
        // 0x588B82DF: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B82E5: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B82EA: mov ecx, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B82F0: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588B82F5: push edi
        __asm _emit 0x57
        // 0x588B82F6: lea edx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588B82FA: push edx
        __asm _emit 0x52
        // 0x588B82FB: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B8300: movzx eax, word ptr [esi + 0x17e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x7E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8307: inc edi
        __asm _emit 0x47
        // 0x588B8308: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588B830A: jl 0x588b8240
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x30
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B8310: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B8312: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588B8314: cmp cx, word ptr [esi + 0x180]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B831B: jae 0x588b83de
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8321: mov edx, dword ptr [esi + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8327: mov eax, dword ptr [edx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xBA
        // 0x588B832A: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B8330: add eax, 0x48
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x48
        // 0x588B8333: mov eax, dword ptr [eax + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x24
        // 0x588B8336: push eax
        __asm _emit 0x50
        // 0x588B8337: call 0x58778b20
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0x07
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588B833C: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x588B833E: movzx ecx, word ptr [ebx + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4B
        __asm _emit 0x04
        // 0x588B8342: and ecx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x588B8345: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x588B8347: push ecx
        __asm _emit 0x51
        // 0x588B8348: call dword ptr [0x5898c040]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588B834E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B8351: push eax
        __asm _emit 0x50
        // 0x588B8352: lea edx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588B8356: push edx
        __asm _emit 0x52
        // 0x588B8357: call dword ptr [0x5898c194]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588B835D: movzx eax, word ptr [ebx + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x43
        __asm _emit 0x0E
        // 0x588B8361: shr eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x588B8364: and eax, 0xff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8369: push eax
        __asm _emit 0x50
        // 0x588B836A: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588B836E: push 0x589a0984
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588B8373: push ecx
        __asm _emit 0x51
        // 0x588B8374: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588B837A: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8380: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588B8383: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588B8388: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x588B838A: lea edx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588B838E: push edx
        __asm _emit 0x52
        // 0x588B838F: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B8394: mov eax, dword ptr [esi + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B839A: mov eax, dword ptr [eax + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xB8
        // 0x588B839D: mov ecx, dword ptr [eax + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x48
        // 0x588B83A0: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588B83A5: shr ecx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x0A
        // 0x588B83A8: push ecx
        __asm _emit 0x51
        // 0x588B83A9: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B83AF: add eax, 0x54
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x54
        // 0x588B83B2: push eax
        __asm _emit 0x50
        // 0x588B83B3: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B83B8: mov ecx, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B83BE: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588B83C3: push edi
        __asm _emit 0x57
        // 0x588B83C4: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588B83C8: push edx
        __asm _emit 0x52
        // 0x588B83C9: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B83CE: movzx eax, word ptr [esi + 0x180]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B83D5: inc edi
        __asm _emit 0x47
        // 0x588B83D6: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588B83D8: jl 0x588b8321
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x43
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B83DE: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588B83E0: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B83E2: mov dword ptr [esi + 0x1d0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xD0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B83E8: cmp cx, word ptr [esi + 0x180]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B83EF: jae 0x588b8487
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B83F5: jmp 0x588b8400
        __asm _emit 0xEB
        __asm _emit 0x09
    }
}

// Ghidra body range 0x588B8400..0x588B84A3; 163 mapped bytes.
extern "C" __declspec(naked) void FUN_588b81f0_segment_01() {
    __asm {
        // 0x588B8400: mov edx, dword ptr [esi + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8406: mov eax, dword ptr [edx + ebx*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x9A
        // 0x588B8409: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B840F: add eax, 0x48
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x48
        // 0x588B8412: mov eax, dword ptr [eax + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x24
        // 0x588B8415: push eax
        __asm _emit 0x50
        // 0x588B8416: call 0x58778b20
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x07
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588B841B: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B8421: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x588B8424: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588B8426: je 0x588b8477
        __asm _emit 0x74
        __asm _emit 0x4F
        // 0x588B8428: movzx edi, word ptr [eax + 0x35e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xB8
        __asm _emit 0x5E
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B842F: nop
        __asm _emit 0x90
        // 0x588B8430: mov edx, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8436: cmp word ptr [edx + 0x35e], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xBA
        __asm _emit 0x5E
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B843D: jne 0x588b844a
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x588B843F: mov dl, byte ptr [edx + 4]
        __asm _emit 0x8A
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x588B8442: xor dl, byte ptr [eax + 4]
        __asm _emit 0x32
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588B8445: test dl, 0x1f
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x1F
        // 0x588B8448: je 0x588b8456
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x588B844A: mov ecx, dword ptr [ecx + 0xce4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xE4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8450: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588B8452: jne 0x588b8430
        __asm _emit 0x75
        __asm _emit 0xDC
        // 0x588B8454: jmp 0x588b8477
        __asm _emit 0xEB
        __asm _emit 0x21
        // 0x588B8456: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588B8458: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588B845A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588B845C: push 0x2be
        __asm _emit 0x68
        __asm _emit 0xBE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8461: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0x36
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588B8466: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B8468: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0xC8
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588B846D: mov dword ptr [esi + 0x1d0], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8477: movzx eax, word ptr [esi + 0x180]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B847E: inc ebx
        __asm _emit 0x43
        // 0x588B847F: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x588B8481: jl 0x588b8400
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x79
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B8487: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B8489: call 0x588b6050
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0xDB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B848E: mov ecx, dword ptr [esp + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B8495: pop edi
        __asm _emit 0x5F
        // 0x588B8496: pop esi
        __asm _emit 0x5E
        // 0x588B8497: pop ebx
        __asm _emit 0x5B
        // 0x588B8498: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588B849A: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x47
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B849F: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x588B84A1: pop ebp
        __asm _emit 0x5D
        // 0x588B84A2: ret
        __asm _emit 0xC3
    }
}
