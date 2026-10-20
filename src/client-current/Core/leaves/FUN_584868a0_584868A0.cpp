// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584868A0 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_584868a0_584868A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 58894cb0h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 64h], 0
        ; Exact mapped bytes 74 4A: je 0x58486905
        __asm _emit 0x74
        __asm _emit 0x4a
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 64h], 0
        ; Exact mapped bytes 74 37: je 0x584868fb
        __asm _emit 0x74
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 17: je 0x584868ea
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 F4: call dword ptr [ebp - 0xc]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf4
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 07: jmp 0x584868f1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 64h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 64h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E3 EF 32 00: call 0x587b58f0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xef
        __asm _emit 0x32
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
