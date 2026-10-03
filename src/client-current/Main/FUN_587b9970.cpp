// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B9970 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_587b9970() {
    __asm {
        // 0x587B9970: push esi
        __asm _emit 0x56
        // 0x587B9971: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587B9973: cmp dword ptr [esi + 0x134], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B997A: jne 0x587b99a3
        __asm _emit 0x75
        __asm _emit 0x27
        // 0x587B997C: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587B9980: movzx ecx, word ptr [esp + 8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587B9985: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9987: push 0x16
        __asm _emit 0x6A
        __asm _emit 0x16
        // 0x587B9989: push eax
        __asm _emit 0x50
        // 0x587B998A: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x587B998C: push ecx
        __asm _emit 0x51
        // 0x587B998D: push 0x80011005
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B9992: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B9994: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0x72
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B9999: mov dword ptr [esi + 0x134], 0x100
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B99A3: pop esi
        __asm _emit 0x5E
        // 0x587B99A4: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
