// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00467FB0 .. +0x4B bytes.
extern "C" __declspec(naked) void __CrtIsValidPointer_00467FB0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 33: je 0x467fed
        __asm _emit 0x74
        __asm _emit 0x33
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 94 B9 68 00: call dword ptr [0x68b994]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x467fed
        __asm _emit 0x75
        __asm _emit 0x21
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 12: je 0x467fe4
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 10 B8 68 00: call dword ptr [0x68b810]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x467fed
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x467ff4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
