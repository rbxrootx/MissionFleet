// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58641DF0 .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_58641df0_58641DF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 33: je 0x58641e32
        __asm _emit 0x74
        __asm _emit 0x33
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 2dh
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 89 42 E4 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0xe4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 0ch
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 71 42 E4 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x42
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2D: jmp 0x58641e5f
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 10h], ecx
        push 588af1fah
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 58 42 E4 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x42
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 14h], eax
        push 588af1fbh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 42 42 E4 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x42
        __asm _emit 0xe4
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
