// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00467F00 .. +0x8D bytes.
extern "C" __declspec(naked) void FUN_00467f00_00467F00() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 63e700h
        push 46d504h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, -0ch
        push ebx
        push esi
        push edi
        ; Exact mapped bytes A1 60 DA 67 00: mov eax, dword ptr [0x67da60]
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0xda
        __asm _emit 0x67
        __asm _emit 0x00
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x467f31
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 67: jmp 0x467f98
        __asm _emit 0xeb
        __asm _emit 0x67
        push 9
        ; Exact mapped bytes E8 78 89 00 00: call 0x4708b0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes 8B 0D 20 72 68 00: mov ecx, dword ptr [0x687220]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes EB 08: jmp 0x467f55
        __asm _emit 0xeb
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 24: je 0x467f7f
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 14h]
        and edx, 0ffffh
        cmp edx, 4
        ; Exact mapped bytes 75 11: jne 0x467f7d
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 20h
        push ecx
        ; Exact mapped bytes FF 55 08: call dword ptr [ebp + 8]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x08
        add esp, 8
        ; Exact mapped bytes EB CE: jmp 0x467f4d
        __asm _emit 0xeb
        __asm _emit 0xce
        mov dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes E8 02 00 00 00: call 0x467f8d
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0B: jmp 0x467f98
        __asm _emit 0xeb
        __asm _emit 0x0b
    }
}
