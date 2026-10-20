// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58971410 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_58971410() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 589a2ecch
        ; Exact mapped bytes E8 B2 F7 FF FF: call 0x58970bd0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x5897142e
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 17 B8 00 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
