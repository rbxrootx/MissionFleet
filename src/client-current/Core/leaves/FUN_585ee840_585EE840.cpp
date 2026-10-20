// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585EE840 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_585ee840_585EE840() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D9 96 E9 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x96
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 0ch], edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A9 96 E9 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x96
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 79 AB FC FF: call 0x585b93f0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xab
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
