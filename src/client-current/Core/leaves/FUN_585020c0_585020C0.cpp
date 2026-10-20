// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585020C0 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_585020c0_585020C0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 18 86 FA FF: call 0x584aa6f0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x86
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp + 14h]
        push edx
        ; Exact mapped bytes E8 01 86 FA FF: call 0x584aa6f0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x86
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp + 10h]
        sub eax, dword ptr [ebp + 14h]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp + 14h]
        add edx, dword ptr [ebp + 1ch]
        push edx
        ; Exact mapped bytes E8 DE 85 FA FF: call 0x584aa6f0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x85
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
