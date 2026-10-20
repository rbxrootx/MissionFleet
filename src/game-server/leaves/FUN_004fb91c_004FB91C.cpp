// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FB91C .. +0x10F bytes.
extern "C" __declspec(naked) void FUN_004fb91c_004FB91C() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57d472h
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
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 11: je 0x4fb954
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 E2 44 FD FF: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x44
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4fb965
        __asm _emit 0x75
        __asm _emit 0x11
        push 43h
        push 5c7834h
        ; Exact mapped bytes E8 A0 90 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fb965
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x4fb93d
        __asm _emit 0x75
        __asm _emit 0xd2
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 11: je 0x4fb982
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 0ch]
        add ecx, 0f1a0h
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx], ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 7D 55 03 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x55
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 1ch]
        add eax, 14h
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 DA 1A FF FF: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 E0 55 03 00: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x55
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x4fb9bd
        __asm _emit 0x74
        __asm _emit 0x0d
        push 0f006h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 C3 F1 FF FF: call 0x4fab80
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 E5 55 03 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x55
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 0ch]
        add edx, 0f1a0h
        push edx
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 A3 02 02 00: call 0x51bc7f
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 C2 55 03 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x55
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 68 23 5E 00: call dword ptr [0x5e2368]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 1
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 46 1E FF FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x1e
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 37 1E FF FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x1e
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 18h]
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
