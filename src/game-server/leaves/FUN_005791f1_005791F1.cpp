// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005791F1 .. +0x9E bytes.
extern "C" __declspec(naked) void FUN_005791f1_005791F1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x57921a
        __asm _emit 0x75
        __asm _emit 0x14
        push 174h
        push 5d1160h
        ; Exact mapped bytes E8 EB B7 FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xb7
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57921a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x5791fd
        __asm _emit 0x75
        __asm _emit 0xdd
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 0A C4 FB FF: call 0x535632
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xc4
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 75 23: jne 0x579254
        __asm _emit 0x75
        __asm _emit 0x23
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 90 20 5E 00: call dword ptr [0x5e2090]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 21: jmp 0x579275
        __asm _emit 0xeb
        __asm _emit 0x21
        lea ecx, [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 90 20 5E 00: call dword ptr [0x5e2090]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
