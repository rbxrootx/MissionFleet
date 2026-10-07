// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58789680 .. +0x53 bytes.
// Source symbol alias: FUN_58789680.
extern "C" __declspec(naked) void FUN_58789680() {
    __asm {
        // 0x58789680: push esi
        __asm _emit 0x56
        // 0x58789681: mov esi, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x08
        // 0x58789684: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58789686: je 0x587896cf
        __asm _emit 0x74
        __asm _emit 0x47
        // 0x58789688: push edi
        __asm _emit 0x57
        // 0x58789689: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5878968D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58789690: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58789693: mov eax, dword ptr [eax + 0x1c4]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789699: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5878969B: jne 0x587896ac
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x5878969D: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587896A0: mov dword ptr [ecx + 0xa8], 0x100
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587896AA: jmp 0x587896be
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x587896AC: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x587896AF: jne 0x587896c8
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x587896B1: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587896B4: mov dword ptr [ecx + 0xa8], 0x60
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587896BE: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587896C1: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587896C3: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587896C6: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587896C8: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587896CA: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587896CC: jne 0x58789690
        __asm _emit 0x75
        __asm _emit 0xC2
        // 0x587896CE: pop edi
        __asm _emit 0x5F
        // 0x587896CF: pop esi
        __asm _emit 0x5E
        // 0x587896D0: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
