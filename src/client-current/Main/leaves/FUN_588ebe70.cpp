// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588EBE70 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_588ebe70() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 4]
        mov dword ptr [esi], 589a1540h
        test ecx, ecx
        ; Exact mapped bytes 74 0F: je 0x588ebe8f
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 4], 0
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x588ebe9f
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 A6 0D 09 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x0d
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
