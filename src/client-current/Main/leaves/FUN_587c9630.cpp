// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C9630 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_587c9630() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 1ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        lea eax, [esi + 4]
        push eax
        lea ecx, [esi + 64h]
        push ecx
        mov ecx, dword ptr [esi + 0ech]
        push 77359400h
        push esi
        ; Exact mapped bytes E8 BD F2 FF FF: call 0x587c8910
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 0f0h]
        mov ecx, dword ptr [esi + 0ech]
        push edx
        ; Exact mapped bytes E8 2B EB FF FF: call 0x587c8190
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0ech]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        pop esi
        ; Exact mapped bytes FF E2: jmp edx
        __asm _emit 0xff
        __asm _emit 0xe2
    }
}
