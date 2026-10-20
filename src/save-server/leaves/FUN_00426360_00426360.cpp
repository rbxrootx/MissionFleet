// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00426360 .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_00426360_00426360() {
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
        mov dword ptr [eax], 6343b0h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 74 1F: je 0x4263ae
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 08 61 0A 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x61
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ch], 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        ; Exact mapped bytes E8 33 65 0A 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x65
        __asm _emit 0x0a
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 48h
        cmp ebp, esp
        ; Exact mapped bytes E8 2A EA 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xea
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
