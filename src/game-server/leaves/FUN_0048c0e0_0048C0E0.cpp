// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048C0E0 .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_0048c0e0_0048C0E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax], 581f60h
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 18h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 8], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        shl eax, 3
        push eax
        ; Exact mapped bytes E8 94 12 06 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x12
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 14h], edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9D FB FF FF: call 0x48bce0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 90 C6 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xc6
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
