// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C6C30 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_587c6c30() {
    __asm {
        push esi
        push edi
        lea edi, [ecx - 58h]
        lea esi, [edi + 58h]
        mov ecx, esi
        ; Exact mapped bytes E8 D1 FD FF FF: call 0x587c6a10
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push esi
        mov dword ptr [esi], 5899ad8ch
        ; Exact mapped bytes E8 CB AE 1A 00: call 0x58971b16
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xae
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        test byte ptr [esp + 0ch], 1
        ; Exact mapped bytes 74 09: je 0x587c6c5e
        __asm _emit 0x74
        __asm _emit 0x09
        push edi
        ; Exact mapped bytes E8 E7 5F 1B 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x5f
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov eax, edi
        pop edi
        pop esi
    }
}
