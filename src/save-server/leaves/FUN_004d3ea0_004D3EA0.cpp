// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D3EA0 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_004d3ea0_004D3EA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        test eax, eax
        ; Exact mapped bytes 75 22: jne 0x4d3ed7
        __asm _emit 0x75
        __asm _emit 0x22
        ; Exact mapped bytes E8 BB C2 06 00: call 0x540175
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xc2
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0dch]
        and edx, 40000000h
        test edx, edx
        ; Exact mapped bytes 75 07: jne 0x4d3ed7
        __asm _emit 0x75
        __asm _emit 0x07
        push 1
        ; Exact mapped bytes E8 16 D0 FF FF: call 0x4d0eed
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
