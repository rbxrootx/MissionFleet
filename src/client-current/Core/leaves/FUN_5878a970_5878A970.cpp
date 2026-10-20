// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878A970 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_5878a970_5878A970() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 31 03 00 00: call 0x5878acb0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 69 04 00 00: call 0x5878adf0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 98h]
        ; Exact mapped bytes E8 FA AE D0 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xae
        __asm _emit 0xd0
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 22: jne 0x5878a9c0
        __asm _emit 0x75
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 98h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 98h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 91 02 00 00: call 0x5878ac50
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 9ch]
        ; Exact mapped bytes E8 C2 AE D0 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xae
        __asm _emit 0xd0
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 75 1A: jne 0x5878a9f0
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 9ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 9ch]
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
