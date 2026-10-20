// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00516E39 .. +0x89 bytes.
extern "C" __declspec(naked) void FUN_00516e39_00516E39() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 28h
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 3ch
        push eax
        ; Exact mapped bytes E8 70 EA F4 FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xea
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3ch], 28h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 40h], 8
        mov ecx, dword ptr [ebp - 4]
        add ecx, 78h
        ; Exact mapped bytes E8 38 DF 00 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 50h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 58h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 80h], 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 84h], 0
        ; Exact mapped bytes E8 FD 7B FB FF: call 0x4cea9d
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x7b
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x516eb3
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 40h]
        or ch, 2
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 40h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 7ch], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
