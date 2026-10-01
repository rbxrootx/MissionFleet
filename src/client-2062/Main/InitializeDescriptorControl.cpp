// Reconstructed from FUN_10022f80 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.
extern "C" void InitializeControlBase();

extern "C" __declspec(naked) void InitializeDescriptorControl() {
    __asm {
        mov eax, dword ptr [esp + 18h]
        push ebx
        mov ebx, dword ptr [esp + 18h]
        push ebp
        mov ebp, dword ptr [esp + 18h]
        push esi
        push edi
        mov edi, dword ptr [esp + 1ch]
        mov esi, ecx
        push eax
        mov ecx, dword ptr [esp + 1ch]
        push ebx
        push ebp
        push edi
        push ecx
        mov ecx, esi
        call InitializeControlBase
        mov dx, word ptr [esp + 28h]
        xor eax, eax
        cmp edi, eax
        ; Exact immediate encoding: mov dword ptr [esi], 101755fch
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0xfc
        __asm _emit 0x55
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [esi + 4], ebp
        mov dword ptr [esi + 8], ebx
        mov word ptr [esi + 26h], dx
        mov dword ptr [esi + 58h], ebp
        mov dword ptr [esi + 5ch], ebx
        ; Exact immediate encoding: mov dword ptr [esi + 84h], 100h
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 80h], eax
        mov dword ptr [esi + 50h], eax
        mov dword ptr [esi + 54h], edi
        ; Exact immediate encoding: je short L_10023006
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [edi + 18h]
        add edi, 20h
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [edi - 4]
        mov dword ptr [esi + 10h], edx
        mov edx, dword ptr [edi]
        lea ecx, [esi + 14h]
        mov dword ptr [esi + 14h], edx
        mov edx, dword ptr [edi + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [edi + 8]
        mov dword ptr [ecx + 8], edx
        mov edx, dword ptr [edi + 0ch]
        mov dword ptr [ecx + 0ch], edx
L_10023006:
        or byte ptr [esi + 24h], 1
        mov dword ptr [esi + 8ch], eax
        mov dword ptr [esi + 60h], eax
        mov eax, dword ptr [esp + 14h]
        mov dword ptr [esi + 88h], eax
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 18h
    }
}
