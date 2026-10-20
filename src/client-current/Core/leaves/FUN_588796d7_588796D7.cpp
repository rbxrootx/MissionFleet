// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588796D7 .. +0x92 bytes.
extern "C" __declspec(naked) void FUN_588796d7_588796D7() {
    __asm {
        push 10h
        push 588ed730h
        ; Exact mapped bytes E8 7D 90 FB FF: call 0x58832760
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x90
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 2000h
        ; Exact mapped bytes 72 21: jb 0x5887970d
        __asm _emit 0x72
        __asm _emit 0x21
        ; Exact mapped bytes E8 7E 8D FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x8d
        __asm _emit 0xfe
        __asm _emit 0xff
        push 9
        pop esi
        mov dword ptr [eax], esi
        ; Exact mapped bytes E8 B0 78 FD FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x78
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, esi
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebx
        leave
        ret
        xor esi, esi
        mov dword ptr [ebp - 1ch], esi
        push 7
        ; Exact mapped bytes E8 03 A5 FE FF: call 0x58863c1c
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xa5
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        mov dword ptr [ebp - 4], esi
        mov edi, esi
        ; Exact mapped bytes A1 B0 9B 96 58: mov eax, dword ptr [0x58969bb0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x9b
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 20h], edi
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 7C 1F: jl 0x5887974b
        __asm _emit 0x7c
        __asm _emit 0x1f
        cmp dword ptr [edi*4 + 589699b0h], esi
        ; Exact mapped bytes 75 31: jne 0x58879766
        __asm _emit 0x75
        __asm _emit 0x31
        ; Exact mapped bytes E8 ED FE FF FF: call 0x58879627
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [edi*4 + 589699b0h], eax
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x58879759
        __asm _emit 0x75
        __asm _emit 0x14
        push 0ch
        pop esi
        mov dword ptr [ebp - 1ch], esi
        mov dword ptr [ebp - 4], 0fffffffeh
        ; Exact mapped bytes E8 15 00 00 00: call 0x5887976c
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB A2: jmp 0x588796fb
        __asm _emit 0xeb
        __asm _emit 0xa2
        ; Exact mapped bytes A1 B0 9B 96 58: mov eax, dword ptr [0x58969bb0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x9b
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, 40h
        ; Exact mapped bytes A3 B0 9B 96 58: mov dword ptr [0x58969bb0], eax
        __asm _emit 0xa3
        __asm _emit 0xb0
        __asm _emit 0x9b
        __asm _emit 0x96
        __asm _emit 0x58
        inc edi
        ; Exact mapped bytes EB BB: jmp 0x58879724
        __asm _emit 0xeb
        __asm _emit 0xbb
    }
}
