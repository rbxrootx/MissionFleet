// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A2C48 .. +0x7F bytes.
extern "C" __declspec(naked) void FUN_004a2c48_004A2C48() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8ch
        mov dword ptr [ebp - 8ch], ecx
        mov dword ptr [ebp - 88h], 0
        mov eax, dword ptr [ebp - 8ch]
        push eax
        ; Exact mapped bytes E8 D3 7F FC FF: call 0x46ac40
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x7f
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 84h], eax
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 20: je 0x4a2c9f
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 84h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 80h
        lea eax, [ebp - 80h]
        push eax
        ; Exact mapped bytes E8 18 92 FC FF: call 0x46beb0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x92
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x4a2ca3
        __asm _emit 0x75
        __asm _emit 0x04
        mov byte ptr [ebp - 80h], 0
        lea ecx, [ebp - 80h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C9 9C 02 00: call 0x4cc978
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x9c
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 88h]
        or edx, 1
        mov dword ptr [ebp - 88h], edx
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
