// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A0791 .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_004a0791_004A0791() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 4F 45 08 00: call 0x524cf1
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x45
        __asm _emit 0x08
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 56: je 0x4a07fe
        __asm _emit 0x74
        __asm _emit 0x56
        mov eax, dword ptr [ebp + 0ch]
        shl eax, 1
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 03 BE 02 00: call 0x4cc5b9
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        push 0
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + ecx + 1]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 0
        push 0
        ; Exact mapped bytes FF 15 1C BA 68 00: call dword ptr [0x68ba1c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7C 08: jl 0x4a07eb
        __asm _emit 0x7c
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 07: jmp 0x4a07f2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0ffffffffh
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D5 C9 02 00: call 0x4cd1d3
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xc9
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
