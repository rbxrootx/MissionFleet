// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58834BC0 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_58834bc0() {
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
        ; Exact mapped bytes E8 E6 FE FF FF: call 0x58834ad0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, esi
        imul eax, eax, 54h
        add esp, 18h
        add eax, edi
        pop edi
        pop esi
        pop ecx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
