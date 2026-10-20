// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054E050 .. +0x175 bytes.
extern "C" __declspec(naked) void FUN_0054e050_0054E050() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f29bh
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
        sub esp, 168h
        mov dword ptr [ebp - 16ch], ecx
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 D1 F7 F8 FF: call 0x4dd850
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xf7
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 16ch]
        add ecx, 14h
        ; Exact mapped bytes E8 73 6C FD FF: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x6c
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 16ch]
        mov dword ptr [eax], 63c6ach
        mov ecx, dword ptr [ebp - 16ch]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 10h], edx
        mov ecx, dword ptr [ebp - 16ch]
        add ecx, 14h
        ; Exact mapped bytes E8 94 E6 F7 FF: call 0x4cc752
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xe6
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 16ch]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 0F 84 D4 00 00 00: je 0x54e1a2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 64h], 0
        mov dword ptr [ebp - 5ch], 0
        mov dword ptr [ebp - 58h], 0
        mov dword ptr [ebp - 60h], 0
        push 0
        lea ecx, [ebp - 54h]
        push ecx
        mov edx, dword ptr [ebp - 16ch]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [ebp - 16ch]
        mov edx, dword ptr [ecx + 10h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 30: call dword ptr [ecx + 0x30]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x30
        test eax, eax
        ; Exact mapped bytes 0F 85 92 00 00 00: jne 0x54e1a2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x54e1a2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 58h], edx
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 75 0C: jne 0x54e132
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 170h], 0
        ; Exact mapped bytes EB 3E: jmp 0x54e170
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov eax, dword ptr [ebp - 58h]
        push eax
        ; Exact mapped bytes FF 15 F0 B8 68 00: call dword ptr [0x68b8f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        lea ecx, [eax + eax + 2]
        mov dword ptr [ebp - 64h], ecx
        mov eax, dword ptr [ebp - 64h]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 50 7E F1 FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x7e
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 174h], esp
        mov edx, dword ptr [ebp - 64h]
        push edx
        mov eax, dword ptr [ebp - 58h]
        push eax
        mov ecx, dword ptr [ebp - 174h]
        push ecx
        ; Exact mapped bytes E8 66 AC F0 FF: call 0x458dd0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xac
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 170h], eax
        mov edx, dword ptr [ebp - 170h]
        push edx
        lea eax, [ebp - 168h]
        push eax
        ; Exact mapped bytes E8 1C 09 F9 FF: call 0x4dea9f
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x09
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        ; Exact mapped bytes FF 15 18 C3 68 00: call dword ptr [0x68c318]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        lea edx, [ebp - 168h]
        push edx
        mov ecx, dword ptr [ebp - 16ch]
        add ecx, 14h
        ; Exact mapped bytes E8 FB E9 F7 FF: call 0x4ccb9d
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 16ch]
        lea esp, [ebp - 174h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
