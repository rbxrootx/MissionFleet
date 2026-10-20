// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00459D4A .. +0xAF bytes.
extern "C" __declspec(naked) void FUN_00459d4a_00459D4A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 0ch], 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D9 12 0F 00: call 0x54b050
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x12
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 C7 00 08 00: mov word ptr [eax], 8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 23 B0 0C 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xb0
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 09: jne 0x459d99
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 36: jmp 0x459dcf
        __asm _emit 0xeb
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 E8 C1 00 00: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], esp
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 24 38 FF FF: call 0x44d5f0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 15 F4 BA 68 00: call dword ptr [0x68baf4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 8], eax
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 75 05: jne 0x459ded
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 EF 90 04 00: call 0x4a2edc
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        lea esp, [ebp - 1ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
