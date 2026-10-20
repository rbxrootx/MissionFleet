// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10011850 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_10011850_10011850() {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 58h]
        mov edi, dword ptr [eax + 6ch]
        mov ebx, dword ptr [eax + 50h]
        lea eax, [esp + 10h]
        mov ebp, dword ptr [ebx]
        push eax
        push edi
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push edi
        mov ecx, ebx
        ; Exact mapped bytes FF 55 04: call dword ptr [ebp + 4]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x04
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + 50h]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        sub ecx, 0ah
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 C0 D4 0E 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xd4
        __asm _emit 0x0e
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret
    }
}
