// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586B86A0 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_586b86a0_586B86A0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        push edi
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 22h
        ; Exact mapped bytes E8 CF F2 DC FF: call 0x58487980
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xf2
        __asm _emit 0xdc
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 F0 EB DC FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xeb
        __asm _emit 0xdc
        __asm _emit 0xff
        add esp, 4
        mov ecx, 8
        mov esi, eax
        mov edi, dword ptr [ebp - 4]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 66 A5: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xa5
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
