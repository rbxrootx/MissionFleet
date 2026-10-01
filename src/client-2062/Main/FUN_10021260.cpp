// Reconstructed from FUN_10021260 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.
extern "C" void FUN_10018840();
extern "C" void FUN_100fed50();

extern "C" __declspec(naked) void FUN_10021260() {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 1ch]
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esi + 68h]
        call FUN_10018840
        mov eax, dword ptr [esi + 68h]
        lea ecx, [esp + 10h]
        push ecx
        push edi
        mov ebx, dword ptr [eax + 50h]
        mov ebp, dword ptr [ebx]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push edi
        mov ecx, ebx
        call dword ptr [ebp + 4]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + 68h]
        cdq
        sub eax, edx
        mov edx, dword ptr [esi + 4]
        sar eax, 1
        sub edx, eax
        add edx, 0c8h
        push edx
        call FUN_100fed50
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax + 4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
    }
}
