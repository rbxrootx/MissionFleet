// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F1485 .. +0x60 bytes.
extern "C" __declspec(naked) void FUN_004f1485_004F1485() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 11: jne 0x4f14a2
        __asm _emit 0x75
        __asm _emit 0x11
        push 65h
        push 5c5574h
        ; Exact mapped bytes E8 63 35 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x35
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f14a2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x4f148b
        __asm _emit 0x75
        __asm _emit 0xe3
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 11: jne 0x4f14bf
        __asm _emit 0x75
        __asm _emit 0x11
        push 66h
        push 5c5574h
        ; Exact mapped bytes E8 46 35 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x35
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f14bf
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x4f14a8
        __asm _emit 0x75
        __asm _emit 0xe3
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DE AB 04 00: call 0x53c0af
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xab
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 25 D9 FF FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], eax
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
