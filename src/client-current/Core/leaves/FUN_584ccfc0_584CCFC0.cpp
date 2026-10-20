// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CCFC0 .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_584ccfc0_584CCFC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588986a4h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 64h], 0
        ; Exact mapped bytes 74 37: je 0x584cd012
        __asm _emit 0x74
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 17: je 0x584cd001
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0ch], eax
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 F4: call dword ptr [ebp - 0xc]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf4
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 07: jmp 0x584cd008
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 64h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D6 88 2E 00: call 0x587b58f0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x88
        __asm _emit 0x2e
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
