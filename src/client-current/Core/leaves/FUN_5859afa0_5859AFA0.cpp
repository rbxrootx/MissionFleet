// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5859AFA0 .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_5859afa0_5859AFA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a00h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ech]
        push eax
        movzx ecx, word ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a06h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 19 19 1A 00: call 0x5873c8f0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x19
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a00h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 0a00h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0adch]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 0adch]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
