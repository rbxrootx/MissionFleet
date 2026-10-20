// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585229B0 .. +0xBB bytes.
extern "C" __declspec(naked) void FUN_585229b0_585229B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 99 00 00 00: je 0x58522a65
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DC 96 F6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x96
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 05 01 00 00: call 0x58522ae0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 33: jne 0x58522a13
        __asm _emit 0x75
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C8 96 F6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x96
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 100h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B8 01 00 00: call 0x58522bb0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B0 96 F6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x96
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes EB 42: jmp 0x58522a55
        __asm _emit 0xeb
        __asm _emit 0x42
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 95 96 F6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x96
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BE 00 00 00: call 0x58522ae0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 8
        ; Exact mapped bytes 75 2E: jne 0x58522a55
        __asm _emit 0x75
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 81 96 F6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x96
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        push 60h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 74 01 00 00: call 0x58522bb0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6C 96 F6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x96
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D3 4F F6 FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x4f
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 5D FF FF FF: jmp 0x585229c2
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
