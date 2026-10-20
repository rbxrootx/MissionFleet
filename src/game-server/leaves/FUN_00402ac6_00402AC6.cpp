// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00402AC6 .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_00402ac6_00402AC6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 194h], 1
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0d7ch]
        mov ecx, dword ptr [edx + 20h]
        ; Exact mapped bytes E8 CE F5 05 00: call 0x4620de
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xf5
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x402b22
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0d74h]
        ; Exact mapped bytes E8 A2 6E 07 00: call 0x4799c4
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x6e
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, 1
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 AF 5C 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x5c
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
