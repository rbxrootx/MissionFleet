// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056A3E6 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_0056a3e6_0056A3E6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 1bch
        push 5d053ch
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 5E 0D F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x0d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A7 76 FD FF: call 0x541ab1
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x76
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 04: jne 0x56a417
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 1E: jmp 0x56a435
        __asm _emit 0xeb
        __asm _emit 0x1e
        push 2
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 50 6C: call dword ptr [eax + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x6c
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5C 6B FC FF: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x6b
        __asm _emit 0xfc
        __asm _emit 0xff
        neg eax
        sbb eax, eax
        inc eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
