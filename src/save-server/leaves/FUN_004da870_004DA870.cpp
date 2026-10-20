// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DA870 .. +0xD3 bytes.
extern "C" __declspec(naked) void FUN_004da870_004DA870() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58cfb6h
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
        sub esp, 18h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7C 15: jl 0x4da8a6
        __asm _emit 0x7c
        __asm _emit 0x15
        cmp dword ptr [ebp + 8], 0fh
        ; Exact mapped bytes 73 0F: jae 0x4da8a6
        __asm _emit 0x73
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax*4 + 637538h]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 07: jmp 0x4da8ad
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 637574h
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 09: jne 0x4da8bc
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 20h], 674408h
        ; Exact mapped bytes EB 06: jmp 0x4da8c2
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        push 674410h
        ; Exact mapped bytes E8 3D 5D FC FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x5d
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 10h
        push 18h
        ; Exact mapped bytes E8 AE 17 FF FF: call 0x4cc090
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x17
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 19: je 0x4da90b
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 3B A1 04 00: call 0x524a41
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x4da912
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 14h], ecx
        push 64de40h
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 ED AF F8 FF: call 0x465920
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xaf
        __asm _emit 0xf8
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
