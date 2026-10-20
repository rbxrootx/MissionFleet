// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048709D .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_0048709d_0048709D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 48h], 0
        ; Exact mapped bytes 74 45: je 0x4870fa
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes 74 39: je 0x4870fa
        __asm _emit 0x74
        __asm _emit 0x39
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ach], 0
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 54 29 5E 00: call dword ptr [0x5e2954]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 FA 16 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x16
        __asm _emit 0x02
        __asm _emit 0x00
        push 20h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 48h]
        ; Exact mapped bytes E8 44 4A 00 00: call 0x48bb3e
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 DB 16 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x16
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
