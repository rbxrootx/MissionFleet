// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00424740 .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_00424740_00424740() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 48h]
        mov ecx, 12h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 634394h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 74 1F: je 0x42478e
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 28 7D 0A 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x7d
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10h], 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        ; Exact mapped bytes E8 53 81 0A 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x81
        __asm _emit 0x0a
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 48h
        cmp ebp, esp
        ; Exact mapped bytes E8 4A 06 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x06
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
