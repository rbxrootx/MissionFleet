// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B9820 .. +0x45 bytes.
// Source symbol alias: FUN_587b9820.
extern "C" __declspec(naked) void FUN_587b9820() {
    __asm {
        // 0x587B9820: push ebx
        __asm _emit 0x53
        // 0x587B9821: mov ebx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587B9825: push esi
        __asm _emit 0x56
        // 0x587B9826: push edi
        __asm _emit 0x57
        // 0x587B9827: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B982B: push edi
        __asm _emit 0x57
        // 0x587B982C: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587B982E: mov ecx, dword ptr [0x58a24578]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x78
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B9834: push ebx
        __asm _emit 0x53
        // 0x587B9835: call 0x587a2d40
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0x95
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587B983A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B983C: je 0x587b9846
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587B983E: pop edi
        __asm _emit 0x5F
        // 0x587B983F: pop esi
        __asm _emit 0x5E
        // 0x587B9840: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587B9842: pop ebx
        __asm _emit 0x5B
        // 0x587B9843: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587B9846: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9848: push edi
        __asm _emit 0x57
        // 0x587B9849: push ebx
        __asm _emit 0x53
        // 0x587B984A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B984C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B984E: push 0x8001aa01
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0xAA
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B9853: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B9855: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0x74
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B985A: pop edi
        __asm _emit 0x5F
        // 0x587B985B: pop esi
        __asm _emit 0x5E
        // 0x587B985C: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B9861: pop ebx
        __asm _emit 0x5B
        // 0x587B9862: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
