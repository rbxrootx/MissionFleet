// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AB1F0 .. +0x4E bytes.
extern "C" __declspec(naked) void FUN_584ab1f0_584AB1F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 36: je 0x584ab238
        __asm _emit 0x74
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 10h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 F4: call dword ptr [ebp - 0xc]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf4
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
