// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00421EE4 .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_00421ee4_00421EE4() {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov eax, dword ptr [edi + 4]
        test eax, eax
        ; Exact mapped bytes 74 4A: je 0x421f3b
        __asm _emit 0x74
        __asm _emit 0x4a
        cmp byte ptr [eax + 8], 0
        lea edx, [eax + 8]
        ; Exact mapped bytes 74 41: je 0x421f3b
        __asm _emit 0x74
        __asm _emit 0x41
        mov esi, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + 4]
        cmp eax, ecx
        ; Exact mapped bytes 74 10: je 0x421f15
        __asm _emit 0x74
        __asm _emit 0x10
        add ecx, 8
        push ecx
        push edx
        ; Exact mapped bytes E8 71 07 00 00: call 0x422680
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        test eax, eax
        pop ecx
        ; Exact mapped bytes 75 22: jne 0x421f37
        __asm _emit 0x75
        __asm _emit 0x22
        test byte ptr [esi], 2
        ; Exact mapped bytes 74 05: je 0x421f1f
        __asm _emit 0x74
        __asm _emit 0x05
        test byte ptr [edi], 8
        ; Exact mapped bytes 74 18: je 0x421f37
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [esp + 14h]
        mov eax, dword ptr [eax]
        test al, 1
        ; Exact mapped bytes 74 05: je 0x421f2e
        __asm _emit 0x74
        __asm _emit 0x05
        test byte ptr [edi], 1
        ; Exact mapped bytes 74 09: je 0x421f37
        __asm _emit 0x74
        __asm _emit 0x09
        test al, 2
        ; Exact mapped bytes 74 09: je 0x421f3b
        __asm _emit 0x74
        __asm _emit 0x09
        test byte ptr [edi], 2
        ; Exact mapped bytes 75 04: jne 0x421f3b
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 03: jmp 0x421f3e
        __asm _emit 0xeb
        __asm _emit 0x03
        push 1
        pop eax
        pop edi
        pop esi
        ret
    }
}
