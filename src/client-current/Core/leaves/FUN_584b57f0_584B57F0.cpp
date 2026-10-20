// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B57F0 .. +0x47 bytes.
extern "C" __declspec(naked) void FUN_584b57f0_584B57F0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BD 03 00 00: call 0x584b5bc0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 91 03 00 00: call 0x584b5ba0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CD FC FF FF: call 0x584b54f0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xfc
        __asm _emit 0xff
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
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
