// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58889600 .. +0x3E bytes.
// Source symbol alias: FUN_58889600.
extern "C" __declspec(naked) void FUN_58889600() {
    __asm {
        // 0x58889600: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58889604: mov eax, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x6C
        // 0x58889607: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58889609: jne 0x5888961f
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x5888960B: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x58889610: mov ecx, dword ptr [ecx + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x7C
        // 0x58889613: mov eax, 0xfffe
        __asm _emit 0xB8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58889618: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5888961C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5888961F: push esi
        __asm _emit 0x56
        // 0x58889620: mov esi, 0xfffe
        __asm _emit 0xBE
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58889625: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        // 0x58889629: mov eax, dword ptr [ecx + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x7C
        // 0x5888962C: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x58889631: mov ecx, dword ptr [ecx + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x7C
        // 0x58889634: pop esi
        __asm _emit 0x5E
        // 0x58889635: mov dword ptr [esp + 4], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58889639: jmp 0x58731ce0
        __asm _emit 0xE9
        __asm _emit 0xA2
        __asm _emit 0x86
        __asm _emit 0xEA
        __asm _emit 0xFF
    }
}
