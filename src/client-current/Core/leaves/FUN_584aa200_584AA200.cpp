// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AA200 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_584aa200_584AA200() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea edx, [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 51 05 00 00: call 0x584aa770
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 3C 95 FF FF: call 0x584a3770
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 DD 83 FF FF: call 0x584a2620
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
