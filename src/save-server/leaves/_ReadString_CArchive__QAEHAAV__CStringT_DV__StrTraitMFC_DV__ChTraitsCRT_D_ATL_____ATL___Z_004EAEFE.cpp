// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EAEFE .. +0xE5 bytes.
extern "C" __declspec(naked) void _ReadString_CArchive__QAEHAAV__CStringT_DV__StrTraitMFC_DV__ChTraitsCRT_D_ATL_____ATL___Z_004EAEFE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        push 68510ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 89 1C FE FF: call 0x4ccb9d
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x1c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], 80h
        push 80h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 70 21 FE FF: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x21
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push -80h
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 36 FE FF FF: call 0x4ead6f
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push -1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8D 22 FE FF: call 0x4cd1d3
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x22
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 25: je 0x4eaf71
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 80h
        ; Exact mapped bytes 7C 0F: jl 0x4eaf71
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        add edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BE 42 FF: movsx eax, byte ptr [edx - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0xff
        cmp eax, 0ah
        ; Exact mapped bytes 75 02: jne 0x4eaf73
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 25: jmp 0x4eaf98
        __asm _emit 0xeb
        __asm _emit 0x25
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E5 9D 03 00: call 0x524d60
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x9d
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 80h
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 08 21 FE FF: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x21
        __asm _emit 0xfe
        __asm _emit 0xff
        add eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 93: jmp 0x4eaf2b
        __asm _emit 0xeb
        __asm _emit 0x93
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F6 20 FE FF: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x20
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B3 9D 03 00: call 0x524d60
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x9d
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 1E: je 0x4eafd4
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 4]
        add edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BE 42 FF: movsx eax, byte ptr [edx - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0xff
        cmp eax, 0ah
        ; Exact mapped bytes 75 0F: jne 0x4eafd4
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, 1
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 73 22 FE FF: call 0x4cd247
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x22
        __asm _emit 0xfe
        __asm _emit 0xff
        xor eax, eax
        cmp dword ptr [ebp - 8], 0
        setne al
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
