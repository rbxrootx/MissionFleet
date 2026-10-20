// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B0AC0 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_584b0ac0_584B0AC0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0D: je 0x584b0ada
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 94h], 40000000h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8E EC FF FF: call 0x584af770
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 28: jne 0x584b0b12
        __asm _emit 0x75
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 98h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 94h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 28h]
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
