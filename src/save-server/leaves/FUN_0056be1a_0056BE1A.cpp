// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056BE1A .. +0xC5 bytes.
extern "C" __declspec(naked) void FUN_0056be1a_0056BE1A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 10h], 0
        push 3eh
        push 67d450h
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 11 E4 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xe4
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 9ch
        ; Exact mapped bytes E8 2F 8F FB FF: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x8f
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x56be6f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 0F 43 FE FF: call 0x55017c
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x43
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 67: jmp 0x56bed6
        __asm _emit 0xeb
        __asm _emit 0x67
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 9ch
        ; Exact mapped bytes E8 2D 8F FB FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x8f
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 09: jne 0x56be8f
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 36: jmp 0x56bec5
        __asm _emit 0xeb
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 F2 A0 EF FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xa0
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], esp
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes E8 2E 17 EE FF: call 0x44d5f0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x17
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes FF 15 64 C2 68 00: call dword ptr [0x68c264]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        lea esp, [ebp - 20h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
