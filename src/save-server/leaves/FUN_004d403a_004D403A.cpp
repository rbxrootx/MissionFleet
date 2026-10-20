// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D403A .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_004d403a_004D403A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes E8 28 DA 05 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xda
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 17: je 0x4d4068
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 75 0C: jne 0x4d4068
        __asm _emit 0x75
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 48 3F 00 00: call 0x4d7fb0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 1E 22 00 00: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 40000000h
        test eax, eax
        ; Exact mapped bytes 75 29: jne 0x4d40a2
        __asm _emit 0x75
        __asm _emit 0x29
        ; Exact mapped bytes E8 DE B6 FF FF: call 0x4cf75c
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 1
        push 1
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 41 81 05 00: call 0x52c1e3
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x81
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
