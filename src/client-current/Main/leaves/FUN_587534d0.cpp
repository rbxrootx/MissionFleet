// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587534D0 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_587534d0() {
    __asm {
        sub esp, 8
        mov edx, dword ptr [esp + 14h]
        push ebx
        mov ebx, dword ptr [esp + 10h]
        push esi
        mov esi, dword ptr [esp + 18h]
        push edi
        mov edi, dword ptr [esp + 20h]
        xor al, al
        mov byte ptr [esp + 10h], al
        mov ecx, dword ptr [esp + 10h]
        mov byte ptr [esp + 0ch], al
        mov eax, dword ptr [esp + 0ch]
        push eax
        push ecx
        push edx
        push edi
        push esi
        push ebx
        ; Exact mapped bytes E8 1D FE FF FF: call 0x58753320
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        sub esi, ebx
        mov eax, 7f807f81h
        imul esi
        sar edx, 0ah
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov ecx, eax
        imul ecx, ecx, 808h
        add esp, 18h
        mov eax, edi
        pop edi
        pop esi
        sub eax, ecx
        pop ebx
        add esp, 8
        ret
    }
}
