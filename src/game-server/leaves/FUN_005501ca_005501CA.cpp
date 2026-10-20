// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005501CA .. +0x14C bytes.
extern "C" __declspec(naked) void FUN_005501ca_005501CA() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f80bh
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
        push ecx
        sub esp, 28h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        mov dword ptr [ebp - 2ch], ecx
        push 126h
        push 5cf710h
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 5E AF FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xaf
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x55021f
        __asm _emit 0x75
        __asm _emit 0x14
        push 127h
        push 5cf710h
        ; Exact mapped bytes E8 E6 47 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x47
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55021f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x550202
        __asm _emit 0x75
        __asm _emit 0xdd
        lea eax, [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 10h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 34: call dword ptr [edx + 0x34]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x34
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7D 09: jge 0x55024d
        __asm _emit 0x7d
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 D6 F7 FF FF: call 0x54fa23
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x550267
        __asm _emit 0x75
        __asm _emit 0x14
        push 12eh
        push 5cf710h
        ; Exact mapped bytes E8 9E 47 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x47
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x550267
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x55024d
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 4], 0
        push 134h
        push 5cf710h
        push 18h
        ; Exact mapped bytes E8 D3 CD F9 FF: call 0x4ed05f
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xcd
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 28h], edx
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 17: je 0x5502b6
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 35 F3 FF FF: call 0x54f5e0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 38h], ecx
        ; Exact mapped bytes EB 07: jmp 0x5502bd
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 24h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ecx + 8], eax
        ; Exact mapped bytes EB 40: jmp 0x55031b
        __asm _emit 0xeb
        __asm _emit 0x40
        push 584850h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 A8 AD FA FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xad
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x550300
        __asm _emit 0x75
        __asm _emit 0x14
        push 137h
        push 5cf710h
        ; Exact mapped bytes E8 05 47 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x47
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x550300
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x5502db
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        push 0
        push 0
    }
}
