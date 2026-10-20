// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856DE90 .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_5856de90_5856DE90() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        add eax, 8
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 0ch
        push edx
        push 588a98c8h
        push 588a98d8h
        push 80000002h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F0 04 00 00: call 0x5856e3b0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 9
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 10h
        push edx
        push 588a9908h
        push 588a9918h
        push 80000002h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C4 04 00 00: call 0x5856e3b0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
