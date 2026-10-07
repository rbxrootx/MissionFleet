// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 45 bytes in 1 exact ranges.
// Source symbol alias: FUN_588e6650.

// Ghidra body range 0x588E6650..0x588E667D; 45 mapped bytes.
extern "C" __declspec(naked) void FUN_588e6650_segment_00() {
    __asm {
        // 0x588E6650: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588E6654: mov dl, byte ptr [esp + 8]
        __asm _emit 0x8A
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588E6658: add byte ptr [eax + ecx + 0xa28], dl
        __asm _emit 0x00
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x28
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E665F: mov edx, dword ptr [0x589c3e94]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x3E
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588E6665: push esi
        __asm _emit 0x56
        // 0x588E6666: movzx esi, byte ptr [eax + ecx + 0xa28]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xB4
        __asm _emit 0x08
        __asm _emit 0x28
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E666E: cmp esi, edx
        __asm _emit 0x3B
        __asm _emit 0xF2
        // 0x588E6670: pop esi
        __asm _emit 0x5E
        // 0x588E6671: jle 0x588e667a
        __asm _emit 0x7E
        __asm _emit 0x07
        // 0x588E6673: mov byte ptr [eax + ecx + 0xa28], dl
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x28
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E667A: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
