// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C4CA0 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_587c4ca0() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push ebp
        mov ebp, dword ptr [esp + 1ch]
        push esi
        push edi
        mov edi, dword ptr [esp + 18h]
        mov esi, edi
        sub esi, ebx
        cmp ebp, esi
        ; Exact mapped bytes 73 05: jae 0x587c4cbd
        __asm _emit 0x73
        __asm _emit 0x05
        ; Exact mapped bytes E8 B5 7F 1B 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x7f
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [esp + 20h]
        push esi
        push ebx
        push ebp
        push eax
        ; Exact mapped bytes E8 90 7F 1B 00: call 0x5897cc5a
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x7f
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 10h
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
