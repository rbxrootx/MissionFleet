// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588DA450 .. +0x4E bytes.
// Source symbol alias: FUN_588da450.
extern "C" __declspec(naked) void FUN_588da450() {
    __asm {
        // 0x588DA450: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588DA454: mov dword ptr [ecx + 0x608c], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x8C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA45A: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588DA45F: jne 0x588da474
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x588DA461: cmp dword ptr [ecx + 0x6090], 0x40000
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588DA46B: jne 0x588da49b
        __asm _emit 0x75
        __asm _emit 0x2E
        // 0x588DA46D: mov eax, 0x32ff32
        __asm _emit 0xB8
        __asm _emit 0x32
        __asm _emit 0xFF
        __asm _emit 0x32
        __asm _emit 0x00
        // 0x588DA472: jmp 0x588da489
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x588DA474: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DA476: jne 0x588da49b
        __asm _emit 0x75
        __asm _emit 0x23
        // 0x588DA478: cmp dword ptr [ecx + 0x6090], 0x40000
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588DA482: jne 0x588da49b
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x588DA484: mov eax, 0xffffff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588DA489: mov edx, dword ptr [ecx + 0x12e8]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA48F: mov dword ptr [edx + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x60
        // 0x588DA492: mov ecx, dword ptr [ecx + 0x12ec]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xEC
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA498: mov dword ptr [ecx + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x60
        // 0x588DA49B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
