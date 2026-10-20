// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FD5E3 .. +0x9F bytes.
extern "C" __declspec(naked) void FUN_004fd5e3_004FD5E3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0bh
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 8], eax
        push 0ch
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0ch], eax
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 68h], 0
        ; Exact mapped bytes 74 07: je 0x4fd61b
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes E8 06 A3 04 00: call 0x54791f
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xa3
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x4fd620
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E8 37 A3 04 00: call 0x547957
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xa3
        __asm _emit 0x04
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes FF 15 6C 27 5E 00: call dword ptr [0x5e276c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4fd645
        __asm _emit 0x75
        __asm _emit 0x14
        push 8bh
        push 5ca20ch
        ; Exact mapped bytes E8 C0 73 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x73
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fd645
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4fd62b
        __asm _emit 0x75
        __asm _emit 0xe0
        push 58h
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 E4 1F 5E 00: call dword ptr [0x5e1fe4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x1f
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 18h], eax
        push 5ah
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 E4 1F 5E 00: call dword ptr [0x5e1fe4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x1f
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 1ch], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        push 0
        ; Exact mapped bytes FF 15 64 27 5E 00: call dword ptr [0x5e2764]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
