// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F22F7 .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_004f22f7_004F22F7() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A9 50 FE FF: call 0x4d73bf
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x50
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4f2321
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 37: jmp 0x4f2358
        __asm _emit 0xeb
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 24h], 0
        ; Exact mapped bytes 74 2C: je 0x4f2356
        __asm _emit 0x74
        __asm _emit 0x2c
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 24h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4f2356
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x4f2358
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
