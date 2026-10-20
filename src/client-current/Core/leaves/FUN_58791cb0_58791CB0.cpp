// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58791CB0 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_58791cb0_58791CB0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AD 01 00 00: call 0x58791e70
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x58791ccc
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 16: jmp 0x58791ce2
        __asm _emit 0xeb
        __asm _emit 0x16
        mov edx, dword ptr [ebp + 8]
        sub edx, 1
        imul eax, edx, 18h
        mov ecx, dword ptr [ebp - 4]
        lea ecx, [ecx + eax + 4]
        ; Exact mapped bytes E8 9F FF FF FF: call 0x58791c80
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
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
