// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00572DAA .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_00572daa_00572DAA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 572h
        push 5d0930h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 9A 83 F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        sub ecx, 3ch
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 98 00 00 00: call dword ptr [edx + 0x98]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
