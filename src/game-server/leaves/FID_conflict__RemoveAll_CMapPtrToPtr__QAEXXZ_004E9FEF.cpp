// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E9FEF .. +0x6E bytes.
extern "C" __declspec(naked) void FID_conflict__RemoveAll_CMapPtrToPtr__QAEXXZ_004E9FEF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 50h
        push 5c5d28h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 58 11 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 74 1F: je 0x4ea030
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 E6 33 00 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 4], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0ch], 0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 10h], 0
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 14h]
        ; Exact mapped bytes E8 6E DC FF FF: call 0x4e7cbd
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 14h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
