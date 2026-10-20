// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58753700 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_58753700() {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 10h]
        push esi
        mov esi, dword ptr [esp + 10h]
        push edi
        mov edi, dword ptr [esp + 10h]
        mov byte ptr [esp + 8], 0
        mov eax, dword ptr [esp + 8]
        push eax
        mov eax, dword ptr [esp + 1ch]
        push edx
        add ecx, 8
        push ecx
        push eax
        push esi
        push edi
        ; Exact mapped bytes E8 36 FF FF FF: call 0x58753660
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esi + esi*8]
        add esp, 18h
        lea eax, [edi + ecx*8]
        pop edi
        pop esi
        pop ecx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
