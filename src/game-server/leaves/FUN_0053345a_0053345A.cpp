// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053345A .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_0053345a_0053345A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        push 1
        push 0ch
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 D4 C9 F9 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xc9
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x53349a
        __asm _emit 0x75
        __asm _emit 0x14
        push 18eh
        push 5820dch
        ; Exact mapped bytes E8 6B 15 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53349a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x533475
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C1 9F FB FF: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x9f
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        or edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
