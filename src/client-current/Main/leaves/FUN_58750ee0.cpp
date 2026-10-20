// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58750EE0 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_58750ee0() {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 58h]
        mov ebx, dword ptr [eax + 50h]
        mov ebp, dword ptr [eax + 6ch]
        push edi
        mov edi, dword ptr [ebx]
        lea eax, [esp + 10h]
        push eax
        push ebp
        add edi, 4
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov edx, dword ptr [edi]
        push eax
        push ebp
        mov ecx, ebx
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + 50h]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        sub ecx, 0ah
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 BC 23 1B 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x23
        __asm _emit 0x1b
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret
    }
}
