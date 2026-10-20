// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D525A .. +0xD1 bytes.
extern "C" __declspec(naked) void FUN_004d525a_004D525A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x4d527d
        __asm _emit 0x75
        __asm _emit 0x14
        push 0de8h
        push 671a64h
        ; Exact mapped bytes E8 C8 3A 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x3a
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d527d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4d5263
        __asm _emit 0x75
        __asm _emit 0xe0
        push 671eb4h
        ; Exact mapped bytes FF 15 FC B7 68 00: call dword ptr [0x68b7fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        push 671ec4h
        ; Exact mapped bytes FF 15 18 B8 68 00: call dword ptr [0x68b818]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 04: jne 0x4d52a9
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 79: jmp 0x4d5322
        __asm _emit 0xeb
        __asm _emit 0x79
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 4], 0
        push 671ed4h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 14 B8 68 00: call dword ptr [0x68b814]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 1D: jne 0x4d52ec
        __asm _emit 0x75
        __asm _emit 0x1d
        mov edx, dword ptr [ebp + 0ch]
        and edx, 3fc0h
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 0D: jne 0x4d52ea
        __asm _emit 0x75
        __asm _emit 0x0d
        ; Exact mapped bytes FF 15 F8 B2 68 00: call dword ptr [0x68b2f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 3fc0h
        ; Exact mapped bytes EB 29: jmp 0x4d5315
        __asm _emit 0xeb
        __asm _emit 0x29
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 55 FC: call dword ptr [ebp - 4]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xfc
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x4d5315
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 12: jne 0x4d5315
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes FF 15 F8 B2 68 00: call dword ptr [0x68b2f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        or edx, 3fc0h
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 D8 B9 68 00: call dword ptr [0x68b9d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
