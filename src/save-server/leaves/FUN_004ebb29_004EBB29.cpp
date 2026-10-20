// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EBB29 .. +0xB9 bytes.
extern "C" __declspec(naked) void FUN_004ebb29_004EBB29() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58cf7dh
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
        ; Exact mapped bytes 7C 15: jl 0x4ebb5f
        __asm _emit 0x7c
        __asm _emit 0x15
        cmp dword ptr [ebp + 8], 8
        ; Exact mapped bytes 73 0F: jae 0x4ebb5f
        __asm _emit 0x73
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax*4 + 6374f8h]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 07: jmp 0x4ebb66
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 637518h
        mov edx, dword ptr [ebp - 10h]
        push edx
        push 6742e8h
        ; Exact mapped bytes E8 A1 4A FB FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x4a
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        push 5eh
        push 674260h
        push 14h
        ; Exact mapped bytes E8 7A 05 FE FF: call 0x4cc0ff
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x05
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 15: je 0x4ebbaa
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 D3 8D 03 00: call 0x524978
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x8d
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x4ebbb1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 18h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 14h], eax
        push 64dda0h
        lea ecx, [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 4E 9D F7 FF: call 0x465920
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x9d
        __asm _emit 0xf7
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
