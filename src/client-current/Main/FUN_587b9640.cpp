// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B9640 .. +0x4C bytes.
// Source symbol alias: FUN_587b9640.
extern "C" __declspec(naked) void FUN_587b9640() {
    __asm {
        // 0x587B9640: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587B9644: cmp eax, 0x40000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587B9649: jne 0x587b9668
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x587B964B: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587B964F: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587B9653: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9655: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9657: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9659: push eax
        __asm _emit 0x50
        // 0x587B965A: push edx
        __asm _emit 0x52
        // 0x587B965B: push 0x800100a1
        __asm _emit 0x68
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B9660: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x76
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B9665: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587B9668: cmp eax, 0x20000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587B966D: jne 0x587b9689
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x587B966F: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587B9673: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587B9677: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9679: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B967B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B967D: push eax
        __asm _emit 0x50
        // 0x587B967E: push edx
        __asm _emit 0x52
        // 0x587B967F: push 0x800100a2
        __asm _emit 0x68
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B9684: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x75
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B9689: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
