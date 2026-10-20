// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DC3A3 .. +0x9F bytes.
extern "C" __declspec(naked) void FUN_004dc3a3_004DC3A3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0bh
        ; Exact mapped bytes FF 15 C4 BF 68 00: call dword ptr [0x68bfc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 8], eax
        push 0ch
        ; Exact mapped bytes FF 15 C4 BF 68 00: call dword ptr [0x68bfc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0ch], eax
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 68h], 0
        ; Exact mapped bytes 74 07: je 0x4dc3db
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes E8 76 64 06 00: call 0x54284f
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x64
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x4dc3e0
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E8 A7 64 06 00: call 0x542887
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x64
        __asm _emit 0x06
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes FF 15 0C BE 68 00: call dword ptr [0x68be0c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4dc405
        __asm _emit 0x75
        __asm _emit 0x14
        push 8bh
        push 6768bch
        ; Exact mapped bytes E8 40 C9 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xc9
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dc405
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4dc3eb
        __asm _emit 0x75
        __asm _emit 0xe0
        push 58h
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 30 B4 68 00: call dword ptr [0x68b430]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 18h], eax
        push 5ah
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 30 B4 68 00: call dword ptr [0x68b430]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 1ch], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        push 0
        ; Exact mapped bytes FF 15 04 BE 68 00: call dword ptr [0x68be04]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
