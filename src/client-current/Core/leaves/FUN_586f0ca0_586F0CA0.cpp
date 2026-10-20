// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586F0CA0 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_586f0ca0_586F0CA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 30h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 70h]
        ; Exact mapped bytes E8 F3 4A DA FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x4a
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 84 BB FA FF: call 0x5869c850
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 30h]
        ; Exact mapped bytes E8 79 C7 FA FF: call 0x5869d450
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xc7
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
