// Reconstructed from FUN_10032360 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.
extern "C" void InitializeCommon();

extern "C" __declspec(naked) void InitializeFrameControl() {
    __asm {
        mov eax, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 0ch]
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        mov ecx, dword ptr [esp + 18h]
        push eax
        mov eax, dword ptr [esp + 10h]
        push edi
        push edi
        push ecx
        push edx
        push eax
        mov ecx, esi
        call InitializeCommon
        mov eax, dword ptr [esp + 10h]
        ; Exact immediate encoding: mov dword ptr [esi], 101751f8h
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0xf8
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        cmp eax, edi
        mov dword ptr [esi + 50h], edi
        mov dword ptr [esi + 54h], eax
        ; Exact immediate encoding: je short L_100323C1
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [eax + 18h]
        push ebx
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [eax + 1ch]
        lea ecx, [eax + 20h]
        mov dword ptr [esi + 10h], edx
        lea edx, [esi + 14h]
        mov ebx, dword ptr [ecx]
        mov dword ptr [edx], ebx
        mov ebx, dword ptr [ecx + 4]
        mov dword ptr [edx + 4], ebx
        mov ebx, dword ptr [ecx + 8]
        mov dword ptr [edx + 8], ebx
        pop ebx
        mov ecx, dword ptr [ecx + 0ch]
        mov dword ptr [edx + 0ch], ecx
L_100323C1:
        cmp eax, edi
        ; Exact immediate encoding: mov dword ptr [esi], 101757cch
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0xcc
        __asm _emit 0x57
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact immediate encoding: je short L_100323D3
        __asm _emit 0x74
        __asm _emit 0x08
        xor ecx, ecx
        mov cx, word ptr [eax + 0ch]
        ; Exact immediate encoding: jmp short L_100323D5
        __asm _emit 0xeb
        __asm _emit 0x02
L_100323D3:
        xor ecx, ecx
L_100323D5:
        dec ecx
        mov dword ptr [esi + 50h], edi
        mov dword ptr [esi + 5ch], edi
        mov dword ptr [esi + 64h], edi
        mov dword ptr [esi + 68h], edi
        mov dword ptr [esi + 60h], ecx
        ; Exact immediate encoding: mov dword ptr [esi + 58h], 1
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        pop edi
        pop esi
        ret 14h
    }
}
