// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00472DA0 .. +0x62 bytes.
extern "C" __declspec(naked) void ___sbh_heap_init_00472DA0() {
    __asm {
        push ebp
        mov ebp, esp
        push 140h
        push 0
        ; Exact mapped bytes A1 88 89 68 00: mov eax, dword ptr [0x688988]
        __asm _emit 0xa1
        __asm _emit 0x88
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 60 B8 68 00: call dword ptr [0x68b860]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 80 89 68 00: mov dword ptr [0x688980], eax
        __asm _emit 0xa3
        __asm _emit 0x80
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 80 89 68 00 00: cmp dword ptr [0x688980], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 04: jne 0x472dc8
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 38: jmp 0x472e00
        __asm _emit 0xeb
        __asm _emit 0x38
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 89 0D 84 89 68 00: mov dword ptr [0x688984], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 80 89 68 00: mov edx, dword ptr [0x688980]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 89 15 70 89 68 00: mov dword ptr [0x688970], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 78 89 68 00 00 00 00 00: mov dword ptr [0x688978], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x78
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 7C 89 68 00 00 00 00 00: mov dword ptr [0x68897c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x7c
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 58 89 68 00 10 00 00 00: mov dword ptr [0x688958], 0x10
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x58
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        pop ebp
        ret
    }
}
