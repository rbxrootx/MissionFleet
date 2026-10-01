// Reconstructed from FUN_100e2800 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.
extern "C" void AllocateObjectThunk();

extern "C" __declspec(naked) void FUN_100e2800() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push ebx
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        mov ecx, dword ptr [esp + 10h]
        cmp eax, edi
        ; Exact instruction bytes: mov dword ptr [esi], 1017654ch
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x4c
        __asm _emit 0x65
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [esi + 4], ecx
        mov dword ptr [esi + 8], eax
        ; Exact instruction bytes: jne short L_100E2829
        __asm _emit 0x75
        __asm _emit 0x0a
        lea eax, [ecx*4 + 1000h]
        push eax
        ; Exact instruction bytes: jmp short L_100E2832
        __asm _emit 0xeb
        __asm _emit 0x09
L_100E2829:
        cmp eax, 1
        ; Exact instruction bytes: jne short L_100E283D
        __asm _emit 0x75
        __asm _emit 0x0f
        shl ecx, 2
        push ecx
L_100E2832:
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esi + 0ch], eax
L_100E283D:
        mov ebx, dword ptr [esi + 4]
        push 22bh
        ; Exact instruction bytes: mov dword ptr [esi + 94h], 1ch
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact instruction bytes: call dword ptr [10175140h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 4
        cmp ebx, edi
        ; Exact instruction bytes: jbe short L_100E2881
        __asm _emit 0x76
        __asm _emit 0x25
        push ebp
        ; Exact instruction bytes: mov ebp, dword ptr [10175120h]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
L_100E2863:
        call ebp
        mov edx, dword ptr [esi + 0ch]
        inc edi
        cmp edi, ebx
        mov dword ptr [edx + edi*4 - 4], eax
        ; Exact instruction bytes: jb short L_100E2863
        __asm _emit 0x72
        __asm _emit 0xf2
        pop ebp
        ; Exact instruction bytes: mov dword ptr [esi + 10h], 0
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        ret 8
L_100E2881:
        mov dword ptr [esi + 10h], edi
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        ret 8
    }
}
