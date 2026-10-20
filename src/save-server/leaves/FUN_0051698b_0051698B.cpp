// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051698B .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_0051698b_0051698B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 66 84 FB FF: call 0x4cee04
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0xff
        push 674d5ch
        mov ecx, dword ptr [ebp - 4]
        add ecx, 84h
        push ecx
        push 674d4ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 91 1E 01 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 C5 60 FB FF: call 0x4cca85
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x60
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 84 1E 01 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        push 674d74h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        push eax
        push 674d60h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6B 1E 01 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 7C 20 01 00: call 0x528a63
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 5D 1E 01 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
