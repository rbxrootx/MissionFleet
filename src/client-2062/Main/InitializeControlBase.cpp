// Reconstructed from FUN_10047950 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.
extern "C" void InitializeCommon();

extern "C" __declspec(naked) void InitializeControlBase() {
    __asm {
        mov eax, dword ptr [esp + 14h]
        push ebx
        mov ebx, dword ptr [esp + 10h]
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 20h]
        xor ebp, ebp
        push eax
        mov esi, ecx
        mov ecx, dword ptr [esp + 18h]
        push ebp
        push ebp
        push edi
        push ebx
        push ecx
        mov ecx, esi
        call InitializeCommon
        mov eax, dword ptr [esp + 18h]
        ; Exact immediate encoding: mov dword ptr [esi], 101751f8h
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0xf8
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        cmp eax, ebp
        mov dword ptr [esi + 50h], ebp
        mov dword ptr [esi + 54h], eax
        ; Exact immediate encoding: je short L_100479B3
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [eax + 18h]
        mov dword ptr [esi + 0ch], edx
        mov ecx, dword ptr [eax + 1ch]
        lea edx, [eax + 20h]
        mov dword ptr [esi + 10h], ecx
        lea ecx, [esi + 14h]
        mov ebp, dword ptr [edx]
        mov dword ptr [ecx], ebp
        mov ebp, dword ptr [edx + 4]
        mov dword ptr [ecx + 4], ebp
        mov ebp, dword ptr [edx + 8]
        mov dword ptr [ecx + 8], ebp
        xor ebp, ebp
        mov edx, dword ptr [edx + 0ch]
        mov dword ptr [ecx + 0ch], edx
L_100479B3:
        mov cx, word ptr [esp + 24h]
        cmp eax, ebp
        ; Exact immediate encoding: mov dword ptr [esi], 10175a98h
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x98
        __asm _emit 0x5a
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [esi + 4], ebx
        mov dword ptr [esi + 8], edi
        mov word ptr [esi + 26h], cx
        mov dword ptr [esi + 58h], ebx
        mov dword ptr [esi + 5ch], edi
        mov dword ptr [esi + 50h], ebp
        mov dword ptr [esi + 54h], eax
        ; Exact immediate encoding: je short L_10047A01
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [esi + 0ch], edx
        mov ecx, dword ptr [eax - 4]
        mov dword ptr [esi + 10h], ecx
        mov ecx, dword ptr [eax]
        lea edx, [esi + 14h]
        mov dword ptr [esi + 14h], ecx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
L_10047A01:
        ; Exact immediate encoding: mov eax, 40000000h
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        mov dword ptr [esi + 60h], ebp
        mov dword ptr [esi + 6ch], eax
        mov dword ptr [esi + 7ch], eax
        mov dword ptr [esi + 70h], eax
        ; Exact immediate encoding: mov dword ptr [esi + 64h], 2
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 68h], ebp
        ; Exact immediate encoding: mov dword ptr [esi + 74h], 0ah
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x74
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: mov dword ptr [esi + 78h], 384h
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x78
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 14h
    }
}
