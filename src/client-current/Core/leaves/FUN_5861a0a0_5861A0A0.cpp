// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5861A0A0 .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_5861a0a0_5861A0A0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 75 4D: jne 0x5861a0fa
        __asm _emit 0x75
        __asm _emit 0x4d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 74h]
        ; Exact mapped bytes 75 29: jne 0x5861a0e1
        __asm _emit 0x75
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 00 CF EB FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xcf
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 99 CF EB FF: call 0x584d7070
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xcf
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F2 08 03 00: call 0x5864a9d0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 19: jmp 0x5861a0fa
        __asm _emit 0xeb
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 78h]
        ; Exact mapped bytes 75 0E: jne 0x5861a0fa
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
