// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897A990 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_5897a990() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        mov edx, dword ptr [esp + 10h]
        push edi
        mov eax, dword ptr [esi + 1ch]
        mov ecx, dword ptr [esi + 0dch]
        mov edi, dword ptr [esp + 18h]
        push eax
        push ecx
        push 0
        push edi
        push 0
        push edx
        ; Exact mapped bytes E8 8C C2 FF FF: call 0x58976c40
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 28h]
        mov edx, dword ptr [esi + 1ch]
        mov ecx, dword ptr [eax + 1ch]
        mov eax, dword ptr [esi + 0dch]
        shl ecx, 3
        push ecx
        push edx
        push eax
        push edi
        ; Exact mapped bytes E8 60 FF FF FF: call 0x5897a930
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 28h
        pop edi
        pop esi
        ret
    }
}
