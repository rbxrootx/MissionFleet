// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587030D0 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_587030d0_587030D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0a4h]
        cmp ecx, 0ch
        ; Exact mapped bytes 75 3E: jne 0x58703126
        __asm _emit 0x75
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CD 38 D8 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x38
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 190h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 190h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 19ch]
        mov dword ptr [ebp - 8], edx
        push 0fh
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 6B 2E D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x2e
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
