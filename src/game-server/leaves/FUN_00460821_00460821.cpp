// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00460821 .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_00460821_00460821() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 43: je 0x460889
        __asm _emit 0x74
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 0ch]
        add eax, 8
        push ecx
        mov ecx, esp
        push eax
        ; Exact mapped bytes E8 3F 0E 0D 00: call 0x531694
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x0e
        __asm _emit 0x0d
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 39 EB 06 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xeb
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 7D 10 0D 00: call 0x5318e2
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x10
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x460889
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0D 6E FE FF: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x6e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, esp
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        cmp esi, esp
        ; Exact mapped bytes E8 57 7F 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x7f
        __asm _emit 0x04
        __asm _emit 0x00
        pop esi
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 4C 7F 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x7f
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
