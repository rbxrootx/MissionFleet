// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004130E0 .. +0x86 bytes.
extern "C" __declspec(naked) void FUN_004130e0_004130E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 58h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 58h]
        mov ecx, 16h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 633214h
        mov dword ptr [ebp - 0ch], 633284h
        push 0
        push 0
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 B2 E7 FE FF: call 0x4018ca
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov cl, byte ptr [eax]
        push ecx
        lea edx, [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 9A E3 FE FF: call 0x4014c9
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xe3
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 14h
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 75 0B: jne 0x413148
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax - 4]
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes EB 08: jmp 0x413150
        __asm _emit 0xeb
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        pop edi
        pop esi
        pop ebx
        add esp, 58h
        cmp ebp, esp
        ; Exact mapped bytes E8 90 1C 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x1c
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
