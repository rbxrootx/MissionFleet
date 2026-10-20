// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58786B60 .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_58786b60_58786B60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ech]
        mov dword ptr [ebp - 0ch], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 76 DE CF FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xde
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 64h
        push ecx
        push 77359400h
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E7 2A E0 FF: call 0x58589690
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x2a
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ech]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D9 2D E0 FF: call 0x585899a0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x2d
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ech]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 0ech]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
