// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00489AF6 .. +0x8D bytes.
extern "C" __declspec(naked) void FUN_00489af6_00489AF6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov eax, 0cccccccch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 18h], 1020304h
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 114h]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 29: je 0x489b73
        __asm _emit 0x74
        __asm _emit 0x29
        push 0
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CA D6 FF FF: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 58h]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB D1: jmp 0x489b44
        __asm _emit 0xeb
        __asm _emit 0xd1
        add esp, 1ch
        cmp ebp, esp
        ; Exact mapped bytes E8 63 EC 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
