// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005061A9 .. +0xB9 bytes.
extern "C" __declspec(naked) void FUN_005061a9_005061A9() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57d44dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 14h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7C 15: jl 0x5061df
        __asm _emit 0x7c
        __asm _emit 0x15
        cmp dword ptr [ebp + 8], 8
        ; Exact mapped bytes 73 0F: jae 0x5061df
        __asm _emit 0x73
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax*4 + 584978h]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 07: jmp 0x5061e6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 584998h
        mov edx, dword ptr [ebp - 10h]
        push edx
        push 5c7818h
        ; Exact mapped bytes E8 21 9A FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x9a
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        push 5eh
        push 5c7790h
        push 14h
        ; Exact mapped bytes E8 5A 6E FE FF: call 0x4ed05f
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x6e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 15: je 0x50622a
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 53 A9 02 00: call 0x530b78
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xa9
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x506231
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 18h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 14h], eax
        push 598a58h
        lea ecx, [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 CE A0 FA FF: call 0x4b0320
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xa0
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
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
