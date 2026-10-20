// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888B640 .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_5888b640() {
    __asm {
        push ecx
        push esi
        push 5899fc30h
        lea eax, [esp + 8]
        push 5899fc24h
        push eax
        mov esi, ecx
        ; Exact mapped bytes E8 F2 17 0F 00: call 0x5897ce4a
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x17
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 3B: jne 0x5888b69a
        __asm _emit 0x75
        __asm _emit 0x3b
        push edi
        add esi, 8ch
        lea edi, [eax + 5]
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 8]
        mov edx, dword ptr [esi]
        push ecx
        push 1
        push 3ch
        push edx
        ; Exact mapped bytes E8 39 19 0F 00: call 0x5897cfba
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x19
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 10h
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 E4: jne 0x5888b670
        __asm _emit 0x75
        __asm _emit 0xe4
        mov eax, dword ptr [esp + 8]
        push eax
        ; Exact mapped bytes E8 A8 17 0F 00: call 0x5897ce3e
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x17
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        pop edi
        pop esi
        pop ecx
        ret
    }
}
