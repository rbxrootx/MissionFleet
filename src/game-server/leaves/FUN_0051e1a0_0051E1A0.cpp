// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051E1A0 .. +0xBB bytes.
extern "C" __declspec(naked) void FUN_0051e1a0_0051E1A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 64h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 2B 07 FD FF: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x07
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x51e1d3
        __asm _emit 0x75
        __asm _emit 0x14
        push 1ebh
        push 5cb84ch
        ; Exact mapped bytes E8 32 68 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51e1d3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x51e1b9
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 11 07 02 00: call 0x53e8f2
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 75 0C: jne 0x51e1f6
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 60h], 0
        ; Exact mapped bytes EB 56: jmp 0x51e24c
        __asm _emit 0xeb
        __asm _emit 0x56
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 40 0A 02 00: call 0x53ec42
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 60h], eax
        push 1f6h
        push 5cb84ch
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 60h]
        push eax
        ; Exact mapped bytes E8 42 CF FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xcf
        __asm _emit 0xfd
        __asm _emit 0xff
        push 586a28h
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 62 CE FD FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xce
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x51e246
        __asm _emit 0x75
        __asm _emit 0x14
        push 1f7h
        push 5cb84ch
        ; Exact mapped bytes E8 BF 67 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51e246
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x51e21e
        __asm _emit 0x75
        __asm _emit 0xd2
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 4E 2A FD FF: call 0x4f0ca2
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x2a
        __asm _emit 0xfd
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
