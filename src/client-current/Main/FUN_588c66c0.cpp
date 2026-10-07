// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588C66C0 .. +0x169 bytes.
// Source symbol alias: FUN_588c66c0.
extern "C" __declspec(naked) void FUN_588c66c0() {
    __asm {
        // 0x588C66C0: mov al, byte ptr [esp + 0xc]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588C66C4: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588C66C8: push esi
        __asm _emit 0x56
        // 0x588C66C9: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588C66CB: mov cl, byte ptr [esp + 0x14]
        __asm _emit 0x8A
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588C66CF: mov byte ptr [esi + 0x57], cl
        __asm _emit 0x88
        __asm _emit 0x4E
        __asm _emit 0x57
        // 0x588C66D2: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588C66D6: push edi
        __asm _emit 0x57
        // 0x588C66D7: mov dword ptr [esi + 0x90], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C66DD: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588C66E1: mov byte ptr [esi + 0x56], al
        __asm _emit 0x88
        __asm _emit 0x46
        __asm _emit 0x56
        // 0x588C66E4: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588C66E8: push ecx
        __asm _emit 0x51
        // 0x588C66E9: mov dword ptr [esi + 0x8c], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C66EF: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588C66F3: mov dword ptr [esi + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C66F9: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588C66FD: lea edi, [esi + 0x58]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x58
        // 0x588C6700: push 0x18
        __asm _emit 0x6A
        __asm _emit 0x18
        // 0x588C6702: push edi
        __asm _emit 0x57
        // 0x588C6703: mov dword ptr [esi + 0x50], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588C670A: mov dword ptr [esi + 0x94], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6710: mov dword ptr [esi + 0x98], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6716: call 0x5874ba60
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x53
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588C671B: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6721: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588C6724: push edi
        __asm _emit 0x57
        // 0x588C6725: call 0x5875f360
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0x8C
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588C672A: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588C672E: push edx
        __asm _emit 0x52
        // 0x588C672F: lea edi, [esi + 0x70]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x70
        // 0x588C6732: push 0x18
        __asm _emit 0x6A
        __asm _emit 0x18
        // 0x588C6734: push edi
        __asm _emit 0x57
        // 0x588C6735: call 0x5874ba60
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0x53
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588C673A: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6740: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588C6743: push edi
        __asm _emit 0x57
        // 0x588C6744: call 0x5875f360
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x8C
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588C6749: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x588C674C: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6752: add eax, 0xb4
        __asm _emit 0x05
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6757: push eax
        __asm _emit 0x50
        // 0x588C6758: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0xCB
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C675D: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588C6760: add ecx, 0x104
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6766: push ecx
        __asm _emit 0x51
        // 0x588C6767: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C676D: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0xCB
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C6772: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x588C6775: mov ecx, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C677B: add edx, 0x151
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6781: push edx
        __asm _emit 0x52
        // 0x588C6782: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0xCB
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C6787: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x588C678A: mov ecx, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6790: add eax, 0x19f
        __asm _emit 0x05
        __asm _emit 0x9F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6795: push eax
        __asm _emit 0x50
        // 0x588C6796: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0xCB
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C679B: movzx ecx, byte ptr [esi + 0x56]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x4E
        __asm _emit 0x56
        // 0x588C679F: mov edx, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C67A5: mov eax, dword ptr [edx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x6C
        // 0x588C67A8: push ecx
        __asm _emit 0x51
        // 0x588C67A9: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588C67AE: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C67B3: push eax
        __asm _emit 0x50
        // 0x588C67B4: call 0x5874ba60
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x52
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588C67B9: movzx ecx, byte ptr [esi + 0x57]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x4E
        __asm _emit 0x57
        // 0x588C67BD: mov edx, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C67C3: mov eax, dword ptr [edx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x6C
        // 0x588C67C6: push ecx
        __asm _emit 0x51
        // 0x588C67C7: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588C67CC: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C67D1: push eax
        __asm _emit 0x50
        // 0x588C67D2: call 0x5874ba60
        __asm _emit 0xE8
        __asm _emit 0x89
        __asm _emit 0x52
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588C67D7: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C67DD: mov edx, dword ptr [esi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C67E3: mov eax, dword ptr [edx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x6C
        // 0x588C67E6: push ecx
        __asm _emit 0x51
        // 0x588C67E7: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588C67EC: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C67F1: push eax
        __asm _emit 0x50
        // 0x588C67F2: call 0x5874ba60
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0x52
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588C67F7: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C67FD: mov edx, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6803: mov eax, dword ptr [edx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x6C
        // 0x588C6806: push ecx
        __asm _emit 0x51
        // 0x588C6807: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588C680C: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6811: push eax
        __asm _emit 0x50
        // 0x588C6812: call 0x5874ba60
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0x52
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588C6817: mov ecx, dword ptr [esp + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x70
        // 0x588C681B: add esp, 0x40
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x40
        // 0x588C681E: pop edi
        __asm _emit 0x5F
        // 0x588C681F: mov dword ptr [esi + 0xf4], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6825: pop esi
        __asm _emit 0x5E
        // 0x588C6826: ret 0x2c
        __asm _emit 0xC2
        __asm _emit 0x2C
        __asm _emit 0x00
    }
}
