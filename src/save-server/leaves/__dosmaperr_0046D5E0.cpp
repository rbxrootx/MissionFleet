// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046D5E0 .. +0x91 bytes.
extern "C" __declspec(naked) void __dosmaperr_0046D5E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes E8 A7 00 00 00: call 0x46d690
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x46d600
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2dh
        ; Exact mapped bytes 73 24: jae 0x46d62a
        __asm _emit 0x73
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax*8 + 67dc78h]
        ; Exact mapped bytes 75 13: jne 0x46d628
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes E8 66 00 00 00: call 0x46d680
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx*8 + 67dc7ch]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 45: jmp 0x46d66d
        __asm _emit 0xeb
        __asm _emit 0x45
        ; Exact mapped bytes EB CD: jmp 0x46d5f7
        __asm _emit 0xeb
        __asm _emit 0xcd
        cmp dword ptr [ebp + 8], 13h
        ; Exact mapped bytes 72 13: jb 0x46d643
        __asm _emit 0x72
        __asm _emit 0x13
        cmp dword ptr [ebp + 8], 24h
        ; Exact mapped bytes 77 0D: ja 0x46d643
        __asm _emit 0x77
        __asm _emit 0x0d
        ; Exact mapped bytes E8 45 00 00 00: call 0x46d680
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 0dh
        ; Exact mapped bytes EB 2A: jmp 0x46d66d
        __asm _emit 0xeb
        __asm _emit 0x2a
        cmp dword ptr [ebp + 8], 0bch
        ; Exact mapped bytes 72 16: jb 0x46d662
        __asm _emit 0x72
        __asm _emit 0x16
        cmp dword ptr [ebp + 8], 0cah
        ; Exact mapped bytes 77 0D: ja 0x46d662
        __asm _emit 0x77
        __asm _emit 0x0d
        ; Exact mapped bytes E8 26 00 00 00: call 0x46d680
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 8
        ; Exact mapped bytes EB 0B: jmp 0x46d66d
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes E8 19 00 00 00: call 0x46d680
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 16h
        mov esp, ebp
        pop ebp
        ret
    }
}
