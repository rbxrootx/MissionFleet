// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052511D .. +0xAE bytes.
extern "C" __declspec(naked) void FUN_0052511d_0052511D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 3edh
        push 5c8174h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 24 60 FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x525156
        __asm _emit 0x75
        __asm _emit 0x14
        push 3eeh
        push 5c8174h
        ; Exact mapped bytes E8 AF F8 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x525156
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x52513c
        __asm _emit 0x75
        __asm _emit 0xe0
        push 584d10h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 27 5F FD FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x5f
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x525181
        __asm _emit 0x75
        __asm _emit 0x14
        push 3efh
        push 5c8174h
        ; Exact mapped bytes E8 84 F8 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x525181
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x52515c
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 41 FF FF FF: call 0x5250d4
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 73 14: jae 0x5251b0
        __asm _emit 0x73
        __asm _emit 0x14
        push 3f2h
        push 5c8174h
        ; Exact mapped bytes E8 55 F8 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5251b0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x525196
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D4 FE FF FF: call 0x525096
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
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
