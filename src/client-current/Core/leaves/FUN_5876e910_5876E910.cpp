// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876E910 .. +0x156 bytes.
extern "C" __declspec(naked) void FUN_5876e910_5876E910() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 14e0h], ecx
        mov dword ptr [eax + 14e4h], edx
        mov dword ptr [ebp - 8], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7C 08: jl 0x5876e945
        __asm _emit 0x7c
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 0C: jmp 0x5876e951
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ebch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 43 DB FF FF: call 0x5876c4a0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5e84h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 23ch]
        ; Exact mapped bytes E8 59 D7 D1 FF: call 0x5848c0d0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xd7
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 58 60 D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x60
        __asm _emit 0xd1
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 08: mov dx, word ptr [eax + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 66 C1 EA 06: shr dx, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x06
        mov eax, 0ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        movzx ecx, dx
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 CE 34 FF FF: call 0x58761e80
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5e84h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 06 49 EF FF: call 0x586632d0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x49
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5e84h]
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FF 7F D1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x7f
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 60 2A DA FF: call 0x58511450
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x2a
        __asm _emit 0xda
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5e84h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 68 FE FF FF: call 0x5876e870
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0F E7 D1 FF: call 0x5848d120
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xe7
        __asm _emit 0xd1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x5876ea34
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5e84h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ebch]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 FD 0C E1 FF: call 0x5857f730
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x0c
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 BC 5E 00 00: mov dx, word ptr [ecx + 0x5ebc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xbc
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 90 4C 63 00 00: mov word ptr [eax + 0x634c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x4c
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [eax + 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 6350h], ecx
        mov dword ptr [eax + 6354h], edx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
