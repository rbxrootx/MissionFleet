// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051E38D .. +0x83 bytes.
extern "C" __declspec(naked) void FUN_0051e38d_0051E38D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 4
        ; Exact mapped bytes E8 EA 48 01 00: call 0x532c8e
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 57: je 0x51e404
        __asm _emit 0x74
        __asm _emit 0x57
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 4
        ; Exact mapped bytes E8 F4 48 01 00: call 0x532cb0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        push 586a28h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C2 CC FD FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xcc
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x51e3e6
        __asm _emit 0x75
        __asm _emit 0x14
        push 22ah
        push 5cb84ch
        ; Exact mapped bytes E8 1F 66 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51e3e6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x51e3c1
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 80 00 00 00: call dword ptr [edx + 0x80]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x51e402
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 07: jmp 0x51e409
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes EB A3: jmp 0x51e3a7
        __asm _emit 0xeb
        __asm _emit 0xa3
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
