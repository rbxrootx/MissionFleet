// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 313 bytes in 1 exact ranges.
// Source symbol alias: FUN_588fa7f0.

// Ghidra body range 0x588FA7F0..0x588FA929; 313 mapped bytes.
extern "C" __declspec(naked) void FUN_588fa7f0_segment_00() {
    __asm {
        // 0x588FA7F0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588FA7F2: push 0x5898a23b
        __asm _emit 0x68
        __asm _emit 0x3B
        __asm _emit 0xA2
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588FA7F7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA7FD: push eax
        __asm _emit 0x50
        // 0x588FA7FE: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x588FA801: push ebx
        __asm _emit 0x53
        // 0x588FA802: push esi
        __asm _emit 0x56
        // 0x588FA803: push edi
        __asm _emit 0x57
        // 0x588FA804: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588FA809: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588FA80B: push eax
        __asm _emit 0x50
        // 0x588FA80C: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588FA810: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA816: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588FA818: mov edi, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588FA81C: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FA822: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x588FA825: mov ebx, dword ptr [edi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5F
        __asm _emit 0x14
        // 0x588FA828: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x588FA82B: add ebx, eax
        __asm _emit 0x03
        __asm _emit 0xD8
        // 0x588FA82D: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588FA82F: jl 0x588fa914
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xDF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA835: mov ebx, dword ptr [edi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x5F
        __asm _emit 0x1C
        // 0x588FA838: add ebx, eax
        __asm _emit 0x03
        __asm _emit 0xD8
        // 0x588FA83A: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588FA83C: jge 0x588fa914
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xD2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA842: mov ecx, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x08
        // 0x588FA845: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x588FA848: mov edx, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x588FA84B: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x588FA84D: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x588FA84F: jl 0x588fa914
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA855: mov edx, dword ptr [edi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x588FA858: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x588FA85A: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x588FA85C: jge 0x588fa914
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xB2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA862: mov ecx, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x08
        // 0x588FA865: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x588FA868: mov edx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA86E: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588FA872: add ecx, 0xffffff7e
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FA878: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588FA87C: push ecx
        __asm _emit 0x51
        // 0x588FA87D: add eax, 0xd5
        __asm _emit 0x05
        __asm _emit 0xD5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA882: mov dword ptr [edx + 0x148], 1
        __asm _emit 0xC7
        __asm _emit 0x82
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA88C: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA892: push eax
        __asm _emit 0x50
        // 0x588FA893: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA898: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588FA89B: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588FA89D: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588FA89F: je 0x588fa8ac
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588FA8A1: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588FA8A3: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588FA8A5: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588FA8A7: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588FA8A9: mov dword ptr [esi + 0x74], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x74
        // 0x588FA8AC: push 0xf0c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA8B1: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0x23
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FA8B6: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FA8B9: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588FA8BD: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588FA8C1: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FA8C3: je 0x588fa8d8
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x588FA8C5: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588FA8C9: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588FA8CD: push ecx
        __asm _emit 0x51
        // 0x588FA8CE: push edx
        __asm _emit 0x52
        // 0x588FA8CF: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FA8D1: call 0x588e9f60
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0xF6
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x588FA8D6: jmp 0x588fa8da
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FA8D8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FA8DA: mov dword ptr [esp + 0x20], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FA8E2: mov dword ptr [esi + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x588FA8E5: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FA8E7: je 0x588fa914
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x588FA8E9: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA8EF: push ebx
        __asm _emit 0x53
        // 0x588FA8F0: push ebx
        __asm _emit 0x53
        // 0x588FA8F1: push eax
        __asm _emit 0x50
        // 0x588FA8F2: call 0x588bedc0
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0x44
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x588FA8F7: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA8FD: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588FA8FF: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588FA902: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588FA904: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588FA908: push eax
        __asm _emit 0x50
        // 0x588FA909: add edi, 0x60
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x60
        // 0x588FA90C: push edi
        __asm _emit 0x57
        // 0x588FA90D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FA90F: call 0x588f9ea0
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FA914: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588FA918: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA91F: pop ecx
        __asm _emit 0x59
        // 0x588FA920: pop edi
        __asm _emit 0x5F
        // 0x588FA921: pop esi
        __asm _emit 0x5E
        // 0x588FA922: pop ebx
        __asm _emit 0x5B
        // 0x588FA923: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x588FA926: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
