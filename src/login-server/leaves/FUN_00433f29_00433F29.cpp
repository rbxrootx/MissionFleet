// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00433F29 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_00433f29_00433F29() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push esi
        mov esi, ecx
        push edi
        ; Exact mapped bytes 8B 3D 30 C0 43 00: mov edi, dword ptr [0x43c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        cmp eax, dword ptr [esi + 8]
        ; Exact mapped bytes 74 0D: je 0x433f4d
        __asm _emit 0x74
        __asm _emit 0x0d
        lea ecx, [ebp - 8]
        push ecx
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov esi, dword ptr [esi + 8]
        test esi, esi
        ; Exact mapped bytes 74 0D: je 0x433f61
        __asm _emit 0x74
        __asm _emit 0x0d
        lea eax, [ebp - 8]
        push eax
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 8]
        pop edi
        pop esi
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], ecx
        leave
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
