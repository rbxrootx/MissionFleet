// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588F43C0 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_588f43c0() {
    __asm {
        test byte ptr [esp + 4], 1
        push esi
        mov esi, ecx
        mov eax, 589a1998h
        mov dword ptr [esi], 589a19a0h
        mov dword ptr [esi + 20h], eax
        mov dword ptr [esi + 10h], eax
        ; Exact mapped bytes 74 09: je 0x588f43e4
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 61 88 08 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x88
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
