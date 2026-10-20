// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044E0EE .. +0x8B bytes.
extern "C" __declspec(naked) void FUN_0044e0ee_0044E0EE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x44e117
        __asm _emit 0x75
        __asm _emit 0x14
        push 119h
        push 67702ch
        ; Exact mapped bytes E8 2E AC 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xac
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44e117
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x44e0fa
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 20h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 1ch]
        add ecx, 20h
        ; Exact mapped bytes E8 9C 9A 07 00: call 0x4c7bce
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x9a
        __asm _emit 0x07
        __asm _emit 0x00
        push 0
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 90 A8 00 00 00: call dword ptr [eax + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 12: je 0x44e166
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 07: jmp 0x44e16d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
