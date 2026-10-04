// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588EA850 .. +0x85 bytes.
// Source symbol alias: FUN_588ea850.
extern "C" __declspec(naked) void FUN_588ea850() {
    __asm {
        // 0x588EA850: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x588EA853: push ebx
        __asm _emit 0x53
        // 0x588EA854: push ebp
        __asm _emit 0x55
        // 0x588EA855: push esi
        __asm _emit 0x56
        // 0x588EA856: push edi
        __asm _emit 0x57
        // 0x588EA857: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x588EA859: mov eax, dword ptr [edi + 0x482c]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x2C
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA85F: lea eax, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x40
        // 0x588EA862: mov ebx, dword ptr [edi + eax*8 + 0x1830]
        __asm _emit 0x8B
        __asm _emit 0x9C
        __asm _emit 0xC7
        __asm _emit 0x30
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA869: cmp dword ptr [edi + eax*8 + 0x182c], ebx
        __asm _emit 0x39
        __asm _emit 0x9C
        __asm _emit 0xC7
        __asm _emit 0x2C
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA870: lea esi, [edi + eax*8 + 0x1820]
        __asm _emit 0x8D
        __asm _emit 0xB4
        __asm _emit 0xC7
        __asm _emit 0x20
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA877: jbe 0x588ea87e
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588EA879: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0x23
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EA87E: mov ebp, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x0C
        // 0x588EA881: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588EA883: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588EA887: cmp ebp, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x6E
        __asm _emit 0x10
        // 0x588EA88A: jbe 0x588ea891
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588EA88C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0x23
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EA891: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588EA895: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588EA897: push ebx
        __asm _emit 0x53
        // 0x588EA898: push edx
        __asm _emit 0x52
        // 0x588EA899: push ebp
        __asm _emit 0x55
        // 0x588EA89A: push eax
        __asm _emit 0x50
        // 0x588EA89B: lea eax, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588EA89F: push eax
        __asm _emit 0x50
        // 0x588EA8A0: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588EA8A2: call 0x587aedb0
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0x45
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588EA8A7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588EA8A9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588EA8AB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588EA8AD: push 0x12e
        __asm _emit 0x68
        __asm _emit 0x2E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA8B2: mov dword ptr [edi + 0x4828], 1
        __asm _emit 0xC7
        __asm _emit 0x87
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA8BC: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x12
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588EA8C1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588EA8C3: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0xA4
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588EA8C8: pop edi
        __asm _emit 0x5F
        // 0x588EA8C9: pop esi
        __asm _emit 0x5E
        // 0x588EA8CA: pop ebp
        __asm _emit 0x5D
        // 0x588EA8CB: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA8D0: pop ebx
        __asm _emit 0x5B
        // 0x588EA8D1: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588EA8D4: ret
        __asm _emit 0xC3
    }
}
