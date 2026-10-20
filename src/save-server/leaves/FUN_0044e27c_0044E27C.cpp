// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044E27C .. +0x2A3 bytes.
extern "C" __declspec(naked) void FUN_0044e27c_0044E27C() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58dd8bh
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
        sub esp, 7ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 88h], ecx
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 10h], 0
        lea eax, [ebp - 10h]
        push eax
        push 640c90h
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 4ch]
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 4ch]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 0F 8C 35 02 00 00: jl 0x44e50b
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x35
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 14: jne 0x44e2f0
        __asm _emit 0x75
        __asm _emit 0x14
        push 15dh
        push 67702ch
        ; Exact mapped bytes E8 55 AA 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xaa
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44e2f0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x44e2d6
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 84h], 40h
        mov edx, dword ptr [ebp - 88h]
        add edx, 0b8h
        mov dword ptr [ebp - 80h], edx
        mov dword ptr [ebp - 7ch], 0
        mov eax, dword ptr [ebp - 88h]
        add eax, 0c8h
        mov dword ptr [ebp - 78h], eax
        mov ecx, dword ptr [ebp - 88h]
        add ecx, 0cch
        mov dword ptr [ebp - 74h], ecx
        mov dword ptr [ebp - 60h], 0
        mov dword ptr [ebp - 54h], 0
        mov dword ptr [ebp - 50h], 0
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 B3 CC 0F 00: call 0x54b003
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xcc
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 1ch]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 70h], 0
        mov dword ptr [ebp - 44h], 0
        ; Exact mapped bytes EB 09: jmp 0x44e37f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 44h]
        add edx, 1
        mov dword ptr [ebp - 44h], edx
        cmp dword ptr [ebp - 44h], 8
        ; Exact mapped bytes 73 3E: jae 0x44e3c3
        __asm _emit 0x73
        __asm _emit 0x3e
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx*8 + 6392f0h]
        push edx
        mov eax, dword ptr [ebp - 88h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 92 9C 00 00 00: call dword ptr [edx + 0x9c]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 45 E0: movsx eax, word ptr [ebp - 0x20]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xe0
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x44e3c1
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ebp - 70h]
        or edx, dword ptr [ecx*8 + 6392f4h]
        mov dword ptr [ebp - 70h], edx
        ; Exact mapped bytes EB B3: jmp 0x44e376
        __asm _emit 0xeb
        __asm _emit 0xb3
        lea eax, [ebp - 28h]
        push eax
        push 0fffffd40h
        mov ecx, dword ptr [ebp - 88h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 90 9C 00 00 00: call dword ptr [eax + 0x9c]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 6ch], ecx
        lea edx, [ebp - 28h]
        push edx
        push 0fffffd43h
        mov eax, dword ptr [ebp - 88h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 92 9C 00 00 00: call dword ptr [edx + 0x9c]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 68h], eax
        lea ecx, [ebp - 28h]
        push ecx
        push 0fffffd34h
        mov edx, dword ptr [ebp - 88h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 92 9C 00 00 00: call dword ptr [edx + 0x9c]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 45 E0: movsx eax, word ptr [ebp - 0x20]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xe0
        mov dword ptr [ebp - 5ch], eax
        lea ecx, [ebp - 28h]
        push ecx
        push 0fffffd3fh
        mov edx, dword ptr [ebp - 88h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 92 9C 00 00 00: call dword ptr [edx + 0x9c]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 58h], eax
        lea ecx, [ebp - 28h]
        push ecx
        push 0fffffd41h
        mov edx, dword ptr [ebp - 88h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 92 9C 00 00 00: call dword ptr [edx + 0x9c]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 64h]
        push eax
        push 640c80h
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        test eax, eax
        ; Exact mapped bytes 7D 07: jge 0x44e491
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov dword ptr [ebp - 40h], 18h
        lea ecx, [ebp - 40h]
        push ecx
        lea edx, [ebp - 84h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 51 0C: call dword ptr [ecx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 7C 2B: jl 0x44e4de
        __asm _emit 0x7c
        __asm _emit 0x2b
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [eax + 70h], ecx
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [edx + 60h], eax
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ecx + 64h], edx
        mov dword ptr [ebp - 14h], 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 0C: je 0x44e4fc
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 64h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 64h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 0F CB 0F 00: call 0x54b01a
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xcb
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
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
        ret
    }
}
