// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E79CD .. +0x80 bytes.
extern "C" __declspec(naked) void FUN_004e79cd_004E79CD() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e79fc
        __asm _emit 0x75
        __asm _emit 0x14
        push 2c3h
        push 6733e0h
        ; Exact mapped bytes E8 49 13 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x13
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e79fc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4e79d7
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 18 BE 68 00: call dword ptr [0x68be18]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        add eax, 8
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 18 BE 68 00: call dword ptr [0x68be18]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C6 E8 FE FF: call 0x4d62f5
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        and eax, 400000h
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x4e7a44
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 5D A9 04 00: call 0x53239e
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xa9
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 4
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
