// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B81A0 .. +0xE2 bytes.
// Source symbol alias: FUN_587b81a0.
extern "C" __declspec(naked) void FUN_587b81a0() {
    __asm {
        // 0x587B81A0: sub esp, 0x34
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x34
        // 0x587B81A3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587B81A8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587B81AA: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587B81AE: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587B81B2: push ebx
        __asm _emit 0x53
        // 0x587B81B3: mov ebx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587B81B7: push ebp
        __asm _emit 0x55
        // 0x587B81B8: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x587B81BA: add eax, -0x30
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xD0
        // 0x587B81BD: push eax
        __asm _emit 0x50
        // 0x587B81BE: lea ecx, [ebx + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x30
        // 0x587B81C1: push ecx
        __asm _emit 0x51
        // 0x587B81C2: mov ecx, dword ptr [0x58a24578]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x78
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B81C8: call 0x587a2d40
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0xAB
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587B81CD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B81CF: je 0x587b81e6
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x587B81D1: pop ebp
        __asm _emit 0x5D
        // 0x587B81D2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587B81D4: pop ebx
        __asm _emit 0x5B
        // 0x587B81D5: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587B81D9: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587B81DB: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0x49
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B81E0: add esp, 0x34
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x34
        // 0x587B81E3: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587B81E6: push esi
        __asm _emit 0x56
        // 0x587B81E7: push edi
        __asm _emit 0x57
        // 0x587B81E8: mov ecx, 0xc
        __asm _emit 0xB9
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B81ED: mov esi, ebx
        __asm _emit 0x8B
        __asm _emit 0xF3
        // 0x587B81EF: lea edi, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B81F3: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x587B81F5: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587B81F7: lea edi, [ebp + 0x130]
        __asm _emit 0x8D
        __asm _emit 0xBD
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B81FD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x587B8200: lea ecx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587B8204: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587B8206: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x587B8208: cmp dl, byte ptr [ecx]
        __asm _emit 0x3A
        __asm _emit 0x11
        // 0x587B820A: jne 0x587b8226
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x587B820C: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x587B820E: je 0x587b8222
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587B8210: mov dl, byte ptr [eax + 1]
        __asm _emit 0x8A
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x587B8213: cmp dl, byte ptr [ecx + 1]
        __asm _emit 0x3A
        __asm _emit 0x51
        __asm _emit 0x01
        // 0x587B8216: jne 0x587b8226
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x587B8218: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x587B821B: add ecx, 2
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x02
        // 0x587B821E: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x587B8220: jne 0x587b8206
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x587B8222: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587B8224: jmp 0x587b822b
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x587B8226: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x587B8228: sbb eax, -1
        __asm _emit 0x83
        __asm _emit 0xD8
        __asm _emit 0xFF
        // 0x587B822B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B822D: je 0x587b823a
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587B822F: inc esi
        __asm _emit 0x46
        // 0x587B8230: add edi, 0x18
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x18
        // 0x587B8233: cmp esi, 3
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x03
        // 0x587B8236: jl 0x587b8200
        __asm _emit 0x7C
        __asm _emit 0xC8
        // 0x587B8238: jmp 0x587b8268
        __asm _emit 0xEB
        __asm _emit 0x2E
        // 0x587B823A: mov edx, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x587B823E: push edx
        __asm _emit 0x52
        // 0x587B823F: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587B8241: call 0x587b7bd0
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B8246: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B8248: je 0x587b8268
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x587B824A: mov eax, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x587B824E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B8250: push eax
        __asm _emit 0x50
        // 0x587B8251: push ebx
        __asm _emit 0x53
        // 0x587B8252: push 0x50000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x587B8257: push 0x20000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587B825C: push 0x80020a00
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x0A
        __asm _emit 0x02
        __asm _emit 0x80
        // 0x587B8261: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587B8263: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0x8A
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B8268: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587B826C: pop edi
        __asm _emit 0x5F
        // 0x587B826D: pop esi
        __asm _emit 0x5E
        // 0x587B826E: pop ebp
        __asm _emit 0x5D
        // 0x587B826F: pop ebx
        __asm _emit 0x5B
        // 0x587B8270: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587B8272: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B8277: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0x49
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B827C: add esp, 0x34
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x34
        // 0x587B827F: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
