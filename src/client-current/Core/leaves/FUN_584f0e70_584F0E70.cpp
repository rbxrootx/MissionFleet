// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F0E70 .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_584f0e70_584F0E70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CF 03 00 00: call 0x584f1250
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A4 04 00 00: call 0x584f1330
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 4]
        shr eax, 1
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, eax
        cmp dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 76 05: jbe 0x584f0ea3
        __asm _emit 0x76
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes EB 1B: jmp 0x584f0ebe
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 4]
        shr edx, 1
        add edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 73 05: jae 0x584f0ebb
        __asm _emit 0x73
        __asm _emit 0x05
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 03: jmp 0x584f0ebe
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [ebp - 10h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
