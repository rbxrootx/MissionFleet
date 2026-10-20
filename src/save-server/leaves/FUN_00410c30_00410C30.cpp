// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00410C30 .. +0xA6 bytes.
extern "C" __declspec(naked) void FUN_00410c30_00410C30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 44h]
        mov ecx, 11h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 64: jne 0x410cb7
        __asm _emit 0x75
        __asm _emit 0x64
        push 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        ; Exact mapped bytes E8 CD 0D FF FF: call 0x401a2d
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x0d
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push 3e9h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 89 53 0C 00: call 0x4d5ff7
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x53
        __asm _emit 0x0c
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 5ch]
        ; Exact mapped bytes E8 6A 05 FF FF: call 0x4011e5
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x05
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push 3ebh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6E 53 0C 00: call 0x4d5ff7
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x53
        __asm _emit 0x0c
        __asm _emit 0x00
        push 1
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 5ch]
        ; Exact mapped bytes E8 97 0D FF FF: call 0x401a2d
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x0d
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        mov edi, edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        ; Exact mapped bytes E8 40 05 FF FF: call 0x4011e5
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x05
        __asm _emit 0xff
        __asm _emit 0xff
        sub esi, eax
        sbb edi, edx
        push esi
        push 3ech
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 40 53 0C 00: call 0x4d5ff7
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x53
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6A CA 11 00: call 0x52d72d
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xca
        __asm _emit 0x11
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 20 41 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x41
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
