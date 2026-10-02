// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58860D5F .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_58860d5f() {
    __asm {
        // 0x58860D5F: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58860D61: push ebp
        __asm _emit 0x55
        // 0x58860D62: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58860D64: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x58860D67: cmp eax, dword ptr [ecx + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x10
        // 0x58860D6A: jne 0x58860d78
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x58860D6C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x58860D6F: cmp eax, dword ptr [ecx + 0x14]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x14
        // 0x58860D72: jne 0x58860d78
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58860D74: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x58860D76: jmp 0x58860d80
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x58860D78: mov eax, dword ptr [ecx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x18
        // 0x58860D7B: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860D7E: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58860D80: pop ebp
        __asm _emit 0x5D
        // 0x58860D81: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
