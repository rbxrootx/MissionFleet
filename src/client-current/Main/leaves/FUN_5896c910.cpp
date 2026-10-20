// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5896C910 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5896c910() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 589a2e60h
        ; Exact mapped bytes E8 B2 C2 F9 FF: call 0x58908bd0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xc2
        __asm _emit 0xf9
        __asm _emit 0xff
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x5896c92e
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 17 03 01 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
