// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5881B500 .. +0x11F bytes.
// Source symbol alias: FUN_5881b500.
extern "C" __declspec(naked) void FUN_5881b500() {
    __asm {
        // 0x5881B500: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5881B502: push 0x589834de
        __asm _emit 0x68
        __asm _emit 0xDE
        __asm _emit 0x34
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5881B507: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881B50D: push eax
        __asm _emit 0x50
        // 0x5881B50E: push ecx
        __asm _emit 0x51
        // 0x5881B50F: push ebp
        __asm _emit 0x55
        // 0x5881B510: push esi
        __asm _emit 0x56
        // 0x5881B511: push edi
        __asm _emit 0x57
        // 0x5881B512: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5881B517: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5881B519: push eax
        __asm _emit 0x50
        // 0x5881B51A: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5881B51E: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881B524: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5881B526: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5881B52A: mov edi, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5881B52E: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5881B532: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5881B536: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5881B538: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5881B53A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5881B53C: push edi
        __asm _emit 0x57
        // 0x5881B53D: push ebp
        __asm _emit 0x55
        // 0x5881B53E: push eax
        __asm _emit 0x50
        // 0x5881B53F: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0x7C
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881B544: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5881B54A: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5881B54F: mov dword ptr [esi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x50
        // 0x5881B552: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x5881B555: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881B55C: mov dword ptr [esi + 0x5c], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x5C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881B563: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x5881B565: mov dword ptr [esp + 0x20], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881B56D: mov dword ptr [esi], 0x5899d8f4
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xF4
        __asm _emit 0xD8
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5881B573: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0x16
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5881B578: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881B57B: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5881B57F: mov byte ptr [esp + 0x1c], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x01
        // 0x5881B584: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5881B586: je 0x5881b59b
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x5881B588: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5881B58C: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5881B58E: push edi
        __asm _emit 0x57
        // 0x5881B58F: push ebp
        __asm _emit 0x55
        // 0x5881B590: push ecx
        __asm _emit 0x51
        // 0x5881B591: push esi
        __asm _emit 0x56
        // 0x5881B592: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881B594: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0x94
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5881B599: jmp 0x5881b59d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881B59B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5881B59D: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5881B5A2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881B5A4: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5881B5A9: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5881B5AC: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0x77
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881B5B1: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5881B5B4: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881B5B9: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5881B5BD: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5881B5C0: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881B5C5: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5881B5C9: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x5881B5CB: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0x16
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5881B5D0: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881B5D3: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5881B5D7: mov byte ptr [esp + 0x1c], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x02
        // 0x5881B5DC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5881B5DE: je 0x5881b5f3
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x5881B5E0: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5881B5E4: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5881B5E6: push edi
        __asm _emit 0x57
        // 0x5881B5E7: push ebp
        __asm _emit 0x55
        // 0x5881B5E8: push edx
        __asm _emit 0x52
        // 0x5881B5E9: push esi
        __asm _emit 0x56
        // 0x5881B5EA: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881B5EC: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x94
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5881B5F1: jmp 0x5881b5f5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881B5F3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5881B5F5: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x5881B5F8: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881B5FD: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5881B601: mov dword ptr [esi + 0x68], 1
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881B608: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5881B60A: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5881B60E: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881B615: pop ecx
        __asm _emit 0x59
        // 0x5881B616: pop edi
        __asm _emit 0x5F
        // 0x5881B617: pop esi
        __asm _emit 0x5E
        // 0x5881B618: pop ebp
        __asm _emit 0x5D
        // 0x5881B619: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5881B61C: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
