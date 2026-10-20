// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A94A0 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_584a94a0_584A94A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 37 00 00 00: call 0x584a94f0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E6 01 00 00: call 0x584a96b0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x584a94d6
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 0A: jmp 0x584a94e0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 22 9D FF FF: call 0x584a3200
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
