// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x588612D8 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_588612d8() {
    __asm {
        // 0x588612D8: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588612DA: push ebp
        __asm _emit 0x55
        // 0x588612DB: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x588612DD: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x588612E0: cmp eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x588612E3: ja 0x58861305
        __asm _emit 0x77
        __asm _emit 0x20
        // 0x588612E5: movzx eax, byte ptr [eax + 0x58861320]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x80
        __asm _emit 0x20
        __asm _emit 0x13
        __asm _emit 0x86
        __asm _emit 0x58
        // 0x588612EC: jmp dword ptr [eax*4 + 0x5886130c]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x0C
        __asm _emit 0x13
        __asm _emit 0x86
        __asm _emit 0x58
        // 0x588612F3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588612F5: inc eax
        __asm _emit 0x40
        // 0x588612F6: pop ebp
        __asm _emit 0x5D
        // 0x588612F7: ret
        __asm _emit 0xC3
        // 0x588612F8: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x588612FA: pop eax
        __asm _emit 0x58
        // 0x588612FB: pop ebp
        __asm _emit 0x5D
        // 0x588612FC: ret
        __asm _emit 0xC3
        // 0x588612FD: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x588612FF: jmp 0x588612fa
        __asm _emit 0xEB
        __asm _emit 0xF9
        // 0x58861301: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x58861303: jmp 0x588612fa
        __asm _emit 0xEB
        __asm _emit 0xF5
        // 0x58861305: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58861307: pop ebp
        __asm _emit 0x5D
        // 0x58861308: ret
        __asm _emit 0xC3
    }
}
