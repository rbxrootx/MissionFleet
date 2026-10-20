// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5881DA00 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5881da00() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0d8h]
        test ecx, ecx
        ; Exact mapped bytes 74 12: je 0x5881da1f
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0d8h], 0
        pop esi
        ret
    }
}
