// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EDCD0 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_584edcd0_584EDCD0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 D1 95 F9 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x95
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 4
        push eax
        push 128h
        ; Exact mapped bytes E8 93 9C F9 FF: call 0x58487980
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x9c
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 B4 95 F9 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x95
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 4
        mov ecx, 4ah
        mov esi, eax
        mov edi, dword ptr [ebp - 4]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
