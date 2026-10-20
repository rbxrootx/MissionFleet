// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055F843 .. +0xB4 bytes.
extern "C" __declspec(naked) void FUN_0055f843_0055F843() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        push 46dh
        push 67b3b8h
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 01 AA F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xaa
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 0ch], 0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 84h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 84h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 0C: call dword ptr [ecx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x0c
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0B: je 0x55f89d
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB D0: jmp 0x55f86d
        __asm _emit 0xeb
        __asm _emit 0xd0
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x55f8aa
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 2
        ; Exact mapped bytes EB 49: jmp 0x55f8f3
        __asm _emit 0xeb
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D5 EC F6 FF: call 0x4ce587
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xec
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 0a0h
        ; Exact mapped bytes E8 E3 54 FC FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x54
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 84h]
        push eax
        ; Exact mapped bytes E8 75 48 F2 FF: call 0x484150
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x48
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 16 ED F6 FF: call 0x4ce5fc
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xed
        __asm _emit 0xf6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        neg eax
        sbb eax, eax
        and eax, 2
        add eax, -1
        mov esp, ebp
        pop ebp
        ret
    }
}
