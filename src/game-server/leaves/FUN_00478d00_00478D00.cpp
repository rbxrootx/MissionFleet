// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00478D00 .. +0xE5 bytes.
extern "C" __declspec(naked) void FUN_00478d00_00478D00() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57c0a9h
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
        sub esp, 14h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 20h], ecx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 06 03 05 00: call 0x4c9040
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 87 FF FF FF: call 0x478cd0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 3B 05 54 CB 5D 00: cmp eax, dword ptr [0x5dcb54]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 74 51: je 0x478db3
        __asm _emit 0x74
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 C5 E4 FF FF: call 0x477230
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        ; Exact mapped bytes E8 E2 67 FA FF: call 0x41f560
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x67
        __asm _emit 0xfa
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x478da0
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 CA E4 FF FF: call 0x477260
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB 11: jmp 0x478db1
        __asm _emit 0xeb
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 C7 E4 FF FF: call 0x477270
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB A4: jmp 0x478d57
        __asm _emit 0xeb
        __asm _emit 0xa4
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 1ch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 58 03 05 00: call 0x4c9120
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        cmp ebp, esp
        ; Exact mapped bytes E8 01 FA 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xfa
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
