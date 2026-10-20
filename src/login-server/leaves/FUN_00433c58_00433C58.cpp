// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00433C58 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_00433c58_00433C58() {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov esi, ecx
        test edi, edi
        ; Exact mapped bytes 75 04: jne 0x433c68
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 22: jmp 0x433c8a
        __asm _emit 0xeb
        __asm _emit 0x22
        push 1
        ; Exact mapped bytes E8 62 FF FF FF: call 0x433bd1
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        lea ecx, [eax + 4]
        mov dword ptr [esi + 4], edi
        ; Exact mapped bytes E8 53 9B FF FF: call 0x42d7ce
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], esi
        mov eax, dword ptr [esi]
        push dword ptr [esi + 4]
        mov ecx, esi
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        push 1
        pop eax
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
