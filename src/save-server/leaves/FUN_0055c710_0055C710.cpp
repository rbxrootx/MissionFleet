// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055C710 .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_0055c710_0055C710() {
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 0ch], 110h
        ; Exact mapped bytes 75 17: jne 0x55c733
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 EF 10 F7 FF: call 0x4cd820
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x10
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 36: jmp 0x55c769
        __asm _emit 0xeb
        __asm _emit 0x36
        cmp dword ptr [ebp + 0ch], 111h
        ; Exact mapped bytes 75 2B: jne 0x55c767
        __asm _emit 0x75
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 0ffffh
        cmp ecx, 63h
        ; Exact mapped bytes 75 1D: jne 0x55c767
        __asm _emit 0x75
        __asm _emit 0x1d
        push 0
        push 0e146h
        push 111h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x55c769
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
