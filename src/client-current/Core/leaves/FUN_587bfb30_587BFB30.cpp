// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BFB30 .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_587bfb30_587BFB30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0f0h], 0
        ; Exact mapped bytes 74 25: je 0x587bfb6a
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f0h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 F1 14 07 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x14
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0f0h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0a8h]
        imul ecx, dword ptr [eax + 0ach]
        mov eax, ecx
        mov edx, 14h
        mul edx
        mov ecx, 0ffffffffh
        cmovb eax, ecx
        push eax
        ; Exact mapped bytes E8 AE 14 07 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x14
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 0f0h], eax
        mov esp, ebp
        pop ebp
        ret
    }
}
