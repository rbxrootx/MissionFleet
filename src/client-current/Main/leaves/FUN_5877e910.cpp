// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877E910 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_5877e910() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 4]
        mov dword ptr [esi], 589969e4h
        test ecx, ecx
        ; Exact mapped bytes 74 0F: je 0x5877e92f
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
        ; Exact mapped bytes 74 09: je 0x5877e93f
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 06 E3 1F 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xe3
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
