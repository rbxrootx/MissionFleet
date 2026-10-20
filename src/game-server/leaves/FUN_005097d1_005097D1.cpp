// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005097D1 .. +0x101 bytes.
extern "C" __declspec(naked) void FUN_005097d1_005097D1() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e802h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 20h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 2ch], ecx
        mov eax, dword ptr [ebp - 2ch]
        cmp dword ptr [eax + 40h], 0
        ; Exact mapped bytes 7F 14: jg 0x50980f
        __asm _emit 0x7f
        __asm _emit 0x14
        push 126h
        push 5cb450h
        ; Exact mapped bytes E8 F6 B1 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xb1
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50980f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x5097f2
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 2ch]
        cmp dword ptr [edx + 40h], 1
        ; Exact mapped bytes 74 3D: je 0x50985b
        __asm _emit 0x74
        __asm _emit 0x3d
        push 0
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 7D 9F FF FF: call 0x5037a5
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 40h]
        push ecx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 BE 80 FF FF: call 0x5018fc
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        lea edx, [ebp + 8]
        push edx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 9C EB 02 00: call 0x5383e8
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xeb
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 FC 9F FF FF: call 0x503857
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 DC BA FE FF: call 0x4f5341
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 CF BA FE FF: call 0x4f5341
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 09: jge 0x509884
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp + 8], 0
        ; Exact mapped bytes EB 0E: jmp 0x509892
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7E 06: jle 0x509892
        __asm _emit 0x7e
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp + 8], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7D 09: jge 0x5098a1
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes EB 0E: jmp 0x5098af
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov edx, dword ptr [ebp + 0ch]
        cmp edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 7E 06: jle 0x5098af
        __asm _emit 0x7e
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp + 0ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 50 01 00 00: call 0x509a0f
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
