// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D10BF .. +0xD0 bytes.
extern "C" __declspec(naked) void FUN_004d10bf_004D10BF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
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
        ; Exact mapped bytes 75 14: jne 0x4d10f0
        __asm _emit 0x75
        __asm _emit 0x14
        push 447h
        push 671a64h
        ; Exact mapped bytes E8 55 7C 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x7c
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d10f0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4d10cb
        __asm _emit 0x75
        __asm _emit 0xd5
        push 68510ch
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 9A BA FF FF: call 0x4ccb9d
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 34h], 0
        ; Exact mapped bytes 75 51: jne 0x4d115d
        __asm _emit 0x75
        __asm _emit 0x51
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 88 BF 68 00: call dword ptr [0x68bf88]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 35: je 0x4d115b
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 F4 BE 68 00: call dword ptr [0x68bef4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 01 C1 FF FF: call 0x4cd247
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 F8 BE 68 00: call dword ptr [0x68bef8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        push -1
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 78 C0 FF FF: call 0x4cd1d3
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 21: jmp 0x4d117e
        __asm _emit 0xeb
        __asm _emit 0x21
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 08 4C 00 00: call 0x4d5d71
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0C: je 0x4d117e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A3 FE FF FF: call 0x4d1021
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 DA 3B 05 00: call 0x524d60
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x00
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
