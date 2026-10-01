// Reconstructed from FUN_10018600 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.
extern "C" void AllocateObjectThunk();
extern "C" void InitializeCommon();

extern "C" __declspec(naked) void InitializeTextControl() {
    __asm {
        push -1
        push 1016d568h
        ; Exact immediate encoding: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact immediate encoding: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov eax, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 24h]
        push ebx
        push esi
        mov esi, ecx
        push 40h
        mov ecx, dword ptr [esp + 34h]
        push eax
        mov eax, dword ptr [esp + 30h]
        push ecx
        mov ecx, dword ptr [esp + 28h]
        push edx
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 20h], esi
        call InitializeCommon
        mov edx, dword ptr [esp + 24h]
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [esp + 3ch]
        mov dword ptr [esi + 50h], edx
        mov edx, dword ptr [esp + 40h]
        xor ebx, ebx
        mov dword ptr [esi + 60h], eax
        mov dword ptr [esi + 64h], ecx
        mov dword ptr [esi + 68h], edx
        ; Exact immediate encoding: mov dword ptr [esi + 58h], 8
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: mov dword ptr [esi + 5ch], 10h
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x5c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 54h], ebx
        push 80h
        mov dword ptr [esp + 18h], ebx
        ; Exact immediate encoding: mov dword ptr [esi], 10175338h
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x38
        __asm _emit 0x53
        __asm _emit 0x17
        __asm _emit 0x10
        call AllocateObjectThunk
        mov dword ptr [esi + 6ch], eax
        mov byte ptr [eax], bl
        mov ax, word ptr [esi + 24h]
        mov ecx, dword ptr [esp + 10h]
        and eax, 0e5fbh
        add esp, 4
        or ah, 5
        ; Exact immediate encoding: mov dword ptr [esi], 10175530h
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x30
        __asm _emit 0x55
        __asm _emit 0x17
        __asm _emit 0x10
        mov word ptr [esi + 24h], ax
        mov dword ptr [esi + 78h], ebx
        mov dword ptr [esi + 7ch], ebx
        mov dword ptr [esi + 70h], ebx
        mov dword ptr [esi + 74h], ebx
        mov byte ptr [esi + 80h], bl
        mov dword ptr [esi + 180h], ebx
        mov eax, esi
        pop esi
        pop ebx
        ; Exact immediate encoding: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ret 28h
    }
}
