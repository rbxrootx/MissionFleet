// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00456592 .. +0x9E bytes.
extern "C" __declspec(naked) void FUN_00456592_00456592() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], 7
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A2 8F FF FF: call 0x44f555
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x8f
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 40h
        mov esi, esp
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 38h]
        push eax
        ; Exact mapped bytes FF 15 5C 24 5E 00: call dword ptr [0x5e245c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 10 22 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x22
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x4565e2
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        push 0
        push 5b87e8h
        ; Exact mapped bytes E8 9F 72 0B 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x72
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 40h
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 09 75 09 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x75
        __asm _emit 0x09
        __asm _emit 0x00
        push 5b8804h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 51 79 09 00: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x79
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 97 A9 0D 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xa9
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 60 24 5E 00: call dword ptr [0x5e2460]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 BF 21 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x21
        __asm _emit 0x05
        __asm _emit 0x00
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 B4 21 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x21
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
