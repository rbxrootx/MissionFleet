// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F8D0E .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_004f8d0e_004F8D0E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E8 E4 C8 03 00: call 0x535600
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xc8
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 1aah
        push 5c5db4h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 2E 24 00 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 88h], 0
        push 0
        push 0
        push 36ah
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DD 2E 04 00: call 0x53bc2d
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x2e
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 74: call dword ptr [edx + 0x74]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x74
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
