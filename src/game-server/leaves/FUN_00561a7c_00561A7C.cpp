// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00561A7C .. +0xA6 bytes.
extern "C" __declspec(naked) void FUN_00561a7c_00561A7C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 8], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 7A: je 0x561b16
        __asm _emit 0x74
        __asm _emit 0x7a
        lea eax, [ebp - 8]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        test eax, eax
        ; Exact mapped bytes 74 65: je 0x561b16
        __asm _emit 0x74
        __asm _emit 0x65
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x561acb
        __asm _emit 0x75
        __asm _emit 0x14
        push 174h
        push 5ce6c8h
        ; Exact mapped bytes E8 3A 2F FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x2f
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x561acb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x561ab1
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 A8 24 5E 00: call dword ptr [0x5e24a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 A8 24 5E 00: call dword ptr [0x5e24a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 75 1F: jne 0x561b0c
        __asm _emit 0x75
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 72 E8 F4 FF: call 0x4b0370
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x561b0c
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 00 25 5E 00: call dword ptr [0x5e2500]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
