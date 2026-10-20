// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053AFE0 .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_0053afe0_0053AFE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 2E: je 0x53b020
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 25: je 0x53b020
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 1C 28 5E 00: call dword ptr [0x5e281c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x53b020
        __asm _emit 0x75
        __asm _emit 0x14
        push 3f3h
        push 581fc0h
        ; Exact mapped bytes E8 E5 99 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53b020
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C6: jne 0x53afec
        __asm _emit 0x75
        __asm _emit 0xc6
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 09: jne 0x53b035
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x53b03e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
