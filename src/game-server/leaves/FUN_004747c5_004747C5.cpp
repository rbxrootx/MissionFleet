// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004747C5 .. +0x10C bytes.
extern "C" __declspec(naked) void FUN_004747c5_004747C5() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57be42h
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
        sub esp, 18h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 D2 90 07 00: call 0x4ed8d8
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        push ecx
        lea edx, [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 4
        ; Exact mapped bytes E8 60 5D FA FF: call 0x41a580
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x5d
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 18 90 07 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 4
        ; Exact mapped bytes E8 5D 5C FA FF: call 0x41a4a0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x5c
        __asm _emit 0xfa
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 44 5F FA FF: call 0x41a790
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0xfa
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x474859
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 5E: jmp 0x4748b7
        __asm _emit 0xeb
        __asm _emit 0x5e
        mov edx, dword ptr [ebp - 24h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 88 00 00 00: mov ax, word ptr [edx + 0x88]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 18: jle 0x474881
        __asm _emit 0x7e
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 66 8B 91 88 00 00 00: mov dx, word ptr [ecx + 0x88]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 EA 01: sub dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 66 89 90 88 00 00 00: mov word ptr [eax + 0x88], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 4B 90 07 00: call 0x4ed8d8
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        lea edx, [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 4
        ; Exact mapped bytes E8 AD 5C FA FF: call 0x41a550
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x5c
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 9A 8F 07 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x8f
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 24h
        cmp ebp, esp
        ; Exact mapped bytes E8 15 3F 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x3f
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
